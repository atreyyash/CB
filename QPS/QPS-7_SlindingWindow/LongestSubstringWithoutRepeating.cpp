#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> freq(256, 0);
        int n = s.length();
        int i = 0, j = 0, ans = 0;
        while(j < n){
            char ch = s[j];
            int idx = ch;
            freq[idx]++;
            // Window Shrink
            while(freq[s[j]] > 1){
                char ch1 = s[i];
                int k = ch1;
                freq[k]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};