#include <iostream>
using namespace std;

int main ()
{
    int i = 1; // ���������� �������� �����
    int sum = 1; // ���������� �������� ����
    do { // �������� ����
        i++;
        sum += 1;
    } while (i < 100); // ���������� �����.
    cout << "sum=" << sum, cout << "\niteration: " << i;
    return 0;
}