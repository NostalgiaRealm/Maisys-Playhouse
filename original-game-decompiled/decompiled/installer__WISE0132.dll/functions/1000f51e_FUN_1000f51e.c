
/* ==== FUN_1000f51e @ 1000f51e ==== 
 * signature: undefined __cdecl FUN_1000f51e(undefined4 * param_1, int param_2, int param_3)
 * body: 1000f51e-1000f63f
 */

void __cdecl FUN_1000f51e(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  byte *pbVar5;
  DWORD local_14 [2];
  int local_c;
  int local_8;
  
  pbVar5 = (byte *)*param_1;
  if ((DAT_100238dc._2_1_ & 1) != 0) {
    iVar3 = FUN_10016190(pbVar5);
    DAT_10023f38 = DAT_10023f38 + iVar3;
  }
  piVar1 = (int *)(param_2 + param_3 * 4);
  if (*(int *)(param_2 + param_3 * 4) == 0) {
    bVar2 = FUN_10014010(param_3 + 1,local_14);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      local_c = local_c * local_8;
    }
    else {
      local_c = 0;
    }
    if (local_c < 0x401) {
      *piVar1 = 1;
    }
    else if (local_c < 0x801) {
      *piVar1 = 2;
    }
    else if (local_c < 0x1001) {
      *piVar1 = 3;
    }
    else if (local_c < 0x2001) {
      *piVar1 = 4;
    }
    else if (local_c < 0x4001) {
      *piVar1 = 5;
    }
    else {
      *piVar1 = (0x8000 < local_c) + 6;
    }
  }
  iVar3 = *piVar1;
  while( true ) {
    if (DAT_100200d4 < 2) {
      uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar5 * 2] & 4;
    }
    else {
      uVar4 = FUN_10015ac0((int)(char)*pbVar5,4);
    }
    if (((uVar4 == 0) && (*pbVar5 != 0x2c)) || (iVar3 < 1)) break;
    while( true ) {
      if (DAT_100200d4 < 2) {
        uVar4 = (byte)PTR_DAT_1001fec8[(char)*pbVar5 * 2] & 4;
      }
      else {
        uVar4 = FUN_10015ac0((int)(char)*pbVar5,4);
      }
      if (uVar4 == 0) break;
      pbVar5 = pbVar5 + 1;
    }
    if (*pbVar5 == 0x2c) {
      pbVar5 = pbVar5 + 1;
    }
    iVar3 = iVar3 + -1;
  }
  *param_1 = pbVar5;
  FUN_10016190(pbVar5);
  return;
}


