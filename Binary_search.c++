#include<iostream>
using namespace std;
int main()
{
    int first,last ,mid;
    int a[100];
    int size;
    int flag=0;
    int data;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter the array element"<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<"array ["<<i<<"]= " ;
        cin>>a[i];
    }
    first=0;
    last=size-1;
    cout<<"enter the  element that you want to searh in the array "<<endl;
    cin>>data;
    while(first<=last)
    {
     mid=(first+last)/2;
     if (a[mid]==data)
     {
        cout<<"the data is found at index "<<a[mid]<<endl;
        flag=1;
        break;//this break statement is really important if you donot use it then this loop will be in infinite loop .
     }   
    else if(data<a[mid])
    {
        last=mid-1;
    }
    else
    {
        first=mid+1;
    }
    }
    if (flag==0)
    {
        cout<<"there is no such data "<<endl;
    }
   
    return 0;
}