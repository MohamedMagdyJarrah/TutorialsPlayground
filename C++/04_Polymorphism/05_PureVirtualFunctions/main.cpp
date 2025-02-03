#include <iostream>
#include <vector>

class Shape {   // Abstract Class
    // Common attributes between shapes
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {}
};

class OpenShape : public Shape { // Abstract Class
public:
    virtual ~OpenShape() {}
};

class ClosedShape : public Shape { // Abstract Class
public:
    virtual ~ClosedShape() {}
};

class Line : public OpenShape { // Concrete Class
public:
    virtual void draw() override{
        std::cout << "Draw a line." << std::endl;
    }

    virtual void rotate() override{
        std::cout << "rotate a line." << std::endl;
    }

    virtual ~Line() {}
};

class Circle : public ClosedShape { // Concrete Class
public:
    virtual void draw() override{
        std::cout << "Draw a circle." << std::endl;
    }

    virtual void rotate() override{
        std::cout << "rotate a circle." << std::endl;
    }
    virtual ~Circle() {}
};

class Square : public ClosedShape { // Concrete Class
public:
    virtual void draw() override{
        std::cout << "Draw a square." << std::endl;
    }

    virtual void rotate() override{
        std::cout << "rotate a square." << std::endl;
    }
    virtual ~Square() {}
};

void draw_shapes(const std::vector<Shape*> &shapes) {
    for (const auto shape: shapes) {
        shape->draw();
    }
}

int main() {
    // These are invalid as we can't instantiate objects from an abstract class
    // Shape s;
    // Shape* s1 = new Shape();

    Shape* line = new Line();
    Shape* circle = new Circle();
    Shape* square = new Square();
    std::vector<Shape*> shapes = {line,circle,square};

    draw_shapes(shapes);

    delete line;
    delete circle;
    delete square;

    return 0;
}
