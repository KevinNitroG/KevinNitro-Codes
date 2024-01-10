#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string var;
    getline(cin, var);
    int n;
    cin >> n;
    int len = var.length();
    n = n % len;
    for (int i = 0; i < n; ++i)
    {
        char temp_character = var[len - 1];
        for (int j = len - 1; j > 0; --j)
            var[j] = var[j - 1];
        var[0] = temp_character;
    }
    cout << var;
    return 0;
}
