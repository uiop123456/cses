#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int total = 1<<n; //2^n
    for(int i=0;i<total;i++){
        int grayCode = i ^ (i>>1); // Generate Gray code using bitwise XOR
        cout << bitset<16>(grayCode).to_string().substr(16 - n) << "\n"; 
    }
    
    return 0;
}