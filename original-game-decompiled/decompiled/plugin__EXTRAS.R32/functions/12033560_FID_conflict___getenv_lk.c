
/* ==== FID_conflict:__getenv_lk @ 12033560 ==== 
 * signature: char * __cdecl FID_conflict:__getenv_lk(char * _VarName)
 * body: 12033560-120335f5
 * note: Library Function - Multiple Matches With Different Base Names  __getenv_lk  _getenv  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __getenv_lk
    _getenv
   
   Library: Visual Studio 1998 Release */

char * __cdecl FID_conflict___getenv_lk(char *_VarName)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  if (DAT_12037eb4 == (int *)0x0) {
    if ((DAT_12037ebc != 0) && (iVar2 = ___wtomb_environ(), iVar2 != 0)) {
      return (char *)0x0;
    }
    if (DAT_12037eb4 == (int *)0x0) {
      return (char *)0x0;
    }
  }
  if (_VarName != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = _VarName;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    iVar2 = *DAT_12037eb4;
    piVar5 = DAT_12037eb4;
    while (iVar2 != 0) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)*piVar5;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (((uVar3 < ~uVar4 - 1) && (((uchar *)*piVar5)[uVar3] == '=')) &&
         (iVar2 = __mbsnbicoll((uchar *)*piVar5,(uchar *)_VarName,uVar3), iVar2 == 0)) {
        return (char *)(*piVar5 + 1 + uVar3);
      }
      piVar5 = piVar5 + 1;
      iVar2 = *piVar5;
    }
  }
  return (char *)0x0;
}


