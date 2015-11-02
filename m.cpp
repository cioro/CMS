#include "cms_message.hpp"
#include "cms_order.hpp"
#include <iostream>
#include <string>

int main(){

  std::string message;
  std::vector<std::string> input;
  while(std::getline(std::cin,message)){
    input = message_parser(message);
    Order m(input);
    m.print();
  }

}
