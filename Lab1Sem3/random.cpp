#include<iostream>
//#include<clocale>
#include <vector>

using namespace std;

void menu(){

	cout << "������� ����� ������ ������������� ��������������� �����" << endl;
	cout << "0 - �����" << endl << "1 - �������� ������������ �����" << endl<<
		"2 - ������������ ������������ �����" << endl <<
		"3 - ����� ���������" << endl <<
		"4 - �������� ������������ ������������������" << endl <<
		"5 - ����� �����������" << endl <<
		"6 - ������� 3 �����" << endl <<
		"7 - ����� �������� ���������" << endl <<
		"8 - ����� �����������"<<endl<<
		"9 - ����� ���������" << endl <<
		"10 - ����� ������"<<endl;

}
//vector<double> rand1();
//vector<double> rand2();
//vector<double> rand3();
//vector<double> rand4();
vector<double> res;
void table(int n);

int nextRand1(int m , int a, int c, int x)
	{
		return ((a*x + c) % m);
	}
void rand1()
	{
		int m; int a; int c;
		int X0; int n; int number; double u;
		//vector<double>res;
		cout << "������� ������ m (����������� �����, ������������ �������� ��������� ������� �� �������; m>1" << endl;
		cin >> m;
		cout << "������� ��������� a (0<=a<m)" << endl;
		cin >> a;
		cout << "������� ���������� c (0<=c<m)" << endl;
		cin >> c;
		cout << "������� ��������� �������� X0 (0<=X0<m)" << endl;
		cin >> X0;	
		cout << "������� ���������� ��������������� �����" << endl;
		cin >> n;
		int x = X0;
		for (int i = 0; i < n; i++)
		{
			x = nextRand1(m, a, c, x);
			res.push_back((double)x / (double)m);
		}
		 table(n);
	}
int nextRand2(int m, int a, int c, int x, int d)
{
	return ((d*x ^ 2 + a*x + c) % m);
}
void rand2()
{
	int m; int a; int c; int d;
	int X0; int n; int number; double u;
	//vector<double>res;
	cout << "������� ������ m (����������� �����, ������������ �������� ��������� ������� �� �������; m>1" << endl;
	cin >> m;
	cout << "������� d" << endl;
	cin >> d;
	cout << "������� ��������� a (0<=a<m)" << endl;
	cin >> a;
	cout << "������� ���������� c (0<=c<m)" << endl;
	cin >> c;
	cout << "������� ��������� �������� X0 (0<=X0<m)" << endl;
	cin >> X0;
	cout << "������� ���������� ��������������� �����" << endl;
	cin >> n;
	int x = X0;
	for (int i = 0; i < n; i++)
	{
		x = nextRand2(m, a, c, x, d);
		res.push_back(x*1.0 / m);
		///cout << x*1.0 / m << " ";
	}
	table(n);
	//return res;
}
void nextRand3(int &x2,int &x1, int m)
{
	 x2 = ((x2 + x1) % m);
	x1 = (x2 - x1);
	while (x1 < 0)x1 += m;
	x1 %= m;
}
void rand3()
{
	
	int X0; int n; int number; double u; int m;
	
	cout << "������� ��������� �������� X0 (0<=X0<m)" << endl;
	cin >> X0;
	cout << "������� ���������� ��������������� �����" << endl;
	cin >> n;
	cout << "������� ������ m (����������� �����, ������������ �������� ��������� ������� �� �������; m>1" << endl;
	cin >> m;
	int x1 = X0;
	for (int i = 0; i < n; i++)
	{
		nextRand3(X0, x1,m);
		res.push_back((double)x1/(double)m);
		//cout << x1*1.0  << " ";
	} table(n);
}
/*double nextRand4(int x, int m)
{
	return ((x / x) % m);
}
vector<double> rand4()
{

	int X0; int n; int number; double u; int m;
	vector<double>res;
	cout << "������� ��������� �������� X0 (0<=X0<m)" << endl;
	cin >> X0;
	cout << "������� ���������� ��������������� �����" << endl;
	cin >> n;
	cout << "������� ������ m (����������� �����, ������������ �������� ��������� ������� �� �������; m>1" << endl;
	cin >> m;
	int x = X0;
	for (int i = 0; i < n; i++)
	{
		x = nextRand3(m, x);
		res.push_back(x*1.0 / m);
		cout << x*1.0 / m << " ";
	}
	return res;
}*/
bool choice(int method){
	switch (method){
	case 1:{
			   cout << "�� ������� �������� ������������ �����" << endl;
			   rand1();
			   return true;
	}
	case 2:{
			   cout << "�� ������� ������������ ������������ �����" << endl;
			   rand2();
			   return true;
	}
	case 3:{
			   cout << "�� ������� ����� ���������" << endl;
			   rand3();
			   return true;
	}
	case 4:{
			   cout << "�� ������� �������� ������������ ������������������" << endl;
			   ///rand4();
			   return true;
	}
	case 5:{
			   cout << "�� ������� ����� �����������" << endl;
			   //rand5();
			   return true;
	}
	case 6:{
			   cout << "�� ������� ������� 3 �����" << endl;
			   //rand6();
			   return true;
	}
	case 7:{
			   cout << "�� ������� ����� �������� ���������" << endl;
			   //rand7();
			   return true;
	}
	case 8:{
			   cout << "�� ������� ����� �����������" << endl;
			   /// rand8();
			   return true;
	}
	case 9:{
			   cout << "�� ������� ����� ���������" << endl;
			   //rand9();
			   return true;
	}
	case 10:{
				cout << "�� ������� ����� ������" << endl;
				// rand10();
				return true;
	}
	default:
		cout << "������������ �������" << endl;
	}
}

int main() { 
	setlocale(LC_CTYPE, "russian"); 
	int method;
	menu();
	cin >> method;
	choice(method);
	
	system("pause");
	return 0; 
}
void table(int n){
	cout << "�������� \t �������" << endl; 
	int u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0 && res[i] <= 0.1)u++;
	}
	cout << "[0;0,1]\t" << (double)u/n<< endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.1 && res[i] <= 0.2)u++;
	}
	cout << "[0,1;0,2]\t" << (double)u / n << endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.2 && res[i] <= 0.3)u++;
	}
	cout << "[0,2;0,3]\t" << (double)u / n << endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.3 && res[i] <= 0.4)u++;
	}
	cout << "[0,3;0,4]\t" << (double)u / n << endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.4 && res[i] <= 0.5)u++;
	}
	cout << "[0,4;0,5]\t" << (double)u / n << endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.5 && res[i] <= 0.6)u++;
	}
	cout << "[0,5;0,6]\t" << (double)u / n << endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.6 && res[i] <= 0.7)u++;
	}
	cout << "[0,6;0,7]\t" << (double)u / n << endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.7 && res[i] <= 0.8)u++;
	}
	cout << "[0,7;0,8]\t" << (double)u / n << endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.8 && res[i] <= 0.9)u++;
	}
	cout << "[0,8;0,9]\t" << (double)u / n << endl;
	u = 0;
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i] >= 0.9 && res[i] <= 1)u++;
	}
	cout << "[0,9;1]\t" << (double)u / n << endl;
	

}







