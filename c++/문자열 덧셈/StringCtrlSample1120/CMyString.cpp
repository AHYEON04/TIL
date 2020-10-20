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
	cout << "CMyString �̵������� ȣ��" << endl;

	//���� ���縦 �����ص� �������. ������ ������ �� �Ҹ�Ǳ� �����̴�.
	m_pszData = rhs.m_pszData;
	m_nLength = rhs.m_nLength;

	//���� �ӽ� ��ü�� ������� �ʱ�ȭ �Ѵ�. ����� ���� �ϸ� �ȵȴ�.
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
    // TODO: ���⿡ ���� �ڵ� �߰�.
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
	//�Ű����� ��ȿ�� �˻�
	if(pszParam == nullptr)
	   return 0;

	int nLenParam = strlen(pszParam);
	if (nLenParam == 0)
		return 0;
	//��Ʈ�� ���ڿ��� ���ٸ� ���� ���ڿ��� �Ҵ��� �Ͱ� �����ϰ� ó����
	if (m_pszData == NULL) {
		SetString(pszParam);
		return m_nLength;
	}

	//���� ���ڿ��� ���� ���
	int nLenCur = m_nLength;

	// �� ���ڿ��� ���ļ� ������ �� �ִ� �޸𸮸� ���� �Ҵ���
	char* pszResult = new char[nLenCur + nLenParam + 1];

	// ���ڿ� ����
	strcpy(pszResult, m_pszData);
	strcpy(pszResult + (sizeof(char) * nLenCur), pszParam);

	//���� ���ڿ� ���� �� ��� ���� ����
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
    // TODO: ���⿡ ���� �ڵ� �߰�.
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

