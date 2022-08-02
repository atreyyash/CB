#include <iostream>
using namespace std;

/*
6
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // Spaces row-1 times
        int k = 0;
        while (k < i - 1)
        {
            cout << " ";
            k++;
        }
        // Stars row times
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    return 0;
}