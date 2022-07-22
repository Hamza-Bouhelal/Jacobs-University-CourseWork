class Complex{
  private:
   double real;
   double im;

  public:
  Complex();
  Complex(double newreal, double newim);
  ~Complex();
  void setReal(double newreal);
  void setIm(double newim);
  double getReal();
double getIm();
void print();
Complex add(Complex a);
Complex subs(Complex a);
Complex multi(Complex a);
Complex conjugate();
};
