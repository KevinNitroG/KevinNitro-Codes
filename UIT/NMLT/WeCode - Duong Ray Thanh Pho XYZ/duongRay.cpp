#include <iostream>
using namespace std;

bool check(char a[][2])
{
    return (a[0][0] == a[0][1] && a[0][0] == '#') || (a[1][0] == a[1][1] && a[1][0] == '#') || (a[0][0] == a[1][0] && a[0][0] == '#') || (a[1][0] == a[1][1] && a[1][0] == '#');
}

int main()
{
    char a[2][2];
    cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];
    cout << (check(a) ? "Yes" : "No");
}