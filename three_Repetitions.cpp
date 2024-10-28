#include <iostream>
#include<vector>
using namespace std;

int main(){
	string ok;
	cin>>ok;
	int ans=1,curr=1;
	for(int i=1;i<ok.size();i++){
		if(ok[i-1]==ok[i]){
			curr++;
			ans=max(curr,ans);
		}else{
			curr=1;
		}
	}
	cout<<ans;
	return 0;
}
