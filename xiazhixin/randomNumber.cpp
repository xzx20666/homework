#include<ctime>
#include<cstdlib>
#include "randomNumber.hpp"
#include "assert.h"
using namespace std;

//负责随机生成10个随机数，并组成数组
vector<int> randomNumber() {  
	vector<int>randomint;
	int i,a;   
	srand((unsigned)time(NULL));//设置种子,rand()对应随机数
	assert(NUMBER_OF_ARRAY > 0);  //判断是否是有效数组
	for (i = 0;i < NUMBER_OF_ARRAY;i++) {
		a= rand() % 100;
		randomint.push_back(a);		
	}
	return randomint;
}

