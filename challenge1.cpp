#include <iostream>
#include <string>

int main(){
  int inTakeHex;   	
   while(1){
        std::cout<<"type your hex number"<<std::endl;
        std::cin>>std::hex>>inTakeHex;
        std::cout<<inTakeHex<<std::endl;
   }
   return 0;
}
