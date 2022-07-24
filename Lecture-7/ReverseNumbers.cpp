#include <iostream>
using namespace std;

int main() {

	int a[1000], n;
	cout << "Enter N(Max: 1000) : ";
	cin >> n;

    for (int i = 0; i < n; i++){
		a[i] = i + 1;
	}

	cout<<"Original Array : ";
	for (int i = 0; i  < n; i++){
		cout << a[i] << " ";
	}
    cout<<endl;

    cout<<"Printing Reverse : ";
	for (int i = n - 1; i  >= 0; i--){
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}