#include <windows.h>

void pixel_thick(int x,int y,HDC hdc,int p )
{


	for( int j=-p;j<p;j++)
	{    
		for( int g=-p;g<p;g++)
		{	
		SetPixel(hdc,x+g,y+j,RGB(0,0,0));
		}
	}
}

void main()
{
M:
pixel_thick(100,100,GetDC(0),10);
goto M;
}