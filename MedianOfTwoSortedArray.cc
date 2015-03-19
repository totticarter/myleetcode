//this method will cost O(m+n) most
#include<iostream>
using namespace std;

double findMedianSortedArrays(int A[], int m, int B[], int n){

	if(m == 0)
		return B[n/2];
	else if(n == 0)
		return A[m/2];
	else if(m == 0 && n == 0)
		return 0.00;
	else{
		int i = 0;
		int j = 0;
		int count = 0;
		int median = (m+n)/2;
		while(i < m || j < n){

			if(A[i] < B[j]){

				A++;
				count++;
				i++;
				if(count == median){

					return (double)(*A);
				}
			}else{
				B++;
				count++;
				j++;
				if(count == median){

					return (double)(*B);
				}
			}
		}
	}
}

int main(){

	int A[5] = {1,3,5,6,6};
	int B[6] = {2,4,6,8,10,12};
	double a = findMedianSortedArrays(A, 5, B, 6);
	cout << a << endl;

}
