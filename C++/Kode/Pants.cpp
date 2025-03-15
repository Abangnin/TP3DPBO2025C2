#ifndef PANTS_H //agar tidak terjadi tabrakan atau bahkan error, soalnya dari tadi error terus
#define PANTS_H

#include "Clothing.cpp"

class Pants : public Clothing {
private:
    string TipeTipe;

public:
    Pants(string brand, string size, double price, string TipeTipe) : Clothing(brand, size, price) {
        this->TipeTipe = TipeTipe;
    }
    
    void setTipeTipe(string TipeTipe) { 
        this->TipeTipe = TipeTipe; 
    }

    string getTipeTipe() { 
        return TipeTipe; 
    }
    
    void display() override {
        Clothing::display();
        cout << " | " << setw(15) << TipeTipe << " |" << endl;
    }
};

#endif