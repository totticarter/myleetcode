#include<iostream>

using namespace std;

bool exist(vector<vector<char> >& board, string word){


}

int main(){


	char row1[] = {'a', 'b', 'c', 'd'};
	char row2[] = {'a', 'b', 'c', 'd'};
	char row3[] = {'a', 'b', 'c', 'd'};
	char row4[] = {'a', 'b', 'c', 'd'};
	vector<char> v1(row1, row1 + sizeof(row1)/sizeof(char));
	vector<char> v2(row2, row2 + sizeof(row2)/sizeof(char));
	vector<char> v3(row3, row3 + sizeof(row3)/sizeof(char));
	vector<char> v4(row4, row4 + sizeof(row4)/sizeof(char));
	vector<vector<char> > v;
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	bool f = exist(v, "abba");

}
