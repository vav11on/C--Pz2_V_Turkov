#include <iostream>
using namespace std;

int main()
{
    int iterations;
    iterations=0;
    int number;
    number = 2;
    bool done;
    done = false;
    while (!done)
    {
        number = number * 2;
        if(number > 64)
            done = true;
        iterations ++;
        cout << " " << number ;
        cout << "\niterations: " << iterations;
    }

    return 0;
}
