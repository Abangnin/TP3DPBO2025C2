from Clothing import Clothing

class Pants(Clothing):
    def __init__(self, brand, size, price, TipeTipe):
        super().__init__(brand, size, price)
        self.TipeTipe = TipeTipe
    
    def get_TipeTipe(self): 
        return self.TipeTipe
    
    def set_TipeTipe(self, TipeTipe): 
        self.TipeTipe = TipeTipe
    
    def display(self):
        return super().display() + f" {self.TipeTipe:<13} |"