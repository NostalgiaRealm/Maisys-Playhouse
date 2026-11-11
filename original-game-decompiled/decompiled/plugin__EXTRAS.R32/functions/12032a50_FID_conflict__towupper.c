
/* ==== FID_conflict:_towupper @ 12032a50 ==== 
 * signature: wint_t __cdecl FID_conflict:_towupper(wint_t _C)
 * body: 12032a50-12032aeb
 * note: Library Function - Multiple Matches With Different Base Names  __towupper_lk  _towupper  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __towupper_lk
    _towupper
   
   Library: Visual Studio 1998 Release */

wint_t __cdecl FID_conflict__towupper(wint_t _C)

{
  int iVar1;
  undefined2 in_stack_00000006;
  WCHAR local_2;
  
  if (_C == 0xffff) {
    return 0xffff;
  }
  if (DAT_12038558 == (LPCWSTR)0x0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      __C = (uint)(ushort)(_C - 0x20);
    }
    return _C;
  }
  if (_C < 0x100) {
    iVar1 = _iswctype(_C,2);
    if (iVar1 == 0) {
      return _C;
    }
  }
  iVar1 = ___crtLCMapStringW(DAT_12038558,0x200,(LPCWSTR)&_C,1,&local_2,1);
  if (iVar1 == 0) {
    return _C;
  }
  return local_2;
}


