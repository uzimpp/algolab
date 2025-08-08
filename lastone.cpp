#include <iostream>
using namespace std;

// s: start index
// n: number of people
// k: step

int lastone(int s, int n, int k)
{
    if (n == 1)
        return 1;
    return (lastone(s, n - 1, k) + k - 1) % n + 1;
}

int main(void)
{
    int n, k;
    cin >> n >> k;
    cout << lastone(0, n, k) << endl;
}
