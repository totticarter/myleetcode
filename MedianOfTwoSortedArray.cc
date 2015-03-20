//the median will be value of the middle element if the array size is odd
//and the average of the two elements if the array size is even
//this method will cost O(m+n) most
//if merge sort the two arraies, the cost will be O((m+n)*log(m+n)) which is bigger than O(log(m+n)) required
#include<iostream>
using namespace std;

double findMedianSortedArrays(int A[], int m, int B[], int n){

	int total = m + n;
	int k = 0;
	int flag = 0;
	if(total % 2 == 0){
		
		k = total / 2 - 1;
		flag = 1;
	}else{
		
		k = total / 2 ;
		flag = 0;
	}
	cout << "flag = " << flag << endl;

	if(m == 0){
		double md = flag == 0 ? B[k] : (double)(B[k] + B[k+1])/2;
		return md;
	}
	else if(n == 0){

		double md = flag == 0 ? A[k] : (double)(A[k] + A[k+1])/2;
		return md;
	}
	else if(m == 0 && n == 0)
		return 0.00;
	else{
		int i = 0;
		int j = 0;
		int count = 0;
		while(i < m || j < n){

			if(A[i] < B[j]){

				if(count == k){
					cout << "k = " << k << ", A = " << *A << ", A+1 = " << *(A+1)<< endl;
					double md = (flag == 0) ? *A : ((double)(*A) + (double)(*(A+1)))/2;
					return md;
				}
				count++;
				if(i == m - 1){
					j++;
					B++;
					continue;
				}
				else{
					i++;
					A++;
				}
			}else{
				if(count == k){
					cout << "k = " << k << ", B = " << *B << ", B+1 = " << *(B+1)<< endl;
					double md = (flag == 0) ? *B : ((double)(*B) + (double)(*(B+1)))/2;
					return md;
				}
				count++;
				if(j == n - 1){
					i++;
					A++;
					continue;
				}
				else{
					j++;
					B++;
				}
			}
		}
	}
}

int main(){

	//int A[5] = {1,3,4,5,6};
	//int B[7] = {2,4,7,8,10,12,13};
	int A[2] = {1,3};
	int B[7] = {2,4,7,8,10,12,13};
	double a = findMedianSortedArrays(A, 2, B, 7);
	cout << a << endl;

}
