#include <iostream>
#include <string>

class Silah
{
public:
    std::string isim;
    int mermiKapasitesi;
    std::string renk;
};

class AK47 : public Silah
{
public:
    bool seriTek;
    int kayisUzunlugu;
    bool durbun;

    void atesEt()
    {
        std::cout << "bum bum";
        return;
    }
};
/*inherited from Silah*/
class M1 : public Silah
{
public:
    bool seritek;
    int kayisUzunlugu;
    int kurmaPozisyonu;

    void atesEt()
    {
        std::cout << "gum gum";
        return;
    }
};

class Pistol : public Silah
{
public:
    int kurmaKoluDeseni;

    void atesEt()
    {
        std::cout << "bam bam";
        return;
    }
};

void test(AK47 &ak47, AK47 *Ptr)
{

    ak47.isim = "test called via ref";
    Ptr->isim = "test called via Ptr";
};
/* tüm silahların ismini yazdırabilen fonk upcasting sayesinfe*/
void goster(Silah* silahPtr){
    std::cout<< silahPtr->isim;

}
int main()
{
    AK47 ak47;
    ak47.isim = "123";
    goster(&ak47); //upcasting

    Pistol pistol;
    pistol.isim = "Pistol";
    goster(&pistol); //upcasting

    M1 m1;
    m1.isim = "m1";
    goster(&m1); //upcasting

    return 0;
}
