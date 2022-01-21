
#include <iostream>
using namespace std;
float polek(float r);
float polep(float a, float b);
float polet(float a, float h);
void szescian(float a);
void walec(float r, float h);
int main()
{
	float r, a, b, h;
	cout << "podaj r = ", cin >> r;
	cout << "podaj a = ", cin >> a;
	cout << "podaj b = ", cin >> b;
	cout << "podaj h = ", cin >> h;

	if (h > 0 && a > 0 && b > 0 && h > 0) {
		cout<< "pole kola: " << polek(r) << endl;
		cout << "pole prostokata: " <<polep(a, b) << endl; 
		cout<< "pole trojkata: " << polet(a, h)<< endl; 
		szescian(a); cout<<endl; 
		walec(r, h); cout << endl; 

	}
	else cout << "Bledne dane";
}

	float polek(float r) {
		return 3.14 * r * r;
	}
	float polep(float a, float b) {
		return a * b;
	}
	float polet(float a, float h) {
		return 0.5 * a * h;
	}
	void szescian(float a) {
		cout << "Pole = " << 6 * a * a <<endl;
		cout << "Objetosc = " << a * a * a;
	}

	void walec(float r, float h) {
		cout << "Pole = " << 2*(3.14 * r * r) + 2*3.14*r* h << endl;
		cout << "Objetosc = " << 3.14 * r * r * h;
	}