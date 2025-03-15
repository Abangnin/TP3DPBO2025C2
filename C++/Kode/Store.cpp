// Store.h
#ifndef STORE_H
#define STORE_H

#include <vector>
#include "Clothing.cpp"

class Store {
private:
    vector<Clothing*> inventory;

public:
    void addClothing(Clothing* clothing) {
        inventory.push_back(clothing);
    }

    void displayInventory() {
        cout << "+----------------------------------------------------------------+\n";
        cout << "| " << left << setw(15) << "Brand" << " | " << setw(10) << "Ukuran" << " | " << setw(12) << "Harga" << "  | " << setw(15) << "Tipe" << " |" << endl;
        cout << "+----------------------------------------------------------------+\n";
        for (Clothing* c : inventory) {
            c->display();
        }
        cout << "+----------------------------------------------------------------+\n";
    }
};

#endif