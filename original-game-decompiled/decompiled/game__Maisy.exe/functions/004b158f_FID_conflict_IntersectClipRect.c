
/* ==== FID_conflict:IntersectClipRect @ 004b158f ==== 
 * signature: int __stdcall FID_conflict:IntersectClipRect(HDC hdc, int left, int top, int right, int bottom)
 * body: 004b158f-004b15dc
 * note: Library Function - Multiple Matches With Different Base Names  public: int __thiscall CDC::ExcludeClipRect(int,int,int,int)  public: int __thiscall CDC::IntersectClipRect(int,int,int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CDC::ExcludeClipRect(int,int,int,int)
    public: int __thiscall CDC::IntersectClipRect(int,int,int,int)
   
   Library: Visual Studio 1998 Release */

int FID_conflict_IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int in_ECX;
  undefined4 local_8;
  
  if (*(HDC *)(in_ECX + 8) != *(HDC *)(in_ECX + 4)) {
    local_8 = IntersectClipRect(*(HDC *)(in_ECX + 4),(int)hdc,left,top,right);
  }
  if (*(HDC *)(in_ECX + 8) != (HDC)0x0) {
    local_8 = IntersectClipRect(*(HDC *)(in_ECX + 8),(int)hdc,left,top,right);
  }
  return local_8;
}


