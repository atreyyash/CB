// TowerofHanoi.cpp
#include<iostream>
using namespace std;

void TowerofHanoi(int n, char src, char helper, char des){
	// Base Case
	if(n == 0){
		return;
	}
	// Recurisve Case
	TowerofHanoi(n - 1, src, des, helper);
	cout << "Taking disc " << n << " from " << src << " to " << des << endl;
	TowerofHanoi(n - 1, helper, src, des);
}

int main(){
	int n;
	cin >> n;

	TowerofHanoi(n, 'A', 'B', 'C');
	
	return 0;
}