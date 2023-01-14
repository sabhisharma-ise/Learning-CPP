#include<iostream>

int main(){
    //Print Hello World!
    std::cout<<"Hello World!"<<std::endl;
    
    //Using Variable
    char Yes='!';
    std::cout<<Yes<<std::endl;

    //Using insertion operator(<<) multiple times in a single statement
    std::cout<<"Hlw,"<<"Everybody "<<"Hope all you is doing fine"<<std::endl;

    //Combining variable and text
    char str[] = "Sabhi Sharma";
    std::cout<<str<<" is a Star Kid"<<std::endl;

    std::cout<<"100/100"<<std::endl;

    std::cout<<100/100;

    return 0;
}