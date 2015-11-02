#include "cms_message.hpp"
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;
vector<string> message_parser(string message){
 vector<string> tokens; 
 if(message.size() < (255*sizeof(char))){
   istringstream iss(message);
   copy(istream_iterator<string>(iss),
	istream_iterator<string>(),
	back_inserter(tokens));
   return tokens;
 }else{
   cout << "INVALID_MESSAGE\n";
   return tokens;
 }
}

//This needs to be a member function of market place class. 
void message_processing(vector<string> input){
  //cases:
  //Invalid message
  //Post-->this_session.post(input)
  //Revoke-->this_session.revoke(input)
  //Aggress-->this_session.aggress(input)
  //Check-->this_session.check(input)
  //List-->this_session.list(input)
}
