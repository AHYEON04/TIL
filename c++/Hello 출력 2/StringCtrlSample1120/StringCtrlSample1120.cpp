// StringCtrlSample1120.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "CMyString.h"
using namespace std;
void TestFunc(const CMyString & param) {
    cout << param.GetString() << endl;
}

int main()
{
    CMyString strData;
    cout << strData.GetString() << endl;
    strData.Release();
    cout << strData.GetString() << endl;

    CMyString strData2;
    strData.SetString("");
    cout << strData.GetString() << endl;
    strData2.Release();

    CMyString strData3;
    strData3.SetString("Hello");
    TestFunc(strData3);
    cout << strData3.GetString() << endl;
    strData3.Release();
    
    return 0;
}

