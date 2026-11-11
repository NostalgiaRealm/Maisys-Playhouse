
/* ==== FUN_00466ac0 @ 00466ac0 ==== 
 * signature: int * __stdcall FUN_00466ac0(int * param_1, undefined4 param_2, int * param_3)
 * body: 00466ac0-00466d38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00466ac0(int *param_1,undefined4 param_2,int *param_3)

{
  short sVar1;
  code *pcVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_16c;
  undefined4 local_16b;
  int local_6c [5];
  undefined1 local_58 [4];
  int local_54;
  undefined1 local_50 [4];
  undefined4 local_4c [2];
  short local_42;
  short sStack_40;
  short local_3e;
  short sStack_38;
  undefined2 uStack_36;
  short local_34;
  int local_32;
  undefined4 local_2c;
  undefined2 local_28;
  short local_1e;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar6 = 0;
  pcVar2 = *(code **)(*param_1 + 0x144);
  (*pcVar2)(&local_54);
  _DAT_004dc384 = _DAT_004dc384 + 1;
  local_54 = local_54 + -0xe;
  iVar5 = *param_3;
  if (iVar5 == 0x27) {
    local_16c = DAT_004d99e4;
    puVar7 = &local_16b;
    for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    *(undefined1 *)((int)puVar7 + 2) = 0;
    sVar1 = (short)param_3[1];
    if (sVar1 < 2) {
      FUN_00486dd0(param_1,local_4c,param_3,0x1e);
      local_1e = local_3e;
      local_14 = local_32;
      iVar6 = (int)local_34;
      local_28 = 4;
      DVar3 = timeGetTime();
      local_10 = FUN_0043c420();
      local_10 = (DVar3 * 6) / 100 + local_10;
    }
    else if (sVar1 == 2) {
      FUN_00486dd0(param_1,(undefined4 *)local_50,param_3,0x22);
      local_1e = local_42;
      local_14 = CONCAT22(local_34,uStack_36);
      local_10 = local_32;
      iVar6 = (int)sStack_38;
      local_28 = 4;
    }
    else if (sVar1 == 3) {
      FUN_00486dd0(param_1,(undefined4 *)(local_50 + 2),param_3,0x20);
      local_1e = sStack_40;
      local_14 = CONCAT22(local_34,uStack_36);
      local_10 = local_32;
      local_28 = 4;
    }
    else {
      FUN_00486dd0(param_1,&local_2c,param_3,0x24);
    }
    if (iVar6 != 0) {
      FUN_00486d60(param_1,&local_16c,iVar6);
    }
    piVar4 = FUN_00450980(*(void **)(local_8 + 0x40),local_1e);
    if (piVar4 != (int *)0x0) {
      if (3 < (short)param_3[1]) {
        (**(code **)(*piVar4 + 0x124))(local_c,1);
      }
      FUN_0042d5f0();
      piVar4[3] = local_10;
      (**(code **)(*piVar4 + 0x204))(0);
    }
    return piVar4;
  }
  if (iVar5 == -1) {
    FUN_00486d60(param_1,local_6c,0x10);
    piVar4 = FUN_00436b80(DAT_004dae3c,local_8,local_6c,0,(int *)0x0);
  }
  else {
    piVar4 = FUN_0041f760(DAT_004da380,local_8,iVar5);
  }
  if (piVar4 == (int *)0x0) {
    if (*param_3 == -1) {
      *(int *)((int)param_3 + 10) = *(int *)((int)param_3 + 10) + -0x10;
    }
    FUN_00486db0(param_1,(int)param_3);
  }
  else {
    (**(code **)(*piVar4 + 0x24))(0);
    (**(code **)(*piVar4 + 0xbc))(param_1,param_2,param_3);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x204))(0);
  }
  (*pcVar2)(local_58);
  return piVar4;
}


