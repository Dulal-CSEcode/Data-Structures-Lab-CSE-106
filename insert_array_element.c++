#include<iostream>
using namespace std;
int main(){
    int pos,data,size;
    int a[100];
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter the array element "<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the datat that you want to insert"<<endl;
    cin>>data;
    cout<<"enter the postition of the where you want to insert the new element "<<endl;
    cin>>pos;
    
    for (int i=size-1;i>pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=data;
    size++;

    cout<<"the new array after inserting is "<<endl;
    for ( int i=0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;
    
}
