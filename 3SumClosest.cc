/*
*1.my own code will cost C(n,3) times, (n*(n-1)*(n-2))/(3*2*1), the O will be O(n^3)
*2.sort first, the sort operation's O will be O(n*logn), and the comparation will be: (n-1)/2 + (n-2)/2 + (n-3)/2 + ... + (n-n+1)/2 = n^2/2 - (1+n)*n/4, the O will be O(n^2)
*/
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int threeSumClosest(vector<int> &num, int target) {

	int result = 0;
	int min_gap = 65536;
	sort(num.begin(), num.end());
	vector<int>::iterator a;
	for (a = num.begin(); a != prev(num.end(), 2); ++a) {
		vector<int>::iterator b = next(a);
		vector<int>::iterator c = prev(num.end());
		while (b < c) {
			const int sum = *a + *b + *c;
			const int gap = abs(sum - target);
			if (gap < min_gap) {
				result = sum;
				min_gap = gap;
			}
			if (sum < target)
				++b;
			else
				--c;
		}
	}
	return result;



//	int diff_abs = 65536;
//	int sum;
//	int return_sum;
//
//	for(int i = 0; i < num.size(); i++){
//
//		for(int j = i+1; j < num.size(); j++){
//
//
//			for (int m = j+1; m < num.size(); m++){
//
//				sum = num[i] + num[j] + num[m];
////				cout << "sum is: " << sum << endl;
//				if(abs(sum - target) < diff_abs){
//
//					return_sum = sum;
//					diff_abs = abs(sum - target);
//				}
//			}
//		}
//	}
//	return return_sum;
}

int main(){

	vector<int> v;
	v.push_back(-1);
	v.push_back(1);
	v.push_back(-4);
	v.push_back(1);
	v.push_back(-9);

	int sum = threeSumClosest(v, 5);
	cout << "sum is: " << sum << endl;

}

