#include <iostream>
#include <string>
using namespace std;

int main(){
    string alfabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string keys{"zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA"};
    char word;
    string secret_massage{};
    cout<<"Enter the secret massage"<<endl;
    getline(cin,secret_massage);

    string encrypted_massage{};
    cout<<"Your encrypted massage"<<endl;
    for(char word:secret_massage){
        size_t position=alfabet.find(word);
        if(position != string::npos){
            char new_character{keys.at(position)};
            encrypted_massage+=new_character;

        }else{
            encrypted_massage+=word;
        }
    }
   cout<<encrypted_massage;


}


