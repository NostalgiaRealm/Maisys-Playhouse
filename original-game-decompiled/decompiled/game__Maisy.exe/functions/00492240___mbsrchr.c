
/* ==== __mbsrchr @ 00492240 ==== 
 * signature: uchar * __cdecl __mbsrchr(uchar * _Str, uint _Ch)
 * body: 00492240-004922c3
 * note: Library Function - Single Match  __mbsrchr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsrchr
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbsrchr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  uchar *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)0x0;
  if (DAT_004de2f4 == 0) {
    puVar2 = (uchar *)_strrchr((char *)_Str,_Ch);
    return puVar2;
  }
  __lock(0x19);
  do {
    bVar1 = *_Str;
    if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) == 0) {
      pbVar4 = _Str;
      if (bVar1 == _Ch) {
LAB_004922aa:
        pbVar3 = _Str;
        pbVar4 = pbVar3;
      }
    }
    else {
      pbVar4 = _Str + 1;
      if (_Str[1] == 0) {
        _Str = pbVar4;
        if (pbVar3 == (byte *)0x0) goto LAB_004922aa;
      }
      else if (CONCAT11(bVar1,_Str[1]) == _Ch) {
        pbVar3 = _Str;
      }
    }
    _Str = pbVar4 + 1;
    if (*pbVar4 == 0) {
      FUN_00493e20(0x19);
      return pbVar3;
    }
  } while( true );
}


