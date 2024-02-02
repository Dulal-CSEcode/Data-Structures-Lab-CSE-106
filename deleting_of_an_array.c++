#include<iostream>
using namespace std;
int main (){
    int data,a[100],i;
    int size,pos;
    cout<<"enter the size of the array"<<endl;
    cin>>size;

    cout<<"enter the element of the array "<<endl;
    for ( i=0; i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Here are the array"<<endl;
    for ( i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    if(size>100)
    {
        cout<<"overflow condition"<<endl;
    }
    else {
        cout<<"enter the position where you want to add a new element "<<endl;
        cin>>pos;
        for ( i=pos-1; i<size; i++)
        {
            a[i+1]=a[i];
        }
        size--;
        cout<<"the deleted iteam is "<<a[pos-1]<<endl;
        

    }
    cout<<"the new array is "<<endl;
    for ( i=0;i<size;i++)
    {
        cout<< a[i]<<endl;
    }
    return 0;
}