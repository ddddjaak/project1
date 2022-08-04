#include <iostream>
#include <gather.h>
using namespace std;
int count;
int main()
{
   int i;
   count = 5;
   i = g_max(1,2);
   write_extern();
   std::cout << "Max value is : "<< i << endl;
}