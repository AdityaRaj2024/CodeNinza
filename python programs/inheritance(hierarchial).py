# Parent class
class Brand :
    def brand (self):
        self.b_name=input('Enter Brand Name =',)
    def display(self) :          
         print('Brand Name =',self.b_name)

# Child class
class Model(Brand):
    def model(self):
        self.brand()
        self.m_name=input("Enter Model Name =")
    def disp(self) :
        self.display()
        print("Model Name =",self.m_name)

class Year(Brand) :
    def year(self) :
        #wself.brand()
        self.l_year=input("Enter Launch Year =")
    def disp(self):
       # self.display()
        print("Launch Year =",self.l_year)
obj=Model()
obj.model()
obj.disp()

obj1=Year()
obj1.year()
obj1.disp( )                                                                                