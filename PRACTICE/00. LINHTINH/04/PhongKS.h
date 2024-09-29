#include "Header.h"
#include "Date.h"

class PhongKS
{
    private:
        string maPhong;
        int nguoiToiDa;
        bool tinhTrang;
        Date ngayNhanPhong;
        Date ngayTraPhong;
        unsigned long long giaPhong;
    public:
        // Contructor & Destructor
        PhongKS(string maPhong = "", int nguoiToiDa = 0, bool tinhTrang = true, Date ngayNhanPhong = Date(), Date ngayTraPhong = Date(), unsigned long long giaPhong = 0);
        PhongKS(const PhongKS& phongKS);
        ~PhongKS();

        // Setter
        void setMaPhong(string maPhong);
        void setNguoiToiDa(int nguoiToiDa);
        void setTinhTrang(bool tinhTrang);
        void setNgayNhanPhong(Date ngayNhanPhong);
        void setNgayTraPhong(Date ngayTraPhong);
        void setGiaPhong(unsigned long long giaPhong);

        // Getter
        string getMaPhong() const;
        int getNguoiToiDa() const;
        bool getTinhTrang() const;
        Date getNgayNhanPhong() const;
        Date getNgayTraPhong() const;
        unsigned long long getGiaPhong() const;

        bool isCheckOutDataValid() const;
        static Date getCurrentDate();

        // Input & Output
        friend istream& operator>> (istream& in, PhongKS &phongKS);
        friend ostream& operator<< (ostream& out, const PhongKS &phongKS);
};
