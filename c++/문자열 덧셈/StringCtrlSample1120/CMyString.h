#pragma warning(disable:4996)
#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();
	//��ȯ ������
	explicit CMyString(const char* szParam);

	//���� ������
	CMyString(const CMyString& rhs);

	//�̵� ������
	CMyString(CMyString&& rhs);

	int GetLength()const;

	CMyString operator+(const CMyString& rhs);
	CMyString& operator+=(const CMyString& rhs);


private:
	// ���ڿ��� �����ϱ� ���� �����Ҵ��� �޸𸮸� ����Ű�� ������
	char* m_pszData;
	// ����� ���ڿ��� ����
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


