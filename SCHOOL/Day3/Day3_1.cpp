#include <iostream>
using namespace std;

/* void Input (int *p, const int& n) {
    for (int i = 0; i < n; i++) {
        cout << "p[" << i << "] = "; 
        cin >> *(p + i);
    }
    cout << endl;
}

void Output (int *p, const int& n) {
    cout << "KET QUA: " << endl;
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

bool isTang(int a, int b) {
    return a > b;  
}

bool isGiam(int a, int b) {
    return a < b;  
}

void Sort(int *p, const int& n, bool (*q)(int, int)){	
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (q(p[i], p[j])) { 
                Swap(p[i], p[j]);
            }
        }
    }
}

bool isNull(int *p) {
    if (p == NULL) {
        cout << "ERROR! Memory allocation failed!" << endl;
        return true;
    }
    return false;
} */

int main() {
    /* cout << "NHAP THONG TIN" << endl;
    int n;
    cout << "n = "; cin >> n;

    int *p = new (nothrow) int[n];  
    if (isNull(p)) {
        return 1; 
    }

    Input(p, n);
    
    int choice;
    cout << "Chon 1 de sap xep tang dan, 0 de sap xep giam dan: ";
    cin >> choice;

    if (choice == 1) {
        Sort(p, n, isTang); 
    } else {
        Sort(p, n, isGiam); 
    }

    Output(p, n);

    delete[] p;  */ 

    int row, col;
    cout << "row: "; cin >> row;
    cout << "col: "; cin >> col;

    int **p = new int*[row];
    for (int i = 0; i < row; i++) {
        *(p + i) = new int[col];
        for (int j = 0; j < col; j++) {
            cout << "p[" << i << "][" << j << "] = "; 
            cin >> *(*(p + i) + j);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << *(*(p + i) + j);
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++) {
        delete[] *(p + i);
    }
    delete[] p;

    return 0;
}


