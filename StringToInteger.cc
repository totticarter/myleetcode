1.skip special char
2.sign
3.max and min of an integer
#include<iostream>

using namespace std;

int atoi(string s){

	int sum = 0;
	for(int i = 0; i < s.size(); i++){

		sum = s[i]-'0' + sum * 10;	
	}
	return sum;
}

int main(){

	int a = atoi("234");
	cout << a << endl;

}
