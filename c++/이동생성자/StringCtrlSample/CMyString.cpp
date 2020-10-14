#include "CMyString.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <cstdio>
#include "CMyString.h"
using namespace std;

CMyString::CMyString(CMyString&& rhs)
    :m_pszData(nullptr)
    , m_nLength(0)
{
	cout << "CMyString 이동생성자 호출" << endl;

	//얕은 복사를 수행해도 상관없다. 어차피 원본이 곧 소멸되기 때문이다.
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	//원본 임시 객체의 멤버들은 초기화 한다. 절대로 해제 하면 안된다.
	rhs.m_pszData = nullptr;
	rhs.m_nLength = 0;

}

CMyString::~CMyString()
{
}

CMyString::CMyString(const CMyString& rhs) {
	SetString(rhs.GetString());
}

CMyString& CMyString::operator=(const CMyString& rhs) {
	SetString(rhs.GetString());
	return *this;
}

CMyString::CMyString(const	char* pszParam)
	:m_pszData(nullptr)
	, m_nLength(0)
{
	SetString(pszParam);
}


int CMyString::SetString(const char* pszParam)
{
    // TODO: 여기에 구현 코드 추가.
    m_nLength = strlen(pszParam);
    if (m_nLength <= 0) {
		return 0;
	}
	m_pszData = new char[m_nLength + 1];
	strcpy(m_pszData, pszParam);
	return 0;
}



const char* CMyString::GetString() const
{
	if (m_pszData == nullptr) return "";
	return m_pszData;
    
}


void CMyString::Release()
{
    // TODO: 여기에 구현 코드 추가.
	delete[] m_pszData;
}

