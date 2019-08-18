#include<iostream>
#include<string>
#include<vector>

using namespace std;

/*
Best solution
vector<string> fizzBuzz(int n) {
	vector<string> res;
	for(int i = 1; i <= n; i++) res.push_back(i % 5 ? (i % 3 ? to_string(i) : "Fizz") : (i % 3 ? "Buzz" : "FizzBuzz"));
		return res;
}
*/

class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> result;
		for (int i = 1; i <= n; i++) {
			if ((i % 5 == 0) && (i % 3 == 0)) {
				result.push_back("FizzBuzz");
			}
			else if(i % 5 ==0)
			{
				result.push_back("Buzz");
			}
			else if ((i % 3 == 0)) {
				result.push_back("Fizz");
			}
			else {
				result.push_back(to_string(i));
			}
		}
		return result;
	}
};

int main()
{
	Solution slu;
	vector<string> ans;
	ans = slu.fizzBuzz(15);

	for (auto s : ans) {
		cout << s << endl;
	}

	system("PAUSE");
}