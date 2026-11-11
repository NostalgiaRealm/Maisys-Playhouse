
/* ==== FUN_00417090 @ 00417090 ==== 
 * signature: undefined __cdecl FUN_00417090(undefined2 * param_1, int param_2)
 * body: 00417090-00417199
 */

void __cdecl FUN_00417090(undefined2 *param_1,int param_2)

{
  uint uVar1;
  code *this;
  undefined4 uVar2;
  LPVOID pvVar3;
  short sVar4;
  undefined4 *unaff_FS_OFFSET;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  char cVar8;
  undefined2 local_48 [22];
  code *local_1c;
  int *local_18;
  short local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041719a;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  uVar1 = FUN_00417310(*(short *)(param_2 + 0xe));
  local_12 = (short)uVar1;
  this = (code *)FUN_00412c20(0x4a);
  local_8 = 0;
  local_1c = this;
  if (this == (code *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    cVar8 = '\0';
    uVar7 = 0;
    cVar6 = '\0';
    iVar5 = 0;
    uVar2 = FUN_004171c0(local_12);
    local_18 = FUN_0042f970(this,uVar2,iVar5,cVar6,uVar7,cVar8);
  }
  local_8 = 0xffffffff;
  sVar4 = 0;
  pvVar3 = LocalLock(*(HLOCAL *)(param_2 + 0x10));
  if (0 < *(int *)(param_2 + 6)) {
    local_1c = *(code **)(*local_18 + 0xe8);
    do {
      iVar5 = (int)sVar4;
      sVar4 = sVar4 + 1;
      FUN_004169e0((short *)(iVar5 * *(int *)(param_2 + 10) + (int)pvVar3),local_48,0);
      (*local_1c)(local_48);
    } while ((int)sVar4 < *(int *)(param_2 + 6));
  }
  LocalUnlock(*(HLOCAL *)(param_2 + 0x10));
  *param_1 = 0x32d5;
  uVar2 = *(undefined4 *)(param_2 + 6);
  param_1[3] = local_12;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(int **)(param_1 + 4) = local_18;
  *(undefined4 *)(param_1 + 6) = 0;
  *(int *)(param_1 + 8) = param_2;
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return;
}


