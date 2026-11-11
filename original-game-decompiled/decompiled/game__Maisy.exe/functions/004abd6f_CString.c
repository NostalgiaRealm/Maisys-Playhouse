
/* ==== CString::CString @ 004abd6f ==== 
 * signature: undefined __thiscall CString(CString * this, ushort * param_1)
 * body: 004abd6f-004abdcc
 * note: Library Function - Single Match  public: __thiscall CString::CString(unsigned short const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CString::CString(unsigned short const *)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::CString(CString *this,ushort *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = 0;
  ppuVar1 = FUN_004abb3e();
  *(undefined **)this = *ppuVar1;
  if (param_1 != (ushort *)0x0) {
    iVar2 = FUN_00492020((short *)param_1);
  }
  if (iVar2 != 0) {
    AllocBuffer(this,iVar2 * 2);
    _wcstombsz(*(char **)this,param_1,iVar2 * 2 + 1);
    ReleaseBuffer(this,-1);
  }
  return this;
}


