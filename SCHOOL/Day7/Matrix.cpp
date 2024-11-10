#include "Matrix.h"


Matrix::Matrix(int row, int col) : row(row), col(col) {
    if(col == 0 && row == 0) this->p = NULL;
    else {
        p = new int*[this->row];
        for(int i = 0; i < this->row; i++) {
            *(p + i) = new int[this->col];
        }
        cin >> *this;
    }
}

Matrix::Matrix(const Matrix &m) : row(m.row), col(m.col) {
    this->p = NULL;
    this->p = new int*[this->row];
    for(int i = 0; i < this->row; i++) {
        *(this->p + i) = new int[this->col];
        for(int j = 0; j < this->col; j++) {
            *(*(this->p + i) + j) = *(*(m.p + i) + j);
        }
    }
}

Matrix::~Matrix() {
    for(int i = 0; i < this->row; i++) {
        delete[] *(this->p + i);
    }
    delete[] p;
}

ostream &operator<<(ostream &out, const Matrix &m) {
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
            out << *(*(m.p + i) + j) << " ";
        }
        out << endl;
    }
    return out;
}

istream &operator>>(istream &in, Matrix &m) {
    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
            cout << "m[" << i << "][" << j << "] = ";
            // in >> *(*(m.p + i) + j);
            in >> m(i, j);
        }
    }
    return in;
}

int& Matrix::operator()(const int& row, const int& col) {
    static int t = 0;
    if(row >= 0 && row < this->row && col >= 0 && col < this->col) {
        return *(*(this->p + row) + col);
    } else {
        return t;
    }
}