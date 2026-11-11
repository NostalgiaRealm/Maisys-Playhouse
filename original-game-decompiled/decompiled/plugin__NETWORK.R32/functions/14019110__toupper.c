
/* ==== _toupper @ 14019110 ==== 
 * signature: int __cdecl _toupper(int _C)
 * body: 14019110-1401917d
 * note: Library Function - Single Match  _toupper  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 1998 Release */

int __cdecl _toupper(int _C)

{
  bool bVar1;
  
  if (DAT_140272c0 == 0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      return _C + -0x20;
    }
  }
  else {
    bVar1 = DAT_14029f80 == 0;
    if (bVar1) {
      DAT_14029f84 = DAT_14029f84 + 1;
    }
    else {
      __lock(0x13);
    }
    _C = __toupper_lk(_C);
    if (!bVar1) {
      FUN_1401a650(0x13);
      return _C;
    }
    DAT_14029f84 = DAT_14029f84 + -1;
  }
  return _C;
}


