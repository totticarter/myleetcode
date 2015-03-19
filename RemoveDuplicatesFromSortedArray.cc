//copy from example
#include<iostream>
using namespace std;

int removeDuplicates(int A[], int n){

	int index = 0;
	for(int i = 1; i < n; i++){

		if(A[i] != A[index]){
	
			A[++index] = A[i];
		}
	}
	return index + 1;
}
int main(){

	int A[5] = {1,1,1,2,2};
	int a = removeDuplicates(A, 5);
	cout << "a = " << a << endl;
	for(int i = 0; i < a; i++){
		
		cout << A[i] << "," << endl;
	}


}
