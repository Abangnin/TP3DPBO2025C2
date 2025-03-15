from Clothing import Clothing

class Tshirt(Clothing):
    def __init__(self, brand, size, price, sleeve_type):
        super().__init__(brand, size, price)
        self.sleeve_type = sleeve_type
    
    def get_sleeve_type(self): 
        return self.sleeve_type
    
    def set_sleeve_type(self, sleeve_type): 
        self.sleeve_type = sleeve_type
    
    def display(self):
        return super().display() + f" {self.sleeve_type:<13} |"