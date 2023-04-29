#include"Time.h"
int main() {
	using namespace std;
	Time t1(10, 10, 10);
	Time t2(12, 12, 12);
	t1.set();
	t1.show();
	t2.show();
	return 0;
}