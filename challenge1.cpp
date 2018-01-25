#include <iostream>
#include <stdio.h>
#include <string>
#include <unordered_map>
std::string translate(std::string hexString){
  //three hex is equal to two base 64
    std::unordered_map<std::string, std::string> stringMap({
      {"000000","A"},
      {"000001","B"},
      {"000010","C"},
      {"000011","D"},
      {"000100","E"},
      {"000101","F"},
      {"000110","G"},
      {"000111","H"},
      {"001000","I"},
      {"001001","J"},
      {"001010","K"},
      {"001011","L"},
      {"001100","M"},
      {"001101","N"},
      {"001110","O"},
      {"001111","P"},
      {"010000","Q"},
      {"010001","R"},
      {"010010","S"},
      {"010011","T"},
      {"010100","U"},
      {"010101","V"},
      {"010110","W"},
      {"010111","X"},
      {"011000","Y"},
      {"011001","Z"},
      {"011010","a"},
      {"011011","b"},
      {"011100","c"},
      {"011101","d"},
      {"011110","e"},
      {"011111","f"},
      {"100000","g"},
      {"100001","h"},
      {"100010","i"},
      {"100011","j"},
      {"100100","k"},
      {"100101","l"},
      {"100110","m"},
      {"100111","n"},
      {"101000","o"},
      {"101001","p"},
      {"101010","q"},
      {"101011","r"},
      {"101100","s"},
      {"101101","t"},
      {"101110","u"},
      {"101111","v"},
      {"110000","w"},
      {"110001","x"},
      {"110010","y"},
      {"110011","z"},
      {"110100","0"},
      {"110101","1"},
      {"110110","2"},
      {"110111","3"},
      {"111000","4"},
      {"111001","5"},
      {"111010","6"},
      {"111011","7"},
      {"111100","8"},
      {"111101","9"},
      {"111110","+"},
      {"111111","/"}
    });
    std::string retVal,binStr,halfA,halfB;
    retVal="";
    binStr="";
    for(int i=0;i<hexString.length();i++){
        switch(hexString[i]){
           case '0':
               binStr=binStr+"0000";
               break;
           case '1':
               binStr=binStr+"0001";
               break;
           case '2':
               binStr=binStr+"0010";
               break;
           case '3':
               binStr=binStr+"0011";
               break;
           case '4':
               binStr=binStr+"0100";
               break;
           case '5':
               binStr=binStr+"0101";
               break;
           case '6':
               binStr=binStr+"0110";
               break;
           case '7':
               binStr=binStr+"0111";
               break;
           case '8':
               binStr=binStr+"1000";
               break;
           case '9':
               binStr=binStr+"1001";
               break;
           case 'a':
               binStr=binStr+"1010";
               break;
           case 'b':
               binStr=binStr+"1011";
               break;
           case 'c':
               binStr=binStr+"1100";
               break;
           case 'd':
               binStr=binStr+"1101";
               break;
           case 'e':
               binStr=binStr+"1110";
               break;
           case 'f':
               binStr=binStr+"1111";
               break;
        }
    }
    halfA=stringMap[binStr.substr(0,6)];
    halfB=stringMap[binStr.substr(6,6)]; 
    retVal=retVal+halfA+halfB;

    return retVal;
  
}//end of function

int main(){
    std::string inTakeHex,temp,thing;   	
    std::cout<<"type your hex number"<<std::endl;
    std::cin>>inTakeHex;
    for (int i = 0; i < inTakeHex.length(); ++i){
         temp += inTakeHex[ i ];

      if ( temp.length() >= 3 ){
        // Add temp to the vector
        thing=translate(temp);
        // Reset temp
        temp = "";
        std::cout<<thing;
      }
    }

     //std::cout<<inTakeHex<<std::endl;

   return 0;
}
