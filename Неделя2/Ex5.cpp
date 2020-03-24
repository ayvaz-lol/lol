#include <iostream>
using namespace std;
int main()
{
    int key = 0;
    int value = 0;
    double value2 = 0;
    cout << "This is a length Converter\n";
    cout << "Enter the action number\n";
    cout << "1.meters in a verst\n" << "2.meters in kilometers\n" << "3.versts in kilometers\n" << "4.versts in meters\n" << "5.kilometers per verst\n" << "6.kilometers in meters\n";
    cin >> key;
    cout << "Now enter the value\n";
    cin >> value;
    if (key == 1)
        value2 = value * 0.00062;

    else
        if (key == 2)
            value2 = value * 0.001;
        else
            if (key == 3)
                value2 = value * 1.07;
            else
                if (key == 4)
                    value2 = value * 1066.8;
                else
                    if (key == 5) {
                        value2 = value * 0.94;
                    }
                    else
                        if (key == 6) {
                            value2 = value * 1000;
                        }
    cout << "Now you will get the desired value\n";
    cout << value2;
};