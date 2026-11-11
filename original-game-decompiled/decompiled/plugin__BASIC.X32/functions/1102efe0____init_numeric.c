
/* ==== ___init_numeric @ 1102efe0 ==== 
 * signature: int __cdecl ___init_numeric(threadlocinfo * _LocInfo)
 * body: 1102efe0-1102f1f5
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
  
  _Lc_type = (uint)DAT_1103725a;
  if (DAT_11036c88 != 0) {
    iVar1 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xe,0x11037224,unaff_EDI);
    iVar2 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xf,0x11037228,unaff_EDI);
    iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x10,0x1103722c,unaff_EDI);
    fix_grouping(DAT_1103722c);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_11029180(DAT_11037224);
      FUN_11029180(DAT_11037228);
      FUN_11029180(DAT_1103722c);
      DAT_11037224 = (LPVOID)0x0;
      DAT_11037228 = (LPVOID)0x0;
      DAT_1103722c = (char *)0x0;
      return -1;
    }
    if (*(undefined **)PTR_PTR_11037b50 != &DAT_11037b18) {
      FUN_11029180(*(undefined **)PTR_PTR_11037b50);
      FUN_11029180(*(LPVOID *)(PTR_PTR_11037b50 + 4));
      FUN_11029180(*(LPVOID *)(PTR_PTR_11037b50 + 8));
    }
    *(LPVOID *)PTR_PTR_11037b50 = DAT_11037224;
    *(LPVOID *)(PTR_PTR_11037b50 + 4) = DAT_11037228;
    *(char **)(PTR_PTR_11037b50 + 8) = DAT_1103722c;
    _DAT_11036a30 = 1;
    DAT_11036a2c = **(undefined1 **)PTR_PTR_11037b50;
    return 0;
  }
  FUN_11029180(DAT_11037224);
  FUN_11029180(DAT_11037228);
  FUN_11029180(DAT_1103722c);
  DAT_11037224 = (LPVOID)0x0;
  DAT_11037228 = (LPVOID)0x0;
  DAT_1103722c = (char *)0x0;
  uVar4 = FUN_11029420(2);
  *(undefined4 *)PTR_PTR_11037b50 = uVar4;
  if (*(undefined2 **)PTR_PTR_11037b50 == (undefined2 *)0x0) {
    return -1;
  }
  **(undefined2 **)PTR_PTR_11037b50 = 0x2e;
  uVar4 = FUN_11029420(2);
  *(undefined4 *)(PTR_PTR_11037b50 + 4) = uVar4;
  if (*(undefined1 **)(PTR_PTR_11037b50 + 4) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_11037b50 + 4) = 0;
  uVar4 = FUN_11029420(2);
  *(undefined4 *)(PTR_PTR_11037b50 + 8) = uVar4;
  if (*(undefined1 **)(PTR_PTR_11037b50 + 8) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_11037b50 + 8) = 0;
  _DAT_11036a30 = 1;
  DAT_11036a2c = **(undefined1 **)PTR_PTR_11037b50;
  return 0;
}


