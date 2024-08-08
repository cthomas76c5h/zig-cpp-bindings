#include <cctype> 
#include <iostream> 
#include <string> 

std::string convertToLowercase(const std::string& str) 
{ 
    std::string result = ""; 
  
    for (char ch : str) { 
        result += tolower(ch); 
    } 
  
    return result; 
} 

extern "C" void doSomeCppThing(void) {
    std::string data = "Hello Word";
    std::string result = convertToLowercase(data);
    std::cout << result << "\n";
}
