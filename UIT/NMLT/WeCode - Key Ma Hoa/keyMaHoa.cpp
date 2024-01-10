#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> primeFactors(int n)
{
    vector<int> v;
    if (n % 2 == 0)
    {
        v.push_back(2);
        while (n % 2 == 0)
            n = n / 2;
    }
    for (int i = 3; i <= n; i = i + 2)
        if (n % i == 0)
        {
            v.push_back(i);
            while (n % i == 0)
                n = n / i;
        }
    return v;
}

bool checkSoDacBiet(int n)
{
    if (n < 1)
        return false;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i)
        if (n % (i * i) == 0)
            return false;
    return true;
}

bool checkTichSoDacBiet(int n, int m)
{
    vector<int> v1 = primeFactors(n);
    vector<int> v2 = primeFactors(m);
    int v1Size = v1.size();
    int v2Size = v2.size();
    for (int i = 0; i < v1Size; ++i)
        for (int j = 0; j < v2Size; ++j)
        {
            if (v1[i] == v2[j])
                return false;
        }
    return true;
}

int main()
{
    int a;
    int b;
    cin >> a >> b;
    vector<int> v;
    for (int i = a; i <= b; ++i)
        if (checkSoDacBiet(i))
            v.push_back(i);
    int res = 0;
    int size = v.size();
    for (int i = 0; i < size - 1; ++i)
        for (int j = i + 1; j < size; ++j)
            if (checkTichSoDacBiet(v[i], v[j]))
                ++res;
    cout << res;
    return 0;
}