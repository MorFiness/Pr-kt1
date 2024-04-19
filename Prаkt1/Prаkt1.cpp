#include <iostream>
#include <locale.h>
using namespace std;
double n, n2, n3 = 0;//Объявление переменных

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Вводите число n""\n";//Вывод на консоли
    cin >> n;//Ввод числа n
    n2 = n * (n + 1);//расчет по формуле 2
    for (int j = 1; j < n; j++) {
        n3 += 2 * j;//расчет по формуле 1
    }
    if (n2 = n3)//сравнение 
        cout << "числа равны" << endl;//вывод
    else
        cout << "Числа не равны" << endl;//вывод
}
