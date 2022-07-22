#include <deque>
using namespace std;
class WindGauge {
public:
WindGauge(int period = 12);
void currentWindSpeed(int speed);
int highest();
int lowest();
int average();
void dump();
void currentwindspeedrecords();

protected: 
deque<int> WindSpeedRecords;
int Perd;
};