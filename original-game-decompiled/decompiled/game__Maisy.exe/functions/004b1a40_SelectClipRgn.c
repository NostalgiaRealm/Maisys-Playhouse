
/* ==== CDC::SelectClipRgn @ 004b1a40 ==== 
 * signature: int __thiscall SelectClipRgn(CDC * this, CRgn * param_1, int param_2)
 * body: 004b1a40-004b1a9a
 * note: Library Function - Single Match  public: int __thiscall CDC::SelectClipRgn(class CRgn *,int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CDC::SelectClipRgn(class CRgn *,int)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDC::SelectClipRgn(CDC *this,CRgn *param_1,int param_2)

{
  HRGN pHVar1;
  int local_8;
  
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    pHVar1 = (HRGN)0x0;
    if (param_1 != (CRgn *)0x0) {
      pHVar1 = *(HRGN *)(param_1 + 4);
    }
    local_8 = ExtSelectClipRgn(*(HDC *)(this + 4),pHVar1,param_2);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    pHVar1 = (HRGN)0x0;
    if (param_1 != (CRgn *)0x0) {
      pHVar1 = *(HRGN *)(param_1 + 4);
    }
    local_8 = ExtSelectClipRgn(*(HDC *)(this + 8),pHVar1,param_2);
  }
  return local_8;
}


