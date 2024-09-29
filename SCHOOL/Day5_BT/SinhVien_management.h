#include "SinhVien.h"

class SinhVien_management
{
    private:
        SinhVien *SV;
        int count;
    public:
        // Contructor & Destructor
        SinhVien_management(SinhVien *SV = NULL, int count = 0);
        ~SinhVien_management();

        // Getter
        SinhVien getSinhVien(int index) const;

        // Add
        void addLast(SinhVien sinhvien);
        void addRange(SinhVien *arrSV, int dem);

        // Remove
        int indexOf(const SinhVien& sinhvien);
        void removeLast();
        void removeAt(const SinhVien& sinhvien);

        // Update
        void update(const string& MSV);

        // Search
        void searchName(const string& name);

        // Sort
        void sortGPA(bool (*cmp)(const SinhVien& a, const SinhVien& b));

        // Display
        void displayAll() const;

        int getCount() const;
};
