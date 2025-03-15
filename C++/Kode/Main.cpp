#include "Pants.cpp"
#include "Tshirt.cpp"
#include "Shirt.cpp"
#include "Store.cpp"

int main() {
    Store myStore;
    
    myStore.addClothing(new Pants("Levi's", "M", 490000, "Slim Fit"));
    myStore.addClothing(new Tshirt("Nike", "L", 350000, "Short Sleeve"));
    myStore.addClothing(new Shirt("Zara", "S", 250000, "Cotton"));
    myStore.addClothing(new Pants("Jiniso", "M", 390000, "Slim"));
    myStore.addClothing(new Tshirt("Converse", "XL", 250000, "Denim"));
    myStore.addClothing(new Shirt("Puma", "S", 150000, "Tweed"));
    
    cout << "+----------------------------------------------------------------+\n";
    cout << "|                   Selamat Datang ke Toko ini                   |\n";
    cout << "|                   Toko Baju Anjayani Tergoks                   |\n";
    cout << "+----------------------------------------------------------------+\n";
    myStore.displayInventory();
    
    return 0;
}
