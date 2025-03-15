from Clothing import Clothing

class Pants(Clothing):
    def __init__(self, brand, size, price, fit_type):
        super().__init__(brand, size, price)
        self.fit_type = fit_type
    
    def get_fit_type(self): 
        return self.fit_type
    
    def set_fit_type(self, fit_type): 
        self.fit_type = fit_type
    
    def display(self):
        return super().display() + f" {self.fit_type:<13} |"