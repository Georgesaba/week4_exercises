#include <iostream>
#include "dimensionalAnalysis.h"

int main()
{
    measures::length len1(0.5);
    measures::length len2(12);

    //dimensionally correct
    measures::length len3 = len1 + len2;
    std::cout << "len3 = " << len3.val << std::endl;

    double t1(5.0);
    measures::time t(5.0);
    //dimensionally incorrect!
    measures::length len4 = len1 * t1;

    measures::speed v = len2 / t;
    measures::mass mass(10);
    //Impossible to tell!
    measures::energy KE = 0.5 * mass * v * v;

    std::cout << "KE = " << KE.val << std::endl;
    
    return 0;
}