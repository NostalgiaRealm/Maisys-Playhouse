
/* ==== FID_conflict:SelectClipRgn @ 004b0fcc ==== 
 * signature: int __stdcall FID_conflict:SelectClipRgn(HDC hdc, HRGN hrgn)
 * body: 004b0fcc-004b1020
 * note: Library Function - Multiple Matches With Different Base Names  public: int __thiscall CDC::SelectClipRgn(class CRgn *)  public: int __thiscall CDC::SelectObject(class CRgn *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CDC::SelectClipRgn(class CRgn *)
    public: int __thiscall CDC::SelectObject(class CRgn *)
   
   Library: Visual Studio 1998 Release */

int FID_conflict_SelectClipRgn(HDC hdc,HRGN hrgn)

{
  int in_ECX;
  HGDIOBJ pvVar1;
  HGDIOBJ local_8;
  
  if (*(HDC *)(in_ECX + 8) != *(HDC *)(in_ECX + 4)) {
    pvVar1 = (HGDIOBJ)0x0;
    if (hdc != (HDC)0x0) {
      pvVar1 = (HGDIOBJ)hdc[1].unused;
    }
    local_8 = SelectObject(*(HDC *)(in_ECX + 4),pvVar1);
  }
  if (*(HDC *)(in_ECX + 8) != (HDC)0x0) {
    pvVar1 = (HGDIOBJ)0x0;
    if (hdc != (HDC)0x0) {
      pvVar1 = (HGDIOBJ)hdc[1].unused;
    }
    local_8 = SelectObject(*(HDC *)(in_ECX + 8),pvVar1);
  }
  return (int)local_8;
}


