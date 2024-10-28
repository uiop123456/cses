#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    // We need to calculate this modulo 10^9 + 7
    const int MOD = 1e9 + 7;
    long long result = 1;
    long long base = 2;
    while(n>0){
        // chekc odd
        if(n & 1){
            result = (result * base) % MOD;
        }

        base = (base * base) % MOD;
        n>>=1;
    }
    cout << result << "\n";
    
    return 0;
}