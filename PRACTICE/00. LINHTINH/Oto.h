#include "Header.h"
#include "PhuongTienGiaoThong.h"

class Oto : public PhuongTienGiaoThong
{
    private:
        int soChoNgoi;
        string kieuDongCo;
    public:
        Oto();
        ~Oto();

        Oto(string hangSanXuat, string tenPhuongTien, int namSanXuat,float vantocToiDa, int soChoNgoi, string kieuDongCo);
        void setSoChoNgoi(int soChoNgoi);
        int getSoChoNgoi();
        void setKieuDongCo(string kieuDongCo);
        string getKieuDongCo();

        float getVantoCoSo() const;
        bool operator > (const Oto &other) const;
        friend istream& operator >> (istream& in, Oto& oto);
        friend ostream& operator << (ostream& out, const Oto& oto);
};
