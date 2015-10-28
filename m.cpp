#include <iostream>
#include <string>

int main(){

  std::string message;
  
  while(std::getline(std::cin,message)){
    
    std::cout << message << std::endl;
    
  }

}
