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
	char longest_tmp[len];
	int longest_len = 0;
	for(int i = 0; i < len; i++){

		longest_tmp[0] = a[i];
		int pos = 0;
		for(int j = i+1; j < len; j++){

			if(match_any_one_char(longest_tmp, pos+1, a[j])){
				
				if(pos+1 > longest_len){

					longest_len = pos+1;
					memcpy(longest, longest_tmp, longest_len);

				}
				memset(longest_tmp, 0, longest_len);
				break;		
			}
			else{
				
				longest_tmp[++pos] = a[j];
				if(j+1 == len){
					if(pos+1 > longest_len){

						longest_len = pos+1;
						memcpy(longest, longest_tmp, longest_len);

					}
				}
			}
		}
	}

	cout << string(longest, longest_len) << endl;
}		
int main(){

	char a[] = "abcdaefbcabef";
	char* longest = find_longest(a, strlen(a));		

	return 0;
}
lll
