///因為 range-based for 迴圈 必須在 C++11 (2011之後)才能用
///如果使用 C++98(1998年版C++) 會無法正確編譯 執行會出錯 迴圈出不來
///CodeBlocks 17.12 裡 Setting-Compliter 勾第二個 -std=c++11
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
