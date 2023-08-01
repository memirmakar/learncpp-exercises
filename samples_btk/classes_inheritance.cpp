#include <iostream>
#include <string>


class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;

};

class AK47 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        bool durbun;

        void atesEt(){
            std::cout<<"bum bum";
            return;
        }
};
/*inherited from Silah*/
class M1 : public Silah {
    public:
        bool seritek;
        int kayisUzunlugu;
        int kurmaPozisyonu;

        void atesEt(){
            std::cout<<"gum gum";
            return;
        }
};

class Pistol : public Silah {
    public:
        int kurmaKoluDeseni;

        void atesEt() {
            std::cout << "bam bam";
            return;
        }
};

void test(AK47 &ak47, AK47* Ptr){

    ak47.isim = "test called via ref";
    Ptr->isim = "test called via Ptr";

};

int main(){
    AK47 ak47;
    Pistol pistol;
    M1 m1;

    ak47.isim = "ak47 dust";
    ak47.renk = "rose wood"; //inheritance sample
/*pointer samples*/
    AK47 *ak47Ptr = &ak47;
    ak47Ptr ->isim = "isim degisti ptr";
    ak47Ptr->atesEt();

    AK47 &ak47Ref = ak47;
    ak47Ref.isim = "isim degisti ref";


    test(ak47,ak47Ptr);
    test(ak47Ref, &ak47);

    return 0;
}
