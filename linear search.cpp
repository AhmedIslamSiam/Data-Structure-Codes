#include<bits/stdc++.h>
using namespace std;


int main(){

int a[]={1,25,36,45,74,85,25,49,57};
int data;
int pos=-1;
cout<<"enter a data : ";
cin>>data;
cout<<endl;

    for (int i=0;i<10;i++){
        if(a[i]==data){
            pos= i+1;
            break;
        }
    }
    if(pos==-1){
        cout<<"item not found!";
    }
    else{
        cout<<"value found at "<<pos<<"th position";
    }
    cout<<endl;
}
