#include <iostream>
#include <string>


class Payment {
    private:
        float tutar;
        std::string paraBirimi;


    public:
        void pay(){
            std::cout << ":Odeme alindi";
        }
        void setTutar(float t){
            if(t>0){
                tutar = t;
         }
            else{
                tutar = 0.1f;
            }
        }
};
/*private verilere fonskiyon aracılığı ile ulaşıyoruz direct initiliaztion ile değill bu encapsulation*/
int main(){

    Payment pay;
    
    pay.setTutar(-50.40);
    pay.paraBirimi = "tl";
    pay.pay();
}
