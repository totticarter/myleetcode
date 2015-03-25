//copy from example
#include<iostream>
using namespace std;

int removeDuplicates(int A[], int n){

	if(n <= 2) return n;

	int index = 2;
	for(int i = 2; i < n; i++){

		if(A[i] != A[index - 2])
		A[index++] = A[i];	
	}
	return index;
}
int main(){

	int A[5] = {1,1,1,2,2};
	int a = removeDuplicates(A, 5);
	cout << "a = " << a << endl;
	for(int i = 0; i < a; i++){
		
		cout << A[i] << "," << endl;
	}


}
