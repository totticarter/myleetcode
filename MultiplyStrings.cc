#include<iostream>

using namespace std;

string multiply(string num1, string num2) {

	int jinwei = 0;
	string one_result[num2.size()];
	int line_idx = 0;
	for(int i = num2.size(); i > 0; i--, line_idx++){

		for(int j = num1.size(); j > 0; j--){

			jinwei = (num1[j] * num2[i]) / 10;
			int result = (num1[j] * num2[i]) % 10;
			result += jinwei;
			one_result[line_idx].push_back(ntoa(result));
		}
	}
	for(line_idx = 0; line_idx < num2.size(); line_idx++){

		int max_len = one_result[line_idx].size() > one_result[line_idx+1].size() ? one_result[line_idx].size() : one_result[line_idx+1].size();
		max_len += 1;
		for(int add_times = 0; add_times < man_len; add_times++){

			
		}
	}

}

int main(){


}
