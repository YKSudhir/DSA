#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    string grades;
  
};
int main(){
    student s1;
    s1.name="Sudhir";
    s1.age=19;
    s1.grades="A";
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.grades<<endl;

}
   