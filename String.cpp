#include <iostream>

int main()
{
    std::string strValue = "workspace";

    int indexPos = 3;

    // Remove character from string at given index position
    strValue.erase(indexPos, 1);

    std::cout<<strValue << std::endl;


    return 0;
}