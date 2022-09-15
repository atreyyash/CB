#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> ans;
void Permutations(int *a, int n, int i)
{
    // Base Case
    if (i == n)
    {
        // for(int i = 0 ; i < n ; i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        vector<int> v(a, a + n);
        ans.push_back(v);
        return;
    }
    // Recursive Case
    for (int j = i; j < n; j++)
    {
        swap(a[i], a[j]);
        Permutations(a, n, i + 1);
        swap(a[i], a[j]);
    }
}

int main()
{
    int a[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    Permutations(a, n, 0);

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}