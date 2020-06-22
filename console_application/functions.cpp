#include <iostream>
using namespace std;

void sum(int q, int w){
    // ввод локальной переменной c
    int c = q + w;
    // cout << q + w;
    // cout << endl;
    return q + w;
}

int main()
{
    int a = 20, b = 30;

    //sum(a, b);
    //sum(1, 2);
    int m = sum(1, 2);
    cout << m;
}