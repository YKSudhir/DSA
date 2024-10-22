// single Iheritance



// #include<iostream>
// using namespace std;
// class Human
// {
//     public:
//     string name;
//     int age;
//     public:
//     Human(string name , int age)
//     {
//         this->name=name;
//         this->age=age;
//     }

//     Human()
//     {
//         cout<<"Hellow Human \n";
//     }
//     void display()
//     {
//         cout<<name<<endl<<age<<endl;
//     }
//     void work()
//     {
//         cout<<" I am working \n";
//     }

// };
// class Student: public Human
// {
//     int roll_number , fees;
//     public:
//      Student( string name , int age ,int roll_number , int fees)
//      {
    
//          this->roll_number=roll_number;
//          this->fees=fees;

//      }
//     // Student()
//     // {
//     //     cout<<"Hellow Student \n";
//     // }
//     void display()
//     {
//         cout<<name<<endl<<age<<endl<<roll_number<<fees<<endl;
//     }
// };
// int main()
// {
//     Student A1(" SUdhir " , 19 , 38490314 , 3724087);
//     A1.display();
    
// }
#include<iostream>
using namespace std;

class Human
{
public:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    Human()
    {
        cout << "Hello Human \n";
    }

    void display()
    {
        cout << name << endl << age << endl;
    }

    void work()
    {
        cout << "I am working \n";
    }
};

class Student : public Human
{
    int roll_number, fees;

public:
    Student(string name, int age, int roll_number, int fees) : Human(name, age)
    {
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << name << endl << age << endl << roll_number << endl << fees << endl;
    }
};

int main()
{
    Student A1("Sudhir", 19, 38490314, 3724087);
    A1.display();

    return 0;
}
