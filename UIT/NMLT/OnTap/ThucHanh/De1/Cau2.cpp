#include <iostream>
using namespace std;

int nhapK(int x, int k, int a[], int &N)
{
    if (k < 0 || k >= N)
        return 0;
    for (int i = N; i > k; --i)
        a[i] = a[i - 1];
    a[k] = x;
    ++N;
    return 1;
}

bool checkIfPrimeTogether(int n, int m)
{
    while (n * m != 0)
    {
        if (m > n)
            m -= n;
        else
            n -= m;
    }
    if (m + n == 1)
        return 1;
    return 0;
}

int main()
{
    // Cau a
    int N;
    do
    {
        cin >> N;
    } while (N < 5 || N > 1000000);
    int a[100];

    bool check = true;
    while (check)
    {
        for (int i = 0; i < N; ++i)
            cin >> a[i];
        for (int i = 0; i < N; ++i)
            if (a[i] <= 0)
                break;
            else
            {
                check = false;
                break;
            }
    }

    // Cau b
    int x, k;
    cin >> k >> x;
    int res = nhapK(x, k, a, N);
    if (res)
    {
        for (int i = 0; i < N; ++i)
            cout << a[i] << " ";
        cout << endl;
    }
    cout << res;
    return 0;

    // Cau c
}