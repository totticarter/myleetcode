#include"leetcode.h"

vector<vector<int> > fourSum(vector<int>& num, int target){

	vector<int>::iterator iter = num.begin();
	sort(iter, iter+num.size());

	vector<vector<int> > v;
	for(int i = 0; i < num.size(); i++){
	
		for(int j = i+1; j < num.size(); j++){
			int first = j+1;
			int second = num.size() - 1;
			while(first < second){

				int tmp = num[i] + num[j] + num[first] + num[second];
				if(tmp < target)
					first++;
				else if(tmp == target){

					vector<int> onev;
					onev.push_back(num[i]);
					onev.push_back(num[j]);
					onev.push_back(num[first]);
					onev.push_back(num[second]);
					v.push_back(onev);
					first++;
					second--;
				}else
					second--;

			}
		}
	}
	v.erase(unique(v.begin(), v.end()), v.end());
	return v;

}

int main(){

	vector<int> v1;
	int nums[8] = {-3,-2,-1,0,0,1,2,3};
	v1.assign(nums, nums+8);
	vector<vector<int> > v = fourSum(v1, 0);

	for(vector<int> onev: v){

		for(int onevalue: onev)
			cout << onevalue << ", ";
		cout << endl;
	}
}
