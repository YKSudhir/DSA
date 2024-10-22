// 2. Car Class:
// Challenge: Create a Car class that simulates the behavior of a vehicle.
// Attributes:
// model: String representing the car model name.
// year: Integer indicating the car's manufacturing year.
// fuelLevel: Double representing the remaining fuel quantity (percentage or liters).
// speed: Integer representing the current speed in kilometers per hour.
// isRunning: Boolean indicating whether the car is currently running.

#include<iostream>
using namespace std;
class car
{
    string model;
    int year;
    int fuellevel;
    int speed;
    bool isrunning;
    
    public:
      void getmodel(string s)
    {
        model=s;
    }
    void getyear(int n)
    {
        year=n;
    }
     void getfuelleve(int b)
    {
        fuellevel=b;
    }
       void getspeed(bool n)
    {
        speed=n;
    }
       void givemodel()
    {
        cout<<model<<endl;
    }
    void giveyear()
    {
        cout<<year<<endl;
    }
     void givefuellevel()
    {
        cout<<fuellevel<<endl;
    }
       void giveisrunning()
    {
        cout<<isrunning<<endl;
    }

};
int main()
{
    car *m1 = new car;
    m1->getmodel("Sudhir");
    m1->getyear(2013232);
    m1->getfuellevel(32132);
    m1->getisrunning(1);
    m1->givemodel();
    m1->giveyear();
    m1->givefuellevel();
    m1->giveisrunning();
}