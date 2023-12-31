#include <iostream>
using namespace std;

int solve(int);

int main()
{
    int N;
    cin >> N;

    int array[99];

    int number;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        array[i] = number;
    }

    for (int i = 0; i < N; i++)
        cout << solve(array[i]) << endl;

    return 0;
}

int solve(int n)
{
    float x = n + 1, y = n + 1;
    int count = 0;

    while (y >= n + 1)
    {
        if (x != n)
        {
            y = (n * x) / (x - n);
            if (y == int(y))
                count++;
        }
        x++;
    }

    return count;
}