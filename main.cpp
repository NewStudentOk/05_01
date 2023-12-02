#include <iostream>

class Figure {
private:
    int sides_count;
    std::string name;

public:
    Figure() //конструктор по умолчанию
    {
        sides_count = 0;
        name = "Фигура: ";
    }

    Figure(int n, std::string str)  // конструктор с параметрами
    {
        set_sides_count(n);
        set_name(str);
    }

    int get_sides_count() {
        return sides_count;
    }

    bool set_sides_count(int n) {
        if (n <= 0) return false;
        sides_count = n;
        return true;
    }

    bool set_name(std::string str) {
        if (str == "") return false;
        name = str;
        return true;
    }

    std::string get_name() {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() : Figure(3, "Треугольник: ") {}

};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure(4, "Четырёхугольник: ") {}

};

int main(int argc, char **argv) {

    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    std::cout << figure.get_name() << figure.get_sides_count() << std::endl;
    std::cout << triangle.get_name() << triangle.get_sides_count() << std::endl;
    std::cout << quadrangle.get_name() << quadrangle.get_sides_count() << std::endl;

    return 0;
}
