from Clothing import Clothing

class Shirt(Clothing):
    def __init__(self, brand, size, price, bahan):
        super().__init__(brand, size, price)
        self.bahan = bahan
    
    def get_bahan(self): 
        return self.bahan
    
    def set_bahan(self, bahan): 
        self.bahan = bahan
    
    def display(self):
        return super().display() + f" {self.bahan:<13} |"