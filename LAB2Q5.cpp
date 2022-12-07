#include <iostream>
using namespace std;
int main()
{
int arr[6] = {2,2,4,3,5,5};
int num = 0;


for(int i = 0;i <6; i++){
        if(arr[i] == NULL){
            continue;
}
for(int j= 0; j<6; j++){
            if(arr[i] == arr[j]){
                num+=1;
            if(i==j){
            continue;
}
            else{
                arr[j] = NULL;
            break;
}
}
}

cout<<arr[i]<<"OCCURS = "<<num<<" TIMES"<<endl;
num =0;

}
 return 0;

}

