#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;

        int ric[1000];
        int cab[1000];
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> ric[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> cab[i];
        }

        int ansRick = 0;
        for (int i = 0; i < n; i++)
        {
            ansRick += min(ric[i] * c1, c2);
        }
        ansRick = min(ansRick, c3);
        int ansCab = 0;
        for (int i = 0; i < m; i++)
        {
            ansCab += min(cab[i] * c1, c2);
        }
        ansCab = min(ansCab, c3);

        int ansFinal = min(ansCab + ansRick, c4);
        cout << ansFinal << endl;
    }
    return 0;
}