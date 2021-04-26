#include <systemc>
#include "Module03.hpp"
int sc_main(int argc, char* argv[])
{
  Module03 f1("F1");

  sc_start(20, sc_core::SC_SEC);
  std::cout<<"Simualtion finished at "<<sc_core::sc_time_stamp() << std::endl;

   return 0;
}
