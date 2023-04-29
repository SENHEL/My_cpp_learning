#include "arr.h"
void arr::inputArr() {
	std::cout << "请依次输入带查找的十个数";
	int i = 0;
	while (1) {
		std::cin >> a[i++];
		char c = getchar();
		if (c == '\n') {
			break;
		}
	}
}

int arr::findMax() {
	max = a[0];
	for (int i = 0; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

void arr::showArr() {
	using namespace std;
	cout << "数组中的最大值为：" << max;
}