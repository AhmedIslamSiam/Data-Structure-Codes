#include <bits/stdc++.h>
using namespace std;

int main(){

    int s,e;

    cout<<"starting value: ";
    cin>>s;

   cout<<"ending value: ";
    cin>>e;

    cout << "Odd numbers in the range: ";
    for(int i=s;i<=e;i++){
         if(i%2!=0){
             cout<<i<<" ";
         }
    }
    cout<<endl;
        cout << "even numbers in the range: ";
    for(int i=s;i<=e;i++){
         if(i%2==0){
             cout<<i<<" ";
         }
    }

    return 0;
}

