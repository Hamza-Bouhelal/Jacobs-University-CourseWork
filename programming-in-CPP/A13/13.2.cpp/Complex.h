class Complex {
  private:
      double real;
      double im;
  public:
      Complex();
      Complex(double r, double i = 0);
      Complex(const Complex&);
      ~Complex();
      void setReal(double re);
      void setImaginary(double im);
      double getReal();
      double getImaginary();
      void conjugate();
      void print();
      Complex add(Complex);
      Complex subs(Complex);
      Complex multi(Complex);
      Complex divide(Complex);
      Complex operator+(const Complex&);
      Complex operator-(const Complex&);
      Complex operator*(const Complex&);
      Complex operator/(const Complex&);
      Complex& operator= (const Complex&);
      friend std::ostream& operator<<(std::ostream &out, const Complex& a);
      friend std::istream& operator>>(std::istream&in, Complex& a);

};
