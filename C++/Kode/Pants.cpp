// Pants.h
#ifndef PANTS_H
#define PANTS_H

#include "Clothing.cpp"

class Pants : public Clothing {
private:
    string fitType;

public:
    Pants(string brand, string size, double price, string fitType) : Clothing(brand, size, price) {
        this->fitType = fitType;
    }
    
    void setFitType(string fitType) { 
        this->fitType = fitType; 
    }

    string getFitType() { 
        return fitType; 
    }
    
    void display() override {
        Clothing::display();
        cout << " | " << setw(15) << fitType << " |" << endl;
    }
};

#endif