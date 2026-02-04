class Employee {
protected:
    std::string firstName, initial, lastName;
public:
    Employee(std::string fn, std::string i, std::string ln)
        : firstName(fn), initial(i), lastName(ln) {}
    virtual double calculatePay() = 0;
    virtual ~Employee() {}
};

class SalaryEmployee : public Employee {
    double monthlySalary;
public:
    SalaryEmployee(std::string fn, std::string i, std::string ln, double salary)
        : Employee(fn, i, ln), monthlySalary(salary) {}
    double calculatePay() override { return monthlySalary; }
};

class HourlyEmployee : public Employee {
    double hoursWorked, ratePerHour;
public:
    HourlyEmployee(std::string fn, std::string i, std::string ln, double hours, double rate)
        : Employee(fn, i, ln), hoursWorked(hours), ratePerHour(rate) {}
    double calculatePay() override { return hoursWorked * ratePerHour; }
};
