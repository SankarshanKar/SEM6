class Vehicle:
    def __init__(self, seatingCapacity):
        self.defaultFare = 0
        self.seatingCapacity = seatingCapacity
    
    def defaultAmount(self):
        self.defaultFare = self.seatingCapacity * 100

    def printDefault(self):
        print("Default Amount of Vehicle: " + str(self.defaultFare))


class Bus(Vehicle):
    def __init__(self, seatingCapacity):
        super().__init__(seatingCapacity)
        self.finalFare = 0
    
    def finalAmount(self):
        self.finalFare = 0.1 * self.defaultFare + self.defaultFare

    def printFinal(self):
        print("Final Amount of Vehicle: " + str(self.finalFare))


bus = Bus(30)
bus.defaultAmount()
bus.printDefault()
bus.finalAmount()
bus.printFinal()

