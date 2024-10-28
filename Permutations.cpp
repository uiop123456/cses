#include <iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<"1";
		return 0;
	}
	if(n<4){
		cout<<"NO SOLUTION";
		return 0;
	}
	if(n==4){
		cout<<"2 4 1 3";
		return 0;
	}
//  2 4 1 3 
//	1 3 5 2 4 || 1 4 2 5 3
//  1 3 5 2 4 6 || 1 4 2 5 3 6
// maybe it's can be done by dp in a hard way like n queen
	
	int j=1;
	for(int i=0;i<n;i++){
		cout<<j<< " ";
		j+=2;
		if(j>n) j=2;
	}
	return 0;
	
}
