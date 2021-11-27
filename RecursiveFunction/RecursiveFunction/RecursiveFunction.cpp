#include <iostream>

using namespace std;

int recursive_num(int factorial_num, int number) {
    if (factorial_num == number)
        return factorial_num;
    return factorial_num * recursive_num(factorial_num + 1, number);
}

int main()
{
    //GOAL: Calculate factorial number

    int factorialNum = 1, number = 6;
    //Solution 1
    for (int i = 1; i <= number; i++) {
        factorialNum *= i;
    }
    cout << "Soluzione 1: " << factorialNum << endl;

    //*******************************************************************


    factorialNum = 1, number = 6;
    //Solution 2
    cout <<"Soluzione 2: " << recursive_num(factorialNum, number) << endl;

    system("pause>0");
}

