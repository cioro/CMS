#include "cms_message.h"
#include <string>
#include <iterator>

void message_parser(std::string message){
  std::string::iterator it = message.begin();
  for(it = message.begin(); it != message.end(); ++it){
    
    std::string::iterator it_word;
    for(it_word = it; *it_word != ' ' && *it_word != '\n'; it_word++){
      std::cout << *it_word;
    }
    std::cout << "\n";
    std::advance(it, std::distance(it,it_word));//Move it to where it_word is.
  }
  std::cout << "\n";
  //std::cout << message << std::endl;
}
