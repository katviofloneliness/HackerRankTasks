#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void Solve(){
    long number,howMany3,howMany5,howMany3x5,sum;
    cin >> number;
    howMany3 =  long((number-1)/3);
    howMany5 = long((number-1)/5);
    howMany3x5 = long((number-1)/15);
    sum = ((3+ howMany3*3)*howMany3)/2 + ((5+howMany5*5)*howMany5)/2 -((15+howMany3x5*15)*howMany3x5)/2; // sum of arithmetic sequence of 3s 5s 15s
    cout << sum << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int cases;
cin >> cases;
while (cases){
    Solve();
    cases--;
}
    return 0;
}
