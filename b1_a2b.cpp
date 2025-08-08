#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    int t = 0;
    for (int i = a; i <= b; i++)
        t += i;
    cout << t << endl;
    return 0;
}
