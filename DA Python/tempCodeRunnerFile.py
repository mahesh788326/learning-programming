class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year
    def start(self):
        print(f"The {self.year} {self.make} {self.model} is starting.")
    def stop(self):
        print(f"The {self.year} {self.make} {self.model} is stopping.")
# Example usage
car1 = Car("Toyota", "Camry", 2022)
car2 = Car("Toyota", "Camry", 2032)
car1.start()
car2.stop()