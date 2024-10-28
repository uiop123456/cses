#include <iostream>
#include <vector>

using namespace std;

string solve(long long a, long long b) {
    if (a == 0 && b == 0) {
        return "YES";
    }
    if(a<0 || b<0) return "NO";

// jodi left left left recursion er last condition e yes pawa jai then yes
    if(a>=2 && b>=1){
        string left = solve(a-2,b-1);
        if(left == "YES") return "YES";
    }

// jodi right right right recursion er last condition e yes pawa jai then yes
    if(a>=1 && b>=2){
        string right = solve(a-1,b-2);
        if(right == "YES") return "YES";
    }
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