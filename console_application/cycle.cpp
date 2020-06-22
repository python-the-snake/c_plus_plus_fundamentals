// for & while
// в случае с циклами for и while в c++ мы всегда сначала проверяем условие.
// таким образом, сам цикл может не вополниться ни разу,
// но с циклом do-while другая ситуация, он запустится хотя бы один раз, но он реже используется

#include <iostream>
using namespace std;
int main()
{
    int c = 0;
    for(int i=; i<=10; i++) {
        c = c + i;
        cout << c << " ";
    }

    cout << endl;
    int j = 0;
    c = 0;

    while (j <= 10) {
        c = c + i;
        cout << c << " ";
        j++;
    }

    int z = 0;
    c = 0;
    cout << endl;
    do {
       c = c + z;
       cout << c << " ";
       z++;
    } while (z <= 10);

}

// последовательности из результатов абсолютно одинаковы