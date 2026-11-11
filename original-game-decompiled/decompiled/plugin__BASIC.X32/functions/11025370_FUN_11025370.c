
/* ==== FUN_11025370 @ 11025370 ==== 
 * signature: short __cdecl FUN_11025370(undefined4 * param_1, int param_2, undefined4 * param_3, short * param_4, int param_5, undefined2 * param_6)
 * body: 11025370-11025554
 */

short __cdecl
FUN_11025370(undefined4 *param_1,int param_2,undefined4 *param_3,short *param_4,int param_5,
            undefined2 *param_6)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_94 [5];
  short local_80;
  undefined4 local_7e;
  undefined4 local_70 [12];
  undefined2 local_40 [8];
  short local_30;
  undefined4 local_2e;
  
  uVar4 = 0;
  uVar1 = *(ushort *)(param_2 + 2);
  if ((uVar1 & 4) != 0) {
    uVar4 = 0x80000000;
  }
  if ((uVar1 & 8) != 0) {
    uVar4 = uVar4 | 0x40000000;
  }
  if ((uVar1 & 0x10) != 0) {
    uVar4 = uVar4 | 0x20000000;
  }
  uVar3 = FUN_1100fc40((int)param_1);
  FUN_11011900(local_94,*(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 10),uVar3,uVar4);
  sVar2 = *param_4;
  if (sVar2 < 0x1a) {
    if (sVar2 == 0x19) {
      local_80 = 8;
      local_7e = *(undefined4 *)(param_4 + 1);
    }
    else {
      if (sVar2 != 3) {
        return -0x1f;
      }
      local_80 = 7;
      local_7e = *(undefined4 *)(param_4 + 1);
    }
  }
  else {
    if ((sVar2 < 0x1fb) || (0x1fc < sVar2)) {
      return -0x1f;
    }
    if ((*(uint *)(param_4 + 1) & 1) == 0) {
      local_7e = *(undefined4 *)(param_4 + 3);
      local_80 = 8 - (ushort)(sVar2 == 0x1fb);
    }
    else {
      if ((*(uint *)(param_4 + 1) & 2) != 0) {
        return -1;
      }
      sVar2 = FUN_1101d0b0(param_1,param_5,param_4,local_40);
      if (sVar2 != 0) {
        return sVar2;
      }
      local_30 = 0x17;
      sVar2 = FUN_11024d70(param_1,local_40,
                           *(undefined4 *)(*(int *)(param_5 + 0x28) + *(int *)(param_4 + 5) * 4),
                           &local_30,0);
      if (sVar2 != 0) {
        FUN_1101ca20(param_1,param_6,*(undefined4 *)(param_4 + 3));
        return -0x1d;
      }
      if (local_30 == 3) {
        local_80 = 7;
        local_7e = local_2e;
      }
      else {
        if (local_30 != 0x19) {
          return -0x1f;
        }
        local_80 = 8;
        local_7e = local_2e;
      }
    }
  }
  puVar6 = local_70;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)param_3;
  FUN_11017cc0(param_1,local_94);
  return 0;
}


