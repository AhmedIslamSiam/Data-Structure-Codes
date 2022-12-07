#include <iostream>
using namespace std;
int main()
{
    int a[]={12,32,43,1,54,53,15,64,3,13};

    cout<<"The Original Array is: "<<endl;
    for(int i=0; i<10; i++)
        cout<<a[i]<<" ";
        cout<<endl;
    cout<<endl<<"The Reverse of Given Array is: "<<endl;
    for(int i=10-1; i>=0; i--)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
