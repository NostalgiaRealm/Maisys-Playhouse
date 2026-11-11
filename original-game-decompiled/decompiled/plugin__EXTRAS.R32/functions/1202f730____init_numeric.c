
/* ==== ___init_numeric @ 1202f730 ==== 
 * signature: int __cdecl ___init_numeric(threadlocinfo * _LocInfo)
 * body: 1202f730-1202f945
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
  
  _Lc_type = (uint)DAT_12038b4a;
  if (DAT_12038560 != 0) {
    iVar1 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xe,0x12038b0c,unaff_EDI);
    iVar2 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xf,0x12038b10,unaff_EDI);
    iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x10,0x12038b14,unaff_EDI);
    fix_grouping(DAT_12038b14);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_1202c7c0(DAT_12038b0c);
      FUN_1202c7c0(DAT_12038b10);
      FUN_1202c7c0(DAT_12038b14);
      DAT_12038b0c = (LPVOID)0x0;
      DAT_12038b10 = (LPVOID)0x0;
      DAT_12038b14 = (char *)0x0;
      return -1;
    }
    if (*(undefined **)PTR_PTR_12039440 != &DAT_12039408) {
      FUN_1202c7c0(*(undefined **)PTR_PTR_12039440);
      FUN_1202c7c0(*(LPVOID *)(PTR_PTR_12039440 + 4));
      FUN_1202c7c0(*(LPVOID *)(PTR_PTR_12039440 + 8));
    }
    *(LPVOID *)PTR_PTR_12039440 = DAT_12038b0c;
    *(LPVOID *)(PTR_PTR_12039440 + 4) = DAT_12038b10;
    *(char **)(PTR_PTR_12039440 + 8) = DAT_12038b14;
    _DAT_120381bc = 1;
    DAT_120381b8 = **(undefined1 **)PTR_PTR_12039440;
    return 0;
  }
  FUN_1202c7c0(DAT_12038b0c);
  FUN_1202c7c0(DAT_12038b10);
  FUN_1202c7c0(DAT_12038b14);
  DAT_12038b0c = (LPVOID)0x0;
  DAT_12038b10 = (LPVOID)0x0;
  DAT_12038b14 = (char *)0x0;
  uVar4 = FUN_1202c7e0(2);
  *(undefined4 *)PTR_PTR_12039440 = uVar4;
  if (*(undefined2 **)PTR_PTR_12039440 == (undefined2 *)0x0) {
    return -1;
  }
  **(undefined2 **)PTR_PTR_12039440 = 0x2e;
  uVar4 = FUN_1202c7e0(2);
  *(undefined4 *)(PTR_PTR_12039440 + 4) = uVar4;
  if (*(undefined1 **)(PTR_PTR_12039440 + 4) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_12039440 + 4) = 0;
  uVar4 = FUN_1202c7e0(2);
  *(undefined4 *)(PTR_PTR_12039440 + 8) = uVar4;
  if (*(undefined1 **)(PTR_PTR_12039440 + 8) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_12039440 + 8) = 0;
  _DAT_120381bc = 1;
  DAT_120381b8 = **(undefined1 **)PTR_PTR_12039440;
  return 0;
}


