#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    while(n--){
        long long row,col;
        cin>>row>>col;
        long long ans=0;
        
        if(row==col){
            ans = row * (row - 1) + 1;
        }
        else{
            long long maxi = max(row,col);
            // odd col 1,3 2,3 3,3
            if(col%2 && row<col){
                ans = maxi * maxi - row + 1;
            }
            // even col
            else if(col%2 == 0 && row<col){
                ans = (maxi - 1) * (maxi - 1) + row;
            }
            // odd row
            else if(row%2 && row>col){
                ans = (maxi - 1) * (maxi - 1) + col;
            }
            else if(row%2 == 0 && row>col){
                ans = maxi * maxi - col + 1;
            }
        }
        
        cout<<ans<<"\n";
    }
    
    return 0;
}
