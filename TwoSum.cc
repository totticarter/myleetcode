//1.C(2,n) = n(n-1)/2 = n^2/2 + n/2, the cost will be O(n^2)
//2.sort first, from the first element, binary find the other one, the cost will be logn+log(n-1) + ... + log(1) = O().however, this solution cannot return the index
//3.use hash map to store the element and the index
#include"leetcode.h"

vector<int> twoSum(vector<int>& numbers, int target){

	vector<int> v;
	unordered_map<int, int> umap;
	int idx = 0;
	for(int onenum: numbers)
		umap[onenum] = idx++;


	for(int i = 0; i < numbers.size(); i++){

		int another_one = target - numbers[i];
		if(umap.find(another_one) != umap.end()){

			int a = umap[another_one];
			if(umap[another_one] > i){

				v.push_back(i+1);
				v.push_back(umap[another_one] + 1);
				break;
			}
		}
	}
	return v;

//	unordered_map<int, int> mapping;
//	vector<int> result;
//	for (int i = 0; i < numbers.size(); i++) {
//		mapping[numbers[i]] = i;
//	}
//	for (int i = 0; i < numbers.size(); i++) {
//		const int gap = target - numbers[i];
//		if (mapping.find(gap) != mapping.end() && mapping[gap] > i) {
//			result.push_back(i + 1);
//			result.push_back(mapping[gap] + 1);
//			break;
//		}
//	}
//	return result;
//
}

int main(){

	vector<int> v;
	int A[4] = {0,3,4,0};
	v.assign(A, A+4);

	vector<int> v2 = twoSum(v, 0);
	for(int i: v2)
		cout << i << ", ";

	cout << endl;

}
