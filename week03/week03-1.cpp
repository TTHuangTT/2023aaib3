///�]�� range-based for �j�� �����b C++11 (2011����)�~���
///�p�G�ϥ� C++98(1998�~��C++) �|�L�k���T�sĶ ����|�X�� �j��X����
///CodeBlocks 17.12 �� Setting-Compliter �ĲĤG�� -std=c++11
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c:s){
        cout << c << endl;
    }
	return 0;
}
