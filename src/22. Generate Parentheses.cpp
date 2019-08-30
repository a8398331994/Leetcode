#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
	vector<string> generateParenthesis(int n) {
		vector<string> res;
		helper(res, "", n, n);
		return res;
	}

	void helper(vector<string>& res, string str, int left, int right) {
		if (left == 0 && right == 0) {
			res.push_back(str);
			return ;
		}
		if (left > 0) { 
			//cout << "right:" << right << " left:" << left << ", str:" << str << endl;
			helper(res, str + "(", left - 1, right); 		
		}
		if (left < right) {
			//cout << "right:" << right << " left:" << left << ", str:" << str << endl;
			helper(res, str + ")", left, right - 1); 
		}
	}
};

int main()
{
	Solution slu;
	vector<string> res;
	res = slu.generateParenthesis(3);
	cout << endl;
	
	for (auto str : res) {
		cout << str << endl;
	}
	system("PAUSE");
	return 1;
}