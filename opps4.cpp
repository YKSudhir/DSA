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
    student *s= new student ;
    (*s).name="Sudhir";
    (*s).age=19;
    (*s).grades="A+";
    // cout<<(*s).name<<endl;
    // cout<<(*s).age<<endl;
    // cout<<(*s).grades<<endl;
    cout<<s->name<<endl;
        cout<<s->age<<endl;
            cout<<s->grades<<endl;


}
   