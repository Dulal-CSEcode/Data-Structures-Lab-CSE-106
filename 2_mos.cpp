#include <bits/stdc++.h>
using namespace std;
//2 no
void multi(int a[][2],int b[][2]){
     int  mult[10][10], i, j, k;

   
    
    for(i = 0; i <1; i++)
        for(j = 0; j < 2; j++)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < 1; i++)
        for(j = 0; j <2; j++)
            for(k = 0; k <2; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < 1; i++)
    for(j = 0; j < 2; j++)
    {
        cout << " " << mult[i][j];
         
    }
    cout << "\n";
    
}

int main()
{
   // int e1, e2, e3, e4, e5, e6, e7;
    string a="HI! MY NAME IS MOSTAK";
    cout << a << endl;
    // int size = sizeof(a) / sizeof(a[1]);
    // cout << size << endl;
    int arr[]= {
        8, 9, 0, 13, 25, 14, 1, 13, 5, 9, 19, 13, 15, 19,20,1,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    int A[2][2] = {{1, 2}, {1, 3}};
    cout << "We make 1X2 matrix :\n";
    for (int i = 0; i <n; i++)
    {  
            cout << arr[i]<<"  ";   
        
    }
    int e1[1][2] = {8, 9};
    multi(e1,A);
    int e2[1][2] = {0, 13};
    multi(e2,A);
    int e3[1][2] = {25, 14};
    multi(e3,A);
    int e4[1][2] = {1, 13};
    multi(e4,A);
    int e5[1][2] = {5, 9};
    multi(e5,A);
    int e6[1][2] = {19, 13};
    multi(e6,A);
    int e7[1][2] = {15, 19};
    multi(e7,A);
    int e8[1][2] = {20, 1};
    multi(e8, A);
    int e9[1][2] = {11, 0};
    multi(e9, A);
    return 0;
}