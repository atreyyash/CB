// RatInAMaze.cpp
#include<iostream>
using namespace std;

bool RatInAMaze(char maze[][5], int sol[][10], int n, int m, int i, int j) {
	// Base Case
	if (i == n - 1 && j == m - 1) {
		sol[i][j] = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}

		// To print all the possible sol we will return false.
		// Hence, it will return false on every step.
		cout << endl;
		return false;

		// And to print first possible way return true;
		// return true;
	}
	// Recursive Case
	sol[i][j] = 1;

	// 1. check right se rasta mila? --> (i, j + 1)
	if (j + 1 < m && maze[i][j + 1] != 'X') {

		bool kyaRightSeRastaMilla = RatInAMaze(maze, sol, n, m, i, j + 1);

		if (kyaRightSeRastaMilla) {
			return true;
		}
	}

	// 2. check down se rasta milla? --> (i + 1, j)
	if (i + 1 < n && maze[i + 1][j] != 'X') {

		bool KyaNeecheSeRastaMilla = RatInAMaze(maze, sol, n, m, i + 1, j);

		if (KyaNeecheSeRastaMilla) {
			return true;
		}
	}

	// 3. Kahi se rasta nahi milla
	sol[i][j] = 0;	// Backtracking --> jo recursion me jaate hue kaam kiya usse vapas aate hue vapas undokar rahe hai (SABOOT MITANA)
	return false;
}

int main() {
	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int sol[10][10] = {0};

	RatInAMaze(maze, sol, 4, 4, 0, 0);

	return 0;
}