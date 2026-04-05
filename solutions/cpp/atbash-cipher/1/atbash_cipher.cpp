#include "atbash_cipher.h"


namespace atbash_cipher {

// TODO: add your solution here
    std::string encode(std::string pT){
        std::string cT;
        int space = 0;
        for(char ch : pT){

            if(space == 5){
                cT += ' ';
                space = 0;
            }
            
            space++;

            switch(std::tolower(ch)){
                case 'a':
                    cT += 'z';
                    break;
                case 'b':
                    cT += 'y';
                    break;
                case 'c':
                    cT += 'x';
                    break;
                case 'd':
                    cT += 'w';
                    break;
                case 'e':
                    cT += 'v';
                    break;
                case 'f':
                    cT += 'u';
                    break;
                case 'g':
                    cT += 't';
                    break;
                case 'h':
                    cT += 's';
                    break;
                case 'i':
                    cT += 'r';
                    break;
                case 'j':
                    cT += 'q';
                    break;
                case 'k':
                    cT += 'p';
                    break;
                case 'l':
                    cT += 'o';
                    break;
                case 'm':
                    cT += 'n';
                    break;
                case 'n':
                    cT += 'm';
                    break;
                case 'o':
                    cT += 'l';
                    break;
                case 'p':
                    cT += 'k';
                    break;
                case 'q':
                    cT += 'j';
                    break;
                case 'r':
                    cT += 'i';
                    break;
                case 's':
                    cT += 'h';
                    break;
                case 't':
                    cT += 'g';
                    break;
                case 'u':
                    cT += 'f';
                    break;
                case 'v':
                    cT += 'e';
                    break;
                case 'w':
                    cT += 'd';
                    break;
                case 'x':
                    cT += 'c';
                    break;
                case 'y':
                    cT += 'b';
                    break;
                case 'z':
                    cT += 'a';
                    break;
                case '0':
                    cT += '0';
                    break;
                case '1':
                    cT += '1';
                    break;
                case '2':
                    cT += '2';
                    break;
                case '3':
                    cT += '3';
                    break;
                case '4':
                    cT += '4';
                    break;
                case '5':
                    cT += '5';
                    break;
                case '6':
                    cT += '6';
                    break;
                case '7':
                    cT += '7';
                    break;
                case '8':
                    cT += '8';
                    break;
                case '9':
                    cT += '9';
                    break;
                default:
                    space--;
                    break;
            }

            
            
        }

        if(cT[cT.length() -1] == ' '){
            cT.pop_back();
        }

        return cT;
        
    }

        std::string decode(std::string eT){
        std::string dT;
        //int space = 0;
        for(char ch : eT){
            //space++;

            /*
            if(space == 5){
                ct += ' ';
                space = 0;
            }
            */
            
            switch(ch){
                case 'a':
                    dT += 'z';
                    break;
                case 'b':
                    dT += 'y';
                    break;
                case 'c':
                    dT += 'x';
                    break;
                case 'd':
                    dT += 'w';
                    break;
                case 'e':
                    dT += 'v';
                    break;
                case 'f':
                    dT += 'u';
                    break;
                case 'g':
                    dT += 't';
                    break;
                case 'h':
                    dT += 's';
                    break;
                case 'i':
                    dT += 'r';
                    break;
                case 'j':
                    dT += 'q';
                    break;
                case 'k':
                    dT += 'p';
                    break;
                case 'l':
                    dT += 'o';
                    break;
                case 'm':
                    dT += 'n';
                    break;
                case 'n':
                    dT += 'm';
                    break;
                case 'o':
                    dT += 'l';
                    break;
                case 'p':
                    dT += 'k';
                    break;
                case 'q':
                    dT += 'j';
                    break;
                case 'r':
                    dT += 'i';
                    break;
                case 's':
                    dT += 'h';
                    break;
                case 't':
                    dT += 'g';
                    break;
                case 'u':
                    dT += 'f';
                    break;
                case 'v':
                    dT += 'e';
                    break;
                case 'w':
                    dT += 'd';
                    break;
                case 'x':
                    dT += 'c';
                    break;
                case 'y':
                    dT += 'b';
                    break;
                case 'z':
                    dT += 'a';
                    break;
                case '0':
                    dT += '0';
                    break;
                case '1':
                    dT += '1';
                    break;
                case '2':
                    dT += '2';
                    break;
                case '3':
                    dT += '3';
                    break;
                case '4':
                    dT += '4';
                    break;
                case '5':
                    dT += '5';
                    break;
                case '6':
                    dT += '6';
                    break;
                case '7':
                    dT += '7';
                    break;
                case '8':
                    dT += '8';
                    break;
                case '9':
                    dT += '9';
                    break;
                default:
                    break;
            }
            
        }

        return dT;
        
    }

}  // namespace atbash_cipher
