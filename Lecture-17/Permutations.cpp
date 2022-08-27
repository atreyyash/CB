// Permutations.cpp
#include<iostream>
#include<algorithm>
using namespace std;

void Permutations(char *a, int i) {
	// Base Case
	if (a[i] == '\0') {
		cout << a << endl;
		return;
	}
	// Recursie Case
	for (int j = i; a[j] != '\0'; j++) {
		swap(a[j], a[i]);
		Permutations(a, i + 1);
		swap(a[j], a[i]);
	}
}

int main() {
	char a[] = "abc";

	Permutations(a, 0);

	return 0;
}