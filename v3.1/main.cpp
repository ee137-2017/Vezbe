#include <systemc>
#include "module03.hpp"


int sc_main(int argc, char* argv[])
{
  module03 uut("UUT");

  sc_start(100, sc_core::SC_US);

  std::cout<<" Simualtion finished at " <<sc_core::sc_time_stamp() << " \n";

  return 0;
}
