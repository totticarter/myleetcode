#include<iostream>
#include<stdint.h>
//#define HW(n, a) (while(a-- > 0){re})
using namespace std;

int hammingWeight(uint32_t n){
	
	int count = 0;	
	for(int i = 0; i < sizeof(uint32_t)*8; i++){

		uint32_t a = n>>i;
		bool flag = a & 1;
		if(flag)
			count++;
	}
	return count;

}

int main(){

	int count = hammingWeight(16);
	cout << count << endl;	

}
