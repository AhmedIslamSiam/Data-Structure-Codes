#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,3,1,6},z=0;

for(int i=0; i<6;i++){
for(int j=0;j<6;j++){
            if(j==i){
        continue;
            }
            else if(arr[i]==arr[j]){
        arr[j]=0;
                z=1;
}
}
}
           if(z==1){
for(int i=0;i<6;i++){
            if(arr[i]!=0){
        cout<<arr[i];
}
}
}
    else{
            cout<<"ARRAY ALREADY UNIQUE";
}

return 0;
}
