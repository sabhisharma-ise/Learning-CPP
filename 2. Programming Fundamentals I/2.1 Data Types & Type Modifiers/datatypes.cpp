#include<iostream>

int main(){
   int a; //declaration
   a=12;  //initialisation

   std::cout<<"Size of int is "<<sizeof(a)<<std::endl;

   float b;
   std::cout<<"Size of float is "<<sizeof(b)<<std::endl;

   char c;
   std::cout<<"Size of char is "<<sizeof(c)<<std::endl;

   bool d;
   std::cout<<"Size of bool is "<<sizeof(d)<<std::endl;

   double e;
   std::cout<<"Size of double is "<<sizeof(e)<<std::endl;

   wchar_t g;
   std::cout<<"Size of wchar_t is "<<sizeof(g)<<std::endl;

   //Note: We cannot declare variable of the void type

   unsigned h;
   std::cout<<"Size of unsigned is "<<sizeof(h)<<std::endl;

   long int li;
   std::cout<<"Size of long int is "<<sizeof(li)<<std::endl;

   short int si;
   std::cout<<"Size of short int is "<<sizeof(si)<<std::endl;

   
   return 0;
}