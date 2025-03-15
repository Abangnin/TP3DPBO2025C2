from Clothing import Clothing

class Shirt(Clothing):
    def __init__(self, brand, size, price, material):
        super().__init__(brand, size, price)
        self.material = material
    
    def get_material(self): 
        return self.material
    
    def set_material(self, material): 
        self.material = material
    
    def display(self):
        return super().display() + f" {self.material:<13} |"