#include <iostream>

using namespace std;

int main()
{
    int a[5];
cout <<"PLEASE ENTER 1ST ARRY"<<endl;
for (int x=0;x<5;x++)
{
    cin>>a[x];
}
cout <<"PLEASE ENTER 2ND ARRY"<<endl;
int b[4];
for (int y=0;y<4;y++){

    cin>>b[y];
}
cout<<endl;
cout <<"THE ARRY TOGETHER ";
for (int i=0;i<5;i++){
    cout<<a[i];
}

for (int j=0;j<4;j++){
    cout<<b[j];
}
    return 0;
}
