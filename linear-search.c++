#include<iostream>
using namespace std;
int main ()
{
    int a[100],i;
    int size;
    int data;
    int flag=0;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter the array element  "<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the array data  "<<endl;
    cin>>data;

    for (int i=0;i<size;i++)
       
      {
        if (a[i]==data)
        {
        cout<<"data is found at index "<<a[i]<<endl;
        flag=1;
        }
      }
      if (flag==0)
      {
        cout<<"the data is not in the array "<<endl;
      }
      return 0;
}