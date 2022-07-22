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

   void static setLocation(char newLocation[]){strcpy(location,newLocation);};

   void print();

};
class Player:public TournamentMember{
  private:
  int number;
  int position;
  int numberofgoals;
  char  lorrfooted[];
  public:
  Player();
  Player(char*, char*, char*, int, int,int,int,int,char );
  Player(const Player&);
  ~Player();

  inline void setNumber(int Number){number=Number;};
  inline int getNumber(){return number;};

  inline void setPosition(int Position){position=Position;};
  inline int getPosition(){return position;};

  inline void setNumberOfGoals(int NumberOfGoals){numberofgoals=NumberOfGoals;};
  inline int getNumberOfGoals(){return numberofgoals;};

  inline void setLorRFooted(char c){if(c=='r'){strcpy(lorrfooted,"Right Foot");}else if(c=='l'){strcpy(lorrfooted,"Left Foot");}};
  inline char * getLorRFooted(){return lorrfooted;};

  void printp();
  void addgoals();
};
