
/* ==== FUN_00483970 @ 00483970 ==== 
 * signature: int * __cdecl FUN_00483970(int * param_1, undefined4 * param_2)
 * body: 00483970-00483e56
 */

int * __cdecl FUN_00483970(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 local_13c [9];
  undefined1 local_118 [48];
  short local_e8 [24];
  undefined2 local_b8 [22];
  short local_8c;
  int *local_8a;
  undefined2 local_60;
  int *local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  int local_38;
  undefined1 local_34 [13];
  code *local_27;
  undefined4 local_20 [3];
  int *local_13;
  undefined4 local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  local_13 = (int *)param_2[2];
  if (8 < DAT_004dca70) {
    return (int *)0x10000;
  }
  if ((*(uint *)((int)param_1 + 0x1e) & 0x10) != 0) {
    local_c = param_1;
  }
  FUN_00483e60(param_2,local_13c,local_c);
  iVar2 = param_2[3];
  if (((iVar2 != 5000) && (iVar2 != 0x4b0)) && (iVar2 != 0x514)) {
    if (*(short *)(param_2 + 5) == 0x76) {
      iVar2 = FUN_00482250(*(char **)((int)param_2 + 0x22),&local_8,local_34,local_20,param_1);
      if ((iVar2 == 0) && (local_8 != (int *)0x0)) {
        local_60 = 0x69;
        local_5a = 0;
        local_56 = 0;
        local_5e = (int *)0x0;
        local_52 = 0;
        iVar2 = (**(code **)(*local_8 + 0x98))(local_34,0,&local_60);
        if (iVar2 == 0) {
          local_8 = local_5e;
        }
        pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_c);
        DAT_004e34cc = (*pcVar3)(local_c,local_8,&local_60);
      }
    }
    else {
      FUN_004835f0(0,(short *)(param_2 + 5),param_1,local_13,&local_8);
    }
    if (local_8 == (int *)0x0) {
      return (int *)0x10000;
    }
    if ((*(uint *)((int)local_8 + 0x1e) & 2) != 0) {
      cVar1 = (**(code **)(*local_8 + 0x254))(param_2[3],param_2[4],local_118,0);
      if (cVar1 == '\0') {
        FUN_0046b730(local_8,(int)local_13c);
      }
      return (int *)0x0;
    }
    if ((*(uint *)((int)local_8 + 0x1e) & 0x400) == 0) {
      return (int *)0x10000;
    }
    (**(code **)(*local_8 + 0x1e0))(local_13c);
    return (int *)0x0;
  }
  local_27 = *(code **)(*param_1 + 0x88);
  iVar2 = (*local_27)();
  if (iVar2 == 0) {
    puVar6 = (undefined4 *)((int)param_2 + 0x26);
    psVar7 = &local_8c;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)psVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      psVar7 = psVar7 + 2;
    }
  }
  else {
    local_8c = 0x6a;
    pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x3c),1,0,&local_38);
    uVar4 = (*local_27)((int)param_2 + 0x26,&local_8c);
    DAT_004e34cc = (*pcVar3)(local_38,uVar4);
  }
  iVar2 = param_2[3];
  if (iVar2 == 5000) {
    if (((*(short *)((int)param_2 + 0x26) == 0x73) && (param_2[10] == 0)) && (local_c != (int *)0x0)
       ) {
      piVar5 = FUN_0043ea50(local_c,param_2 + 0xb,(char *)param_2[0xc]);
      param_2[10] = piVar5;
    }
    if (*(short *)(param_2 + 5) == 0x76) {
      piVar5 = (int *)FUN_004824c0(*(char **)((int)param_2 + 0x22),&local_8c,param_1);
    }
    else {
      FUN_004835f0(0,(short *)(param_2 + 5),param_1,local_13,&local_8);
      if (local_8 == (int *)0x0) {
        piVar5 = (int *)0x10000;
      }
      else {
        piVar5 = (int *)(**(code **)(*local_8 + 0x9c))(s_value_004d9864,0,&local_8c);
      }
    }
    goto LAB_00483e07;
  }
  if ((iVar2 != 0x4b0) && (piVar5 = local_c, iVar2 != 0x514)) goto LAB_00483e07;
  local_38 = 0;
  FUN_004835f0(0,(short *)(param_2 + 5),param_1,local_13,&local_8);
  FUN_00483530(0,&local_8c,param_1,&local_38,0);
  if (local_8 == (int *)0x0) {
    piVar5 = (int *)0x10000;
    goto LAB_00483e07;
  }
  cVar1 = FUN_00417010(param_2[4],local_20);
  if (cVar1 == '\0') {
    piVar5 = (int *)0x10000;
    goto LAB_00483e07;
  }
  if (param_2[3] != 0x514) {
    iVar2 = (**(code **)(*local_8 + 0x9c))(local_20,0,&local_8c);
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      cVar1 = '\0';
      if (0 < (int)param_2[4]) {
        cVar1 = (**(code **)(*local_8 + 0x90))(param_2[4],local_118);
      }
      piVar5 = local_c;
      if (cVar1 == '\0') {
        piVar5 = (int *)0x10000;
      }
    }
    goto LAB_00483e07;
  }
  if ((local_8c != 0x73) || (local_8a == (int *)0x0)) {
    piVar5 = (int *)0x10000;
    goto LAB_00483e07;
  }
  local_c = (int *)((uint)local_c & 0xffffff);
  local_b8[0] = 0x6a;
  iVar2 = (**(code **)(*local_8 + 0x98))(local_20,0,local_b8);
  if (iVar2 == 0) {
LAB_00483d42:
    local_c = (int *)CONCAT13(1,(undefined3)local_c);
  }
  else if (0 < (int)param_2[4]) {
    local_e8[0] = 0x17;
    cVar1 = (**(code **)(*local_8 + 0x8c))(param_2[4],local_e8);
    if ((cVar1 != '\0') && (uVar4 = FUN_004169e0(local_e8,local_b8,0), (char)uVar4 != '\0'))
    goto LAB_00483d42;
  }
  if (local_c._3_1_ == '\0') {
LAB_00483d6e:
    piVar5 = (int *)0x10000;
  }
  else {
    iVar2 = (**(code **)(*local_8a + 0x9c))(s_value_004d9864,0,local_b8);
    piVar5 = (int *)0x0;
    if (iVar2 != 0) goto LAB_00483d6e;
  }
  pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_c);
  DAT_004e34cc = (*pcVar3)(local_c,0,local_b8);
LAB_00483e07:
  iVar2 = (*local_27)();
  if (iVar2 != 0) {
    pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_c);
    DAT_004e34cc = (*pcVar3)(local_c,0,&local_8c);
  }
  return piVar5;
}


