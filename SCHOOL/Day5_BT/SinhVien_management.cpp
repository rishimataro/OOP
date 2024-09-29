#include "SinhVien_management.h"

// Contructor & Destructor
SinhVien_management::SinhVien_management(SinhVien *SV, int count) {
    this->SV = SV;
    this->count = count;
}

SinhVien_management::~SinhVien_management() { 
    if(this->SV != NULL) delete[] SV; 
}

// Getter
SinhVien SinhVien_management::getSinhVien(int index) const {
    return *(SV + index);
}

// Add
void SinhVien_management::addLast(SinhVien sinhvien) {
    if(count == 0) {
        SV = new SinhVien[count + 1];
        *(SV + count) = sinhvien;
        count++;
    } else {
        SinhVien *temp = new SinhVien[count + 1];
        for (int i = 0; i < count; i++) {
            *(temp + i) = *(SV + i);
        }

        *(temp + count) = sinhvien;

        delete[] SV;
        SV = temp;
        count++;
    }
}

void SinhVien_management::addRange(SinhVien *arrSV, int dem) {
    if(count == 0) {
        SV = new SinhVien[count + dem];
        for(int i = 0; i < dem; i++) {
            *(SV + i) = *(arrSV + i);
        }
        count = dem;
    }
    else {
        SinhVien *temp = new SinhVien[count + dem];
        for(int i = 0; i < count; i++) {
            *(temp + i) = *(SV + i);
        }

        for (int i = 0; i < dem; i++) {
            *(temp + count + i) = *(arrSV + i);
        }

        delete[] SV;
        SV = temp;
        count += dem;
    }
}

// Remove
int SinhVien_management::indexOf(const SinhVien& sinhvien) {
    for(int i = 0; i < count; i++) {
        if(this->SV[i] == sinhvien) return i;
    }
    return -1;
}

void SinhVien_management::removeLast(){
    if(count == 0) {
        cout << "Danh sach rong!" << endl;
        return;
    }
    SinhVien *temp = new SinhVien[count - 1];
    for (int i = 0; i < count - 1; i++) {
        *(temp + i) = *(SV + i);
    }

    delete[] SV;
    SV = temp;
    count--;
}

void SinhVien_management::removeAt(const SinhVien& sinhvien) {
    if(count == 0) {
        cout << "Danh sach rong!" << endl;
        return;
    }

    int index = indexOf(sinhvien);
    if(index == -1) {
        cout << "\t<!> Khong tim thay sinh vien can xoa!" << endl;
        return;
    }

    SinhVien *temp = new SinhVien[count - 1];
    for (int i = 0; i < index; i++) {
        *(temp + i) = *(SV + i);
    }   
    for(int i = index; i < count - 1; i++) {
        *(temp + i) = *(SV + i + 1);
    }

    delete[] SV;
    SV = temp;
    count--;
}

// Update
void SinhVien_management::update(const string& MSV) {
    if(count == 0) {
        cout << "Danh sach rong!" << endl;
        return;
    }
    for (int i = 0; i < count; i++) {
        if(this->SV[i].getMSV() == MSV) {
            this->SV[i].inputSV();
            return;
        }
    }
    cout << "Khong tim thay sinh vien can cap nhat!" << endl;
}

// Search

void SinhVien_management::searchName(const string& name) {
    if(count == 0) {
        cout << "Danh sach rong!" << endl;
        return;
    }

    bool found = false;
    for (int i = 0; i < count; i++) {
        string fullName = this->SV[i].getFullName();
        
        if(fullName.find(name) == 0) {
            SV[i].outputSV();
            cout << endl;
            found = true;
        }
    }
    if(!found) {
        cout << "Khong tim thay sinh vien can tim!" << endl;
    }
}

// Sort
void SinhVien_management::sortGPA(bool (*cmp)(const SinhVien& a, const SinhVien& b)) {
    if(count == 0) {
        cout << "Danh sach rong!" << endl;
        return;
    }

    SinhVien *temp = new SinhVien[count];
    for (int i = 0; i < count; i++) {
        *(temp + i) = *(SV + i);
    }

    bool swapped = true;
    while(swapped) {
        swapped = false;
        for (int i = 0; i < count - 1; i++) {
            if(cmp(*(temp + i), *(temp + (i + 1)))) {
                swap(*(temp + i), *(temp + (i + 1)));
                swapped = true;
            }
        }
    }
    
    for (int i = 0; i < count; i++) {
        temp[i].outputSV();
        cout << endl;
    }

    delete[] temp;
}

// Display
void SinhVien_management::displayAll() const {
    if(count == 0) {
        cout << "Danh sach rong!" << endl;
        return;
    }
    cout << "\n\t---------------------------------------------" << endl;
    cout << "\tDANH SACH SINH VIEN" << endl;
    for(int i = 0; i < count; i++) {
        cout << "\n\tSINH VIEN THU " << i + 1 << endl;
        this->SV[i].outputSV(); 
        cout << endl;
    }
    cout << "\t---------------------------------------------" << endl;
}

int SinhVien_management::getCount() const {
    return count;
}