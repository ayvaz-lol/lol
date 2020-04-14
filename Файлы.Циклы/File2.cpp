#include <iostream>
#include <iomanip>  // чтобы работал precision
using namespace std;
int main()
{
    float dx, x, g;

    cout << "Solve function. \nEnter dx: \n ";
    cin >> dx;

    cout << "Enter range \n ";   
    cin >> x;
    cin >> g;

    // заголовок таблицы
    cout << "\tx\t\ty" << std::endl;

    

    cout.precision(5);

    while (x < g) {
        float f = (-0,23 * (x * x)) + x;
        cout << "\t"
            << x
            << "\t\t"
            << f
            << endl;
        x += dx;
    }

    return 0;
}
