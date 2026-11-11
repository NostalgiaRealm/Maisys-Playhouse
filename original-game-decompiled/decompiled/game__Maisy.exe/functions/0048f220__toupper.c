
/* ==== _toupper @ 0048f220 ==== 
 * signature: int __cdecl _toupper(int _C)
 * body: 0048f220-0048f28d
 * note: Library Function - Single Match  _toupper  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 1998 Release */

int __cdecl _toupper(int _C)

{
  bool bVar1;
  
  if (DAT_004de6a0 == 0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      return _C + -0x20;
    }
  }
  else {
    bVar1 = DAT_004e6794 == 0;
    if (bVar1) {
      DAT_004e6798 = DAT_004e6798 + 1;
    }
    else {
      __lock(0x13);
    }
    _C = __toupper_lk(_C);
    if (!bVar1) {
      FUN_00493e20(0x13);
      return _C;
    }
    DAT_004e6798 = DAT_004e6798 + -1;
  }
  return _C;
}


