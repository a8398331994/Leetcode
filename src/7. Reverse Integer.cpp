#include <iostream>
#include <string>

using namespace std;

/*
Given a 32-bit signed integer, reverse digits of an integer.
*/

class Solution {
public:
	int reverse(int x) {
		long result = 0;
		int end = x;
		while (end != 0) {
			//each iteration add the last parameter integer and multiply the result by 10;
			result = result * 10 + end % 10;
			end /= 10;
			
		}
		return (result<INT_MIN || result>INT_MAX) ? 0 : result;
	}	
};

int main() 
{
	Solution slu;
	int test = 123;

	int ans = slu.reverse(123);
	cout << ans << endl;
	system("PAUSE");
	return 1;
}