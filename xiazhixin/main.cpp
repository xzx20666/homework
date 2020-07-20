
/**************************

院    系：汽车工程学院

作    者：夏志新

学    号：31903161

***************************/

//功能描述：
//随机实现生成10个0到100之间的整数，并排序输出

#include <iostream>
using namespace std;
 
#include "sort.hpp"  
#include "randomNumber.hpp"  

int main(int argc, char** argv) { 
    cout << "Random Number" << endl;  //生成10个数字的数组
    vector<int> sortarray;    
    sortarray = randomNumber();
    for (int i = 0;i < 10;i++) {
        cout << sortarray[i] << endl;
    }

    cout << "\n" << endl;     //将数组排序并输出
    cout << "Sorted Number" << endl;
    sortarray=sort(sortarray);  
    for (int i = 0;i < 10;i++) {
        cout << sortarray[i] << endl;
    }
    return 0;
}

