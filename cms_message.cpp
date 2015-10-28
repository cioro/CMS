#include "cms_message.h"
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;
vector<string> message_parser(string message){
   
  istringstream iss(message);
  vector<string> tokens;
  copy(istream_iterator<string>(iss),
     istream_iterator<string>(),
     back_inserter(tokens));
  return tokens;
}
