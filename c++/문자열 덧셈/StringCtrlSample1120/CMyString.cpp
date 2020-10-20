#include "CMyString.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <cstdio>
using namespace std;

CMyString::CMyString()
	:m_pszData(nullptr)
	, m_nLength(0)
{
}

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

int CMyString::GetLength() const {
	return m_nLength;
}

int CMyString::Append(const char* pszParam) {
	//매개변수 유효성 검사
	if(pszParam == nullptr)
	   return 0;

	int nLenParam = strlen(pszParam);
	if (nLenParam == 0)
		return 0;
	//세트된 문자열이 없다면 새로 문자열을 할당한 것과 동일하게 처리함
	if (m_pszData == NULL) {
		SetString(pszParam);
		return m_nLength;
	}

	//현재 문자열의 길이 백업
	int nLenCur = m_nLength;

	// 두 문자열을 합쳐서 저장할 수 있는 메모리를 새로 할당함
	char* pszResult = new char[nLenCur + nLenParam + 1];

	// 문자열 조합
	strcpy(pszResult, m_pszData);
	strcpy(pszResult + (sizeof(char) * nLenCur), pszParam);

	//기존 문자열 삭제 및 멤버 정보 갱신
	Release();

	m_pszData = pszResult;
	m_nLength = nLenCur + nLenParam;
	
	return m_nLength;
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

CMyString CMyString::operator+(const CMyString& rhs) {
	CMyString tmp(*this);
	tmp.Append(rhs.GetString());
	return tmp;
}

CMyString& CMyString::operator+=(const CMyString& rhs) {
	this->Append(rhs.GetString());
	return *this;
}

