
/* ==== FUN_0041df70 @ 0041df70 ==== 
 * signature: undefined4 __thiscall FUN_0041df70(void * this, undefined4 * param_1, short * param_2, undefined4 param_3, undefined4 * param_4, undefined2 * param_5)
 * body: 0041df70-0041e136
 */

undefined4 __thiscall
FUN_0041df70(void *this,undefined4 *param_1,short *param_2,undefined4 param_3,undefined4 *param_4,
            undefined2 *param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  int *piVar7;
  undefined4 local_70 [9];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  AFX_EXCEPTION_LINK local_3c [8];
  short local_34 [6];
  char *local_28;
  int local_24;
  void *local_20;
  undefined4 local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041e164;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff84;
  iVar4 = 0;
  local_24 = *(int *)this;
  local_20 = this;
  (**(code **)(local_24 + 0x114))();
  local_28 = (char *)(param_5 + 1);
  if (*local_28 == '\0') {
    local_40 = 0;
    local_4c = DAT_004da338;
    local_48 = DAT_004da334;
    local_44 = DAT_004da338;
    local_34[0] = 0;
    local_34[1] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    local_1c = 0xffffff;
    local_18 = (void *)0x0;
    if (param_4 != (undefined4 *)0x0) {
      local_1c = *param_4;
    }
    iVar3 = (**(code **)(local_24 + 0x10))();
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x82);
      local_18 = DAT_004da388;
    }
    if (local_18 != (void *)0x0) {
      bVar1 = FUN_0047a230((int)local_18);
      if (bVar1 == 0) {
        FUN_00408460(iVar4);
        piVar7 = (int *)0x0;
        puVar5 = &DAT_004e1c30;
        puVar6 = local_70;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        sVar2 = FUN_00403850(iVar4);
        FUN_0047aa10(local_18,param_1,sVar2,piVar7);
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_3c);
        local_8 = 1;
        local_34[3] = param_2[3] - param_2[1];
        local_34[2] = param_2[2] - *param_2;
        FUN_0041da40(param_5,param_2);
        FUN_0041db00(local_18,local_34,(undefined1 *)&local_1c,(HRGN)0x0);
        (**(code **)(local_24 + 0x228))(local_18,param_1,param_1,local_34,&local_4c,param_3);
        FUN_0041dbb0((int)param_5,local_18,(byte *)&local_1c);
        *local_28 = '\x01';
        local_8 = 0xffffffff;
        FUN_0041e16e();
        FUN_0047b420((int)local_18);
        puVar5 = local_70;
        puVar6 = &DAT_004e1c30;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
    }
    local_28 = (char *)(**(code **)(local_24 + 0xc4))(0,1);
  }
  *unaff_FS_OFFSET = local_10;
  return CONCAT31((int3)((uint)local_28 >> 8),1);
}


