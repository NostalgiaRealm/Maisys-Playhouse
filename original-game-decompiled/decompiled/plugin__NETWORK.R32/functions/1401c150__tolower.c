
/* ==== _tolower @ 1401c150 ==== 
 * signature: int __cdecl _tolower(int _C)
 * body: 1401c150-1401c1bd
 * note: Library Function - Single Match  _tolower  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 1998 Release */

int __cdecl _tolower(int _C)

{
  bool bVar1;
  
  if (DAT_140272c0 == 0) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      return _C + 0x20;
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
    _C = __tolower_lk(_C);
    if (!bVar1) {
      FUN_1401a650(0x13);
      return _C;
    }
    DAT_14029f84 = DAT_14029f84 + -1;
  }
  return _C;
}


