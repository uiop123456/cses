#include <iostream>
#include <vector>

using namespace std;

string solve(long long a, long long b) {
   if( (a+b)% 3 == 0 && a <= 2*b && b<=2*a) return "YES";
   return "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << solve(a, b) << "\n";
    }

    return 0;
}