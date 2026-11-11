
/* ==== FUN_1200c600 @ 1200c600 ==== 
 * signature: undefined4 __cdecl FUN_1200c600(undefined2 * param_1)
 * body: 1200c600-1200c72d;1200c745-1200c75a
 */

undefined4 __cdecl FUN_1200c600(undefined2 *param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_1200c72e;
  *unaff_FS_OFFSET = &local_10;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 1) = 0x65;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0x66;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = 0x17;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0xc) = 100;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x405e0000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xf] = 0xf;
  param_1[0x14] = 0xf;
  param_1[0x19] = 0xf;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_1200c530((undefined1 *)(param_1 + 0x1e));
  puVar1 = (undefined4 *)(param_1 + 0x1e);
  puVar4 = (undefined4 *)(param_1 + 0x28);
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  iVar3 = DAT_120373b0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(int *)(param_1 + 0x33) = iVar3;
  if ((DAT_120373b0 == 0) || (DAT_120373b4 == (void *)0x0)) {
    uVar2 = 0x10000;
  }
  else {
    if ((DAT_120373b0 != 0) && (DAT_120373b4 != (void *)0x0)) {
      this = (void *)FUN_12016010(0x8e);
      local_8 = 0;
      puVar1 = (undefined4 *)0x0;
      if (this != (void *)0x0) {
        puVar1 = FUN_120030f0(this,DAT_120373b0,DAT_120373b4);
      }
      *(undefined4 **)(param_1 + 0x35) = puVar1;
    }
    uVar2 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


