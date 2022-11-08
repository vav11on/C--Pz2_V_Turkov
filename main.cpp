#include <iostream>
using namespace std;

int main ()
{
    int i = 1; // Ініціалізуємо лічильник циклу
    int sum = 1; // ініціалізуємо лічильник суми
    do { // виконуємо цикл
        i++;
        sum += 1;
    } while (i < 100); // виконується умова.
    cout << "sum=" << sum, cout << "\niteration: " << i;
    return 0;
}