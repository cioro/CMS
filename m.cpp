#include <iostream>
#include <string>
#include "cms_message.h"

int main(){

  std::string message;
  std::vector<std::string> input;
  while(std::getline(std::cin,message)){
    input = message_parser(message);
  }

}
