
/* ==== __mbsdec @ 00494660 ==== 
 * signature: uchar * __cdecl __mbsdec(uchar * _Start, uchar * _Pos)
 * body: 00494660-004946df
 * note: Library Function - Single Match  __mbsdec  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsdec
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbsdec(uchar *_Start,uchar *_Pos)

{
  byte *pbVar1;
  
  if (_Pos <= _Start) {
    return (uchar *)0x0;
  }
  if (DAT_004de2f4 == 0) {
    return _Pos + -1;
  }
  pbVar1 = _Pos + -1;
  __lock(0x19);
  if ((*(byte *)((int)&DAT_004de1f0 + *pbVar1 + 1) & 4) != 0) {
    FUN_00493e20(0x19);
    return _Pos + -2;
  }
  do {
    pbVar1 = pbVar1 + -1;
    if (pbVar1 < _Start) break;
  } while ((*(byte *)((int)&DAT_004de1f0 + *pbVar1 + 1) & 4) != 0);
  FUN_00493e20(0x19);
  return _Pos + (-1 - ((int)_Pos - (int)pbVar1 & 1U));
}


