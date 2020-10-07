#include "CMyString.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cstdio>
#include "CMyString.h"

CMyString::CMyString()
    :m_pszData(nullptr)
    , m_nLength(0)
{
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

