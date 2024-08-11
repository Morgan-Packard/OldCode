#include <iostream>

int main(){

    //Braced initializers
    //Variable may contain random garbage value . WARNING
    int elephant_count;

    int lion_count{}; //Initializes to zero

    int dog_count {10}; //Initializes to 10

    int cat_count {15}; //Initializes to 15

    //Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    //int new_number {doesnt_exist}
    //int new_number{2.9};
    
    return 0;
}