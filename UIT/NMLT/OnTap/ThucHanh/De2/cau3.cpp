#include <iostream>
#include <cmath>
using namespace std;

bool CheckIsPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i != 0)
            return false;
    }
    return true;
}
void Nhap(int a[], int &n)
{

    do
    {
        cin >> n;
    } while (n <= 1 | n >= 100);
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int SumPrime(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if (CheckIsPrime(a[i]))
            s += a[i];
    if (s != 0)
        return s;
    return -1;
}

int timVaXoaX(int a[], int &n, int x)
{
    int check = false;
    for (int i = 0; i < n; i++)
        if (x == a[i])
        {
            n--;
            i--;
            check = true;
            for (int j = i; j < n; j++)
                a[j] = a[j + 1];
        }
    return check ? 1 : -1;
}

int main()
{
    int a[100], n;
    Nhap(a, n);

    // Cau a
    cout << SumPrime(a, n) << endl;

    // Cau b
}