#include "module03.hpp"
#include <cstdlib>
#include <ctime>

using namespace sc_core;
using namespace std;

module03::module03(sc_core::sc_module_name name)
{
  SC_THREAD(fibonaci);
  SC_THREAD(monitor);
  srand(time(NULL));
}

void module03::fibonaci()
{
  while(1)
    {
      ints.clear();
      wait(rand()%90+10,SC_NS);
      counter++;
      ints.push_back(0);
      wait(rand()%90+10,SC_NS);
      counter++;
      ints.push_back(1);

      while(ints.size()<64)
	{
	  wait(rand()%90+10,SC_NS);
	  long int vr = ints[ints.size()-1] + ints[ints.size()-2];
	  e1.notify();
	  ints.push_back(vr);
	}
    }
}

void module03::monitor()
{
  for(;;)
    {
       counter = 0;
      wait(e1);
      wait(5,SC_NS);
      //counter = 0;
      cout<< counter << ". at  " <<sc_time_stamp()<< "\n"; 

    }

}
