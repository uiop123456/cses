#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 3) {
        cout << "NO" << endl;
        return 0;
    }
    vector<int> ans1, ans2;
    if (n % 4 == 0) {
        cout << "YES" << endl;
        int round = 0;
        while (n) {
            ans1.push_back(1 + 4 * round);
            ans1.push_back(4 + 4 * round);
            ans2.push_back(2 + 4 * round);
            ans2.push_back(3 + 4 * round);
            n -= 4;
            round++;
        }
        cout << ans1.size() << endl;
        for (std::vector<int>::size_type i = 0; i < ans1.size(); i++) {
            cout << ans1[i] << " ";
        }
        cout << endl << ans2.size() << endl;
        for (std::vector<int>::size_type i = 0; i < ans2.size(); i++) {
            cout << ans2[i] << " ";
        }
    } else if (n % 4 == 3) {
        cout << "YES" << endl;
        ans1.push_back(1);
        ans1.push_back(2);
        ans2.push_back(3);
        n -= 3;
        int round = 0;
        while (n) {
            ans1.push_back(4 + 4 * round);
            ans1.push_back(7 + 4 * round);
            ans2.push_back(5 + 4 * round);
            ans2.push_back(6 + 4 * round);
            n -= 4;
            round++;
        }
        cout << ans1.size() << endl;
        for (std::vector<int>::size_type i = 0; i < ans1.size(); i++) {
            cout << ans1[i] << " ";
        }
        cout << endl << ans2.size() << endl;
        for (std::vector<int>::size_type i = 0; i < ans2.size(); i++) {
            cout << ans2[i] << " ";
        }
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
