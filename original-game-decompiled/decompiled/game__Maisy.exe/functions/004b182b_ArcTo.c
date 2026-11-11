
/* ==== CDC::ArcTo @ 004b182b ==== 
 * signature: int __thiscall ArcTo(CDC * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8)
 * body: 004b182b-004b1885
 * note: Library Function - Single Match  public: int __thiscall CDC::ArcTo(int,int,int,int,int,int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CDC::ArcTo(int,int,int,int,int,int,int,int)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CDC::ArcTo(CDC *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  BOOL BVar1;
  tagPOINT local_c;
  
  BVar1 = ::ArcTo(*(HDC *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                 );
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    GetCurrentPositionEx(*(HDC *)(this + 4),&local_c);
    MoveToEx(*(HDC *)(this + 8),local_c.x,local_c.y,(LPPOINT)0x0);
  }
  return BVar1;
}


