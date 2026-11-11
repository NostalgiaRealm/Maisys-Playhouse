
/* ==== trans_lang_lang @ 120302e0 ==== 
 * signature: undefined2 __cdecl trans_lang_lang(char * param_1)
 * body: 120302e0-12030334
 * note: Library Function - Single Match  _trans_lang_lang  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _trans_lang_lang
   
   Library: Visual Studio 1998 Release */

undefined2 __cdecl trans_lang_lang(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 99;
  iVar4 = 0;
  do {
    iVar1 = (iVar4 + iVar3) / 2;
    iVar2 = __strcmpi(param_1,*(char **)(iVar1 * 8 + 0x12038b58));
    if (iVar2 == 0) {
      return *(undefined2 *)(iVar1 * 8 + 0x12038b5c);
    }
    if (iVar2 < 0) {
      iVar3 = iVar1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
  } while (iVar1 - iVar3 != -1);
  return 0;
}


