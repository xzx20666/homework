
/**************************

Ժ    ϵ����������ѧԺ

��    �ߣ���־��

ѧ    �ţ�31903161

***************************/

//����������
//���ʵ������10��0��100֮������������������

#include <iostream>
using namespace std;
 
#include "sort.hpp"  
#include "randomNumber.hpp"  

int main(int argc, char** argv) { 
    cout << "Random Number" << endl;  //����10�����ֵ�����
    vector<int> sortarray;    
    sortarray = randomNumber();
    for (int i = 0;i < 10;i++) {
        cout << sortarray[i] << endl;
    }

    cout << "\n" << endl;     //�������������
    cout << "Sorted Number" << endl;
    sortarray=sort(sortarray);  
    for (int i = 0;i < 10;i++) {
        cout << sortarray[i] << endl;
    }
    return 0;
}

