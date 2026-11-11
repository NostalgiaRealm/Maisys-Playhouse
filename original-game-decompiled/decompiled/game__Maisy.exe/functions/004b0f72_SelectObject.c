
/* ==== CDC::SelectObject @ 004b0f72 ==== 
 * signature: CFont * __thiscall SelectObject(CDC * this, CFont * param_1)
 * body: 004b0f72-004b0fcb
 * note: Library Function - Single Match  public: virtual class CFont * __thiscall CDC::SelectObject(class CFont *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CFont * __thiscall CDC::SelectObject(class CFont *)
   
   Library: Visual Studio 1998 Release */

CFont * __thiscall CDC::SelectObject(CDC *this,CFont *param_1)

{
  HGDIOBJ pvVar1;
  CGdiObject *pCVar2;
  HGDIOBJ local_8;
  
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    pvVar1 = (HGDIOBJ)0x0;
    if (param_1 != (CFont *)0x0) {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    local_8 = ::SelectObject(*(HDC *)(this + 4),pvVar1);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    pvVar1 = (HGDIOBJ)0x0;
    if (param_1 != (CFont *)0x0) {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    local_8 = ::SelectObject(*(HDC *)(this + 8),pvVar1);
  }
  pCVar2 = CGdiObject::FromHandle(local_8);
  return (CFont *)pCVar2;
}


