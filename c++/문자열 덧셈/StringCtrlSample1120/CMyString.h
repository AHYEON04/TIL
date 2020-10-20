#pragma warning(disable:4996)
#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();
	//변환 생성자
	explicit CMyString(const char* szParam);

	//복사 생성자
	CMyString(const CMyString& rhs);

	//이동 생성자
	CMyString(CMyString&& rhs);

	int GetLength()const;

	CMyString operator+(const CMyString& rhs);
	CMyString& operator+=(const CMyString& rhs);


private:
	// 문자열을 저장하기 위해 동적할당한 메모리를 가리키는 포인터
	char* m_pszData;
	// 저장된 문자열의 길이
	int m_nLength;
public:
	int SetString(const char* pszParam);
	const char* GetString() const;
	void Release();
	int Append(const char* pszParam);

	CMyString& operator=(const CMyString& rhs);
	
	operator char* ()	const
	{
		return	m_pszData;
	}

};


