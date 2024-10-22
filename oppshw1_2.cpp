// 2. Car Class:
// Challenge: Create a Car class that simulates the behavior of a vehicle.
// Attributes:
// model: String representing the car model name.
// year: Integer indicating the car's manufacturing year.
// fuelLevel: Double representing the remaining fuel quantity (percentage or liters).
// speed: Integer representing the current speed in kilometers per hour.
// isRunning: Boolean indicating whether the car is currently running.
// Methods:
// startEngine(): Sets isRunning to true and prints a starting message.
// stopEngine(): Sets isRunning to false and prints a stopping message.
// accelerate(amount): Increases the car's speed by the specified amount (check engine state and fuel level).
// brake(amount): Decreases the car's speed by the specified amount (ensure speed doesn't become negative).
// refuel(amount): Increases the fuel level by the specified amount (check for tank capacity).
// printStatus(): Displays the car's model, speed, fuel level, and running state.
#include<iostream>
using namespace std;
class car{
    string model;
    int year;
    double fuel_level;
    int speed;
    bool is_running;
    public:
    car(string model , int year , double fuel_level , int speed , bool is_running )
    {
        this->model=model;
        this->year=year;
        this->fuel_level=fuel_level;
        this->speed=speed;
        this->is_running=is_running;
    }
    // startEngine(): Sets isRunning to true and prints a starting message.
    void startEngine(bool n)
    {
        if(n==1)
        {
            cout<<model<< " is going to start. "<<endl;
        }
        else{
            cout<<model<<" is in stopped state ."<<endl;
        }
    }
    // accelerate(amount): Increases the car's speed by the specified amount (check engine state and fuel level).
    void accelerate( int amt)
    { 
          if(amt>0)
    {
         this->speed+=amt;
        cout<<" Speed of Engine is increased to :"<< speed<<endl<<" Incresed speed : "<<amt<<endl;
    }
     // brake(amount): Decreases the car's speed by the specified amount (ensure speed doesn't become negative).
        else{
            cout<<" Speed of Engine is decreased to :"<<endl<<" Decresed speed : "<<amt<<speed<<endl;
        }
       
    }
    // refuel(amount): Increases the fuel level by the specified amount (check for tank capacity).
    void refuel( int fuel)
    {
        if(fuel>0)
        {
            this->fuel_level+=fuel;
            cout<<" Your fuel level is now : "<<fuel_level<<endl<<"Increaded Fuel : "<<fuel<<endl;
        }
    }
   // printStatus(): Displays the car's model, speed, fuel level, and running state.
   void printstatus()
   {
    cout<< " Car's model : "<<model<<endl;
    cout<<" Speed : "<<speed<<endl;
    cout<<" Fuel level : "<<fuel_level<<endl;
    cout<<" Running state : "<<is_running<<endl;
   }
    
};
int main()
{
    car C1( "Jaguar" ,1998 , 250 , 90 ,0 );
    car C2( "BMW",1999 ,260 , 100 , 0 );
    C1.printstatus();
    C2.printstatus();
    C1.startEngine(1);
    C2.startEngine(1);
    C1.accelerate(250);
    C2.accelerate(250);
    C1.refuel(100);
    C2.refuel(100);
    return 0;

}