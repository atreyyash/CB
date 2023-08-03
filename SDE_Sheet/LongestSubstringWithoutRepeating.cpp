#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> freq(256, 0);
        int i = 0, j = 0, n = s.length(), ans = 0;

        while(j < n){
            char ch = s[j];
            int idx = ch;
            freq[idx]++;

            while(freq[s[j]] > 1){
                char ch1 = s[i];
                int indx = ch1;
                freq[indx]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};