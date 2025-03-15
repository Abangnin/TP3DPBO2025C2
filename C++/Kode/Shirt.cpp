// Shirt.h
#ifndef SHIRT_H
#define SHIRT_H

#include "Clothing.cpp"

class Shirt : public Clothing {
private:
    string material;

public:
    Shirt(string brand, string size, double price, string material) : Clothing(brand, size, price) {
        this->material = material;
    }
    
    void setMaterial(string material) { 
        this->material = material; 
    }

    string getMaterial() { 
        return material; 
    }
    
    void display() override {
        Clothing::display();
        cout << " | " << setw(15) << material << " |" << endl;
    }
};

#endif