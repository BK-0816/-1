//5763712 ������ �ڷᱸ�� ���� 
#include <iostream>
using namespace std;

int main(){
    int i, j; 
    int prime_sum=0; 
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            prime_sum += j; 
    }
    cout << "0���� 100���� �Ҽ��� �� : " << prime_sum << endl;
    
    return 0;
}