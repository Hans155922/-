#include<iostream>
#include<fstream>
using namespace std;

int out(int in) {
	int a, b, c, d, e, f;
	a = in % 10;
	b = (in / 10) % 10;
	c = (in / 100) % 10;
	d = (in / 1000) % 10;
	e = (in / 10000) % 10;
	f = (in / 100000) % 10;
	ofstream fout("main.cpp", ofstream::app);
	fout << "case " << in << ":" << endl;
	if (f != 0) {
		fout << "cout<<\"" << in << " ����λ��\"<<endl;" << endl;
		fout << "cout<<\"��λ�� " << a << " \"<< endl;" << endl;
		fout << "cout<<\"ʮλ�� " << b << " \"<< endl;" << endl;
		fout << "cout<<\"��λ�� " << c << " \"<< endl;" << endl;
		fout << "cout<<\"ǧλ�� " << d << " \"<< endl;" << endl;
		fout << "cout<<\"��λ�� " << e << " \"<< endl;" << endl;
		fout << "cout<<\"ʮ��λ�� " << f << " \"<< endl;" << endl;
		fout << "cout<<\"�������� " << f << e << d << c << b << a << "\"endl;" << endl;
		fout << "break;" << endl;
		return 0;
	}
	else if (e != 0) {
		fout << "cout<<\"" << in << " ����λ��\"<<endl;" << endl;
		fout << "cout<<\"��λ�� " << a << " \"<< endl;" << endl;
		fout << "cout<<\"ʮλ�� " << b << " \"<< endl;" << endl;
		fout << "cout<<\"��λ�� " << c << " \"<< endl;" << endl;
		fout << "cout<<\"ǧλ�� " << d << " \"<< endl;" << endl;
		fout << "cout<<\"��λ�� " << e << " \"<< endl;" << endl;
		fout << "cout<<\"�������� " << e << d << c << b << a << "\"endl;" << endl;
		fout << "break;" << endl;
		return 0;
	}
	else if (d != 0) {
		fout << "cout<<\"" << in << " ����λ��\"<<endl;" << endl;
		fout << "cout<<\"��λ�� " << a << " \"<< endl;" << endl;
		fout << "cout<<\"ʮλ�� " << b << " \"<< endl;" << endl;
		fout << "cout<<\"��λ�� " << c << " \"<< endl;" << endl;
		fout << "cout<<\"ǧλ�� " << d << " \"<< endl;" << endl;
		fout << "cout<<\"�������� " << d << c << b << a << "\"endl;" << endl;
		fout << "break;" << endl;
		return 0;
	}
	else if (c != 0) {
		fout << "cout<<\"" << in << " ����λ��\"<<endl;" << endl;
		fout << "cout<<\"��λ�� " << a << " \"<< endl;" << endl;
		fout << "cout<<\"ʮλ�� " << b << " \"<< endl;" << endl;
		fout << "cout<<\"��λ�� " << c << " \"<< endl;" << endl;
		fout << "cout<<\"�������� " << c << b << a << "\"endl;" << endl;
		fout << "break;" << endl;
		return 0;
	}
	else if (b != 0) {
		fout << "cout<<\"" << in << " ����λ��\"<<endl;" << endl;
		fout << "cout<<\"��λ�� " << a << " \"<< endl;" << endl;
		fout << "cout<<\"ʮλ�� " << b << " \"<< endl;" << endl;
		fout << "cout<<\"�������� " << b << a << "\"endl;" << endl;
		fout << "break;" << endl;
		return 0;
	}
	else{
		fout << "cout<<\"" << in << " ��һλ��\"<<endl;" << endl;
		fout << "cout<<\"��λ�� " << a << " \"<< endl;" << endl;
		fout << "break;" << endl;
		return 0;
	} 
}
int main() {
	ofstream fout;
	fout.open("main.cpp");
	fout << "#include<iostream>" << endl;
	fout << "using namespace std;" << endl;
	fout << "int main(){" << endl;
	fout << "cout << \"�����һ����������λ������������\";" << endl;
	fout << "int x;" << endl;
	fout << "cin >> x; "<<endl;
	fout << "switch(x){" << endl;
	fout.close();
	for (int a = 0; a < 1000000; a++) {
		out(a);
	}
	fout.open("main.cpp", ofstream::app);
	fout << "}" << endl << "}";
	fout.close();
}