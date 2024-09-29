#include "PhongKS_management.h"

void PhongKS_management::displayAll() const {
    if(phongKS_list.empty()) {
        cout << "Danh sach dang trong!" << endl;
        return;
    }
    for (int i = 0; i < phongKS_list.size(); i++) {
        cout << "<*> Thong tin cua phong " << i + 1 << " : " << endl;
        cout << phongKS_list[i] << endl;
    }
}

void PhongKS_management::addFirst(const PhongKS& phong) {
    phongKS_list.insert(phongKS_list.begin(), phong);
}

void PhongKS_management::addLast(const PhongKS& phong) {
    phongKS_list.push_back(phong);
}

void PhongKS_management::addIndex(int index, const PhongKS& phong) {
    if(index < 0 || index > phongKS_list.size()) {
        cout << "Vi tri can them khong hop le!" << endl;
        return;
    }
    phongKS_list.insert(phongKS_list.begin() + index, phong);
}

void PhongKS_management::update(const string& ID, const PhongKS& updatePhong) {
    int index = fin
}

void PhongKS_management::removeFirst() {

}

void PhongKS_management::removeLast() {

}

void PhongKS_management::removeIndex(int index) {

}

void PhongKS_management::searchID(const string& ID) const {

}
        
void PhongKS_management::sortGiaPhong(bool ascending) {

}
