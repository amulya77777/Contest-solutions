#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;while(t--){
       int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
    
   int minLen = INT_MAX;

    for (int left = 0; left < n; ++left) {
        unordered_map<int, int> freq;
        for (int right = left; right < n; ++right) {
            freq[nums[right]]++;
            if (freq.size() > 2) break;
            if (freq.size() == 2) {
                minLen = min(minLen, right - left + 1);
                break; 
            }
        }
    }
    cout<< (minLen == INT_MAX ? -1 : minLen)<<endl;
    }
}
