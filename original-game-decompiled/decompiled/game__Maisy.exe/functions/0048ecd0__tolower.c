
/* ==== _tolower @ 0048ecd0 ==== 
 * signature: int __cdecl _tolower(int _C)
 * body: 0048ecd0-0048ed3d
 * note: Library Function - Single Match  _tolower  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 1998 Release */

int __cdecl _tolower(int _C)

{
  bool bVar1;
  
  if (DAT_004de6a0 == 0) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      return _C + 0x20;
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
    _C = __tolower_lk(_C);
    if (!bVar1) {
      FUN_00493e20(0x13);
      return _C;
    }
    DAT_004e6798 = DAT_004e6798 + -1;
  }
  return _C;
}


