//1.my solution will exceed timeout
//2.the example solution transver first to find out the leftmost and the rightmost for all the elements 
#include"leetcode.h"

int leftMost(int A[], int idx){

	int most = -1;
	for(int i = 0; i < idx; i++)
		most = most > A[i] ? most : A[i];
	return most;
}

int rightMost(int A[], int idx, int len){

	int most = -1;
	for(int i = idx; i < len; i++)
		most = most > A[i] ? most : A[i];
	return most;
}
int trap(int A[], int  n){

	//int leftmosts[n];
	//int rightmosts[n];
	int* leftmosts = new int[n]();
	int* rightmosts = new int[n]();
	for(int i = 1; i < n; i++){
	
		leftmosts[i] = max(leftmosts[i-1], A[i-1]);
		rightmosts[n-1-i] = max(rightmosts[n-i], A[n-i]);
	}
	
	int total = 0;
	for(int i = 1; i < n - 1; i++){
		
		cout << "for " << A[i] << ", leftmost is " << leftmosts[i] << ", rightmost is " << rightmosts[i] << endl; 
		int h = min(leftmosts[i], rightmosts[i]);
		if(h > A[i])
			total += (h - A[i]);
	}
	return total;

	//int total = 0;
	//for(int i = 1; i < n-1; i++){

	//	int leftmost = leftMost(A, i);
	//	int rightmost = rightMost(A, i, n);
	//	//cout << "for " << A[i] << ", leftmost is: " << leftmost << ", rightmost is: " << rightmost << endl;
	//	int m = min(leftmost, rightmost);
	//	if(A[i] < m){
	//		int diff = m - A[i];
	//		total += (diff * 1);
	//	}
	//}
	//return total;	
}

int main(){

	int A[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
	for(int i = 0; i < 12; i++)
		cout << A[i] << ",";
	cout << endl;
	int total = trap(A, 12);
	cout << "total is: " << total << endl;	
}
