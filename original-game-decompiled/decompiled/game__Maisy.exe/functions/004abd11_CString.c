
/* ==== CString::CString @ 004abd11 ==== 
 * signature: undefined __thiscall CString(CString * this, char * param_1)
 * body: 004abd11-004abd6e
 * note: Library Function - Single Match  public: __thiscall CString::CString(char const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CString::CString(char const *)
   
   Library: Visual Studio 1998 Release */

CString * __thiscall CString::CString(CString *this,char *param_1)

{
  undefined **ppuVar1;
  size_t _Size;
  
  ppuVar1 = FUN_004abb3e();
  *(undefined **)this = *ppuVar1;
  if (param_1 != (char *)0x0) {
    if ((short)((uint)param_1 >> 0x10) == 0) {
      LoadStringA(this,(uint)param_1 & 0xffff);
      return this;
    }
    if (param_1 != (char *)0x0) {
      _Size = lstrlenA(param_1);
      goto LAB_004abd4f;
    }
  }
  _Size = 0;
LAB_004abd4f:
  if (_Size != 0) {
    AllocBuffer(this,_Size);
    FID_conflict__memcpy(*(void **)this,param_1,_Size);
  }
  return this;
}


