#include"leetcode.h"

int singleNumber(int A[], int n){

	int r = A[0] ^ A[1];
	for(int i = 2; i < n-1; i++){
	
		r = A[i]*r;
	}
}
