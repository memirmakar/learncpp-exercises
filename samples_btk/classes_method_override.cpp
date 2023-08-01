#include <iostream>
#include <string>

/*derleme zamanı cokbicimlilik
topla(int a, int b)
topla (float a, float b
)*/

class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;
        void ates() {
            std::cout << "pis pis";
        } 
};

class AK47 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        bool durbun;

        void ates(){
            Silah::ates(); //miras alınan class'ın fonksiyonu da kullanılabillir.
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

        void ates(){
            std::cout<<"gum gum";
            return;
        }
};

class Pistol : public Silah {
    public:
        int kurmaKoluDeseni;

        void ates() {
            std::cout << "bam bam";
            return;
        }
};


int main(){
    AK47 ak47;
    Pistol pistol;
    M1 m1;

    ak47.ates(); //hem AK47'de hem Silah'ta iki method var aynı isimli, inherited classın methodu diğer m
    //override ediyor.
    
    m1.ates();
    return 0;
}
