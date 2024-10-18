#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int a,b, res = 0, ans =0;
    while(n--) {
        cin >> a >> b;
        res = res - a;
        res = res + b;
        if(res > ans) {
            ans = res;
        }
    }

    cout << ans << endl;

    return 0;
}