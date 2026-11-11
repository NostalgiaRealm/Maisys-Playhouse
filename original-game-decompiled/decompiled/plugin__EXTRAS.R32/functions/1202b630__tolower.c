
/* ==== _tolower @ 1202b630 ==== 
 * signature: int __cdecl _tolower(int _C)
 * body: 1202b630-1202b69d
 * note: Library Function - Single Match  _tolower  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 1998 Release */

int __cdecl _tolower(int _C)

{
  bool bVar1;
  
  if (DAT_12038558 == 0) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      return _C + 0x20;
    }
  }
  else {
    bVar1 = DAT_1203aae4 == 0;
    if (bVar1) {
      DAT_1203aae8 = DAT_1203aae8 + 1;
    }
    else {
      __lock(0x13);
    }
    _C = __tolower_lk(_C);
    if (!bVar1) {
      FUN_1202c520(0x13);
      return _C;
    }
    DAT_1203aae8 = DAT_1203aae8 + -1;
  }
  return _C;
}


