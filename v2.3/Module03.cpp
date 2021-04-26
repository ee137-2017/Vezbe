#include "Module03.hpp"
#include <cstdlib>
#include <ctime>

using namespace sc_core;
using namespace std;

Module03:: Module03(sc_core::sc_module_name name)
		    
{
  SC_THREAD(fibonaci);
  SC_THREAD(monitor);
  srand(time(NULL));
}

void Module03::fibonaci()
{
  while(1)
    {
     
      //         wait((rand()%90+10), SC_NS);
      ints.clear();
      wait(rand()%90+10,SC_NS);
      counter++;
      ints.push_back(0);
      wait(rand()%90+10, SC_NS);
      counter++;
      ints.push_back(1);
       
      while(ints.size()<64)
	{
	   wait(rand()%90 + 10, sc_core::SC_NS);
	   long int  num=ints[ints.size()-1]+ints[ints.size()-2];
           counter++;
	   ints.push_back(num);
	   
	}
    }
}

void Module03::monitor()
{
  for(;;)
    {
       counter=0;

      wait(1, SC_SEC);
      /*
      while(ints.size() != 0)
	{
	  long int val = ints.front();
	  ints.pop_front();
	  std::cout<< "Number "<< val
		   <<" at time "<< sc_time_stamp()<< " \n";
		   }*/
      std::cout<< counter <<" . at time " << sc_time_stamp()<<" \n";
    }

}

