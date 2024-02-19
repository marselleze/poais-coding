// TODO: Используя рекурсивную функцию, для заданного числа n определить значение выражения ∏ ∑ () , 1, где () =  ⋅ 32 + 2, x – действительное число, 2 = 0,1,...!,  3 = 1,2,...!.

#include <iostream>

using namespace std;

double f(double x, int i, int j){
    return x * j * 2 + i;
}

double calculateSum(double x, int n, int i, int j){
    if (j > n){
        return 0.0;
    }

    return f(x, i, j) + calculateSum(x, n, i, j + 1);

    
}
double calculateProd(double x, int n, int i){
    if (i > n){
        return 1.0;
    }

    return calculateSum(x, n, i, 1) + calculateProd(x, n, i + 1);
}

int main(){
    double x = 0;
    int n = 0;
    int i = 0;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    cout << "Result of programm: " << endl;

    double result = calculateProd(x, n, i);
    cout << result;
}