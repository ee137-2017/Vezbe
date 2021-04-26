#include <systemc>
#include <iostream>

int sc_main(int argc , char* argv[])
{
   sc_core::sc_time t1(0, sc_core::SC_NS);
  sc_core::sc_time t2(1, sc_core::SC_NS);
 
  sc_core::sc_time delay(4000,sc_core::SC_PS);
   sc_core::sc_time hold(1.2,sc_core::SC_NS);


  
  srand(time(0));

  
  sc_core::sc_time period1(((rand()%9)+1),sc_core::SC_NS);
  sc_core::sc_time period2(((rand()%9)+1), sc_core::SC_NS);
  sc_core::sc_time trajanjeSim = period1+period2;
  std::cout
    <<"Random interval1 : "
    <<period1
    <<std::endl
    <<"Random interval2 : "
    <<period2
    <<std::endl;

  
  for(t1;t1<trajanjeSim;t1+=t2)
    {
      sc_start(1, sc_core::SC_NS);
      std::cout
	<<"Current_sim_time= "
	<< sc_core::sc_time_stamp()
	<< std::endl;
    }

  return 0;

}
