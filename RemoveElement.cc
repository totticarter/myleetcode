//two method to resolve this problem
//1.from index 0, find out the target, exchange it with the last element that is not equel to target
//2.(my solution)from index 0,find the element that is not the target, and put that number to index pos 
//   but, this solution can not be accepted, when A is {2,2,2,0,0} and target is 0
#include<iostream>
using namespace std;

int removeElement(int A[], int n, int elem){

	int index = 0;
	for(int i = 0; i < n; i++){

		while(A[i] == elem){

			i++;
		}
		if(i == n)
			break;
		A[index] = A[i];
		index++;
	}
	return index;
}

int main(){

	int A[5] = {2,2,2,0,0};
	for(int i = 0; i < 5; i++)
		cout << A[i] << ", ";
	cout << endl;

	int len = removeElement(A, 5, 0);	
	cout << "len is: " << len << endl;
	for(int i = 0; i < len; i++)
		cout << A[i] << ", ";
	cout << endl;


}
