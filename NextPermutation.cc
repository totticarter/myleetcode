//1.from right to left, find the first digit (pnumber) which violate the increase trend
//2.from right to left, find the first digit which large than pnumber, call it cnumber
//3.swap the pnumber and cnumber
//4.reverse all the digit on the right of partition index

#include"leetcode.h"

void nextPermutation(vector<int>& num){

	int voliate_num;
	for(int i = num.size()-1; i>-1; i--){
		
		if(i == 0){
			reverse(num.begin(), num.end());
			return;
		}
		if(num[i] > num[i-1]){

			voliate_num = i-1;
			cout << "voliate_num is: " << voliate_num << endl;
			break;
		}
	}

	int first_larger;
	for(int i = num.size()-1; i>-1; i--){

		if(num[i] > num[voliate_num]){

			first_larger = i;
			cout <<"first_larger is: " << first_larger << endl;
			break;
		}
	}

	int tmp = num[voliate_num];
	num[voliate_num] = num[first_larger];
	num[first_larger] = tmp;

	reverse(num.begin()+voliate_num+1, num.end());
	
}

int main(){

	//int A[7] = {7,8,6,9,2,8,7};
	int A[7] = {7,6,5,4,3,2,1};
	//int A[7] = {1,2,3,4,5,6,7};
	cout << "A = " << endl;
	for(int i = 0; i < 7; i++)
		cout << A[i] << ",";
	cout << endl;

	vector<int> v;
	v.assign(A, A+7);
	nextPermutation(v);
	cout << "after my next = " << endl;
	for(int number: v)
		cout << number << ",";
	cout << endl;

	next_permutation(A, A+7);
	cout << "expected = " << endl;
	for(int i = 0; i < v.size(); i++)
		cout << A[i] << ",";
	cout << endl;
}
