
/* ==== FUN_00403940 @ 00403940 ==== 
 * signature: undefined __fastcall FUN_00403940(int * param_1)
 * body: 00403940-00403b01
 */

void __fastcall FUN_00403940(int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *unaff_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char *pcVar9;
  undefined2 *puVar10;
  undefined2 local_50;
  undefined4 local_4e;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  short local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_00403b02;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  local_24 = DAT_004da358;
  local_1c = param_1[0x2e];
  local_20 = DAT_004da35c;
  local_18 = param_1[0x2f];
  pcVar1 = *(code **)(*param_1 + 0x10);
  iVar2 = (*pcVar1)();
  if (*(char *)(iVar2 + 0x88) == '\0') {
    local_12 = 0x75da;
  }
  else {
    puVar10 = &local_50;
    local_50 = 1;
    local_4e = 0;
    pcVar9 = s_windowStyle_004d921c;
    pvVar3 = (void *)(*pcVar1)();
    uVar4 = FUN_00458c10(pvVar3,(byte *)pcVar9,puVar10);
    bVar6 = (char)uVar4 == '\0';
    if (bVar6) {
      local_12 = 0x75db;
    }
    else {
      local_12 = (short)local_4e;
    }
    puVar10 = &local_50;
    local_50 = 10;
    local_4e = 0;
    pcVar9 = s_windowPosition_004d9228;
    pvVar3 = (void *)(*pcVar1)();
    uVar4 = FUN_00458c10(pvVar3,(byte *)pcVar9,puVar10);
    bVar7 = (char)uVar4 != '\0';
    if (bVar7) {
      local_1c = local_4e;
    }
    puVar10 = &local_50;
    local_50 = 10;
    local_4e = 0;
    pcVar9 = s_windowSize_004d9238;
    pvVar3 = (void *)(*pcVar1)();
    uVar4 = FUN_00458c10(pvVar3,(byte *)pcVar9,puVar10);
    bVar8 = (char)uVar4 != '\0';
    if (bVar8) {
      local_18 = CONCAT22(local_4e._2_2_ + local_1c._2_2_,(short)local_4e + (short)local_1c);
    }
    if (bVar8 || (bVar7 || !bVar6)) {
      iVar2 = (*pcVar1)();
      *(undefined1 *)(iVar2 + 0x89) = 0;
      goto LAB_00403a6b;
    }
  }
  FUN_0043c450((undefined2 *)&local_1c);
LAB_00403a6b:
  FUN_0043d860(&local_1c,&local_24);
  local_28 = FUN_00412c20(0x70);
  local_8 = 0;
  piVar5 = (int *)0x0;
  if (local_28 != (undefined4 *)0x0) {
    piVar5 = FUN_0045c510(local_28,*(void **)((int)param_1 + 0x2a),local_12,&local_24,param_1);
  }
  local_8 = 0xffffffff;
  *(int **)((int)param_1 + 0x8e) = piVar5;
  (**(code **)(*piVar5 + 0x108))();
  piVar5 = param_1;
  pvVar3 = (void *)FUN_00410600(*(int *)((int)param_1 + 0x8e));
  FUN_004319c0(pvVar3,piVar5);
  iVar2 = (*pcVar1)();
  if (*(char *)(iVar2 + 0x88) != '\0') {
    FUN_00402f50(param_1,0,'\0');
  }
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return;
}


