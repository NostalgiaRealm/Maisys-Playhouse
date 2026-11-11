
/* ==== FID_conflict:SelectClipRgn @ 004b149b ==== 
 * signature: int __stdcall FID_conflict:SelectClipRgn(HDC hdc, HRGN hrgn)
 * body: 004b149b-004b14ef
 * note: Library Function - Multiple Matches With Different Base Names  public: int __thiscall CDC::SelectClipRgn(class CRgn *)  public: int __thiscall CDC::SelectObject(class CRgn *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CDC::SelectClipRgn(class CRgn *)
    public: int __thiscall CDC::SelectObject(class CRgn *)
   
   Library: Visual Studio 1998 Release */

int FID_conflict_SelectClipRgn(HDC hdc,HRGN hrgn)

{
  int in_ECX;
  HRGN pHVar1;
  int local_8;
  
  if (*(HDC *)(in_ECX + 8) != *(HDC *)(in_ECX + 4)) {
    pHVar1 = (HRGN)0x0;
    if (hdc != (HDC)0x0) {
      pHVar1 = (HRGN)hdc[1].unused;
    }
    local_8 = SelectClipRgn(*(HDC *)(in_ECX + 4),pHVar1);
  }
  if (*(HDC *)(in_ECX + 8) != (HDC)0x0) {
    pHVar1 = (HRGN)0x0;
    if (hdc != (HDC)0x0) {
      pHVar1 = (HRGN)hdc[1].unused;
    }
    local_8 = SelectClipRgn(*(HDC *)(in_ECX + 8),pHVar1);
  }
  return local_8;
}


