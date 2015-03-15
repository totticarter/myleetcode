#include"leetcode.h"
#define IS_LETTER(c) ((c)>='a' && (c)<='z')||((c)>='A' && (c)<='Z')

bool isPalindrome(string s){

	int m = 0;
	int n = s.size();
	while(n<m){

		if(!IS_LETTER(s[n]))
			n++;
		else if(!IS_LETTER(s[m]))
			m++;
		else if(s[n] != s[m]) 
			return false;
		else{
			
			n++;
			m++;
		}
	}
	return true;


}

int main(){


	string s = "abcde hdcba";
	cout << isPalindrome(s) << endl;
}
