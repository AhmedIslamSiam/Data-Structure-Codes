
#include <iostream>
using namespace std;
int main()
    {
int array1[5];
int array2[4];
int array3[4];

int z=0;
int n=0;
int y;

cout<<"PLEASE ENTER ARRAY1 "<<endl;
for(int i=0; i<5; i++)
      cin>>array1[i];

cout<<"PLEASE ENTER ARRAY 2 "<<endl;

for(int j=0; j<4; j++)
      cin>>array2[j];

for(int i=0; i<5; i++)
    {
for(int j=0; j<4; j++)
    {
         if(array1[i]==array2[j])
    {
            y= 0;
for(int w=0; w<z; w++)
    {
        if(array1[i]==array3[w])
                y++;
}
            if(y==0)
    {
        array3[z] = array1[i];
               z++;
               n=1;
}
}
}
}
   if(n==0){
cout<<"NO COMMON ELEMENTS FOUND";
}
   for(int i=0; i<z; i++)
      cout<<array3[i];
   return 0;
}
