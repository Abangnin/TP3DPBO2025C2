from Store import Store
from Pants import Pants
from Tshirt import Tshirt
from Shirt import Shirt

if __name__ == "__main__":
    my_store = Store()
    
    my_store.add_clothing(Pants("Levi's", "M", 90000, "Slim Fit"))
    my_store.add_clothing(Tshirt("Nike", "L", 150000, "Short Sleeve"))
    my_store.add_clothing(Shirt("Zara", "S", 230000, "Cotton"))
    my_store.add_clothing(Pants("Jiniso", "M", 390000, "Slim"))
    # my_store.add_clothing(Tshirt("Converse", "XL", 250000, "Denim"))
    # my_store.add_clothing(Shirt("Puma", "S", 150000, "Tweed"))
    
    print("+--------------------------------------------------------------+")
    print("|         Selamat Datang di Toko Baju Anjayani Tergoks         |")
    print("+--------------------------------------------------------------+")
    
    my_store.display_inventory()