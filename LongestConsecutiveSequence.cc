#include"leetcode.h"
#include <unordered_map>

int longestConsecutive(vector<int>& num){

	if(num.size() == 0){

		return 0;
	}

	unordered_map<int, bool> umap;
	for(int i : num)
		umap[i] = false;

	int max_len = 0;
	for(int i = 0; i < num.size(); i++){

		cout << "1111111111111" << endl;
		int number = num[i];
		if(umap[number] == true)
			continue;

		umap[number] = true;
		int this_len = 1;
		int s = number-1;
		int b = number+1;
		while(umap.find(s--) != umap.end()){

			//umap[s] = true;
			this_len++;
		}
		while(umap.find(b++) != umap.end()){

			//umap[b] = true;	
			this_len++;
		}

		if(this_len > max_len){

			max_len = this_len;
		}
	}

	return max_len;

}

int main(){

	vector<int> v;
	int vv[10] = {0,1,7,8,5,3,2,9,10,11};
	v.assign(vv, vv+10);
	int a = longestConsecutive(v);
	cout << "a = " << a << endl;

}
