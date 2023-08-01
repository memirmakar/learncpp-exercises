#include <iostream>
#include <string>

class Hayvan {
    public:
        //virtual void sesCal(){
        //   std::cout << "Bos";
        //}
        virtual void sesCal() = 0; //artık bu sınıfı miras alan tüm sınıflar bu metodu tanımlamak zorunda
};

using std::string_literals::operator""s;
using std::string_view_literals::operator""sv;

class Kopek : public Hayvan{
    public:
    void sesCal(){
        std::cout << "hav"sv;
    }
};

class Kedi : public Hayvan{
    public:
    void sesCal(){
        std::cout << "miyav"sv;
    }
};

class Ordek : public Hayvan {
    public:
    void sesCal(){
        std::cout << "vak"sv;
    }
};
//bi base class oluştururuz ve base class'tan miras alırız daha sonra upcasting ile çağırırz
//oluşturduğumuz base class boş class ise abstraction denir
//burdaki fonksiyon nesnelerden soyutlanmış durumda
void turSesCal(Hayvan* hPtr){
    hPtr->sesCal();

}

class Fare : public Hayvan{
    public:
        void sesCal(){
            std::cout << "Civ"sv;
        }
};

int main(){
    Kopek kopek;
    Kedi kedi;
    Ordek ordek;
    //Hayvan hayvan; ABSTRACT CLASSTAN YENİ CLASS OLUŞTURULAMAZ
    kopek.sesCal();
    kedi.sesCal();
    ordek.sesCal();


    return 0;
}
