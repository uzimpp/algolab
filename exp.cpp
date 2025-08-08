#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if ((i + 1) % 4 == 0)
            k *= 2;
        ans += k;
    }
    cout << ans << endl;
}
