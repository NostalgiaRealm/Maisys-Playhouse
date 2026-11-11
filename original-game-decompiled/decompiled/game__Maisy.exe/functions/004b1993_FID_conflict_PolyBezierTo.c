
/* ==== FID_conflict:PolyBezierTo @ 004b1993 ==== 
 * signature: BOOL __stdcall FID_conflict:PolyBezierTo(HDC hdc, POINT * apt, DWORD cpt)
 * body: 004b1993-004b19db
 * note: Library Function - Multiple Matches With Different Base Names  public: int __thiscall CDC::PolyBezierTo(struct tagPOINT const *,int)  public: int __thiscall CDC::PolylineTo(struct tagPOINT const *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CDC::PolyBezierTo(struct tagPOINT const *,int)
    public: int __thiscall CDC::PolylineTo(struct tagPOINT const *,int)
   
   Library: Visual Studio 1998 Release */

BOOL FID_conflict_PolyBezierTo(HDC hdc,POINT *apt,DWORD cpt)

{
  BOOL BVar1;
  int in_ECX;
  tagPOINT local_c;
  
  BVar1 = PolyBezierTo(*(HDC *)(in_ECX + 4),(POINT *)hdc,(DWORD)apt);
  if (*(HDC *)(in_ECX + 8) != *(HDC *)(in_ECX + 4)) {
    GetCurrentPositionEx(*(HDC *)(in_ECX + 4),&local_c);
    MoveToEx(*(HDC *)(in_ECX + 8),local_c.x,local_c.y,(LPPOINT)0x0);
  }
  return BVar1;
}


