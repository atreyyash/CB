// Subsequences.cpp
#include<iostream>
using namespace std;

void Subsequences(char *in, char *out, int i, int j) {
	// Base Case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	// Recursive Case

	// 1. ith character ko output me mat lo
	Subsequences(in, out, i + 1, j);

	// 2. ith character ko output me lo
	out[j] = in[i];
	Subsequences(in, out, i + 1, j + 1);
}

int main() {
	char in[100] = "abc";
	char out[100];

	Subsequences(in, out, 0, 0);

	return 0;
}