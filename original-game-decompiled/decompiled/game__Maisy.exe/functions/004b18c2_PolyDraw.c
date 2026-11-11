
/* ==== CDC::PolyDraw @ 004b18c2 ==== 
 * signature: int __thiscall PolyDraw(CDC * this, tagPOINT * param_1, uchar * param_2, int param_3)
 * body: 004b18c2-004b190d
 * note: Library Function - Single Match  public: int __thiscall CDC::PolyDraw(struct tagPOINT const *,unsigned char const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CDC::PolyDraw(struct tagPOINT const *,unsigned char const *,int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDC::PolyDraw(CDC *this,tagPOINT *param_1,uchar *param_2,int param_3)

{
  BOOL BVar1;
  tagPOINT local_c;
  
  BVar1 = ::PolyDraw(*(HDC *)(this + 4),param_1,param_2,param_3);
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    GetCurrentPositionEx(*(HDC *)(this + 4),&local_c);
    MoveToEx(*(HDC *)(this + 8),local_c.x,local_c.y,(LPPOINT)0x0);
  }
  return BVar1;
}


