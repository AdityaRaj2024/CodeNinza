#Parent Class
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
        self.disp()
        print('Model Name =',self.m_name)

#Child Class 3
class Form (Brand):
    def form (self):
        self.f_name=input('Enter Form Year =')
    def acptt(self):
        self.acptt()
        print('Company Formation Year =',self.f_name)

#Child Class 4
class Year (Model):
    def year (self):
        self.y_name=input('Enter Model Launch Year =')
    def acpt(self):
        self.acpt()
        
        print('Model Launch Year =',self.y_name)

obj=Year()
obj.model()
obj.brand()
obj.company()
#obj.form()
obj.year()
obj.acpt()
#obj.acptt()
objt=Form()
objt.brand()
objt.company()
objt.form()
objt.acptt()
