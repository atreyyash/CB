#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

char keys[][10] = {
    "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
class Solution
{
public:
    vector<string> ans;
    void Nokia(string s, string out, int i, int j)
    {
        // Base Case
        if (s[i] == '\0')
        {
            ans.push_back(out);
            return;
        }
        // Recursive Case
        int digit = s[i] - '0';
        for (int k = 0; keys[digit][k] != '\0'; k++)
        {
            out += keys[digit][k];
            Nokia(s, out, i + 1, j + 1);
            out.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.length() == 0)
        {
            return ans;
        }
        string out;
        Nokia(digits, out, 0, 0);
        return ans;
    }
};