#include <iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long ans=0;
	vector<long long>arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i !=0 && arr[i-1] > arr[i]){
			ans += (arr[i-1]-arr[i]);
			arr[i] = arr[i - 1];
		}
	}

	cout<<ans;
	
	return 0;
}
