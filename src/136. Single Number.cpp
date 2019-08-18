#include <iostream>
#include <vector>

using namespace std;

/*
Best solution
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ans = 0;
		for (int i = 0; i < nums.size(); ++i){
			ans ^= nums[i];
		}
		return ans;
	}
};
*/

//class Solution {
//public:
//	int singleNumber(vector<int>& nums) {
//		for (int i = 0; i < nums.size(); i++) {
//			bool find = true;
//			for (int j = 0; j < nums.size(); j++) {
//				if (i == j)
//					continue;
//				else if (nums[i] == nums[j]) {
//					find = false;
//					break;
//				}				
//			}
//			if (find) {
//				return nums[i];
//			}
//		}
//	}
//};

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int ans = 0;
		for (int i = 0; i < nums.size(); ++i) {
			ans ^= nums[i];
			cout << ans << " " << i << endl;
		}
		return ans;
	}
};

int main()
{
	vector<int> console = { 2,2,1 };
	Solution slu;
	int ans = slu.singleNumber(console);
	cout << ans << endl;
	system("PAUSE");
}