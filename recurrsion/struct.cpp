#include <iostream>
using namespace std;

struct student{
    string name;
    int age;

void display(){
    cout<<"Name "<<name<<endl;
    cout<<"Age "<<age<<endl;
}
};
int main(){
     student student1;
     student1.name = "Vaibhav";
     student1.age = 23;
     student1.display();

}
