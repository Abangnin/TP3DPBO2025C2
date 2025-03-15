#ifndef CLOTHING_H //agar tidak terjadi tabrakan atau bahkan error, soalnya dari tadi error terus
#define CLOTHING_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Clothing {
private:
    string brand;
    string size;
    double price;

public:
    Clothing(string brand, string size, double price) {
        this->brand = brand;
        this->size = size;
        this->price = price;
    }
    
    void setBrand(string brand) { 
        this->brand = brand; 
    }

    void setSize(string size) { 
        this->size = size; 
    }

    void setPrice(double price) { 
        this->price = price; 
    }
    
    string getBrand() { 
        return brand; 
    }

    string getSize() { 
        return size; 
    }

    double getPrice() { 
        return price; 
    }
    
    virtual void display() {
        cout << "| " << left << setw(15) << brand << " | " << setw(10) << size << " | Rp " << setw(10) << fixed << setprecision(2) << price;
    }
};

#endif