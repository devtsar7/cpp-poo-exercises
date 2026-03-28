#include <iostream>
int main()
{
   int t[8], a;
   int max, min;
   for (a = 0; a < 8; a++)
   {
      std::cout << "le nombre entier  #" << a + 1 << std::endl;
      std::cin >> t[a];
   }
   max = t[0];
   min = t[0];
   for (a = 1; a < 8; a++)
   {
      if (max < t[a])
         max = t[a];
      if (min > t[a])
         min = t[a];
   }
   std::cout << "la valeur maximal " << max << std::endl;
   std::cout << "la valeur  minimal " << min << std::endl;
    std::cout<<t[5]<<std::endl;
   return 0;
}