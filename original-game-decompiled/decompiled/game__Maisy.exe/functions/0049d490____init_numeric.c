
/* ==== ___init_numeric @ 0049d490 ==== 
 * signature: int __cdecl ___init_numeric(threadlocinfo * _LocInfo)
 * body: 0049d490-0049d6a5
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
  
  _Lc_type = (uint)DAT_004df402;
  if (DAT_004de6a8 != 0) {
    iVar1 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xe,0x4df3cc,unaff_EDI);
    iVar2 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xf,0x4df3d0,unaff_EDI);
    iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)&DAT_00000010,0x4df3d4,unaff_EDI);
    fix_grouping(DAT_004df3d4);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_0048e750(DAT_004df3cc);
      FUN_0048e750(DAT_004df3d0);
      FUN_0048e750(DAT_004df3d4);
      DAT_004df3cc = (LPVOID)0x0;
      DAT_004df3d0 = (LPVOID)0x0;
      DAT_004df3d4 = (char *)0x0;
      return -1;
    }
    if (*(undefined **)PTR_PTR_004dfc78 != &DAT_004dfc40) {
      FUN_0048e750(*(undefined **)PTR_PTR_004dfc78);
      FUN_0048e750(*(LPVOID *)(PTR_PTR_004dfc78 + 4));
      FUN_0048e750(*(LPVOID *)(PTR_PTR_004dfc78 + 8));
    }
    *(LPVOID *)PTR_PTR_004dfc78 = DAT_004df3cc;
    *(LPVOID *)(PTR_PTR_004dfc78 + 4) = DAT_004df3d0;
    *(char **)(PTR_PTR_004dfc78 + 8) = DAT_004df3d4;
    _DAT_004de8d4 = 1;
    DAT_004de8d0 = **(undefined1 **)PTR_PTR_004dfc78;
    return 0;
  }
  FUN_0048e750(DAT_004df3cc);
  FUN_0048e750(DAT_004df3d0);
  FUN_0048e750(DAT_004df3d4);
  DAT_004df3cc = (LPVOID)0x0;
  DAT_004df3d0 = (LPVOID)0x0;
  DAT_004df3d4 = (char *)0x0;
  uVar4 = FUN_00490210(2);
  *(undefined4 *)PTR_PTR_004dfc78 = uVar4;
  if (*(undefined2 **)PTR_PTR_004dfc78 == (undefined2 *)0x0) {
    return -1;
  }
  **(undefined2 **)PTR_PTR_004dfc78 = (undefined2)DAT_004db55c;
  uVar4 = FUN_00490210(2);
  *(undefined4 *)(PTR_PTR_004dfc78 + 4) = uVar4;
  if (*(undefined1 **)(PTR_PTR_004dfc78 + 4) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_004dfc78 + 4) = 0;
  uVar4 = FUN_00490210(2);
  *(undefined4 *)(PTR_PTR_004dfc78 + 8) = uVar4;
  if (*(undefined1 **)(PTR_PTR_004dfc78 + 8) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_004dfc78 + 8) = 0;
  _DAT_004de8d4 = 1;
  DAT_004de8d0 = **(undefined1 **)PTR_PTR_004dfc78;
  return 0;
}


