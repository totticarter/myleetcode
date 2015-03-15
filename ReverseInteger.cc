#include"leetcode.h"

int reverse(int x){

	int sign = x > 0 ? 1 : -1;

	int reversed = 0;
	while(x != 0){

		int value = x % 10;
		reversed = (reversed*10 + value);
		x = (x-value)/10;
	}
	return sign * reversed;
}

int main(){

	int a = reverse(-123);
	cout << a << endl;

}
