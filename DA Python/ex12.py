# Write a Python program that defines a car class with attributes like make, model, and year, and methods like start() to start the car and stop() to stop it.
class Car:
    def __init__(self, make, model, year):
        self.make, self.model, self.year, self.running = make, model, year, False

    def start(self): print(f"{self.year} {self.make} {self.model} started.") if not self.running else print("Already running"); self.running=True
    def stop(self): print(f"{self.year} {self.make} {self.model} stopped.") if self.running else print("Already stopped"); self.running=False

# Example
car = Car("Toyota", "Baklol", 2022) 
car.start()  
car.stop()
