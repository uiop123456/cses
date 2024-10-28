#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    vector<int>vc(26,0);

    for(int i=0;i<a.size();i++){
        vc[a[i] - 'A']++;
    }

    string half,middle,ans;
    int odd=0;

    for(int i=0;i<vc.size();i++){
        if(vc[i]%2){
            odd++;
            middle=string(1,'A' +i);
        }
        half += string(vc[i]/2, 'A'+i );
    }
    if(odd>1) {
        cout<<"NO SOLUTION";
        return 0;
    }
    ans = half + middle + string(half.rbegin(),half.rend());
    cout<<ans;


    return 0;
}