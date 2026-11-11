
/* ==== trans_ctry_ctry @ 1102fc30 ==== 
 * signature: undefined2 __cdecl trans_ctry_ctry(char * param_1)
 * body: 1102fc30-1102fc84
 * note: Library Function - Single Match  _trans_ctry_ctry  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _trans_ctry_ctry
   
   Library: Visual Studio 1998 Release */

undefined2 __cdecl trans_ctry_ctry(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x57;
  iVar4 = 0;
  do {
    iVar1 = (iVar4 + iVar3) / 2;
    iVar2 = __strcmpi(param_1,*(char **)(iVar1 * 8 + 0x11037580));
    if (iVar2 == 0) {
      return *(undefined2 *)(iVar1 * 8 + 0x11037584);
    }
    if (iVar2 < 0) {
      iVar3 = iVar1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
  } while (iVar1 - iVar3 != -1);
  return 0;
}


