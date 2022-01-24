#include <iostream>
/*
Задание 14

1. Даны целые положительные числа A и B (A < B). Вывести все целые числа от A до B включительно; при этом каждое число должно выводиться столько раз, каково его значение (например, число 3 выводится 3 раза).
2. Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Не используя операции умножения и деления, найти длину незанятой части отрезка A.
3. Дано целое число N (> 1). Вывести наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N, и саму эту сумму.
4. Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). По данному P определить, через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев K (целое число) и итоговый размер вклада S (вещественное число).
5. Даны целые положительные числа A и B. Найти их наибольший общий делитель (НОД), используя алгоритм Евклида
6. Дано целое число N (> 1), являющееся числом Фибоначчи: N = FK. Найти целое число K — порядковый номер числа Фибоначчи N.


Каждая задача решена в отдельном классе
*/


class z1
{
private:
    int aa, bb;

public:

    z1(int g = 0, int h = 3) {
        aa = g;
        bb = h;
    }

    void PowerA3(int a, int b) {
        for (int i = a; i <= b; i++) {
            for (int j = 0; j < i; j++) {
                std::cout << i << ' ';
            }
            std::cout << "\n";
        }
    }


    void test() {
        std::cout << "Задача 1\n";
        PowerA3(aa, bb);
    }
};

class z2
{
private:
    double a, b;

public:

    z2(double aa = 10, double bb = 3) {
        a = aa;
        b = bb;
    }

    int Sign(int x, int y) {
        while (x > y) {
            x -= y;
        }
        return x;
    }


    void test() {
        std::cout << "Задача 2\n";
        std::cout << "( " << a << ' ' << b << " ) Свободное место = " << Sign(a, b)<< "\n";
    }
};

class z3
{
private:
    int a;

public:

    z3(int aa = 10) {
        a = aa;
    }

    void test() {
        std::cout << "Задача 3\n";
        int s = 0, k = 0;
        while (s < a) {
            k++;
            s += k;
        }
        std::cout << s << " - сумма. " << k << " - число К" << "\n";
    }
};

class z4
{
private:
    double a;

public:

    z4(double aa = 9.0) {
        a = aa;
    }

    void test() {
        std::cout << "Задача 3\n";
        int k = 0;
        double s = 1000;
        while (s < 1100) {
            k++;
            s = s * (1 + a/100.0);
        }
        std::cout << s << " - сумма. " << k << " месяцев" << "\n";
    }
};

class z5
{
private:
    int n, m;

public:

    z5(int aa = 35, int bb = 25) {
        n = aa;
        m = bb;
    }



    void test() {
        std::cout << "Задача 5\n";
        while (m != n && m > 0 && n > 0) {
            if (n > m) {
                n = n - m;
            }
            else {
                m = m - n;
            }
        }
        std::cout << m << " НОД\n";
    }
};

class z6
{
private:
    int n;

public:

    z6(int aa = 35) {
        n = aa;
    }

    void test() {
        std::cout << "Задача 5\n";
        int k = 3, h = 1, p = 1;
        while (h + p < n) {
            k++;
            int s = h;
            h = h + p;
            p = s;
        }
        std::cout << k << " - порядковый номер\n";
    }
};


int main()
{
    setlocale(LC_ALL, "rus");

    z1 first;
    z2 second;
    z3 third;
    z4 fourth;
    z5 fifth;
    z6 fifth6;

    first.test();
    second.test();
    third.test();
    fourth.test();
    fifth.test();
    fifth6.test();

    return 0;
}
