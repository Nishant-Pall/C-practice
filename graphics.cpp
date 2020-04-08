#include<windows.h>
using namespace std;
int main()
{
 int d , DETECT,m;
initgraph(&d,&m,"c:\\tc\\bgi");
int x1=100,y1=200,r=100;
setcolor (RED);
setlinestyle (SOLID_LINE,0,THICK_WIDTH);
circle(x1,y1,r);setfillstyle(SOLID_FILL,GREEN);
floodfill (x1,y1,RED);
return 0;
closegraph();
}
