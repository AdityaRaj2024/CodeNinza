class Company:
    def c_name(self):
        return 'infosys'

class employee(Company):
    def info(self):
        # Calling the superclass method using super()function
        cy_name = super().c_name()
        print("abc works at", cy_name)

# Creating object of child class
emp =employee()
emp.info()