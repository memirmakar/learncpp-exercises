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
        virtual void ates() {
            std::cout << "pis pis";
        } // now this is a virtual function
};

class AK47 : public Silah {
    public:
        bool seriTek;
        int kayisUzunlugu;
        bool durbun;

        void ates(){
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

/*calisma zamani cokbicimlilik*/
/*virtual metoda ihtiyacımız var*/
void atesEt(Silah* silahPtr){
    silahPtr->ates(); //upcasting 
}

int main(){
    AK47 ak47;
    Pistol pistol;
    M1 m1;

    atesEt(&ak47);
    atesEt(&m1); 
    return 0;
}
