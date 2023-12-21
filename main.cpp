#include <iostream>

using namespace std;

int Add2Values(float, float);

int main()
{
    float x, y;
    cout
        << "-- Add 2 Values --\n"
        << "Enter x Values: ";
    cin >> x;
    cout << "Enter y Value: ";
    cin >> y;

   
    cout <<"The value of x and y is = ";
    
    	


    cout << Add2Values(x, y);

    return 0;
}
int Add2Values(float x, float y)

{
    return x+y;
}
