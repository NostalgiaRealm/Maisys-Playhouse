
/* ==== FUN_1200c8b0 @ 1200c8b0 ==== 
 * signature: undefined4 __cdecl FUN_1200c8b0(undefined4 * param_1, undefined4 * param_2)
 * body: 1200c8b0-1200c9ec;1200ca04-1200ca19
 */

undefined4 __cdecl FUN_1200c8b0(undefined4 *param_1,undefined4 *param_2)

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
  pcStack_c = FUN_1200c9ed;
  *unaff_FS_OFFSET = &local_10;
  *(undefined2 *)((int)param_1 + 10) = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x65;
  *(undefined4 *)((int)param_1 + 6) = 0;
  param_1[3] = 0x66;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)param_1 = 0x17;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 6) = 100;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  param_1[8] = 0;
  param_1[9] = 0x405e0000;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0xf;
  *(undefined2 *)(param_1 + 10) = 0xf;
  *(undefined2 *)((int)param_1 + 0x32) = 0xf;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1200c530((undefined1 *)(param_1 + 0xf));
  puVar1 = param_1 + 0xf;
  puVar4 = param_1 + 0x14;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x19) = 0;
  iVar3 = DAT_120373b0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(int *)((int)param_1 + 0x66) = iVar3;
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
      local_8 = 0xffffffff;
      *(undefined4 **)((int)param_1 + 0x6a) = puVar1;
    }
    uVar2 = FUN_1200c7a0(param_1,param_2);
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


