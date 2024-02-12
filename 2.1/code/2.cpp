// TODO: Даны два массива целых чисел размеров n и m и целые числа k и t. Если в первом массиве все элементы не превосходят k, а во втором массиве все элементы не превосходят t, то в первом массиве заменить все элементы равные k значением t, в противном случае во втором массиве заменить все элементы, равные t значением k.  

#include <iostream>

using namespace std;

void reroll(int mas1[], int mas2[], int k, int t, int n, int m){
    bool condition1 = true;
    for (int i = 0; i < n; i++){
        if (mas1[i] > k){
            condition1 = false;
            break;
        }
    }
    bool condition2 = true;
    for (int i = 0; i < m; i++){
        if (mas2[i] > t){
            condition2 = false;
            break;
        }
    }

    if (condition1){
        for(int i = 0; i < n; i++){
            if(mas1[i] == k){
                mas1[i] = t;
            }
        }
    }
    else if (condition2){
        for(int i = 0; i < m; i++){
            if(mas2[i] == t){
                mas2[i] = k;
            }
        }
    }


}

int main(){
    int n, m;
    cout << "Enter lenght of arrays: " << endl;
    cin >> n >> m;

    int* arr1 = new int[n];
    int* arr2 = new int[m];

    int k, t;
    cout << "Enter 'k' and 't' elements: " << endl;
    cin >> k >> t;

    cout << "Enter the arrays elements for arr1:" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    cout << "Enter the arrays elements for arr2:" << endl;
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    reroll(arr1, arr2, k, t, n, m);
    
    cout << "Result of work: " << endl;
    for (int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++){
        cout << arr2[i] << " ";
    }


}