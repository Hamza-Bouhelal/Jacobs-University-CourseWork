class Creature {
	public:
		Creature();
    ~Creature();
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
    ~Wizard();
		void hover() const;

	private:
		int distFactor;
};

class Monster: public Creature{
  public:
  Monster();
  ~ Monster();
  void climb() const;

  private:
  int distFactor;
};

class Lizards: public Creature{
  public:
  Lizards();
  ~Lizards();
  void crawl() const;

  private:
  double distFactor;
};
