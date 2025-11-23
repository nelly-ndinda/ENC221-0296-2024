
class Roommate:
    def __init__(self, name, age, hobby, gender, skincolour, job):
        self.name =name
        self.age = age
        self.hobby = hobby
        self.gender = gender
        self.skincolour = skincolour
        self.job= job
    
    def display_info(self):
        print("\n--- Roommate Information ---")
        print(f"Name: {self.name}")
        print(f"age: {self.age}")
        print(f"hobby: {self.hobby}")
        print(f"gender: {self.gender}")
        print(f"skincolour: {self.skincolour}")
        print(f"job: {self.job}")
Roommate1 = Roommate("Cynthia Mueni", 26, "horse riding", "female","light skin" ,"supervisor at jaza supermarket")
Roommate1.display_info()