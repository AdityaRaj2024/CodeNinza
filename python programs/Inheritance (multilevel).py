# Parent class
class Company :
    def company(self):
        self.c_name=input('Enter Company Name =')
    def display(self) :    
        print('Company Name = ',self.c_name)

# Child class 1
class Brand (Company):
    def brand (self):
        self.b_name=input('Enter Brand Name =',)
    def disp(self) :          
         print('Brand Name =',self.b_name)

# Child class 2
class Model(Brand):
    def model(self):
        self.m_name=input("Enter Model Name =")
    def accept(self) :
        self.display( )
        self.disp( )
        print('Model Name =',self.m_name)

# Create object of SportsCar
mod = Model( )
# access Vehicle's and Car info using SportsCar object
mod.company()
mod.brand()
mod.model()
mod.accept()