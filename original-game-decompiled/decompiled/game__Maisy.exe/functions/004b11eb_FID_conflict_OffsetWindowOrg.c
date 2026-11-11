
/* ==== FID_conflict:OffsetWindowOrg @ 004b11eb ==== 
 * signature: LONG * __thiscall FID_conflict:OffsetWindowOrg(void * this, LONG * param_1, int param_2, int param_3)
 * body: 004b11eb-004b123b
 * note: Library Function - Multiple Matches With Different Base Names  public: class CPoint __thiscall CDC::MoveTo(int,int)  public: virtual class CPoint __thiscall CDC::OffsetViewportOrg(int,int)  public: class CPoint __thiscall CDC::OffsetWindowOrg(int,int)  public: virtual class CSize __thiscall CDC::SetViewportExt(int,int)   7 names - too many to list  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: class CPoint __thiscall CDC::MoveTo(int,int)
    public: virtual class CPoint __thiscall CDC::OffsetViewportOrg(int,int)
    public: class CPoint __thiscall CDC::OffsetWindowOrg(int,int)
    public: virtual class CSize __thiscall CDC::SetViewportExt(int,int)
     7 names - too many to list
   
   Library: Visual Studio 1998 Release */

LONG * __thiscall FID_conflict_OffsetWindowOrg(void *this,LONG *param_1,int param_2,int param_3)

{
  tagPOINT local_c;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    SetViewportOrgEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetViewportOrgEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.x;
  param_1[1] = local_c.y;
  return param_1;
}


