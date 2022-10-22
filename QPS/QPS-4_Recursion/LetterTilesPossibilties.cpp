#include <iostream>
using namespace std;

class Solution
{
public:
    int solve(int *freq)
    {
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                freq[i]--;
                ans += solve(freq) + 1;
                freq[i]++;
            }
        }
        return ans;
    }
    int numTilePossibilities(string tiles)
    {
        // preparing freq array
        int freq[26];
        for (int i = 0; i < tiles.length(); i++)
        {
            char ch = tiles[i];
            int idx = ch - 'A';
            freq[idx]++;
        }
        int ans = solve(freq);
        return ans;
    }
};