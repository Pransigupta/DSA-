#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &vec) {
        int result = 0;

        for (int i = 0; i < vec.size(); i++) {
            result = result ^ vec[i];
        }

        return result;
    }
};

int main() {
    Solution obj;
    vector<int> vec;

    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(4);

    cout << "Single number found: " << obj.singleNumber(vec);

    return 0;
}
