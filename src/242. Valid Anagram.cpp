#include<map>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		//sort(s.begin(), s.end());
		//sort(t.begin(), t.end());	
		//return s == t;

		/*Best solution*/
		if (s.length() != t.length())
			return false;
		map<char, int> temp;
		for (int i = 0; i < s.length(); i++) {
			temp[s[i]]++;
			temp[t[i]]--;
		}

		for (auto count : temp) {
			if (count.second)
				return false;
		}

		return true;

	}
};

int main()
{
	Solution slu;
	string console1 = "anagram";
	string console2 = "nagaram";

	cout << slu.isAnagram(console1, console2) << endl;

	system("PAUSE");
}