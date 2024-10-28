#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int row,col;
		cin>>row>>col;
		long long ans=0;
		
		if(row==col){
			ans= row * (row - 1) + 1;
		}
		else{
			long long maxi = max(row,col);
//			odd col 1,3 2,3 3,3
			if(col%2 && row<col){
				long long middle = maxi * maxi;
				ans = middle - row +1;
			}
//			even col
			else if(col%2 == 0 && row<col){
				long long middle = (long long)( col - 1) * (col -1);
				ans = middle + row;
				
			}
//			odd row
			else if(row%2 && row>col){
				long long middle = (long long)(maxi - 1) * (maxi -1);
				ans = middle + col;
			}
			else if(row%2 == 0 && row>col){
				long long middle = maxi*maxi;
				ans = middle - col + 1;
			}
		}
			
		cout<<ans<<endl;
	}
			
	return 0;
}
