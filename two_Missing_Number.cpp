#include <iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	//I've to just convert the sum into long long format
	long long sum = static_cast<long long>(n) * (n + 1) / 2;
	long long j=0;
	n-=1;
	while(n--){
		cin>>j;
		sum -= j;
	}
	cout<<sum<<" ";
	return 0;
}
