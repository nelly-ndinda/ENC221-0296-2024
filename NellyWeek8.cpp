class Square {
protected:
    double side;
public:
    Square(double s) : side(s) {}
    double getPeri() { return 4 * side; }
    double getArea() { return side * side; }
    ~Square() {}
};

class Cube : public Square {
public:
    Cube(double s) : Square(s) {}
    double getArea() { return 6 * side * side; }
    double getVolume() { return side * side * side; }
    ~Cube() {}
};
