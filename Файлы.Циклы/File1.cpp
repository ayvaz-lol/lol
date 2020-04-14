//задание вывести на экран Н строк из нулей, причем количество нулей в каждой строке равно номеру строки. Количество строк Н вводит пользователь
#include <iostream>
using namespace std;
int main()
{
    int f;
    cout << "Enter num of lines \n";
    cin >> f;
    for (int i = 1; i < f; i++) {
        for (int j = 0; j < i; j++)
            cout << 0;
        cout << endl;
    }

    cout << endl;

    getchar();  
    getchar();  
    return 0;
}
