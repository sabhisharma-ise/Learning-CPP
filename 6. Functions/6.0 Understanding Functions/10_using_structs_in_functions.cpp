//This is shown in the following Example

#include<iostream>

struct PersonInfo {

    int age;
    char name[50];
    double salary;

};

void printStructInfo (PersonInfo p) {

    std::cout << "PersonInfo  Structure: ";
    std::cout << "\nAge: " << p.age;
    std::cout << "\nName: " << p.name;
    std::cout << "\nSalary: " << p.salary;

return;

}

int main () {

    PersonInfo p;
    std::cout << "Enter name: ";
    std::cin.get(p.name, 50);

    std::cout << "Enter age: ";
    std::cin >> p.age;

    std::cout << "Enter salary: ";
    std::cin >> p.salary;

    printStructInfo (p);

return 0;

}

//We can pass structure variables as parameters to function in a similar way in which we pass ordinary variables as parameters.