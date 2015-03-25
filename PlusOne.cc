#include"leetcode.h"

vector<int> plusOne(vector<int>& digits){


	int carry = 0;
	for(int i = digits.size()-1; i>-1; i--){

		int sum = 0;
		if(i == digits.size() -1)
			sum = digits[i] + carry +1;
		else	
			sum = digits[i]+carry;
		int value = sum%10;	
		digits[i] = value;
		carry = sum/10;
		if(carry != 0 && i == 0)
			digits.insert(digits.begin(), carry);

	}
	return digits;
}

int main(){

	//int A[4] = {9,9,9,9};
	int A[1] = {9};
	vector<int> v;
	v.assign(A, A+1);
	for(int i: v)
		cout << i << "	";
	cout << endl;

	vector<int> r = plusOne(v);
	for(int i: r)
		cout << i << "	";
	cout << endl;
}
