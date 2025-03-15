#ifndef TSHIRT_H //agar tidak terjadi tabrakan atau bahkan error, soalnya dari tadi error terus
#define TSHIRT_H

#include "Clothing.cpp"

class Tshirt : public Clothing {
private:
    string TipeBahan;

public:
    Tshirt(string brand, string size, double price, string TipeBahan) : Clothing(brand, size, price) {
        this->TipeBahan = TipeBahan;
    }
    
    void setTipebahan(string TipeBahan) { 
        this->TipeBahan = TipeBahan; 
    }

    string getTipebahan() { 
        return TipeBahan; 
    }
    
    void display() override {
        Clothing::display();
        cout << " | " << setw(15) << TipeBahan << " |" << endl;
    }
};

#endif