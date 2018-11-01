#ifndef VIGENERUS
#define VIGENERUS

std::string GetMess(){
std::cout<<"Enter your message please \r\n";
std::string mess;
std::cin>>mess;
return mess;
}

std::string GetKey(){
std::cout<<"Now enter your key\r\n";
std::string k;
std::cin>>k;
return k;
}

int GetLen(std::string str){
int len=0;
for(int i = 0;str[i]!='\0';i++){
    len++;
}
return len;
}
#endif
