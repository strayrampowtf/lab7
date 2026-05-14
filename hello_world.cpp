#include <iostream>
#include <string>

// Entry point of the program
int main(){
    std::string name;
    // Read username from standard input
    std::cin >> name;
    // Print greeting message
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
