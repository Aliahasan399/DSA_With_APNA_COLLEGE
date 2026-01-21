#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    float Radius;
    cout << "Enter Radius of a Circle" << endl;
    cin >> Radius;
    float Area = PI * Radius * Radius;
    cout << "The area of a Circle " << Area << endl;
}