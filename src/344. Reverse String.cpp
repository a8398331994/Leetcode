#include<iostream>
#include<string>
#include<vector>

using namespace std;
/*
Best solution
ref:https://blog.csdn.net/kjing/article/details/6936325

class Solution {
public:
	string reverseString(string s) {
		return string(s.rbegin(), s.rend());
	}
};
*/

class Solution {
public:
	void reverseString(vector<char>& s) {
		char temp;
		for (int i = 0; i < s.size() / 2; i++) {
			temp = s[i];
			s[i] = s[s.size() - 1 - i];		
			s[s.size() - 1 - i] = temp;
		}
	}
};

int main()
{
	vector<char> console = { 'h','e','l','l','o' };
	Solution slu;
	slu.reverseString(console);
	for (auto c : console) {
		cout << c << endl;
	}
	system("PAUSE");
	return 1;
}