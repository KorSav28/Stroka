#include <iostream>
#include <string>
#include <windows.h>; 
using namespace std;

bool IsKPeriodic(const string & str, int K) {
    int n = str.size();

    if (n % K != 0) {
        return false;
    }

    for (int i = K; i < n; i++) {
        if (str[i] != str[i - K]) {
            return false; 
        }
    }

    return true; 
}

int main() {
    SetConsoleCP(1251);     
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, ""); 
    
    string str;
    int K;
    char cont;
     
   do
    {
        cout << "Введите строку: ";
        cin >> str;

        cout << "Введите число для проверки кратности: ";
        cin >> K;

        if (IsKPeriodic(str, K)) {
            cout << "Строка: " << str << " кратна числу " << K << endl;
        }
        else {
            cout << "Строка: " << str << " не кратна числу " << K << endl;
        }
        cout << "Продолжить? (y/n): ";
        cin >> cont;
   } while (cont == 'y');

    return 0;
}