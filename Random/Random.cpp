/*
产生随机数
*/
#include "iostream"
#include "random"
/// @brief 取得[a,b)的随机整数
/// @param a 最小值
/// @param b 最大值
/// @return
int Getrandom_one(int a, int b) {
	return rand() % (b - a) + a;
}
/// @brief 取得[a,b]的随机整数
/// @param a 最大值
/// @param b 最小值
/// @return
int Getrandom_two(int a, int b) {
	return rand() % (b - a + 1) + a;
}
/// @brief 取得(a,b]的随机整数
/// @param a 最大值
/// @param b 最小值
/// @return
int Getrandom_three(int a, int b) {
	return rand() % (b - a) + a + 1;
}
//要取得a到b之间的随机整数，另一种表示：a + (int)b * rand() / (RAND_MAX + 1)。
//要取得0～1之间的浮点数，可以使用rand() / double(RAND_MAX)。
int main() {
	srand(time(0));
	std::cout << Getrandom_one(0, 1) << std::endl << Getrandom_two(0, 1) << std::endl << Getrandom_three(0, 1);
	return 0;
}