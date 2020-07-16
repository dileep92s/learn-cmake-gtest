#include <iostream>
#include "addnum.hpp"
#include "BClass.hpp"
#include "AClass.hpp"

int main()
{

    using namespace std;
    
    int z = 0;

    cout << "dummy application \n";
    cout << "call addInt(2,3) \n";
    z = addNum(2, 3);
    cout << "result : " << z << " \n";

    BClass<AClass> bObj;
    bObj.sendData(99);

    return 0;
}
