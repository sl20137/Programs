#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double x1, y1, x2, y2, x3, y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double a = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	double b = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	double c = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	double s = (a+b+c)/2;
	cout<<fixed<<setprecision(2)<<sqrt(s*(s-a)*(s-b)*(s-c));
	return 0;
}
