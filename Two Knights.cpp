//Two Knights
#include <iostream>
using namespace std;

int main(){
	long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long square = i * i;
        long long totalPossible = (square * (square - 1) )/2;
        long long notPossible = 2 * 2 *(i - 1) * (i - 2) ;
        cout<<totalPossible - notPossible<<endl;
    }
    return 0;
}
