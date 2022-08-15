// FormBiggerNo.cpp
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a[100000];
		int n;
		cin >> n;
		cin.ignore();
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		// string s1, s2;
		for (int i = 0; i < n - 1; ++i)
		{
			for(int j=i+1;j<n;j++){
                if(a[i] + a[j] < a[j] + a[i]){
					swap(a[i], a[j]);
				}
            }
		}

		// Printing Ans
		string sum = "";
		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
			sum += a[i];
		}
		cout << sum << endl;
	}

	return 0;
}