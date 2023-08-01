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

    Silah *silahPtr = &ak47;//upcasting
    /*basically the compiler treats silahPtr as a silah object 
    instead of the inherited ak47 class*/
    ak47.isim = "ak47";
    silahPtr->isim = "merhaba";
    //silahPtr kullanılarak ak47 objesinin ismi değiştirildi
    std::cout << ak47.isim;


    return 0;
}
