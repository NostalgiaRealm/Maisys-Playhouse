
/* ==== FUN_14001570 @ 14001570 ==== 
 * signature: undefined4 __cdecl FUN_14001570(undefined4 * param_1, int param_2)
 * body: 14001570-14001923
 */

undefined4 __cdecl FUN_14001570(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  puVar5 = param_1;
  for (iVar4 = 0x146; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  uVar2 = FUN_14008a80((int)param_1);
  *(undefined2 *)(param_1 + 1) = 0x17;
  *param_1 = uVar2;
  *(undefined1 *)((int)param_1 + 0x4de) = 0;
  *(undefined4 *)((int)param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 6) = 0x70a;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0xc);
  param_1[5] = 0;
  param_1[4] = 1;
  *(undefined2 *)((int)param_1 + 0xe) = 0x17;
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((int)param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  param_1[0xb] = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 1;
  *(undefined4 *)((int)param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined2 *)((int)param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
  *(undefined4 *)((int)param_1 + 0x36) = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xc) = 0x66;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar3)(local_4,(int)param_1 + 0x3e,0x100);
  if (*(undefined1 **)((int)param_1 + 0x3e) != (undefined1 *)0x0) {
    *(undefined4 *)((int)param_1 + 0x36) = 0x100;
    **(undefined1 **)((int)param_1 + 0x3e) = 0;
  }
  FUN_14008b20(0,(undefined2 *)(param_1 + 0xc),param_2 + 0x30);
  *(undefined1 *)(*(int *)((int)param_1 + 0x3a) + *(int *)((int)param_1 + 0x3e)) = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)((int)param_1 + 0x42) = 0x66;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar3)(local_4,param_1 + 0x14,0x100);
  if ((undefined1 *)param_1[0x14] != (undefined1 *)0x0) {
    param_1[0x12] = 0x100;
    *(undefined1 *)param_1[0x14] = 0;
  }
  FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x42),param_2 + 0x42);
  *(undefined1 *)(param_1[0x13] + param_1[0x14]) = 0;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined4 *)((int)param_1 + 0x1a) = 100;
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)((int)param_1 + 0x1e) = 1;
  param_1[8] = 100;
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((int)param_1 + 0x56) = 0x1568;
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x58);
  param_1[0x17] = 0;
  *(undefined2 *)((int)param_1 + 0x5a) = 1;
  *(undefined4 *)((int)param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x5a);
  uVar1 = *(undefined2 *)(param_2 + 0x5e);
  *(undefined4 *)((int)param_1 + 0x62) = 0x14;
  *(undefined2 *)((int)param_1 + 0x5e) = uVar1;
  *(undefined2 *)(param_1 + 0x18) = 1;
  param_1[0x18] = *(undefined4 *)(param_2 + 0x60);
  uVar1 = *(undefined2 *)(param_2 + 100);
  *(undefined2 *)((int)param_1 + 0x66) = 0x14;
  *(undefined2 *)(param_1 + 0x19) = uVar1;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  *(undefined4 *)((int)param_1 + 0x4e6) = 0;
  puVar5 = (undefined4 *)((int)param_1 + 0x4ee);
  *(undefined4 *)((int)param_1 + 0x4ea) = 0;
  *puVar5 = 0;
  *(undefined4 *)((int)param_1 + 0x4e2) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x138) = 0x66;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar3)(local_4,puVar5,0x10);
  if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
    *(undefined4 *)((int)param_1 + 0x4e6) = 0x10;
    *(undefined1 *)*puVar5 = 0;
  }
  param_1[0x13d] = 0xffffffff;
  puVar5 = param_1 + 0x140;
  param_1[0x13e] = 0;
  *puVar5 = 0;
  param_1[0x13f] = 0;
  *(undefined2 *)((int)param_1 + 0x4f2) = 0x66;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar3)(local_4,puVar5,0x100);
  if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
    param_1[0x13e] = 0x100;
    *(undefined1 *)*puVar5 = 0;
  }
  *(undefined4 *)((int)param_1 + 0x506) = 0xffffffff;
  puVar5 = (undefined4 *)((int)param_1 + 0x512);
  *(undefined4 *)((int)param_1 + 0x50a) = 0;
  *puVar5 = 0;
  *(undefined4 *)((int)param_1 + 0x50e) = 0;
  *(undefined2 *)(param_1 + 0x141) = 0x66;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_4);
  DAT_14028e48 = (*pcVar3)(local_4,puVar5,0x100);
  if ((undefined1 *)*puVar5 != (undefined1 *)0x0) {
    *(undefined4 *)((int)param_1 + 0x50a) = 0x100;
    *(undefined1 *)*puVar5 = 0;
  }
  return 0;
}


