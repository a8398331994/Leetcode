#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		unordered_map<char, int> T = { { 'I' , 1 },
		{ 'V' , 5 },
		{ 'X' , 10 },
		{ 'L' , 50 },
		{ 'C' , 100 },
		{ 'D' , 500 },
		{ 'M' , 1000 } };

		int count = s.size() - 1;
		int sumResult = T[s[count]];

		for (int i = count - 1; i >= 0; i--) {
			if (T[s[i]] < T[s[i + 1]])
				sumResult -= T[s[i]];
			else
				sumResult += T[s[i]];
		}

		return sumResult;
	}
};

int main()
{
	Solution slu;

	string console = "III";

	cout << slu.romanToInt(console) << endl;

	system("PAUSE");
}