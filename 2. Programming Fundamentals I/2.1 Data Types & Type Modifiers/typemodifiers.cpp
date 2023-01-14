#include<iostream>

int main(){

    unsigned h;
    std::cout<<"Size of unsigned is "<<sizeof(h)<<std::endl;

    long int li;
    std::cout<<"Size of long int is "<<sizeof(li)<<std::endl;

    short int si;
    std::cout<<"Size of short int is "<<sizeof(si)<<std::endl;

    long long lli;
    std::cout<<"Size of long long is "<<sizeof(lli)<<std::endl;

    long double ld;
    std::cout<<"Size of long double is "<<sizeof(ld)<<std::endl;

    unsigned char uc;
    std::cout<<"Size of unsigned char is "<<sizeof(uc)<<std::endl;

    return 0;
}