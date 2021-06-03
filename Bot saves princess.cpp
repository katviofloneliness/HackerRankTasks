#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid) {
    for (int i = 0; i<int(n / 2);i++) {
        if ('p' == (grid[0][0]) || 'p' == grid[0][n - 1]) {
            cout << "UP\n";
        }
        else { cout << "DOWN\n"; }
        if ('p' == (grid[0][n-1]) || 'p' == grid[n-1][n-1] ) {
            cout << "RIGHT\n";
        }
        else { cout << "LEFT\n"; }
    }
}

int main(void) {
    int m;
    vector <string> grid;
    
    //m=3;
    //vector <string> grid{---,-m-,p--};
   
   cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
