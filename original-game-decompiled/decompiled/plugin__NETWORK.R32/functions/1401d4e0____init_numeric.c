
/* ==== ___init_numeric @ 1401d4e0 ==== 
 * signature: int __cdecl ___init_numeric(threadlocinfo * _LocInfo)
 * body: 1401d4e0-1401d6f5
 * note: Library Function - Single Match  ___init_numeric  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 1998 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_EDI;
  uint _Lc_type;
  
  _Lc_type = (uint)DAT_1402767a;
  if (DAT_140272c8 != 0) {
    iVar1 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xe,0x1402763c,unaff_EDI);
    iVar2 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xf,0x14027640,unaff_EDI);
    iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x10,0x14027644,unaff_EDI);
    fix_grouping(DAT_14027644);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_1401dd10(DAT_1402763c);
      FUN_1401dd10(DAT_14027640);
      FUN_1401dd10(DAT_14027644);
      DAT_1402763c = (LPVOID)0x0;
      DAT_14027640 = (LPVOID)0x0;
      DAT_14027644 = (char *)0x0;
      return -1;
    }
    if (*(undefined **)PTR_PTR_140282a0 != &DAT_14028268) {
      FUN_1401dd10(*(undefined **)PTR_PTR_140282a0);
      FUN_1401dd10(*(LPVOID *)(PTR_PTR_140282a0 + 4));
      FUN_1401dd10(*(LPVOID *)(PTR_PTR_140282a0 + 8));
    }
    *(LPVOID *)PTR_PTR_140282a0 = DAT_1402763c;
    *(LPVOID *)(PTR_PTR_140282a0 + 4) = DAT_14027640;
    *(char **)(PTR_PTR_140282a0 + 8) = DAT_14027644;
    _DAT_14027084 = 1;
    DAT_14027080 = **(undefined1 **)PTR_PTR_140282a0;
    return 0;
  }
  FUN_1401dd10(DAT_1402763c);
  FUN_1401dd10(DAT_14027640);
  FUN_1401dd10(DAT_14027644);
  DAT_1402763c = (LPVOID)0x0;
  DAT_14027640 = (LPVOID)0x0;
  DAT_14027644 = (char *)0x0;
  uVar4 = FUN_1401def0(2);
  *(undefined4 *)PTR_PTR_140282a0 = uVar4;
  if (*(undefined2 **)PTR_PTR_140282a0 == (undefined2 *)0x0) {
    return -1;
  }
  **(undefined2 **)PTR_PTR_140282a0 = 0x2e;
  uVar4 = FUN_1401def0(2);
  *(undefined4 *)(PTR_PTR_140282a0 + 4) = uVar4;
  if (*(undefined1 **)(PTR_PTR_140282a0 + 4) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_140282a0 + 4) = 0;
  uVar4 = FUN_1401def0(2);
  *(undefined4 *)(PTR_PTR_140282a0 + 8) = uVar4;
  if (*(undefined1 **)(PTR_PTR_140282a0 + 8) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_140282a0 + 8) = 0;
  _DAT_14027084 = 1;
  DAT_14027080 = **(undefined1 **)PTR_PTR_140282a0;
  return 0;
}


