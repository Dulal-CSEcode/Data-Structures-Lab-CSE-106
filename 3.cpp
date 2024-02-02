#include <iostream>
using namespace std;
int main()
{
    float x, y;
    int total_f = 110, total_s = 120;
    /*
      4x + 4.6y = 110;
      4.5x + 4.8y = 120;

     // */
    float a[2][3] = {{4, 4.6, 110},
                     {4.5, 4.8, 120}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "          " << a[i][j];
        }
        cout << "\n";
    }

    cout << "\n\n\n";
    float b[2][3] = {{4, 4.6, 110},
                     {0, 1.5, 15}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "         " << b[i][j];
        }
        cout << "\n";
    }
    // Now
    float n1 = 1.5, n2 = 4, n3 = 4.6, n4 = 110, n5 = 110;
    y = 15 / n1;
    cout << "  Y value is =" << y << endl;
    x = (n5 - (n3 * y)) / n2;
    cout << "  X value is =" << x << endl;
    cout << " In this Group Children is " << y << endl
         << " In this Group Adult is " << x << endl;
}