#include<iostream>
#include<algorithm>
using namespace std;

void TargetSumTriplet(int *a, int n, int tar){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (a[i]+a[j]+a[k] == tar)
                {
                    cout << a[i] << ", " << a[j] << " and " << a[k] << endl;
                }
            }
            
        }
        
    }
    
}

int main() {
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int tar;
    cin >> tar;
    sort(a, a+n);
    TargetSumTriplet(a, n, tar);

    return 0;
}