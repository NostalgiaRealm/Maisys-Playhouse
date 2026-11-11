
/* ==== CDC::SelectObject @ 004b0ebe ==== 
 * signature: CPen * __thiscall SelectObject(CDC * this, CPen * param_1)
 * body: 004b0ebe-004b0f17
 * note: Library Function - Single Match  public: class CPen * __thiscall CDC::SelectObject(class CPen *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CPen * __thiscall CDC::SelectObject(class CPen *)
   
   Library: Visual Studio 1998 Release */

CPen * __thiscall CDC::SelectObject(CDC *this,CPen *param_1)

{
  CGdiObject *pCVar1;
  HGDIOBJ pvVar2;
  HGDIOBJ local_8;
  
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    pvVar2 = (HGDIOBJ)0x0;
    if (param_1 != (CPen *)0x0) {
      pvVar2 = *(HGDIOBJ *)(param_1 + 4);
    }
    local_8 = ::SelectObject(*(HDC *)(this + 4),pvVar2);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    pvVar2 = (HGDIOBJ)0x0;
    if (param_1 != (CPen *)0x0) {
      pvVar2 = *(HGDIOBJ *)(param_1 + 4);
    }
    local_8 = ::SelectObject(*(HDC *)(this + 8),pvVar2);
  }
  pCVar1 = CGdiObject::FromHandle(local_8);
  return (CPen *)pCVar1;
}


