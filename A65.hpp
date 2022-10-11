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

int main()
{
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    swap(num1, num2, num3);

    cout << num1 << " " << num2 << " " << num3 << endl;

}