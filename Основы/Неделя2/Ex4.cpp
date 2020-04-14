#include <iostream>
using namespace std;
float a, b;
double f;
int main()
{
    cout << "Enter a and b\n";
    cin >> a >> b;
    f = (a +4 * b)*(a - 3 * b) + a * a;
    cout << f;
}
