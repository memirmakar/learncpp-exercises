#include <iostream>
#include <string>
#include <string_view>

namespace Test{
    void test_Smaller_Larger(){
        std::cout<<"Enter an integer: ";
        int smaller{},larger{};
        std::cin>>smaller;
        std::cout<<"Enter a larger integer: ";
        std::cin>>larger;
        {
            //int temp_smaller {(smaller<larger) ? smaller : larger};
            if(smaller>larger){
                /*larger = smaller;
                smaller = temp_smaller;*/
                std::swap(larger,smaller);
            }
                     
        } //int temp_smaller scope ends here
        std::cout<<"Smaller number: "<<smaller<<std::endl;
        std::cout<<"Larger number: "<<larger<<std::endl;
        return;
    }
    }


int main()
{

    Test::test_Smaller_Larger();
    return 0;
}
