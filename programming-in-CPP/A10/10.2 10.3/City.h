#include <string>
class City{
  private:
   std::string name;
	 int numh;
   std::string mayor;
   double area;
  public:
  //setters
   void setName (std::string& newname);
   void setNumh(int newnumh);
   void setMayor(std::string& newmayor);
   void setArea(double newarea);
   //getters
   std::string& getName();
   int getNumh();
   std::string& getMayor();
   double getArea();
};
