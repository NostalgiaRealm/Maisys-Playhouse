
/* ==== FUN_11004490 @ 11004490 ==== 
 * signature: undefined1 __cdecl FUN_11004490(undefined4 * param_1, int param_2)
 * body: 11004490-11004605
 */

undefined1 __cdecl FUN_11004490(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  undefined1 local_15;
  uint local_14 [5];
  
  local_15 = 1;
  iVar1 = *(int *)((int)param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  local_14[0] = *(uint *)(iVar1 + 0x10);
  if (iVar2 == 0x7d1) {
    FUN_110142f0(param_1,*(int *)(param_2 + 0x14));
    iVar3 = *(int *)(param_2 + 0xc);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0xc) == 0x12f) || (*(int *)(param_2 + 0xc) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar2 == 0x7d2) {
    iVar3 = *(int *)(param_2 + 0xc);
    if ((((iVar3 == 0x12d) || (iVar3 == 0x12e)) || ((0x130 < iVar3 && (iVar3 < 0x134)))) ||
       ((iVar3 == 0x135 || (iVar3 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0xc) == 0x12f) || (*(int *)(param_2 + 0xc) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
  }
  if ((*(int *)(param_2 + 0xc) == iVar2) &&
     ((*(uint *)(param_2 + 0x10) == local_14[0] || (*(uint *)(param_2 + 0x10) == 0)))) {
    if (*(int *)(param_2 + 0x14) != 0) {
      bVar5 = *(int *)(*(int *)(param_2 + 0x14) + 0x10) == 0;
      local_14[0] = local_14[0] & 0xffff0000;
      if (bVar5) {
        FUN_11013e60();
      }
      sVar4 = FUN_11019ea0(param_1,*(int *)(param_2 + 0x14),iVar1,(undefined4 *)0x0,
                           (undefined2 *)local_14);
      if (bVar5) {
        FUN_11013e70();
      }
      if (sVar4 != 0) {
        FUN_1101d180(param_1,CONCAT22((short)((uint)iVar1 >> 0x10),sVar4),(short *)local_14);
      }
    }
    local_15 = 0;
  }
  return local_15;
}


