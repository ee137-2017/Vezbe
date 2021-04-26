#ifndef MODULE03_H
#define MODULE03_H

#include <systemc>
#include <deque>

SC_MODULE(Module03)
{
 public:
  SC_HAS_PROCESS(Module03);

  Module03(sc_core::sc_module_name name);

  void fibonaci();
  void monitor();

 protected:
  std::deque<int> ints;
  int counter;
 
};

#endif
