
/* ==== _tolower @ 1102b800 ==== 
 * signature: int __cdecl _tolower(int _C)
 * body: 1102b800-1102b86d
 * note: Library Function - Single Match  _tolower  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 1998 Release */

int __cdecl _tolower(int _C)

{
  bool bVar1;
  
  if (DAT_11036c80 == 0) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      return _C + 0x20;
    }
  }
  else {
    bVar1 = DAT_11039a14 == 0;
    if (bVar1) {
      DAT_11039a18 = DAT_11039a18 + 1;
    }
    else {
      __lock(0x13);
    }
    _C = __tolower_lk(_C);
    if (!bVar1) {
      FUN_1102b240(0x13);
      return _C;
    }
    DAT_11039a18 = DAT_11039a18 + -1;
  }
  return _C;
}


