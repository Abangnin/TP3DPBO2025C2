class Clothing:
    def __init__(self, brand, size, price):
        self.brand = brand
        self.size = size
        self.price = price
    
    def get_brand(self): 
        return self.brand
    
    def get_size(self): 
        return self.size
    
    def get_price(self): 
        return self.price
    
    def set_brand(self, brand): 
        self.brand = brand

    def set_size(self, size): 
        self.size = size
        
    def set_price(self, price): 
        self.price = price
    
    def display(self):
        return f"| {self.brand:<15} | {self.size:<10} | Rp {self.price:<10,.2f} |"