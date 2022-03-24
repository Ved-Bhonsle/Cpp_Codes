#include <iostream>
#include <vector>
using namespace std;

class dailyTemp
{
int temp;
public:
dailyTemp() { temp = 0; }
dailyTemp(int x) { temp = x; }
dailyTemp &operator =(int x)
{
temp = x;
return *this;
}
double getTemp() { return temp; }
};

bool operator<(dailyTemp a,dailyTemp b) { return a.getTemp() < b.getTemp(); }
bool operator==(dailyTemp a,dailyTemp b) { return a.getTemp() == b.getTemp(); }
bool operator>(dailyTemp a,dailyTemp b) { return a.getTemp() > b.getTemp(); }


int main()
{
int i;
vector<dailyTemp> v;

for(i = 0;i < 7;i++) { v.push_back(dailyTemp(60 + rand()%30)); }

cout << "Farenheit Temperature:\n";
for(i = 0;i < 7;i++) { cout << v[i].getTemp()<< " "; }
cout << endl;

for(i = 0;i < 7;i++) { v[i] = (v[i].getTemp() - 32) * 5/9; }

cout << "Centigrade Temperature:\n";
for(i = 0;i < 7;i++) { cout << v[i].getTemp()<< " "; }
cout << endl;

return 0;
}
