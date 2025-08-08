#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int ans = 0;
    bool skip = false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (skip)
        {
            skip = false;
            continue;
        }
        if (arr[i] >= 1000)
        {
            ans += 1000;
            skip = true;
        }
        else
            ans += arr[i];
    }
    cout << ans << endl;
}
