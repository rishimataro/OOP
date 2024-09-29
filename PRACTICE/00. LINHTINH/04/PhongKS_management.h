#include "Header.h"
#include "PhongKS.h"

class PhongKS_management
{
    private:
        vector<PhongKS> phongKS_list;
    public:
        void displayAll() const;

        void addFirst(const PhongKS& phong);
        void addLast(const PhongKS& phong);
        void addIndex(int index, const PhongKS& phong);

        void update(const string& ID, const PhongKS& updatePhong);

        void removeFirst();
        void removeLast();
        void removeIndex(int index);

        void searchID(const string& ID) const;
        
        void sortGiaPhong(bool ascending = true);

        ~PhongKS_management() = default;
};
