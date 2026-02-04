class Student {
public:
    std::string name;
    Student(std::string n) : name(n) {}
};

class Course {
public:
    std::string title;
    Course(std::string t) : title(t) {}
};

class Registration {
public:
    void registerStudent(Student& s, Course& c) {
        std::cout << s.name << " registered for " << c.title << std::endl;
    }
};
