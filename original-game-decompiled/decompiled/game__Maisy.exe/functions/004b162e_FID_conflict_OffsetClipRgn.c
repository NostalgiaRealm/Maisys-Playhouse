
/* ==== FID_conflict:OffsetClipRgn @ 004b162e ==== 
 * signature: int __stdcall FID_conflict:OffsetClipRgn(HDC hdc, int x, int y)
 * body: 004b162e-004b166f
 * note: Library Function - Multiple Matches With Different Base Names  public: int __thiscall CDC::OffsetClipRgn(int,int)  public: int __thiscall CDC::OffsetClipRgn(struct tagSIZE)  public: int __thiscall CDC::SetTextJustification(int,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CDC::OffsetClipRgn(int,int)
    public: int __thiscall CDC::OffsetClipRgn(struct tagSIZE)
    public: int __thiscall CDC::SetTextJustification(int,int)
   
   Library: Visual Studio 1998 Release */

int FID_conflict_OffsetClipRgn(HDC hdc,int x,int y)

{
  int in_ECX;
  undefined4 local_8;
  
  if (*(HDC *)(in_ECX + 8) != *(HDC *)(in_ECX + 4)) {
    local_8 = OffsetClipRgn(*(HDC *)(in_ECX + 4),(int)hdc,x);
  }
  if (*(HDC *)(in_ECX + 8) != (HDC)0x0) {
    local_8 = OffsetClipRgn(*(HDC *)(in_ECX + 8),(int)hdc,x);
  }
  return local_8;
}


