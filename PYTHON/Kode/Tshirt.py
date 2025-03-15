from Clothing import Clothing

class Tshirt(Clothing):
    def __init__(self, brand, size, price, TipeBahan):
        super().__init__(brand, size, price)
        self.TipeBahan = TipeBahan
    
    def get_TipeBahan(self): 
        return self.TipeBahan
    
    def set_TipeBahan(self, TipeBahan): 
        self.TipeBahan = TipeBahan
    
    def display(self):
        return super().display() + f" {self.TipeBahan:<13} |"