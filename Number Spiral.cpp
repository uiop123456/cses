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
			long long middle = maxi * (maxi - 1) + 1;
//			odd row
			if(row%2){
				if(row < col && col%2)
					ans = middle - (row - col);
				else 
					ans = middle - (col - row);	
			}
//			even row
			else if(!(row%2)){
				if(row < col &&  col%2){
					ans = middle - (row - col);
				}else{
					ans = middle - (col - row);
				}
			}
		}
		cout<<ans<<endl;
	}
			
	return 0;
}


/*

#include <iostream> using namespace std; int main() { int n; cin >> n; while(n--) { int row, col; cin >> row >> col; long long ans = 0; if(row == col) { ans = (long long)row * (row - 1) + 1; } else { long long maxi = max(row, col); long long middle = (long long)maxi * maxi; // odd col 1 3 if(col > row && col % 2 == 1) { ans = middle - (row - 1); } // even col 1 4 else if(col > row && col % 2 == 0) { middle = (long long)(col - 1) * (col - 1) + 1; ans = middle + (row - 1); } // odd row else if(row > col && row % 2 == 1) { middle = (long long)(row - 1) * (row - 1) + 1; ans = middle + (col - 1); } // even row else if(row > col && row % 2 == 0) { ans = middle - (col - 1); } } cout << ans << endl; } return 0; }Z

*/
