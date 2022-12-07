#include <iostream>
using namespace std;
int main()
    {
int A [10]={1,2,3,5,4,6,2,3,5,1};
int num;
int x=0;

cout<<"ENTER A NUMBER ";
cin>>num;

for (int i=0;i<10;i++){
if( num==A[i])
{

    x++;
}
}
cout<<"THE NUMBER OF TIMES OCCURS "<<x<<" IN THE ARRAY";
   return 0;
}
