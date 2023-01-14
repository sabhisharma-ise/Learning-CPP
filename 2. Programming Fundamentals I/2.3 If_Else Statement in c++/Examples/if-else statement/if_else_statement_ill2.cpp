// C++ program to illustrate if-else statement

#include<iostream>

int main() {

    int num = 66;

    if (num < 50) 
        std::cout<<"num is less than 50\n"; 
    else 
        std::cout<<"num is greater than 50\n";    

    //If we do not provide the curly braces ‘{‘ and ‘}’ after if(condition)
    //then by default if statement will consider the first immediately below statement to be inside its block.

    return 0;
}