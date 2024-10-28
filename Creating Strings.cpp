#include <bits/stdc++.h>
using namespace std;

void solve(string n,string ans,vector<bool>&used,int &count){
    if(n.size() == ans.size()){
        count++;
        cout<<ans<<endl;
        return;
    }

    for(size_t i=0;i<n.size();i++){
        // remember jodi na use hoye thake then only
        if(!used[i]){
            // think twice
            // aager char same same and aager char not used hoye thakle continue
            if (i > 0 && n[i] == n[i - 1] && !used[i - 1]) {
                continue;
            }
            ans.push_back(n[i]);
            used[i]=true;
            solve(n,ans,used,count);
            used[i]=false;
            ans.pop_back();
        }
    }
}
int main(){
    string n;
    cin>>n;

    sort(n.begin(),n.end());
    
    string ans;

    vector<bool>used(n.size(),false);
    int count =0;

    solve(n,ans,used,count);
    cout<<count<<endl;
    return 0;
}
