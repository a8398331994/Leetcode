#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {

		//vector<char>repeatChar;

		//for (int i = 0; i < s.size(); i++) {
		//	int count = 0;
		//	bool repeat = false;

		//	for (auto num : repeatChar) {
		//		if (num == s[i]) {
		//			repeat = true;
		//			break;
		//		}					
		//	}

		//	if (repeat)
		//		continue;
		//
		//	for (int j = i; j < s.size(); j++) {
		//		if (s[i] == s[j])
		//			count++;
		//		if (count == 2) {
		//			repeatChar.push_back(s[i]);
		//			break;
		//		}
		//	}
		//	if (count == 1) {
		//		return i;
		//	}
		//}

		//return -1;

		/*Best solution 1
		unordered_map<char, int> temp;
		for (auto ch : s) {
			temp[ch]++;
		}
		for (int i = 0; i < s.size(); i++) {
			if (temp[s[i]] == 1)
				return i;
		}
		return -1;
		*/

		/*Best soltion 2
		unordered_map<char, pair<int, int>> temp;
		for (int i = 0; i < s.size(); i++) {
			temp[s[i]].first++;
			temp[s[i]].second = i;
		}
		int idx = s.size();
		for (auto t : temp) {
			if (t.second.first == 1) {
				idx = min(t.second.second, idx);
			}
		}
		return idx == s.size() ? -1 : idx;
		*/			
	}
};

int main()
{
	string console = "aadadaad";

	Solution slu;
	cout << slu.firstUniqChar(console) << endl;

	system("PAUSE");

	return 1;

}