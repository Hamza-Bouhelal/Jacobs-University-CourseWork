#include <cstring>
class TournamentMember{
  private:
  char* fname=new char[36];
  char* lname=new char[36];
  char* dateofbirth= new char[11];
  int height;
  int insurancenumber;
  static char location[36];

  public:
   TournamentMember();
   TournamentMember(char*, char*,char*,int,int);
   ~TournamentMember();
   TournamentMember(const TournamentMember&);

   void setFname(char* Fname){strcpy(fname,Fname);};
   char * getFname(){return fname;};

   void setLname(char* Lname){strcpy(lname,Lname);};
   char * getLname(){return lname;};

   void setDateOfBirth(char* DateOfBrith){strcpy(dateofbirth,DateOfBrith);};
   char * getDateOfBirth(){return dateofbirth;};

   void setHeight(int Height){height=Height;};
   int getHeight(){return height;};

   void setInsuranceNumber(int InsuranceNumber){insurancenumber=InsuranceNumber;};
   int getInsuranceNumber(){return insurancenumber;};

   void setLocation(char newLocation[]){strcpy(location,newLocation);};

   void print();

};
