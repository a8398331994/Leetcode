#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	int majorityElement(vector<int>& nums) {

		//ref : https://mropengate.blogspot.com/2015/12/cc-map-stl.html
		map<int, int> temp;
		map<int, int>::iterator iter;
		for (auto n : nums) {
			iter = temp.find(n);
			if (iter == temp.end()) {
				temp.insert(pair<int, int>(n, 1));
			}
			else {
				iter->second += 1;
			}
		}

		int maxValue = 0;
		int maxValueIndex;
		for (auto it = temp.cbegin(); it != temp.cend(); it++) {
			if (it->second > maxValue) {
				maxValue = it->second;
				maxValueIndex = it->first;
			}				
		}

		return maxValueIndex;

		/*
		Best solution
		
		unordered_map<int, int> counter;
		for (int num : nums) {
			if (++counter[num] > nums.size() / 2) {
				return num;
			}
		}
		return 0;
		*/
	}
};

int main()
{
	Solution slu;

	vector<int> console = { 3,2,3 };

	int result = slu.majorityElement(console);

	cout << result << endl;
	system("PAUSE");

	return 1;
}