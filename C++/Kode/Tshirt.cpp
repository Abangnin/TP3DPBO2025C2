// Tshirt.h
#ifndef TSHIRT_H
#define TSHIRT_H

#include "Clothing.cpp"

class Tshirt : public Clothing {
private:
    string sleeveType;

public:
    Tshirt(string brand, string size, double price, string sleeveType) : Clothing(brand, size, price) {
        this->sleeveType = sleeveType;
    }
    
    void setSleeveType(string sleeveType) { 
        this->sleeveType = sleeveType; 
    }

    string getSleeveType() { 
        return sleeveType; 
    }
    
    void display() override {
        Clothing::display();
        cout << " | " << setw(15) << sleeveType << " |" << endl;
    }
};

#endif