#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool checkTamGiac = false;
    if (a + b > c && b + c > a && c + a > b)
        if (a == b || a == c || c == b)
            if (a == b && b == c)
                cout << "Deu";
            else
                cout << "can gu";
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        cout << "vuong";
    checkTamGiac = true;
    cout << "Khong la tam giac";
    if (checkTamGiac)
    {
        float q = (a + b + c) / 2;
        cout << "Diem tich: " << sqrt(q * (q - a) * (q - b) * (q - c));
    }
    return 0;
}