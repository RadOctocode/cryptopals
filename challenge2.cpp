#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <unordered_map>
#include <cmath>



std::string XORme(std::string input,std::string XORv){
    std::cout<<input<<" "<<XORv<<'\n';

    return input^XORv;
}
int main(){
    std::string inTakeHex,XORval,result;   	
    std::cout<<"type your hex number and xor"<<std::endl;
    std::cin>>inTakeHex>>XORval;
    
    result=XORme(inTakeHex,XORval);
    std::cout<<result;
    return 0;
}
