
/* ==== _strtok @ 0048f380 ==== 
 * signature: char * __cdecl _strtok(char * _Str, char * _Delim)
 * body: 0048f380-0048f457
 * note: Library Function - Single Match  _strtok  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strtok
   
   Library: Visual Studio 1998 Release */

char * __cdecl _strtok(char *_Str,char *_Delim)

{
  byte bVar1;
  uint uVar2;
  _ptiddata p_Var3;
  byte *pbVar4;
  int iVar5;
  byte local_20 [32];
  
  p_Var3 = __getptd();
  pbVar4 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *_Delim;
    _Delim = _Delim + 1;
    local_20[bVar1 >> 3] = local_20[bVar1 >> 3] | '\x01' << (bVar1 & 7);
  } while (bVar1 != 0);
  if (_Str == (char *)0x0) {
    _Str = p_Var3->_token;
  }
  uVar2 = 1 << (*_Str & 7U) & (uint)local_20[(byte)*_Str >> 3];
  for (; (uVar2 != 0 && (*_Str != 0)); _Str = _Str + 1) {
    uVar2 = 1 << (_Str[1] & 7U) & (uint)local_20[(byte)_Str[1] >> 3];
  }
  bVar1 = *_Str;
  pbVar4 = (byte *)_Str;
  do {
    if (bVar1 == 0) {
LAB_0048f43e:
      p_Var3->_token = (char *)pbVar4;
      return (char *)((pbVar4 == (byte *)_Str) - 1 & (uint)_Str);
    }
    if ((1 << (*pbVar4 & 7) & (uint)local_20[*pbVar4 >> 3]) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_0048f43e;
    }
    pbVar4 = pbVar4 + 1;
    bVar1 = *pbVar4;
  } while( true );
}


