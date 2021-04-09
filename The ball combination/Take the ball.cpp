/*
排列C与组合A
口袋中有红、黄、蓝、白、黑5种颜色的球若干个。每次从口袋中取出3个不同颜色的球，问有多少种取法
取出与次序有关,相当于排列A(5中取3)->5*4*3=60(种)
※用if语句来判断不同颜色的球
*/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream result("result.txt", ios::out);
	if (!result.is_open()) {
		cout << "can't open!" << endl;
		exit(EXIT_FAILURE);
	}
	enum color { red, yellow, blue, white, black };
	enum color pri;
	int n, loop, i, j, k;
	char c;
	n = 0;
	for (i = red; i <= black; i++) {
		for (j = red; j <= black; j++) {
			if (i != j) {//前两个球不同
				for (k = red; k <= black; k++)
					if ((k != i) && (k != j)) {//第三个球不同于前两个
						n += 1;
						result.width(4);
						result << n;
						for (int loop = 1; loop <= 3; loop++) {//按次序输出
							switch (loop) {
							case 1:pri = (enum color)i; break;
							case 2:pri = (enum color)j; break;
							case 3:pri = (enum color)k; break;
							default:break;
							}
							switch (pri) {//输出
							case red:result << "     red"; break;
							case yellow:result << "    yellow"; break;
							case blue:result << "    blue"; break;
							case white:result << "    white"; break;
							case black:result << "    black"; break;
							default:break;
							}
						}
						result << endl;
					}
			}
		}
	}
	result << "total:" << n << endl;
	return 0;
}