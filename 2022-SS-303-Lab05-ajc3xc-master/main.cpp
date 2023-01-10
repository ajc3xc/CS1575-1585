#include <iostream>
#include "funcs.h"
#include "TrianglePrinter.h"

using namespace std;

int main()
{
    TrianglePrinter t;

    for(unsigned int i = 0; i < 10; i++)
    {
        cout << factorial(i) << endl;
        cout<<combination(3,2)<<endl;
        cout<<endl;
    }

    for(int i = 0; i<7; i++)
    {
        for(int a = 0; a <= i; a++) t.add(combination(i,a));
        if(i<6) t.newrow(); //only add 6 more rows.
    }
    t.print();

    return 0;
}
