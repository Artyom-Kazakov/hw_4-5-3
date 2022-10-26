#include <iostream>
#include <string>

class Figure {
public:

	virtual void print() const = 0;

	virtual bool check() const = 0;

	virtual void sides_count() const {
		int sides_count = 0;
		std::cout << "Sides count: " << sides_count << std::endl;
	}
};

class Triangle : public Figure {
protected:

	int a = 0;
	int b = 0;
	int c = 0;
	int A = 0;
	int B = 0;
	int C = 0;

public:

	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}

	void sides_count() const override {
		int sides_count = 3;
		std::cout << "Sides count: " << sides_count << std::endl;
	}

	void print() const override {
		std::cout << "Triangle\n";
			if (check() == true) {
				std::cout << "Correct" << std::endl;
			}
			else {
				std::cout << "Wrong" << std::endl;
			}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}

	bool check() const override {
		if (A + B + C == 180) {
			return true;
		}
	}
};

class R_Triangle : public Triangle {
public:

	R_Triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {}

	void print() const override {
		std::cout << "\n\nRight triangle\n";
		if (check() == true) {
			std::cout << "Correct" << std::endl;
		}
		else {
			std::cout << "Wrong" << std::endl;
		}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}
};

class Eq_Triangle : public Triangle {
public:

	Eq_Triangle(int a) : Triangle(a, a, a, 60, 60, 60) {}

	void print() const override {
		std::cout << "\n\nEquilateral triangle\n";
		if (check() == true) {
			std::cout << "Correct" << std::endl;
		}
		else {
			std::cout << "Wrong" << std::endl;
		}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}
};

class Iso_Triangle : public Triangle {
public:

	Iso_Triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {}

	void print() const override {
		std::cout << "\n\nIsosceles triangle\n";
		if (check() == true) {
			std::cout << "Correct" << std::endl;
		}
		else {
			std::cout << "Wrong" << std::endl;
		}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C;
	}
};

class Quadrangle : public Figure {
protected:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;

public:

	Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}

	void sides_count() const override {
		int sides_count = 4;
		std::cout << "Sides count: " << sides_count << std::endl;
	}

	void print() const override {
		std::cout << "\n\nQuadrangle\n";
		if (check() == true) {
			std::cout << "Correct" << std::endl;
		}
		else {
			std::cout << "Wrong" << std::endl;
		}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}

	bool check() const override {
		if (A + B + C + D == 360) {
			return true;
		}
	}
};

class Rectangle : public Quadrangle {
public:
	Rectangle(int a, int b) : Quadrangle(a, b, a, b, 90, 90, 90, 90) {}

	void print() const override {
		std::cout << "\n\nRectangle\n";
		if (check() == true) {
			std::cout << "Correct" << std::endl;
		}
		else {
			std::cout << "Wrong" << std::endl;
		}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}
};

class Square : public Rectangle {
public:

	Square(int a) : Rectangle(a, a) {};

	void print() const override {
		std::cout << "\n\nSquare\n";
		if (check() == true) {
			std::cout << "Correct" << std::endl;
		}
		else {
			std::cout << "Wrong" << std::endl;
		}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}
};

class Parallelogram : public Quadrangle {
public:

	Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {}

	void print() const override {
		std::cout << "\n\nParallelogram\n";
		if (check() == true) {
			std::cout << "Correct" << std::endl;
		}
		else {
			std::cout << "Wrong" << std::endl;
		}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D;
	}
};

class Rhombus : public Parallelogram {
public:

	Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) {}

	void print() const override {
		std::cout << "\n\nRhombus\n";
		if (check() == true) {
			std::cout << "Correct" << std::endl;
		}
		else {
			std::cout << "Wrong" << std::endl;
		}
		sides_count();
		std::cout << "Sides: a = " << a << "\tb = " << b << "\tc = " << c << "\td = " << d << std::endl;
		std::cout << "Angles: a = " << A << "\tB = " << B << "\tC = " << C << "\tD = " << D << std::endl;
	}
};
int main()
{
	Figure* tri = new Triangle(10, 20, 30, 60, 40, 100);
	tri->print();

	Figure* r_t = new R_Triangle(20, 30, 40, 50, 80);
	r_t->print();

	Figure* eq_t = new Eq_Triangle(77);
	eq_t->print();

	Figure* iso_t = new Iso_Triangle(80, 40, 60, 30);
	iso_t->print();

	Figure* quad = new Quadrangle(45, 67, 23, 76, 24, 87, 23, 56);
	quad->print();

	Figure* rect = new Rectangle(40, 70);
	rect->print();

	Figure* sqr = new Square(69);
	sqr->print();

	Figure* par = new Parallelogram(20, 60, 50, 90);
	par->print();

	Figure* rho = new Rhombus(420, 80, 100);
	rho->print();
}