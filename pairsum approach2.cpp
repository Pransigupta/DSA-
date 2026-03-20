#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int ps = 0;

    for(int i = 0; i < n; i++) {
        for(int j = n - 1; j > i; j--) {

            ps = nums[i] + nums[j];

            if(ps == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            else if(ps < target) {
                break;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 13;

    vector<int> ans = pairsum(nums, target);

    if(ans.size() > 0)
        cout << ans[0] << " " << ans[1] << endl;
    else
        cout << "No pair found";

    return 0;
}
