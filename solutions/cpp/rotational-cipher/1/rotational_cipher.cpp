#include "rotational_cipher.h"

namespace rotational_cipher {

    std::string rotate(std::string str, int n){
        std::string out = "";
        for(char c : str){
            if(((c > 64) && (c < 91)) || ((c > 96) && (c < 123))){
                if((c > 64) && (c < 91)){
                    if((c + n) > 90){
                        out += (c + n) - 26;
                    } else {
                        out += (c + n);
                    }
                } else if((c > 96) && (c < 123)){
                    if((c + n) > 122){
                        out += (c + n) - 26;
                    } else {
                        out += (c + n);
                    }
                }
            } else {
                out += c;
            }
        }

        return out;
        
    }

}  // namespace rotational_cipher
