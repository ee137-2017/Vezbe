#ifndef MODULE03_H
#define MODULE03_H

#include <systemc>
#include <deque>

SC_MODULE(module03)
{
 public:
  SC_HAS_PROCESS(module03);

  module03(sc_core::sc_module_name name);

  sc_core::sc_event e1;

  void fibonaci();
  void monitor();

 protected:
  std::deque<long int> ints;
  int counter;
  
  

};
#endif
