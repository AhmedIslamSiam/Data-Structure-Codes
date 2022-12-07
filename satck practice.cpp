#include<bits/stdc++.h>
using namespace std;

void display_stack(stack<string>st);
int main(){
    stack<string> colors;

    colors.push("Red");
    colors.push("Green");
    colors.push("Yellow");

    cout<<"initial Stack : ";
    display_stack(colors);

    colors.pop();

    cout<<"Final Stack : ";
    display_stack(colors);

    return 0;
    }
void display_stack(stack<string>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    }

