   #include <iostream>
     using namespace std;

    int calculateLength(const char *str) {
    int length = 0;
    for( int i=0; str[i]!=NULL;i++)
    {
        length++;
    }
    return length;

    // Calculate the length of string 

   

   }

int main() {
    const char *myString = "Hello,World!";
    cout << "Length of the string: " <<calculateLength(myString) << endl;
    return 0;
  
}
