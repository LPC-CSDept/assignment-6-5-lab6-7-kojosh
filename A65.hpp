//

#include <iomanip>
#include <iostream>
using namespace std;

void swaptwo(int&, int&);
void swap(int&, int&, int&);

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().
void swap(int &a, int &b, int &c)
{
    string result;
    swaptwo(a, b);
    swaptwo(a, c);

}

// swaptwo() ; to swap two values (a, b) to (b, a)
void swaptwo(int &A, int &B)
{
    int temp = A;
    A = B;
    B = temp;
}
