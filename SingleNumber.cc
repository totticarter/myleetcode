#include"leetcode.h"

int singleNumber(int A[], int n){

	int r = A[0];
	for(int i = 1; i < n; i++){
	
		r = A[i]^r;
	}
	return r;
}


int main(){

	int A[5] = {1,2,1,3,3};
	int r = singleNumber(A, 5);

	cout << r << endl;
}
