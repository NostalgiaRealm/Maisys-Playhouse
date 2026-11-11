
/* ==== CString::operator= @ 004abe72 ==== 
 * signature: CString * __thiscall operator=(CString * this, ushort * param_1)
 * body: 004abe72-004abec2
 * note: Library Function - Single Match  public: class CString const & __thiscall CString::operator=(unsigned short const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString const & __thiscall CString::operator=(unsigned short const *)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::operator=(CString *this,ushort *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (ushort *)0x0) {
    iVar1 = FUN_00492020((short *)param_1);
  }
  AllocBeforeWrite(this,iVar1 * 2);
  _wcstombsz(*(char **)this,param_1,iVar1 * 2 + 1);
  ReleaseBuffer(this,-1);
  return this;
}


