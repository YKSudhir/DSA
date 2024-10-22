// // // #include<iostream>
// // // using namespace std;
// // // class Person
// // // {   protected:
// // //     string name;
// // //     int age;
// // //     string sex;
// // //     public:
// // //     person(string name , int age ,string sex)
// // //     {
// // //         this->name=name;
// // //         this->age=age;
// // //         this->sex=sex;
// // //     }
// // //     Person()
// // //     {
// // //             cout<<"Welcome"<<endl;

// // //     }
// // // };
// // // class Employee : public Person
// // // {   protected:
// // //     int salery;
// // //     string position;
// // //     public:
// // //     Employee( int salery , string position)
// // //     {
// // //         this->salery=salery;
// // //         this->position=position;
// // //     }
// // //     Employee()
// // //     {
// // //             cout<<"Hello Dear Employee"<<endl;

// // //     }
// // // };
// // // class Manager : public Employee
// // // {   
// // //     protected:
// // //     string department;
// // //     public:
// // //     Manager(string department)
// // //     {
// // //         this->department=department;
        
// // //     }
// // //     Manager()
// // //     {
// // //             cout<<"Hello Manager"<<endl;

// // //     }
// // //     Manager(string name , itn age , string sex , int salery , string position , string department , ): Employee(string department ) , Person( string name , int age , string sex)
// // //     {
// // //     //     this->name=name;
// // //     //     this->age=age;
// // //     //     this->sex=sex;
// // //     //     this->salery=salery;
// // //     //     this->position=position;
// // //         this->department=department;
// // //     }
// // //     void display()
// // //     {
// // //         cout<<name<<endl<<age<<endl<<sex<<endl<<salery<<endl<<position<<department<<endl;

// // //     }
// // // };
// // // int main()
// // // {
// // //     Manager M1("Sudhir", 19 , "Male", 38297 , "HR" , "RND");
// // //     M1.display();
// // //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;

// // class Person {
// // protected:
// //     string name;
// //     int age;
// //     string sex;

// // public:
// //     Person(string name, int age, string sex) {
// //         this->name = name;
// //         this->age = age;
// //         this->sex = sex;
// //     }

// //     Person() {
// //         cout << "Welcome" << endl;
// //     }
// // };

// // class Employee : public Person {
// // protected:
// //     int salary;
// //     string position;

// // public:
// //     Employee(int salary, string position) {
// //         this->salary = salary;
// //         this->position = position;
// //     }

// //     Employee() {
// //         cout << "Hello Dear Employee" << endl;
// //     }
// // };

// // class Manager : public Employee {
// // protected:
// //     string department;

// // public:
// //     Manager(string name, int age, string sex, int salary, string position, string department) : Employee(salary, position), Person(name, age, sex) {
// //         this->department = department;
// //     }

// //     Manager() {
// //         cout << "Hello Manager" << endl;
// //     }

// //     void display() {
// //         cout << name << endl << age << endl << sex << endl << salary << endl << position << endl << department << endl;
// //     }
// // };

// // int main() {
// //     Manager M1("Sudhir", 19, "Male", 38297, "HR", "RND");
// //     M1.display();
// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// class Person {
// protected:
//     string name;
//     int age;
//     string sex;

// public:
//     Person(string name, int age, string sex) {
//         this->name = name;
//         this->age = age;
//         this->sex = sex;
//     }

//     Person() {
//         cout << "Welcome" << endl;
//     }
// };

// class Employee : public Person {
// protected:
//     int salary;
//     string position;

// public:
//     Employee(int salary, string position) {
//         this->salary = salary;
//         this->position = position;
//     }

//     Employee() {
//         cout << "Hello Dear Employee" << endl;
//     }
// };

// class Manager : public Employee {
// protected:
//     string department;

// public:
//     Manager(string name, int age, string sex, int salary, string position, string department) : Employee(salary, position) : Person(name, age, sex) {
//         this->department = department;
//     }

//     Manager() {
//         cout << "Hello Manager" << endl;
//     }

//     void display() {
//         cout << name << endl << age << endl << sex << endl << salary << endl << position << endl << department << endl;
//     }
// };

// int main() {
//     Manager M1("Sudhir", 19, "Male", 38297, "HR", "RND");
//     M1.display();
//     return 0;
// }
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string sex;

public:
    Person(string name, int age, string sex) {
        this->name = name;
        this->age = age;
        this->sex = sex;
    }

    Person() {
        cout << "Welcome" << endl;
    }
};

class Employee : public Person {
protected:
    int salary;
    string position;

public:
    Employee(int salary, string position) {
        this->salary = salary;
        this->position = position;
    }

    Employee() {
        cout << "Hello Dear Employee" << endl;
    }
};

class Manager : public Employee {
protected:
    string department;

public:
    Manager(string name, int age, string sex, int salary, string position, string department)
        : Employee(salary, position), Person(name, age, sex) {
        this->department = department;
    }

    Manager() {
        cout << "Hello Manager" << endl;
    }

    void display() {
        cout << name << endl << age << endl << sex << endl << salary << endl << position << endl << department << endl;
    }
};

int main() {
    Manager M1("Sudhir", 19, "Male", 38297, "HR", "RND");
    M1.display();
    return 0;
}
