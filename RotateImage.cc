#include"leetcode.h"

//void rotate(int** A, int n){
void rotate(int A[][4], int n){

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){
			
			//cout << A[i][j] << ", " << A[n-1-j][n-1-i] << endl;
			swap(A[i][j], A[n-1-j][n-1-i]);
			//cout << A[i][j] << ", " << A[n-1-j][n-1-i] << endl;
		}
	}
	cout << "after rotate: " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << A[i][j] << "	";
		cout << endl;
	}

}

int main(){

	int A[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	//int** A = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	cout << "A is: " << endl;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++)
			cout << A[i][j] << "	";
		cout << endl;
	}

	rotate(A, 4);
}
