#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	int titleToNumber(string s) {
		if (s.size() == 0)
			return 0;

		int res = 0;
		for (int i = 0; i < s.size(); i++) {
			res += pow(s[i] - 64, s.size() - i);
			/*res += (s[i] - 64) * (26 * ())*/
		}
		return res;
	}
};

int main()
{
	//int a = 'A' - 64;

	//cout << a << endl;

	Solution slu;
	string console = "AA";
	cout << slu.titleToNumber(console) << endl;;

	system("PAUSE");
}