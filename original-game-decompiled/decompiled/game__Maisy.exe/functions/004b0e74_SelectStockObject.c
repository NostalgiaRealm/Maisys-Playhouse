
/* ==== CDC::SelectStockObject @ 004b0e74 ==== 
 * signature: CGdiObject * __thiscall SelectStockObject(CDC * this, int param_1)
 * body: 004b0e74-004b0ebd
 * note: Library Function - Single Match  public: virtual class CGdiObject * __thiscall CDC::SelectStockObject(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual class CGdiObject * __thiscall CDC::SelectStockObject(int)
   
   Library: Visual Studio 1998 Release */

CGdiObject * __thiscall CDC::SelectStockObject(CDC *this,int param_1)

{
  HGDIOBJ h;
  CGdiObject *pCVar1;
  HGDIOBJ local_8;
  
  h = GetStockObject(param_1);
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    local_8 = ::SelectObject(*(HDC *)(this + 4),h);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    local_8 = ::SelectObject(*(HDC *)(this + 8),h);
  }
  pCVar1 = CGdiObject::FromHandle(local_8);
  return pCVar1;
}


