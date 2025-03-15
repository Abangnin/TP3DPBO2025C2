#ifndef SHIRT_H //agar tidak terjadi tabrakan atau bahkan error, soalnya dari tadi error terus
#define SHIRT_H

#include "Clothing.cpp"

class Shirt : public Clothing {
private:
    string bahan;

public:
    Shirt(string brand, string size, double price, string bahan) : Clothing(brand, size, price) {
        this->bahan = bahan;
    }
    
    void setbahan(string bahan) { 
        this->bahan = bahan; 
    }

    string getbahan() { 
        return bahan; 
    }
    
    void display() override {
        Clothing::display();
        cout << " | " << setw(15) << bahan << " |" << endl;
    }
};

#endif