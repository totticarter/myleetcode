//merge from tail, will not override the element in A

#include<iostream>
#include<string.h>
using namespace std;


int find_equal_or_less(int bval, int A[], int m){

	for(int i = 0; i < m; i++){

		if(A[i] < bval)
			continue;
		else
			return i;
	}
}
void insert_into_a(int bval, int insert_pos);
void merge(int A[], int m, int B[], int n){

	//int idx = 0;
	//while(idx++ < n){

	//	int bval = B[idx];
	//	int insert_pos = find_equal_or_less(bval, A, m);	
	//	insert_into_a(bval, insert_pos, int A[], int m);
	//}
	
	int newArraySize = m+n;
	
	while(m > 0 && n > 0){

		if(A[m] > B[n]){

			A[newArraySize--] = A[m--];
		}else if(A[m] == B[n]){

			A[newArraySize--] = A[m--];
			A[newArraySize--] = B[n--];
		}else{
			
			A[newArraySize--] = B[n--];
		}
	}
	
	if(n != 0){

		memcpy(A, B, n);
	}

}

int main(){



}
