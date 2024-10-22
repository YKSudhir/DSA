#include<iostream>
using namespace std;
class student
{
    //public private protected
    string name;
    int age;
    string grades;
    int roll;
    public:
    void setname(string s)
    {
        name=s;
    }
     void setage(int x)
    {
        age=x;
    }
     void setgrades(string a)
    {
        grades=a;
    }
    void setroll(int r)
    {
        roll=r;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }
      int getroll()
    {
        return roll;
    }
     
  
};
int main(){
    student s1;
   s1.setname("Rohit");
   s1.setage(19);
   s1.setgrades("A");
   s1.setroll(12);
   s1.getname();
   s1.getage();
   cout<<s1.getroll();

}
   