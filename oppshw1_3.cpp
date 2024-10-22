// // 3. Laptop Class:
// // Challenge: Design a Laptop class that represents a portable computer system.
// // Attributes:
// // brand: String representing the laptop brand and model.
// // screenSize: Double indicating the screen size in inches.
// // processor: String specifying the processor type and speed.
// // ram: Integer representing the available RAM capacity in gigabytes.
// // storage: Integer representing the storage capacity in gigabytes.
// // batteryLevel: Double showing the remaining battery percentage.
// // isOn: Boolean indicating whether the laptop is currently powered on.
// // Methods:
// // powerOn(): Sets isOn to true and prints a startup message.
// // powerOff(): Sets isOn to false and prints a shutdown message.
// // openApps(numApps): Simulates opening a specified number of applications, potentially impacting battery life.
// // closeApps(numApps): Simulates closing applications, restoring battery life.
// // charge(amount): Increases the battery level by the specified amount (check for maximum capacity).
// // printSpecs(): Displays the laptop's brand, screen size, processor, RAM, storage, and battery level.
// #include<iostream>
// using namespace std;
// class Laptop{
//     string brand;
//     string screenshot;
//     string processor;
//     string ram;
//     string battery;
//     bool is_on;
//     public:
//     Laptop( string brand , string screenshot , string processor , string ram , string battery , bool is_on)
//     {
//         this->brand=brand;
//         this->screenshot=screenshot;
//         this->processor=processor;
//         this->ram=ram;
//         this->battery=battery;
//         this->is_on=is_on;
//     }
// // powerOn(): Sets isOn to true and prints a startup message.
//    void is_on(bool is_on)
//    {
//     if(is_bool==1)
//     {
//         cout<<" Welcome to Windows"<<end;
//     }
//    }
// // openApps(numApps): Simulates opening a specified number of applications, potentially impacting battery life.
//     void openapps( int num)
//     {
//         if( num >21983296487)
//         {
//             cout<<" You are opened many application is may affect your battery life"<<endl;
//         }
//         else
//         {
//             cout<<"Run few application less than 21983296487 is good for your battery life"<<endl;
//         }
//     }
// // charge(amount): Increases the battery level by the specified amount (check for maximum capacity).



// };
#include <iostream>
#include <string>

class Laptop {
private:
    std::string brand;
    double screenSize;
    std::string processor;
    int ram;
    int storage;
    double batteryLevel;
    bool isOn;

public:
    // Constructor
    Laptop(const std::string& laptopBrand, double screen, const std::string& proc, int ramCapacity, int storageCapacity)
        : brand(laptopBrand), screenSize(screen), processor(proc), ram(ramCapacity), storage(storageCapacity), batteryLevel(100.0), isOn(false) {}

    // Power on the laptop
    void powerOn() {
        if (!isOn) {
            isOn = true;
            std::cout << "Laptop is powering on. Welcome!" << std::endl;
        } else {
            std::cout << "Laptop is already powered on." << std::endl;
        }
    }

    // Power off the laptop
    void powerOff() {
        if (isOn) {
            isOn = false;
            std::cout << "Laptop is powering off. Goodbye!" << std::endl;
        } else {
            std::cout << "Laptop is already powered off." << std::endl;
        }
    }

    // Open applications and simulate battery usage
    void openApps(int numApps) {
        if (isOn) {
            // Simulate opening apps and reduce battery level
            batteryLevel -= numApps * 5.0;
            std::cout << "Opened " << numApps << " applications. Battery level now: " << batteryLevel << "%" << std::endl;
        } else {
            std::cout << "Laptop is not powered on. Cannot open applications." << std::endl;
        }
    }

    // Close applications and restore battery life
    void closeApps(int numApps) {
        if (isOn) {
            // Simulate closing apps and restore battery level
            batteryLevel += numApps * 3.0;
            // Ensure battery level does not exceed 100%
            batteryLevel = std::min(batteryLevel, 100.0);
            std::cout << "Closed " << numApps << " applications. Battery level now: " << batteryLevel << "%" << std::endl;
        } else {
            std::cout << "Laptop is not powered on. Cannot close applications." << std::endl;
        }
    }

    // Charge the laptop battery
    void charge(double amount) {
        if (isOn) {
            // Simulate charging and ensure battery level does not exceed 100%
            batteryLevel += amount;
            batteryLevel = std::min(batteryLevel, 100.0);
            std::cout << "Charging. Battery level now: " << batteryLevel << "%" << std::endl;
        } else {
            std::cout << "Laptop is not powered on. Cannot charge." << std::endl;
        }
    }

    // Display laptop specifications
    void printSpecs() const {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Screen Size: " << screenSize << " inches" << std::endl;
        std::cout << "Processor: " << processor << std::endl;
        std::cout << "RAM: " << ram << " GB" << std::endl;
        std::cout << "Storage: " << storage << " GB" << std::endl;
        std::cout << "Battery Level: " << batteryLevel << "%" << std::endl;
    }
};

int main() {
    // Create a Laptop object
    Laptop myLaptop("ExampleBrand ModelX", 15.6, "Intel Core i5", 8, 512);

    // Demonstrate laptop operations
    myLaptop.powerOn();
    myLaptop.openApps(3);
    myLaptop.charge(20.0);
    myLaptop.closeApps(2);
    myLaptop.printSpecs();
    myLaptop.powerOff();

    return 0;
}
