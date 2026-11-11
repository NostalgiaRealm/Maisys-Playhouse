
/* ==== FUN_140012f0 @ 140012f0 ==== 
 * signature: undefined4 __cdecl FUN_140012f0(undefined4 * param_1)
 * body: 140012f0-14001560
 */

undefined4 __cdecl FUN_140012f0(undefined4 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_4;
  
  puVar4 = param_1;
  for (iVar3 = 0x146; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  uVar1 = FUN_14008a80((int)param_1);
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 1) = 0x17;
  *(undefined1 *)((int)param_1 + 0x4de) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0x17;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 1;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 6) = 0x70a;
  puVar4 = (undefined4 *)((int)param_1 + 0x3e);
  *(undefined4 *)((int)param_1 + 0x32) = 0xffffffff;
  *puVar4 = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x66;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar2)(local_4,puVar4,0x100);
  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
    *(undefined4 *)((int)param_1 + 0x36) = 0x100;
    *(undefined1 *)*puVar4 = 0;
  }
  param_1[0x11] = 0xffffffff;
  puVar4 = param_1 + 0x14;
  param_1[0x12] = 0;
  *puVar4 = 0;
  param_1[0x13] = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0x66;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar2)(local_4,puVar4,0x100);
  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
    param_1[0x12] = 0x100;
    *(undefined1 *)*puVar4 = 0;
  }
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined4 *)((int)param_1 + 0x1a) = 100;
  *(undefined2 *)((int)param_1 + 0x1e) = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[8] = 100;
  *(undefined2 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)((int)param_1 + 0x5a) = 1;
  *(undefined2 *)(param_1 + 0x18) = 1;
  param_1[0x17] = 0;
  *(undefined2 *)((int)param_1 + 0x66) = 0x14;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0x14;
  *(undefined4 *)((int)param_1 + 0x4e2) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x138) = 0x66;
  *(undefined4 *)((int)param_1 + 0x4e6) = 0;
  *(undefined2 *)((int)param_1 + 0x4f2) = 0x66;
  *(undefined4 *)((int)param_1 + 0x4ea) = 0;
  *(undefined4 *)((int)param_1 + 0x4ee) = 0;
  param_1[0x13d] = 0xffffffff;
  puVar4 = param_1 + 0x140;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  *puVar4 = 0;
  *(undefined4 *)((int)param_1 + 0x56) = 0x1568;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar2)(local_4,puVar4,0x100);
  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
    param_1[0x13e] = 0x100;
    *(undefined1 *)*puVar4 = 0;
  }
  *(undefined4 *)((int)param_1 + 0x506) = 0xffffffff;
  puVar4 = (undefined4 *)((int)param_1 + 0x512);
  *(undefined4 *)((int)param_1 + 0x50a) = 0;
  *puVar4 = 0;
  *(undefined4 *)((int)param_1 + 0x50e) = 0;
  *(undefined2 *)(param_1 + 0x141) = 0x66;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar2)(local_4,puVar4,0x100);
  if ((undefined1 *)*puVar4 != (undefined1 *)0x0) {
    *(undefined4 *)((int)param_1 + 0x50a) = 0x100;
    *(undefined1 *)*puVar4 = 0;
  }
  return 0;
}


