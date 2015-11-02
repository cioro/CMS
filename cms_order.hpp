#ifndef CMS_ORDER_H
#define CMS_ORDER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Order{
private:
  static int order_count;
  int order_id;
  string dealer_id;
  string side;
  string commodity;
  int amount;
  double price;
  Order();
public:
  Order(vector<string> message);
  ~Order();
  Order(const Order& cp);
  Order& operator=(const Order& rv);
  void print() const;
  void aggress(int quantity);
};



#endif
