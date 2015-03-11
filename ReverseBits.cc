//For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), return 964176192 (represented in binary as 00111001011110000010100101000000).


#include<iostream>
#include<stdint.h>

using namespace std;

uint32_t reverseBits(uint32_t n) {


	uint32_t ans = 0;
	for(int idx = 0; idx < 32; idx++){

		ans = ans << 1;
		ans = ans | (n & 1);
		n = n >> 1;
	}
	return ans;

}

int main(){

	uint32_t a = 43261596;
	uint32_t b = reverseBits(a);
	cout << b << endl;
}
