class Store:
    def __init__(self):
        self.inventory = []
    
    def add_clothing(self, clothing):
        self.inventory.append(clothing)
    
    def display_inventory(self):
        print("+--------------------------------------------------------------+")
        print(f"| {'Brand':<15} | {'Ukuran':<10} | {'Harga':<13} | {'Tipe':<13} |")
        print("+--------------------------------------------------------------+")
        for item in self.inventory:
            print(item.display())
        print("+--------------------------------------------------------------+")