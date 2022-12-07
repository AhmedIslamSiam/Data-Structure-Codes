#include<bits/stdc++.h>
using namespace std;


class Student{
private:
    int id;
    string name;
    double cgpa;
public:

    Student(){
    }
    Student(int id, string name, double cgpa){
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
    }

    int getId(){
        return this->id;
    }
     string getName(){
        return this->name;
    }

     double getCgpa(){
        return this->cgpa;
    }



};
m.
int main(){

    Student *s1= new Student(100,"Richard",3.5);

        cout<<s1->getId()<<" "<<s1->getName()<<" "<<s1->getCgpa()<<endl;



return 0;
}
