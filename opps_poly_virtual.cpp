#include<iostream>
using namespace std;
class Animal
{
    public:
    // virtual void speak()
    // {
    //     cout<<"HuHu\n";
    // }
    virtual void speak()=0;
};
class Dog : public Animal
{
    public:
    void speak()
    {
        cout<<"Bark\n";
    }
};
int main()
{
    Animal *p;
    p = new Dog();
    p->speak();
    return 0;
}