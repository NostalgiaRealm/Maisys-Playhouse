
/* ==== FID_conflict:ScaleWindowExt @ 004b12de ==== 
 * signature: LONG * __thiscall FID_conflict:ScaleWindowExt(void * this, LONG * param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 004b12de-004b133a
 * note: Library Function - Multiple Matches With Different Base Names  public: virtual class CSize __thiscall CDC::ScaleViewportExt(int,int,int,int)  public: virtual class CSize __thiscall CDC::ScaleWindowExt(int,int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: virtual class CSize __thiscall CDC::ScaleViewportExt(int,int,int,int)
    public: virtual class CSize __thiscall CDC::ScaleWindowExt(int,int,int,int)
   
   Library: Visual Studio 1998 Release */

LONG * __thiscall
FID_conflict_ScaleWindowExt
          (void *this,LONG *param_1,int param_2,int param_3,int param_4,int param_5)

{
  tagSIZE local_c;
  
  if (*(HDC *)((int)this + 8) != *(HDC *)((int)this + 4)) {
    ScaleViewportExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    ScaleViewportExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_4,param_5,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return param_1;
}


