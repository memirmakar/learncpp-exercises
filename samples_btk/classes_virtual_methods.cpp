#include <iostream>
#include <string>


class Silah {
    public:
        std::string isim;
        int mermiKapasitesi;
        std::string renk;
        virtual void ates() = 0; // now this is a virtual function
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
/*we need to write one function that'll fire all the weapons,*/
/*we can use upcasting for this, but in that case we'll be calling the 
default atesEt function in Silah object. So as a solution
we initiliaze all the methods as virtual methods*/

void atesEt(Silah* silahPtr){
    silahPtr->ates(); //upcasting 
}

/*When the ates method is called, _vPtr adress which is created when we declare a virtual method,
the compiler will look for the ates methods in the inherited classes*/
int main(){
    AK47 ak47;
    Pistol pistol;
    M1 m1;

    atesEt(&ak47);
    atesEt(&m1); 
    return 0;
}
