#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

template <typename T>
void Print(T* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

int MinOddIndex(int* a, const int size)
{
    int imin = -1;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 != 0)
            if (imin == -1 || a[i] < a[imin])
                imin = i;
    return imin;
}

template <typename T>
int MinOddIndex(T* a, const int size)
{
    int imin = -1;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 != 0)
            if (imin == -1 || a[i] < a[imin])
                imin = i;
    return imin;
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];

    Create(a, n, -10, 10);
    Print(a, n);

    int i1 = MinOddIndex(a, n);          // звичайна функція
    int i2 = MinOddIndex<int>(a, n);     // шаблон

    if (i1 != -1)
        cout << "min odd = " << a[i1] << ", index = " << i1 << endl;
    else
        cout << "no odd elements" << endl;

    if (i2 != -1)
        cout << "min odd = " << a[i2] << ", index = " << i2 << endl;
    else
        cout << "no odd elements" << endl;

    return 0;
}