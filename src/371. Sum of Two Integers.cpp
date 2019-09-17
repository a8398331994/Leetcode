#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
	int getSum(int a, int b) {
		long long carry; // 64-bit

		while (b != 0) {
			carry = a & b;
			a = a ^ b;
			b = ((carry & 0xffffffff) << 1); // limited to 32 bits

			cout << carry << " " << a << " " << b << endl;
		}

		return a;
	}
};


int main()
{
	int a = 3;
	int b = 2;

	int sum = a^b;
	int sum2 = (a & b) << 1;

	//cout << sum <<" "<< sum2 << endl;


	Solution slu;
	cout << slu.getSum(a, b) << endl;;

	system("PAUSE");
}