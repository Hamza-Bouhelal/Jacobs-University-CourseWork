class Vector{
  private:
  int n;
  double *v;

  public:
  Vector();
  Vector(int N, double*& );
  Vector(const Vector &a);
  ~Vector();
  void print();
  void setN(int N);
  void setVn(double*& Vn);
  int getN();
  double *getVn();
  double norm() const;
  Vector add(const Vector &)const;
  Vector diff(const Vector &a)const;
  double scal(Vector &a)const;[6,5,7,8,8]
};
