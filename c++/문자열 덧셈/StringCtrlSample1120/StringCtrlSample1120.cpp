#include	<iostream>
#include	"CMyString.h"
using	namespace	std;
int	main()
{
	CMyString	strLeft("학번	:	1120"), strRight(",	이름	:	최아연"), strResult;	//	학번과	이름은	본인	것으로	수정
	strResult = strLeft + strRight;
	cout << strResult << endl;
	cout << strLeft << endl;
	strLeft += strRight;
	cout << strLeft << endl;
	return	0;
}