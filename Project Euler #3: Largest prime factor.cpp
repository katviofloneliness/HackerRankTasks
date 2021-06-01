// note to myself :: mostly copied code for main algorithm, you lazy mf

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    long long int n;
    while (cases--) {
    cin >> n;
    long long int i=2;
    while (i<=sqrt(n)){
        if (n%i == 0) {n/=i;}
        else {i++;}
    }
    cout << n << endl;
    }  
    return 0;
}
