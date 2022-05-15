#include<iostream>
using namespace std;

int main() {
	srand(time(0));
	int a, b, c = 0, d, t = 0;
	cout << "borders:";
	cin >> a >> b;
	d = (rand() % b) + a;
	while (t != d)
	{
		c++;
		t = 0;
		cin >> t;
		if (t<d)
		{
			cout << "more"<<endl;
		}
		if (t>d)
		{
			cout << "smaller"<<endl;
		}
		if (t==d)
		{
			cout << "guessed right"<<c;
		}
	}
	return 0;
}