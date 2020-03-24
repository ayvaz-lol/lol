#include <iostream>
using namespace std;
int main()
{
    int F, G, H;
    int max;
    cout << "This program will select the largest number from the three numbers\n";
    cout << "Enter first number\n";
    cin >> F;
    cout << "Enter second number\n";
    cin >> G;
    cout << "Enter third number\n";
    cin >> H;
    if ((F > G) && (F > H)) 
        max = F;
    else
        if ((G > F) && (G > H))
            max = G;
        else
            if ((H > F) && (H > G))
                max = H;
    cout << max;


}
