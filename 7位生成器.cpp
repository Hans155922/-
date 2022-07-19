#include <iostream>
#include <fstream>
using namespace std;

long long int out(long long int in)
{
	int a, b, c, d, e, f, g;
	a = in % 10;
	b = (in / 10) % 10;
	c = (in / 100) % 10;
	d = (in / 1000) % 10;
	e = (in / 10000) % 10;
	f = (in / 100000) % 10;
	g = (in / 1000000) % 10;
	ofstream fout("main.cpp", ofstream::app);
	fout << "	case " << in << ":" << endl;
	if (g != 0)
	{
		fout << "		cout<<\"" << in << " 是七位数\"<<endl;" << endl;
		fout << "		cout<<\"个位是 " << a << " \"<< endl;" << endl;
		fout << "		cout<<\"十位是 " << b << " \"<< endl;" << endl;
		fout << "		cout<<\"百位是 " << c << " \"<< endl;" << endl;
		fout << "		cout<<\"千位是 " << d << " \"<< endl;" << endl;
		fout << "		cout<<\"万位是 " << e << " \"<< endl;" << endl;
		fout << "		cout<<\"十万位是 " << f << " \"<< endl;" << endl;
		fout << "		cout<<\"百万位是 " << g << " \"<< endl;" << endl;
		fout << "		cout<<\"倒过来是 " << g << f << e << d << c << b << a << "\"<< endl;" << endl;
		fout << "		break;" << endl;
		return 0;
	}
	else if (f != 0)
	{
		fout << "		cout<<\"" << in << " 是六位数\"<<endl;" << endl;
		fout << "		cout<<\"个位是 " << a << " \"<< endl;" << endl;
		fout << "		cout<<\"十位是 " << b << " \"<< endl;" << endl;
		fout << "		cout<<\"百位是 " << c << " \"<< endl;" << endl;
		fout << "		cout<<\"千位是 " << d << " \"<< endl;" << endl;
		fout << "		cout<<\"万位是 " << e << " \"<< endl;" << endl;
		fout << "		cout<<\"十万位是 " << f << " \"<< endl;" << endl;
		fout << "		cout<<\"倒过来是 " << f << e << d << c << b << a << "\"<< endl;" << endl;
		fout << "		break;" << endl;
		return 0;
	}
	else if (e != 0)
	{
		fout << "		cout<<\"" << in << " 是五位数\"<<endl;" << endl;
		fout << "		cout<<\"个位是 " << a << " \"<< endl;" << endl;
		fout << "		cout<<\"十位是 " << b << " \"<< endl;" << endl;
		fout << "		cout<<\"百位是 " << c << " \"<< endl;" << endl;
		fout << "		cout<<\"千位是 " << d << " \"<< endl;" << endl;
		fout << "		cout<<\"万位是 " << e << " \"<< endl;" << endl;
		fout << "		cout<<\"倒过来是 " << e << d << c << b << a << "\"<< endl;" << endl;
		fout << "		break;" << endl;
		return 0;
	}
	else if (d != 0)
	{
		fout << "		cout<<\"" << in << " 是四位数\"<<endl;" << endl;
		fout << "		cout<<\"个位是 " << a << " \"<< endl;" << endl;
		fout << "		cout<<\"十位是 " << b << " \"<< endl;" << endl;
		fout << "		cout<<\"百位是 " << c << " \"<< endl;" << endl;
		fout << "		cout<<\"千位是 " << d << " \"<< endl;" << endl;
		fout << "		cout<<\"倒过来是 " << d << c << b << a << "\"<< endl;" << endl;
		fout << "		break;" << endl;
		return 0;
	}
	else if (c != 0)
	{
		fout << "		cout<<\"" << in << " 是三位数\"<<endl;" << endl;
		fout << "		cout<<\"个位是 " << a << " \"<< endl;" << endl;
		fout << "		cout<<\"十位是 " << b << " \"<< endl;" << endl;
		fout << "		cout<<\"百位是 " << c << " \"<< endl;" << endl;
		fout << "		cout<<\"倒过来是 " << c << b << a << "\"<< endl;" << endl;
		fout << "		break;" << endl;
		return 0;
	}
	else if (b != 0)
	{
		fout << "		cout<<\"" << in << " 是两位数\"<<endl;" << endl;
		fout << "		cout<<\"个位是 " << a << " \"<< endl;" << endl;
		fout << "		cout<<\"十位是 " << b << " \"<< endl;" << endl;
		fout << "		cout<<\"倒过来是 " << b << a << "\"<< endl;" << endl;
		fout << "		break;" << endl;
		return 0;
	}
	else
	{
		fout << "		cout<<\"" << in << " 是一位数\"<<endl;" << endl;
		fout << "		cout<<\"个位是 " << a << " \"<< endl;" << endl;
		fout << "		break;" << endl;
		return 0;
	}
}
int main()
{
	ofstream fout;
	fout.open("main.cpp");
	fout << "#include<iostream>" << endl;
	fout << "using namespace std;" << endl;
	fout << "int main(){" << endl;
	fout << "	cout << \"请给出一个不多于六位数的正整数：\";" << endl;
	fout << "	int x;" << endl;
	fout << "	cin >> x; " << endl;
	fout << "	switch(x){" << endl;
	fout.close();
	for (long long int a = 0; a < 10000000; a++)
	{
		out(a);
		cout << "正常处理" << a << endl;
	}
	fout.open("main.cpp", ofstream::app);
	fout << "	}" << endl
		 << "}";
	fout.close();
}