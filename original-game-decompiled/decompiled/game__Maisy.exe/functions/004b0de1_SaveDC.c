
/* ==== CDC::SaveDC @ 004b0de1 ==== 
 * signature: int __thiscall SaveDC(CDC * this)
 * body: 004b0de1-004b0e1c
 * note: Library Function - Single Match  public: virtual int __thiscall CDC::SaveDC(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CDC::SaveDC(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CDC::SaveDC(CDC *this)

{
  int iVar1;
  int local_4;
  
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    local_4 = ::SaveDC(*(HDC *)(this + 8));
  }
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    iVar1 = ::SaveDC(*(HDC *)(this + 4));
    if (iVar1 != 0) {
      local_4 = -1;
    }
  }
  return local_4;
}


