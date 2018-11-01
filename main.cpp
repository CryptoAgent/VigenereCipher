#include <iostream>
#include <string>
#include "Vigenere.h"

const int alph_a=97;
const int alph_z=122;
using namespace std;
int main(){

string mess=GetMess();
string key_word = GetKey();
int m_lenght = GetLen(mess);
int k_lenght = GetLen(key_word);
char inc_kw[m_lenght];

int l = 0;
while(l<m_lenght){
    for(int i = 0;i<k_lenght;i++){
        inc_kw[l] = key_word[i];
        l++;
        if(l>m_lenght){
            break;
        }
    }
}

//Encryption
char enc_dat[m_lenght];
for(int i = 0;i<m_lenght;i++){
    int m_ch = mess[i];
    int k_ch = inc_kw[i];
    if(m_ch>=alph_a&&m_ch<=alph_z&&k_ch>=alph_a&&k_ch<=alph_z){
    m_ch-=97;
    k_ch-=97;
    int encr = (m_ch+k_ch)%26;
    encr+=97;
    enc_dat[i]=encr;
    }else{
    cout<<"Only characters!";
    break;
    }
}

cout<<"Your encrypted message is:"<<endl;
for(int i = 0;i<m_lenght;i++){
    cout<<enc_dat[i]<<endl;
}

mess = GetMess();
key_word=GetKey();
m_lenght = GetLen(mess);
k_lenght = GetLen(key_word);
inc_kw[m_lenght];
l = 0;
while(l<m_lenght){
    for(int i = 0;i<k_lenght;i++){
        inc_kw[l]=key_word[i];
        l++;
        if(l>m_lenght){
            break;
        }
    }
}

//Decrytpion
char dec_dat[m_lenght];
for(int i = 0;i<m_lenght;i++){
    char m_ch=mess[i];
    char k_ch=inc_kw[i];
    if(m_ch>=alph_a&&m_ch<=alph_z&&k_ch>=alph_a&&k_ch<=alph_z){
        m_ch-=97;
        k_ch-=97;
        int decr = 0;
        if(m_ch-k_ch>=0){
            decr = m_ch-k_ch;
            decr+=97;
            dec_dat[i]=decr;
        }else{
            decr = m_ch-k_ch;
            decr = 26 + decr;
            decr+=97;
            dec_dat[i]=decr;
        }
    }else{
    cout<<"Characters only";
    break;
    }
}

cout<<"Your decrypted message is: \r\n";
for(int i = 0;i<m_lenght;i++){
    cout<<dec_dat[i];
}

return 0;
}
