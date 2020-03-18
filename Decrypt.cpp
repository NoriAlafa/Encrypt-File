
#include <iostream>
#include<string>
#include <cstdlib>
using namespace std;
int enc(){
    string alfabet{"zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA"};
    string keys{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char word;
    string secret_massage{};
    cout<<"Enter The decrypt massage"<<endl;
    cin>>secret_massage;

    string decrypted_massage{};
    cout<<"Your decrypt  massage"<<endl;
    for(char word:secret_massage){
        size_t position=alfabet.find(word);
        if(position != string::npos){
            char new_character{keys.at(position)};
            decrypted_massage+=new_character;

        }else{
           decrypted_massage+=word;
        }
    }cout<<decrypted_massage<<endl;
    
}

int an(){
      string alpabet{"nopqrstuvwxyzNOPQRSTUVWXYZ"};
    string key{"abcdefghijklmABCDEFGHIJKLM"};
    char world;
    string secretmassage{};
    cout<<"Enter The decrypt massage"<<endl;
    cin>>secretmassage;

    string decryptedmassage{};
    cout<<"Your decrypt  massage"<<endl;
    for(char world:secretmassage){
        size_t position=alpabet.find(world);
        if(position != string::npos){
            char new_character{key.at(position)};
            decryptedmassage+=new_character;

        }else{
           decryptedmassage+=world;
        }
    }cout<<decryptedmassage<<endl;
}

int main()
{
    awal:
    string lagi;
    int pilihan;
    cout<<"Pesan mana yang mau di decrypt[1/2]"<<endl;
    cout<<"1.Biasa"<<endl;
    cout<<"2.AN"<<endl;
    cin>>pilihan;
switch(pilihan){
    case 1:
    system("clear");
    enc();
    break;
    
    case 2:
   system("clear");
   an();
    break;
    
}
cout<<"Anda Ingin Mengulangi Lagi (Y?N)";
    cin>>lagi;
        if(lagi=="y" || lagi=="Y"){
            system("clear");
            goto awal;
        }
        if (lagi=="N" || lagi=="n"){
            goto selesai;
        }
selesai:
    system("clear");
    cout<<"Terima Kasih telah menggunakan tools ini"<<endl;


return 0;

}
