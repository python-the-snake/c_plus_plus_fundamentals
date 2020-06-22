#include <iostream>
using namespace std;
int main()
{
    int array[10];
    int i;
    array[0] = 2;
        cout << array[0];
    for (int i = 0; i < 10; ++i)
        array[i] = i;
    for (i = 0; i < 10; ++i)
        cout << array[i] << " ";
}
