class Box{
  private:
  double height;
  double width;
  double depth;

  public:
  Box();
  Box(double newheight, double newwidth, double newdepth);
  Box(const Box & a);
  ~Box();
  void setHeight(double newheight);
  void setWidth(double newwidth);
  void setDepth(double newdepth);
  double getHeight();
  double getWidth();
  double getDepth();
};
