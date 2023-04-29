#include "Time.h"
Time::Time(int h, int m, int s) :hour(h), min(m), sec(s){}

void Time::set() {
	using namespace std;
	cout << "ÇëÊäÈëÊ±·ÖÃë:";
	cin >> hour >> min >> sec;
}
void Time::show() {
	using namespace std;
	cout << hour << ":" << min << ":" << sec;
	cout << endl;
}