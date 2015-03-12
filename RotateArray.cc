#include<iostream>
#include<string.h>
using namespace std;

void rotate(int nums[], int n, int k){

	int nu[n];
	memcpy(nu, nums, sizeof(int) * n);
	//for(int i = 0;i < 5; i++){

	//	cout << nu[i] << ", ";
	//}

	int idx = 0;
	for(int i = (n-k); i < n; i++){

		nums[idx++] = nu[i];
	}

	for(int i = 0; i < n-k; i++){

		nums[idx++] = nu[i];
	}
}

int main(){

	int nums[6] = {1,2,3,4,5,6};
	rotate(nums, 6, 2);
	cout << "===========================" << endl;
	for(int i = 0;i < 6; i++){

		cout << nums[i] << ", ";
	}
	cout << endl;

}
