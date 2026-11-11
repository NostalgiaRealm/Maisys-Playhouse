
/* ==== FUN_130039f0 @ 130039f0 ==== 
 * signature: undefined __cdecl FUN_130039f0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 130039f0-13003bdd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_130039f0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_c;
  undefined4 local_8;
  int iStack_4;
  
  if (*(int *)(param_3 + 0xe) != 0) {
    if (0 < *(int *)(param_3 + 10)) {
      *param_2 = 0x66;
      iVar3 = *(int *)(param_3 + 10);
      if ((*(int *)(param_2 + 7) != 0) && (*(int *)(param_2 + 3) != 0)) {
        iVar2 = *(int *)(param_2 + 3) + -1;
        if (iVar3 <= iVar2) {
          iVar2 = iVar3;
        }
        pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,1,&local_c);
        _DAT_13008d34 =
             (*pcVar1)(local_c,*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_3 + 0xe),iVar2);
        *(int *)(param_2 + 5) = iVar2;
        *(undefined1 *)(*(int *)(param_2 + 7) + iVar2) = 0;
        return;
      }
      local_8 = 0;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *param_2 = 0x66;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      if (0 < iVar3) {
        pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_c);
        _DAT_13008d34 = (*pcVar1)(local_c,param_2 + 7,iVar3);
        if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
          *(int *)(param_2 + 3) = iVar3;
          **(undefined1 **)(param_2 + 7) = 0;
        }
      }
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0,&local_c);
      _DAT_13008d34 = (*pcVar1)(local_c,*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_3 + 0xe))
      ;
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xc,&iStack_4);
      _DAT_13008d34 = (*pcVar1)(iStack_4,&local_8,*(undefined4 *)(param_2 + 7));
      *(undefined4 *)(param_2 + 5) = local_8;
      return;
    }
    if ((*(int *)(param_3 + 0xe) != 0) && (*(int *)(param_2 + 7) == 0)) {
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_c);
      _DAT_13008d34 = (*pcVar1)(local_c,param_2 + 7,1);
      *(undefined4 *)(param_2 + 3) = 1;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_2 + 5) = 0;
  if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
    **(undefined1 **)(param_2 + 7) = 0;
  }
  return;
}


