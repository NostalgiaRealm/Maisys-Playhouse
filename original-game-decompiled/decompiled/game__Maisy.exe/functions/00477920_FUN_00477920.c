
/* ==== FUN_00477920 @ 00477920 ==== 
 * signature: char __cdecl FUN_00477920(int param_1)
 * body: 00477920-00477a83;00477a8c-00477be9
 */

char __cdecl FUN_00477920(int param_1)

{
  short *psVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *unaff_FS_OFFSET;
  char local_260 [256];
  undefined1 local_160 [2];
  undefined4 local_15e [63];
  undefined1 local_60 [16];
  AFX_EXCEPTION_LINK local_50 [24];
  int *local_38;
  char local_2c [4];
  int *local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1a;
  char cStack_16;
  char cStack_15;
  undefined1 *puStack_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00477c1d;
  *unaff_FS_OFFSET = &local_10;
  local_24 = *(int **)(param_1 + 0x1a);
  puStack_14 = &stack0xfffffd94;
  psVar1 = (short *)local_24[2];
  piVar9 = (int *)0x0;
  piVar4 = *(int **)(*(int *)(param_1 + 0x16) + 8);
  cStack_16 = 0;
  cStack_15 = '\0';
  local_1a = (uint)(uint3)local_1a;
  puVar2 = &stack0xfffffd94;
  if (*psVar1 == 0xf) {
    piVar9 = (int *)FUN_0043e950(piVar4,*(int *)(psVar1 + 1));
    puVar2 = puStack_14;
    if (piVar9 != (int *)0x0) {
      *psVar1 = 0x19;
      *(int **)(psVar1 + 1) = piVar9;
    }
  }
  puStack_14 = puVar2;
  if ((*psVar1 == 0x1c) && (piVar9 = *(int **)(psVar1 + 1), piVar9 == (int *)0x0)) {
    piVar9 = FUN_0043ea50(piVar4,(int *)(psVar1 + 3),*(char **)(psVar1 + 5));
    if (piVar9 != (int *)0x0) {
      *(int **)(psVar1 + 1) = piVar9;
    }
  }
  if (*(int *)(param_1 + 0x1e) == 0x14) {
    local_1a = CONCAT13(*(undefined1 *)((int)local_24 + 0x12),(uint3)local_1a);
  }
  if (piVar9 == (int *)0x0) goto LAB_00477bcb;
  local_20 = (int *)0x0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_50);
  local_8 = 1;
  local_160 = (undefined1  [2])DAT_004dac60;
  puVar11 = (undefined4 *)(local_160 + 2);
  for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = 0;
  uVar7 = 0xffffffff;
  pcVar10 = (char *)local_24[1];
  do {
    pcVar12 = pcVar10;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar10 + 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar3 != '\0');
  uVar7 = ~uVar7;
  pcVar10 = pcVar12 + -uVar7;
  pcVar12 = local_160;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  cStack_16 = FUN_0042b6b0(param_1,local_24,local_160,local_1a._3_1_);
  if (cStack_16 == '\0') {
    piVar4 = FUN_00412c20(0x170);
    local_8._0_1_ = 2;
    local_28 = piVar4;
    if (piVar4 == (int *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      local_38 = piVar4;
      FUN_00481280(piVar4);
      *piVar4 = (int)&PTR_FUN_004c8970;
      local_20 = piVar4;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042c0a0(local_20,piVar9[1],local_24,local_160);
    if ((char)local_24[3] == '\0') {
      uVar5 = FUN_00486ae0(local_20,1);
      if ((short)uVar5 != 0) goto LAB_00477b57;
      FUN_00486d40(local_20,4);
      FUN_00486d60(local_20,local_60,0xe);
      (**(code **)(*piVar9 + 0xbc))(local_20,0x40,local_60);
    }
    else {
      cVar3 = FUN_00486c80();
      if (cVar3 != '\0') {
        thunk_FUN_00486ce0((int)local_20);
      }
      FUN_0042c0c0((int)local_20);
      uVar5 = FUN_00486ae0(local_20,0);
      if ((short)uVar5 == 0) {
        local_2c[0] = '\0';
        local_2c[1] = '\0';
        local_2c[2] = '\0';
        local_2c[3] = '\0';
        FUN_00486d80(local_20,local_2c,4);
        (**(code **)(*piVar9 + 0xb8))(local_20,0x80);
      }
      else {
LAB_00477b57:
        cStack_15 = '\x01';
      }
    }
    FUN_00486ce0((int)local_20);
    (**(code **)(*local_20 + 4))();
    if (*(int *)(param_1 + 0x1e) == 0x14) {
      if ((cStack_16 == '\0') && (cStack_15 == '\0')) {
        FUN_0043e140(local_160,local_260);
        uVar7 = 0xffffffff;
        pcVar10 = local_260;
        do {
          pcVar12 = pcVar10;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar7 = ~uVar7;
        pcVar10 = pcVar12 + -uVar7;
        pcVar12 = *(char **)((int)local_24 + 0xe);
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      else {
        **(undefined1 **)((int)local_24 + 0xe) = 0;
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_00477c27();
LAB_00477bcb:
  *unaff_FS_OFFSET = local_10;
  return cStack_15;
}


