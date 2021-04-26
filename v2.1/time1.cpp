#include <systemc>
#include <iostream>

int sc_main(int argc , char* argv[])
{
  sc_core::sc_time t1(1, sc_core::SC_NS);
  sc_core::sc_time t2(100, sc_core::SC_NS);

  sc_core::sc_time period(100, sc_core::SC_NS);
  sc_core::sc_time hold(1.2,sc_core::SC_NS);

  srand(time(0));
  
  sc_core::sc_time t3(((rand()%90)+10),sc_core::SC_NS);
  std::cout<<"Pocetni trenutak "
	   <<t3
	   <<std::endl;
 
  // sc_start(90, sc_core::SC_NS);
       
       for( t3; t3<t2; t3+=t1)
	 {
	   sc_start(1, sc_core::SC_NS);
	   std::cout
	     <<"Hello at "
	     << sc_core::sc_time_stamp()
	     << std::endl;
	 }      
    
   return 0;

}
