
/* ==== CDC::SetTextAlign @ 004b1738 ==== 
 * signature: uint __thiscall SetTextAlign(CDC * this, uint param_1)
 * body: 004b1738-004b1770
 * note: Library Function - Single Match  public: unsigned int __thiscall CDC::SetTextAlign(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: unsigned int __thiscall CDC::SetTextAlign(unsigned int)
   
   Library: Visual Studio 1998 Release */

uint __thiscall CDC::SetTextAlign(CDC *this,uint param_1)

{
  UINT local_8;
  
  if (*(HDC *)(this + 8) != *(HDC *)(this + 4)) {
    ::SetTextAlign(*(HDC *)(this + 4),param_1);
  }
  if (*(HDC *)(this + 8) != (HDC)0x0) {
    local_8 = ::SetTextAlign(*(HDC *)(this + 8),param_1);
  }
  return local_8;
}


