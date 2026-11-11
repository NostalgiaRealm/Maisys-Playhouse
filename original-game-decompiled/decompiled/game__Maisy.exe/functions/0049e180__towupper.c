
/* ==== _towupper @ 0049e180 ==== 
 * signature: wint_t __cdecl _towupper(wint_t _C)
 * body: 0049e180-0049e1f4
 * note: Library Function - Single Match  _towupper  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _towupper
   
   Library: Visual Studio 1998 Release */

wint_t __cdecl _towupper(wint_t _C)

{
  uint uVar1;
  bool bVar2;
  undefined2 in_stack_00000006;
  
  if (DAT_004de6a0 == 0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      return _C - 0x20;
    }
  }
  else {
    bVar2 = DAT_004e6794 == 0;
    if (bVar2) {
      DAT_004e6798 = DAT_004e6798 + 1;
    }
    else {
      __lock(0x13);
    }
    uVar1 = __towupper_lk(__C);
    _C = (wint_t)uVar1;
    if (!bVar2) {
      FUN_00493e20(0x13);
      return _C;
    }
    DAT_004e6798 = DAT_004e6798 + -1;
  }
  return _C;
}


