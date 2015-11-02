#include "cms_order.hpp"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int Order::order_count = 0;

Order::Order(vector<string> message){
  cout << "Inside Order constructor" << endl;
  order_count++; 
  order_id = order_count;
  dealer_id = message[0];
  side = message[2];
  commodity = message[3];
  amount = stoi(message[4]);
  price = stod(message[5]);
}

Order::~Order(){
  cout << "Order destructor" << endl;
}

Order::Order(const Order& cp){
  operator=(cp);
};

Order& Order::operator=(const Order& rv){

  if(this == &rv) return *this;

  order_id = rv.order_id;
  dealer_id = rv.dealer_id;
  side = rv.side;
  commodity = rv.commodity;
  amount = rv.amount;
  price = rv.price;

  return *this;

};

void Order::print() const{
  cout << order_id << "\t"
       << dealer_id << "\t"
       << side 
       << "\t"<< commodity 
       << "\t"<< amount 
       << "\t"<< price
       << endl;
};
void Order::aggress(int quantity){};
