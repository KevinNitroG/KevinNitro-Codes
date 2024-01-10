#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, e, N;
    int n = 1;
    while (n <= N)
    {
        float f = -2022 * x * x + sqrt(23520161 * x + 2022) + 23520161;
        float fphay = -2022 * 2 * (float)23520161 / (2 * sqrt(23520161 * x + 2022));
        float y = f / fphay;
        x = x - y;
        if (abs(y) <= e)
        {
            cout << x;
            return 0;
        }
        ++n;
    }
    cout << x;
    return 0;
}