#include<iostream>
#include<string.h>
using namespace std;

class Rectangle
{
	private:
		float Length,Width,environment,area;
		char color[20];
		
	public:
		void LengthSet(float L)
		{
			Length=L;
		}
		void WidthSet(float W)
		{
			Width=W;
		}
		void ColorSet(char *c)
		{
			strcpy(color,c);
		}
		float EnvironmentGet()
		{
			return environment;
		}
			float AreaGet()
		{
			return area;
		}
		void CalcEnvironment()
		{
			environment=(Length+Width)*2;		
	   } 
	   void  CalArea()
	   {
	   	    area=(Length*Width);
		}
		void Print()
		{
			cout<<"Environment:"<<environment<<"\n"<<"Area"<<area<<color<<endl;
		 } 		 			
};
int main()
{
   Rectangle rect1;
   
   rect1.LengthSet(10);
   rect1.WidthSet(4);
   rect1.ColorSet("Red");
   
   rect1.CalcEnvironment();
   rect1.CalcArea();
   rect1.Print();
   
   cout<<rect1.EnvironmentGet();
   
   getch();
   
   return0;	
}





