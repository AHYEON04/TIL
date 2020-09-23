// StringCtrlSample1120.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "CMyString.h"
using namespace std;

int main()
{
    CMyString strData;
    strData.Release();

    CMyString strData2;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;
    strData2.Release();

    CMyString strData3;
    strData3.SetString("Hello");
    cout << strData3.GetString() << endl;
    //strData3.Release();
    return 0;
}

