#include <algorithm>
#include "sort.hpp"


//负责将数组元素从小到大排序
vector<int> sort(vector<int> sortarray/*IO*/) {   
	sort(sortarray.begin() ,sortarray.end());
	return sortarray;
}