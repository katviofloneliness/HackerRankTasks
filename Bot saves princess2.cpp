#pragma once

#include <vector>
#include <iostream>

using namespace std;

void nextMove(int n, int j, int i, vector <string> grid) {
	int botPos_x = i, botPos_y = j;
	int princessPos_x = 0, princessPos_y = 0;
	// find princess pos
	for (int k = 0;k < n;k++) {	
		for (int l = 0; l < n; l++) {
			if (grid[k][l] == 'p') {
				princessPos_x = l;
				princessPos_y = k;
				break;
			}
		}
	}
	// check whichever x or y relative distance is greater and move in a way to be diagonally closer
	if (abs(botPos_x - princessPos_x) >= abs(botPos_y - princessPos_y)) {
		if (botPos_x == princessPos_x) {}
		else if (botPos_x < princessPos_x) {
			cout << "RIGHT\n";
		}
		else {
			cout << "LEFT\n";
		}
	}
	else {
		if (botPos_y == princessPos_y) {}
		else if (botPos_y > princessPos_y) {
			cout << "UP\n";
		}
		else {
			cout << "DOWN\n";
		}
	}
}
