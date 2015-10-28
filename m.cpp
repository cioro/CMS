#include <iostream>
#include <string>
#include "cms_message.h"

int main(){

  std::string message;
  
  while(std::getline(std::cin,message)){
    message_parser(message);
  }

}
