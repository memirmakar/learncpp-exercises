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

int main()
{
    AK47 ak47;
    ak47.seriTek = 1;
    ak47.isim = "123";
    Silah *silahPtr = &ak47; // upcasting

    //Silah silah;
    //silah.isim = "Silah 1";
    //silah.mermiKapasitesi = 500;
    //ssilah.renk = "Siyah";

    // AK47* ak47Ptr = &silah; böyle yaptğında hata verir
    AK47 *ak47Ptr = (AK47 *)&silah; // downcasting

    std::cout << ak47Ptr->seriTek;

    return 0;
}
