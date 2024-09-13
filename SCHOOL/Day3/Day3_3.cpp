// Ham tra ve max, min, add cac phan tu max moi hang vao 1 mang, cac phan tu min moi hang vao 1 mang

#include <iostream>
#include <limits>
using namespace std;

void input(int **p, const int& row, const int& col) {
    for (int i = 0; i < row; i++) {
        *(p + i) = new int[col];
        for (int j = 0; j < col; j++) {
            cout << "p[" << i << "][" << j << "] = "; 
            cin >> *(*(p + i) + j);
        }
    }
}

void output(int **p, const int& row, const int& col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << *(*(p + i) + j) << " ";
        }
        cout << endl;
    }
}

void output2(int *p, const int& row) {
    for (int i = 0; i < row; i++) {
        cout << *(p + i) << " ";
    }
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void findMax(int **p, const int& row, const int& col) {
    int *a = new int[row];
    int maxNum = INT_MIN; 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(max(*(*(p + i) + j), maxNum) != maxNum) {
                maxNum = *(*(p + i) + j);
            }
        }
        *(a + i) = maxNum;
        maxNum = INT_MIN; 
    }
    output2(a, row);
    delete[] a;
}

void findMin(int **p, const int& row, const int& col) {
    int *a = new int[row];
    int minNum = INT_MAX; 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if(min(*(*(p + i) + j), minNum) != minNum) {
                minNum = *(*(p + i) + j);
            }
        }
        *(a + i) = minNum;
        minNum = INT_MAX; 
    }
    output2(a, row);
    delete[] a;
}

int main() {
    cout << "NHAP THONG TIN" << endl;

    int row, col;
    cout << "row: "; cin >> row;
    cout << "col: "; cin >> col;
    cout << endl;

    int **p = new int*[row];

    input(p, row, col);
    output(p, row, col);

    cout << "\nKET QUA" << endl;
    findMax(p, row, col);
    cout << endl;
    findMin(p, row, col);

    for (int i = 0; i < row; i++) {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}