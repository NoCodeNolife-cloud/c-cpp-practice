#pragma once
using namespace std;

class Exception
{
public:
	Exception() { return; }
	virtual ~Exception() { return; }
	virtual void PrintError() = 0;
	//���麯�����������麯��ʱ������ʼ����Ϊ0�ĺ������������麯����һ����ʽ�� virtual �������� ������ (��������) =0;
	//���麯��ֻ�к��������ֶ����߱������Ĺ��ܣ����ܱ����á���ֻ��֪ͨ����ϵͳ: ������������һ���麯���������������ж��塱�����������жԴ˺����ṩ����������ܾ߱������Ĺ��ܣ��ɱ����á�
};
