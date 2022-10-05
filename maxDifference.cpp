/*
	Question: Find the maximum difference arr[j] - arr[i] in an array of numbers such that j > i.

	Test Case: 
		Input: 2 3 10 6 4 8 1
		Output: 8

	Explanation: Maximum difference is between 10 and 2 at index 2 and 0 respectively.
*/

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution{
public: int maxDiff(vector<int> vect){
			int res = vect[1] - vect[0];
			int minVal = vect[0];
			for (int j = 1; j < vect.size(); j++){
				res = max(res, vect[j] - minVal);
				minVal = min(minVal, vect[j]);
			}
			return res;
	}
};
int main()
{
	vector<int> v{2, 3, 10, 6, 4, 8, 1};
	Solution ans;
	cout << ans.maxDiff(v);
	return 0;
}