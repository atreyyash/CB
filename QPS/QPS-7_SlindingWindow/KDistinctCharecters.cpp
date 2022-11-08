#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// class Solution
// {
// public:
    int lengthOfLongestSubstringKDistinct(string &s, int k)
    {
        int ans, i, j, d, n;
        ans = i = j = d = n;
        n = s.size();
        vector<int> freq;

        while(j < n){
            if(freq[s[j]] == 0)
                d++;
            freq[s[j]]++;
            while(d > k){
                freq[s[i]]--;
                if(freq[s[i]] == 0)
                    d--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }

    int main(){
        string s = "eceba";
        int k = 2;
        int res = lengthOfLongestSubstringKDistinct(s, k);
        cout << res << endl;

        return 0;
    }
// };