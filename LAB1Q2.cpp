#include <iostream>
using namespace std;

int main(){
    int a[10];

    for (int i=0;i<10;i++){
        cout<<"Please Enter a number- ";
        cin>>a[i];

            if (a[i]%2==0){
            cout<<a[i]<<" is Even"<<endl;
            }
            else{
            cout<<a[i]<<" is Odd"<<endl;

            }
    }
return 0;
}
