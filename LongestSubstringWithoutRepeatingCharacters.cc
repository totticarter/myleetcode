#include<iostream>
#include<string.h>

using namespace std;
bool match_any_one_char(char* longest, int len, char c){

	for(int i = 0; i < len; i++){

		if(longest[i] == c){
		
			return true;
		}
	}
	return false;

}
char*  find_longest(char* a, int len){

	char longest[len];
	for(int i = 0; i < len; i++){

		longest[0] = a[i];
		int pos = 0;
		for(int j = i+1; j < len; j++){

			if(match_any_one_char(longest, pos, a[j])){
				
				break;		
			}
			else{
				
				longest[++pos] = a[j];
			}
		}
	}

	cout << longest << endl;
}		
int main(){

	char a[] = "abcdabcabc";
	char* longest = find_longest(a, strlen(a));		

	return 0;
}
