from abc import ABC,abstractmethod
class Car(ABC) :
    @abstractmethod
    def gear(self):
        pass
    def brake(self):
        pass    

class Maruti(Car) :
    def gear(self):
        print("Five Gear.")
    def brake (self) :
        print("Normal brake.")
        
class Honda(Car) :
    def gear(self):
        print("Six Gear.")
    def brake (self) :
        print("Power brake.")
        
m=Maruti()
m.gear()
m.brake()         

h=Honda()
h.gear()
h.brake()                                                            