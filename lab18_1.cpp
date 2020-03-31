#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){

	Rect R1,R2 ;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> R1.x >> R1.y >> R1.w >> R1.h ;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> R2.x >> R2.y >> R2.w >> R2.h ;
	
	
	cout << "Overlap area = " << overlap(R1,R2);	
	return 0;
}

double overlap(Rect a,Rect b){
	double A1w,A2w,inters ;
	A1w = min(a.x + a.w,b.x + b.w) - max(a.x,b.x) ;
	A2w = min(b.y,a.y) - max(a.y - a.h,b.y - b.h) ;
	inters = A1w*A2w ;
	if(inters<0) inters = 0;

	
	return inters ;
	
}