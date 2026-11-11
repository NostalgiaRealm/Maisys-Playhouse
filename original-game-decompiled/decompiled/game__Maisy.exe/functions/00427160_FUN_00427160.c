
/* ==== FUN_00427160 @ 00427160 ==== 
 * signature: undefined4 __cdecl FUN_00427160(int * param_1, undefined4 * param_2, int * param_3, int param_4, char param_5, char param_6)
 * body: 00427160-004273d4
 */

undefined4 __cdecl
FUN_00427160(int *param_1,undefined4 *param_2,int *param_3,int param_4,char param_5,char param_6)

{
  HGLOBAL pvVar1;
  uint uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint local_14;
  int local_10;
  HPSTR local_c;
  uint local_8;
  
  local_10 = param_1[3];
  local_c = (HPSTR)(param_4 * 0x3a);
  puVar5 = (undefined4 *)((int)local_c + 0x18 + local_10);
  puVar6 = param_2;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  if (((*(int *)((int)param_2 + 0x1a) == 0) && (param_6 != '\0')) && (*param_3 != 0)) {
    *(int *)((int)param_2 + 0x1a) = *param_3;
    *(undefined1 *)((int)param_2 + 1) = 0;
    return CONCAT31((int3)((uint)param_4 >> 8),1);
  }
  if (*(int *)((int)param_2 + 0x1a) != 0) goto LAB_004273cc;
  if ((*(int *)(param_1[2] + 0x1e) == 0x2e524c45) && ((*(byte *)(param_1[2] + 3) & 0x80) == 0)) {
    iVar3 = param_1[6];
    if (((iVar3 == 0) || (*(int *)(iVar3 + 0x28) == 0)) &&
       ((param_1[4] == 0 || (*(int *)(param_1[4] + param_4 * 4) == 0)))) {
      local_8 = local_10 + (int)local_c;
      pvVar4 = FUN_0043f770(*(SIZE_T *)(local_8 + 0x12));
      if (pvVar4 == (HGLOBAL)0x0) {
        return 0;
      }
      local_c = GlobalLock(pvVar4);
      if (local_c != (HPSTR)0x0) {
        local_10 = *(int *)(local_8 + 0x12);
        FUN_0040e0e0((void *)*param_1,param_1[1] + *(int *)(local_8 + 0xc));
        FUN_0040e180((void *)*param_1,local_c,local_10);
      }
      GlobalUnlock(pvVar4);
      local_14 = (uint)*(short *)(param_2 + 6);
      local_8 = FUN_0047c7d0(0,pvVar4,0,&local_14,(uint *)0x0,param_3,(uint *)0x0);
      if ((*(char *)((int)param_1 + 0x21) == '\0') && (param_1[6] != 0)) {
        pvVar1 = *(HGLOBAL *)(param_1[6] + 0x28);
        if (pvVar1 != (HGLOBAL)0x0) {
          FUN_0043f7a0(pvVar1);
          *(undefined4 *)(param_1[6] + 0x28) = 0;
        }
        uVar2 = param_1[6];
        *(HGLOBAL *)(uVar2 + 0x28) = pvVar4;
      }
      else {
        uVar2 = FUN_0043f7a0(pvVar4);
      }
    }
    else {
      local_8 = (uint)*(short *)(param_2 + 6);
      pvVar4 = (HGLOBAL)0x0;
      if (param_1[4] != 0) {
        pvVar4 = *(HGLOBAL *)(param_1[4] + param_4 * 4);
      }
      if (pvVar4 == (HGLOBAL)0x0) {
        pvVar4 = *(HGLOBAL *)(iVar3 + 0x28);
      }
      uVar2 = FUN_0047c7d0(0,pvVar4,0,&local_8,(uint *)0x0,param_3,(uint *)0x0);
      local_8 = uVar2;
    }
    if (local_8 != 0) {
      return uVar2 & 0xffffff00;
    }
    iVar3 = *param_3;
    *(int *)((int)param_2 + 0x1a) = iVar3;
    *(undefined1 *)((int)param_2 + 1) = 0;
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  if (param_5 == '\0') {
LAB_00427339:
    local_8 = local_10 + (int)local_c;
    puVar7 = (uint *)(local_8 + 0x12);
    pvVar4 = GlobalReAlloc((HGLOBAL)*param_3,*puVar7,2);
    *param_3 = (int)pvVar4;
    uVar2 = 0;
    DAT_004da3e0 = (ushort)(pvVar4 == (HGLOBAL)0x0);
  }
  else {
    local_8 = local_10 + (int)local_c;
    puVar7 = (uint *)(local_8 + 0x12);
    uVar2 = GlobalSize((HGLOBAL)*param_3);
    if (uVar2 < *puVar7) goto LAB_00427339;
  }
  if (DAT_004da3e0 != 0) {
    return uVar2 & 0xffffff00;
  }
  local_c = GlobalLock((HGLOBAL)*param_3);
  if (local_c != (HPSTR)0x0) {
    uVar2 = *puVar7;
    FUN_0040e0e0((void *)*param_1,param_1[1] + *(int *)(local_8 + 0xc));
    FUN_0040e180((void *)*param_1,local_c,uVar2);
    if (*param_1 != 0) {
      FUN_00421120();
    }
  }
  param_4 = GlobalUnlock((HGLOBAL)*param_3);
  iVar3 = *param_3;
  *(undefined1 *)((int)param_2 + 1) = 0;
  *(int *)((int)param_2 + 0x1a) = iVar3;
LAB_004273cc:
  return CONCAT31((int3)((uint)param_4 >> 8),1);
}


