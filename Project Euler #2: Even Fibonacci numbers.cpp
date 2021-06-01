
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long int Fibonacci(long long int &n)
{    
    long long int a = 0, b = 1,sum=0;
     for(int i=0;;i++)
     {
        b += a; 
        if (b > n){break;}
        if (b%2==0){
            sum+=b;      
        }
        a = b-a; 
     }     
     return sum;
}

int main() {
    long cases;
    long long int n;
    cin >> cases;
    while(cases--){
        cin >> n;
        cout <<Fibonacci(n) << endl;
    } 
    return 0;
} 
