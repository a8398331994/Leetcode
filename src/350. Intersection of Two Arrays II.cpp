#include<vector>
#include<unordered_map>
#include<iostream>

using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		/*vector<int> res;
		int start, end;
		if (nums1.size() == 0 || nums2.size() == 0)
			return res;

		if (nums1.size() > nums2.size()){			
			for (int j = 0; j < nums1.size() - nums2.size(); j++) {
				start = j;
				for (int i = 0; i < nums2.size(); i++) {
					if (nums1[j + i] != nums2[i])
						break;
					else if (i == nums2.size() - 1)
						end = j + i;
				}
			}

			for (int i = start; i <= end; i++) {
				res.push_back(nums1[i]);
			}
		}
		else {
			for (int j = 0; j < nums2.size() - nums1.size(); j++) {
				start = j;
				for (int i = 0; i < nums1.size(); i++) {
					if (nums2[j + i] != nums1[i])
						break;
					else if (i == nums1.size() - 1)
						end = j + i;
				}
			}
			for (int i = start; i <= end; i++) {
				res.push_back(nums2[i]);
			}
		}

		return res;*/

		unordered_map<int, int> temp;	
		vector<int>res;
		for (int i = 0; i < nums1.size(); i++) 
			temp[nums1[i]]++;
		for (int j = 0; j < nums2.size(); j++) {
			if (temp.find(nums2[j]) != temp.end() && --temp[nums2[j]] >= 0)
				res.push_back(nums2[j]);
		}

		return res;					
	}
};

int main()
{
	Solution slu;
	vector<int> console1 = { 1,2,2,1 };
	vector<int> console2 = { 2,2 };

	vector<int>res = slu.intersect(console1, console2);
	for (auto r : res) {
		cout << r << endl;
	}

	system("PAUSE");
}