// #include<iostream>
// using namespace std;
// class customer 
// {
//     string name;
//     int *bal;

//     customer(string name , int bal)
// {
//     this->name=name;
//     bal = new int;
//     *bal = bal;
// }
// ~customer()
// {
//     cout<<"name";
// }
// display()
// {
//     cout<<name<<" "<<bal<<" "<<endl;
// }
// };
// int main()
// {
//     customer A1("Sudhir", 131232131);
//     A1.display();


// }

#include <iostream>
using namespace std;

class Customer 
{
private:
    string name;
    int *bal;

public:
    Customer(string name, int bal)
    {
        this->name = name;
        this->bal = new int; // Allocate memory for the balance
        *(this->bal) = bal; // Initialize the balance
    }

    ~Customer()
    {
        delete bal; // Deallocate memory for the balance when the object is destroyed
        cout << "Destructor called for " << name << endl;
    }

    void display()
    {
        cout << name << " " << *bal << " " << endl; // Access the value of the balance using '*bal'
    }
};

int main()
{
    Customer A1("Sudhir", 131232131);
    A1.display();

    return 0; // Added return statement to indicate successful execution
}
