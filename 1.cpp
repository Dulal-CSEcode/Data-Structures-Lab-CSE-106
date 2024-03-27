#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    float a0, a1, a2;
    int a[3][4] = {{1, 1, 1, 4}, {1, 4, 16, 73}, {1, 5, 25, 10}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "   " << a[i][j];
        }
        cout << endl;
    }
    cout << "\n\n";

    int c[3][4] = {{1, 1, 1, 4}, {0, 3, 15, 69}, {0, 4, 24, 6}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "   " << c[i][j];
        }
        cout << endl;
    }

    cout << "\n\n";

    int b[3][4] = {{1, 1, 1, 4}, {0, 3, 15, 69}, {0, 0, -12, 258}};

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "   " << b[i][j];
        }
        cout << endl;
    }
    cout << "\n\n";
    int n1 = 258, n2 = -12, n3 = 3, n4 = 15, n5 = 5;
    a2 = n1 / n2;
    cout << " Value of a2 is =" << a2 << endl;

    a1 = (69 - (15 * a2)) / 3;
    cout << " Value of a1 is =" << a1 << endl;
    a0 = 4 - a2 - a1;
    cout << " Value of a0 is=" << a0 << endl;

    return 0;
}