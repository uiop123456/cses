#include <iostream>
#include<math.h>
using namespace std;

void solve(int n,int src,int destination,int aux){
    if(n==0) return;
// move stack 1 to 2 using 3
    solve(n-1,src,aux,destination);
// printing the sequesnce
    cout<<src<< " "<<destination<<endl;

// now stack 2 to stack 3 using 1;
// aager move e 1 theke 2 e ese geche so now 2 theke 3 e move korte hobe using 1;
    solve(n-1,aux,destination,src);
}

int main(){
    int n;
    cin>>n;

// 2^n -1
    int moveCount = pow(2, n) - 1;
    cout << moveCount << endl;

    // no of disk n in 1st stack, we've to move all the tower to stack 3, using auxilary space of 2nd stack, reutrn moveCount
    // taget stack 1 to 3 using stack 2;
    solve(n,1,3,2);
    return 0;
}