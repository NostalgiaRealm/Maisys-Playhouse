/* Ghidra 12.1.4 generated C-like pseudocode for NETWORK.R32.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== nProcessSrv @ 14001000 ==== 
 * signature: undefined __cdecl nProcessSrv(int param_1)
 * body: 14001000-140012e7
 */

void __cdecl nProcessSrv(int param_1)

{
                    /* 0x1000  6  nProcessSrv */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x51a;
    *(undefined2 *)(param_1 + 0xa6) = 3;
    *(undefined2 *)(param_1 + 0xa4) = 5;
    FUN_140088b0(param_1,0x1402604c);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_140012f0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,8,FUN_14001570);
      goto LAB_140010a3;
    }
LAB_140010c1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_14001ad0);
      goto LAB_140010df;
    }
LAB_140010fd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x1b,FUN_14001de0);
      goto LAB_1400111b;
    }
LAB_14001139:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_140020c0);
      goto LAB_14001157;
    }
LAB_14001175:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_140042a0);
      goto LAB_14001193;
    }
LAB_140011b1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_140036f0);
      goto LAB_140011cf;
    }
LAB_140011ed:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x28,FUN_14002890);
      goto LAB_1400120b;
    }
LAB_14001229:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x31,FUN_14002aa0);
      goto LAB_14001247;
    }
LAB_14001265:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,1,1,FUN_14004b30);
      goto LAB_14001283;
    }
LAB_140012a1:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_140012dd;
    FUN_14008e40(param_1,1,1,3,FUN_14007d10);
  }
  else {
LAB_140010a3:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_14001930);
      goto LAB_140010c1;
    }
LAB_140010df:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x1a,FUN_14001c80);
      goto LAB_140010fd;
    }
LAB_1400111b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_14001e50);
      goto LAB_14001139;
    }
LAB_14001157:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_140022c0);
      goto LAB_14001175;
    }
LAB_14001193:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_14002e20);
      goto LAB_140011b1;
    }
LAB_140011cf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x25,FUN_14002800);
      goto LAB_140011ed;
    }
LAB_1400120b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x2e,FUN_140028a0);
      goto LAB_14001229;
    }
LAB_14001247:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,1,0,FUN_14004760);
      goto LAB_14001265;
    }
LAB_14001283:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,1,2,FUN_14007690);
      goto LAB_140012a1;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,1,4,FUN_140087a0);
  }
LAB_140012dd:
  FUN_14008e70(param_1);
  return;
}



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



/* ==== FUN_14001930 @ 14001930 ==== 
 * signature: undefined4 __cdecl FUN_14001930(int param_1, int param_2)
 * body: 14001930-14001ac0
 */

undefined4 __cdecl FUN_14001930(int param_1,int param_2)

{
  code *pcVar1;
  int local_4;
  
  *(undefined1 *)(param_1 + 0x4de) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
  if (*(int *)(param_1 + 0x3e) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x3e));
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  FUN_14008b20(0,(undefined2 *)(param_1 + 0x30),param_2 + 0x30);
  *(undefined1 *)(*(int *)(param_1 + 0x3a) + *(int *)(param_1 + 0x3e)) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  FUN_14008b20(0,(undefined2 *)(param_1 + 0x42),param_2 + 0x42);
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50)) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x5a);
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 0x5e);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  return 0;
}



/* ==== FUN_14001ad0 @ 14001ad0 ==== 
 * signature: undefined4 __cdecl FUN_14001ad0(int * param_1)
 * body: 14001ad0-14001c75
 */

undefined4 __cdecl FUN_14001ad0(int *param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(char *)((int)param_1 + 0x4de) != '\0') {
    FUN_14004070(param_1);
  }
  if (*(int *)((int)param_1 + 0x3e) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x3e));
    *(undefined4 *)((int)param_1 + 0x3e) = 0;
    *(undefined4 *)((int)param_1 + 0x36) = 0;
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
  }
  if (param_1[0x14] != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,param_1[0x14]);
    param_1[0x14] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if (*(int *)((int)param_1 + 0x4ee) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x4ee));
    *(undefined4 *)((int)param_1 + 0x4ee) = 0;
    *(undefined4 *)((int)param_1 + 0x4e6) = 0;
    *(undefined4 *)((int)param_1 + 0x4ea) = 0;
  }
  if (param_1[0x140] != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,param_1[0x140]);
    param_1[0x140] = 0;
    param_1[0x13e] = 0;
    param_1[0x13f] = 0;
  }
  if (*(int *)((int)param_1 + 0x512) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x512));
    *(undefined4 *)((int)param_1 + 0x512) = 0;
    *(undefined4 *)((int)param_1 + 0x50a) = 0;
    *(undefined4 *)((int)param_1 + 0x50e) = 0;
  }
  return 0;
}



/* ==== FUN_14001c80 @ 14001c80 ==== 
 * signature: undefined4 __cdecl FUN_14001c80(int param_1, int param_2, short param_3)
 * body: 14001c80-14001ddd
 */

undefined4 __cdecl FUN_14001c80(int param_1,int param_2,short param_3)

{
  code *pcVar1;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_3 == 0) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&local_20);
    DAT_14028e48 = (*pcVar1)(local_20,2,param_1 + 4);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&iStack_1c);
    DAT_14028e48 = (*pcVar1)(iStack_1c,3,param_1 + 0xe);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&iStack_18);
    DAT_14028e48 = (*pcVar1)(iStack_18,0xb,param_1 + 0x18);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&iStack_14);
    DAT_14028e48 = (*pcVar1)(iStack_14,0xc,param_1 + 0x1e);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&iStack_10);
    DAT_14028e48 = (*pcVar1)(iStack_10,0xd,param_1 + 0x24);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,3,&iStack_c);
    DAT_14028e48 = (*pcVar1)(iStack_c,0xb,1);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,3,&iStack_8);
    DAT_14028e48 = (*pcVar1)(iStack_8,0xc,1);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,3,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,0xd,1);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_14001de0 @ 14001de0 ==== 
 * signature: undefined4 __cdecl FUN_14001de0(int param_1, int param_2)
 * body: 14001de0-14001e42
 */

undefined4 __cdecl FUN_14001de0(int param_1,int param_2)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_2,1,1,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,2,param_1 + 4);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,1,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,3,param_1 + 0xe);
  return 0;
}



/* ==== FUN_14001e50 @ 14001e50 ==== 
 * signature: undefined4 __cdecl FUN_14001e50(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 14001e50-140020b0
 */

undefined4 __cdecl FUN_14001e50(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,param_1 + 4,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_2c);
  DAT_14028e48 = (*pcVar1)(iStack_2c,param_1 + 0xe,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_28);
  DAT_14028e48 = (*pcVar1)(iStack_28,param_1 + 0x2a,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_24);
  DAT_14028e48 = (*pcVar1)(iStack_24,param_1 + 0x30,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,param_1 + 0x42,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_1c);
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x18,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x1e,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x24,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x54,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x5a,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x60,&local_34);
  *param_4 = *param_4 + local_34;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x66,&local_34);
  *param_4 = *param_4 + local_34;
  return 0;
}



/* ==== FUN_140020c0 @ 140020c0 ==== 
 * signature: undefined4 __cdecl FUN_140020c0(int param_1, int param_2)
 * body: 140020c0-140022bf
 */

undefined4 __cdecl FUN_140020c0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_36;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_36 = 3;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_34);
  DAT_14028e48 = (*pcVar1)(local_34,&local_36,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_30);
  DAT_14028e48 = (*pcVar1)(iStack_30,param_1 + 4);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_2c);
  DAT_14028e48 = (*pcVar1)(iStack_2c,param_1 + 0xe);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_28);
  DAT_14028e48 = (*pcVar1)(iStack_28,param_1 + 0x2a);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_24);
  DAT_14028e48 = (*pcVar1)(iStack_24,param_1 + 0x30);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,param_1 + 0x42);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_1c);
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x18);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x1e);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x24);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x54);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x5a);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x60);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x66);
  return 0;
}



/* ==== FUN_140022c0 @ 140022c0 ==== 
 * signature: undefined4 __cdecl FUN_140022c0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 140022c0-140027f0
 */

undefined4 __cdecl FUN_140022c0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_22;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 < 3) {
    if (-1 < param_4) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
      DAT_14028e48 = (*pcVar1)(local_20,param_1 + 4);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
      DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0xe);
      if (0 < param_4) {
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
        DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x2a);
        if (*(int *)(param_1 + 0x3e) != 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_20);
          DAT_14028e48 = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x3e));
          *(undefined4 *)(param_1 + 0x3e) = 0;
          *(undefined4 *)(param_1 + 0x36) = 0;
          *(undefined4 *)(param_1 + 0x3a) = 0;
        }
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
        DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x30);
        if (*(int *)(param_1 + 0x50) != 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_20);
          DAT_14028e48 = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x50));
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x4c) = 0;
        }
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
        DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x42);
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
        DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x18);
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_18);
        DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x1e);
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
        DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x24);
        if (param_4 == 2) {
          pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
          DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x54);
          pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
          DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x5a);
          pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_18);
          DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x60);
          pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
          DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x66);
        }
      }
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_20);
  DAT_14028e48 = (*pcVar1)(local_20,&local_22,1);
  if (local_22 == 3) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
    DAT_14028e48 = (*pcVar1)(local_20,param_1 + 4);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
    DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0xe);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_18);
    DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x2a);
    if (*(int *)(param_1 + 0x3e) != 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_20);
      DAT_14028e48 = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x3e));
      *(undefined4 *)(param_1 + 0x3e) = 0;
      *(undefined4 *)(param_1 + 0x36) = 0;
      *(undefined4 *)(param_1 + 0x3a) = 0;
    }
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
    DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x30);
    if (*(int *)(param_1 + 0x50) != 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_20);
      DAT_14028e48 = (*pcVar1)(local_20,*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_20);
    DAT_14028e48 = (*pcVar1)(local_20,param_1 + 0x42);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_1c);
    DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x18);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_18);
    DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x1e);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
    DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x24);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_10);
    DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x54);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_c);
    DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x5a);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
    DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x60);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x66);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_14002800 @ 14002800 ==== 
 * signature: undefined4 __cdecl FUN_14002800(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 14002800-14002889
 */

undefined4 __cdecl FUN_14002800(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,param_2,param_3,param_1 + 4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0xe);
  return 0;
}



/* ==== FUN_14002890 @ 14002890 ==== 
 * signature: undefined4 __stdcall FUN_14002890(void)
 * body: 14002890-14002892
 */

undefined4 FUN_14002890(void)

{
  return 0;
}



/* ==== FUN_140028a0 @ 140028a0 ==== 
 * signature: undefined4 __cdecl FUN_140028a0(undefined4 param_1)
 * body: 140028a0-14002a91
 */

undefined4 __cdecl FUN_140028a0(undefined4 param_1)

{
  code *pcVar1;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_24);
  DAT_14028e48 = (*pcVar1)(local_24,param_1,s_events_140260f8,0x17,0xd);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,param_1,s_listeningport_140260e4,1,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_1c);
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1,s_maxconnections_140260d0,1,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1,s_timeoutperiod_140260bc,1,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1,s_localip_140260a8,0x66,4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1,s_sourceip_14026094,0x66,4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1,s_sourcepath_14026080,0x66,4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,s_sourceparentpath_1402606c,0x66,4);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,s_outgoingmsg_14026058,0x65,3);
  return 0;
}



/* ==== FUN_14002aa0 @ 14002aa0 ==== 
 * signature: undefined __cdecl FUN_14002aa0(undefined4 param_1, undefined4 param_2)
 * body: 14002aa0-14002e11
 */

void __cdecl FUN_14002aa0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&local_38);
  DAT_14028e48 = (*pcVar1)(local_38,param_1,param_2,s_Net_Messaging_14026208,0x835,
                           s_Network_Failed_14026218,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_34);
  DAT_14028e48 = (*pcVar1)(iStack_34,param_1,param_2,s_Net_Messaging_14026208,0,&DAT_14026204,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_30);
  DAT_14028e48 = (*pcVar1)(iStack_30,param_1,param_2,s_Net_Messaging_14026208,0x89a,
                           s_Host_Name_Found_140261f4,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_2c);
  DAT_14028e48 = (*pcVar1)(iStack_2c,param_1,param_2,s_Net_Messaging_14026208,0x89b,
                           s_Host_Name_Not_Found_140261e0,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_28);
  DAT_14028e48 = (*pcVar1)(iStack_28,param_1,param_2,s_Net_Messaging_14026208,0,&DAT_14026204,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_24);
  DAT_14028e48 = (*pcVar1)(iStack_24,param_1,param_2,s_Net_Messaging_14026208,0x89c,
                           s_Connection_Opened_140261cc,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,param_1,param_2,s_Net_Messaging_14026208,0x89f,
                           s_Connection_Closed_140261b8,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_1c);
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1,param_2,s_Net_Messaging_14026208,0x89d,
                           s_Connection_Timed_Out_140261a0,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1,param_2,s_Net_Messaging_14026208,0x8a0,
                           s_Connection_Broken_1402618c,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1,param_2,s_Net_Messaging_14026208,0x89e,
                           s_Max_Connections_Exceeded_14026170,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1,param_2,s_Net_Operation_14026148,0x8fd,
                           s_Net_Operation_Completed_14026158,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1,param_2,s_Net_Operation_14026148,0x8fe,
                           s_Net_Operation_Failed_14026130,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,param_2,s_Net_Operation_14026148,0x8ff,
                           s_Net_Operation_Stopped_14026118,3);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x34,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_2,s_Net_Operation_14026148,0x900,
                           s__Working____1402610c,3);
  return;
}



/* ==== FUN_14002e20 @ 14002e20 ==== 
 * signature: undefined4 __cdecl FUN_14002e20(int param_1, uint * param_2, short * param_3, short * param_4)
 * body: 14002e20-140036eb
 */

undefined4 __cdecl FUN_14002e20(int param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  code *pcVar5;
  int local_504;
  int local_500;
  uint local_4fc;
  int iStack_4f8;
  undefined2 local_4f4 [7];
  int local_4e6;
  char acStack_4be [64];
  uint uStack_47e;
  uint local_400;
  char local_3fc [64];
  uint local_3bc;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if (((char)uVar1 != '\0') && (param_3 != (short *)0x0)) {
    uVar2 = FUN_140091b0(param_4,param_3,(undefined4 *)(param_1 + 4),(undefined4 *)(param_1 + 0xe),
                         (undefined4 *)0x0);
    return uVar2;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_defaultinfo_140262a4);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x2a);
    param_4[2] = *(short *)(param_1 + 0x2e);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_defaulttarget_14026290);
  if ((char)uVar1 != '\0') {
    if (*param_4 != 0x66) {
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      FUN_14008ed0(0,param_4,0);
    }
    FUN_14008b20(0,param_4,param_1 + 0x30);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_defaultevent_1402627c);
  if ((char)uVar1 != '\0') {
    if (*param_4 != 0x66) {
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      FUN_14008ed0(0,param_4,0);
    }
    FUN_14008b20(0,param_4,param_1 + 0x42);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_listeningperiod_14026268);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x18);
    param_4[2] = *(short *)(param_1 + 0x1c);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_outgoingperiod_14026254);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x1e);
    param_4[2] = *(short *)(param_1 + 0x22);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_incomingperiod_14026240);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x24);
    param_4[2] = *(short *)(param_1 + 0x28);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_listeningport_140260e4);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x54);
    param_4[2] = *(short *)(param_1 + 0x58);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_maxconnections_140260d0);
  if ((char)uVar1 != '\0') {
    if ((*param_4 != 1) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      if (*(int *)(param_1 + 0x516) == 0) {
        iVar3 = FUN_1400d0b0((undefined1 *)&local_400,0);
        if (iVar3 != 0) {
          return 0x10000;
        }
        FUN_1400d160();
      }
      else {
        *(int *)(param_1 + 0x5c) = *(int *)(*(int *)(param_1 + 0x516) + 0x14);
      }
    }
    *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x5a);
    param_4[2] = *(short *)(param_1 + 0x5e);
    return 0;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_timeoutperiod_140260bc);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_localip_140260a8);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_14008910(param_2,(uint *)s_sourceip_14026094);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_14008910(param_2,(uint *)s_sourcepath_14026080);
        if ((char)uVar1 == '\0') {
          uVar1 = FUN_14008910(param_2,(uint *)s_sourceparentpath_1402606c);
          if ((char)uVar1 == '\0') {
            uVar1 = FUN_14008910(param_2,(uint *)s_sessions_1402622c);
            if ((char)uVar1 != '\0') {
              pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_504);
              DAT_14028e48 = (*pcVar5)(local_504,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),
                                       &local_4fc);
              if (local_4fc == 0) {
                local_400 = local_400 & 0xffffff00;
              }
              else {
                pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_504);
                DAT_14028e48 = (*pcVar5)(local_504,&local_400,*(int *)(param_1 + 0x516) + 0x2a);
                uVar1 = 2;
                if (1 < local_4fc) {
                  do {
                    pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_504);
                    DAT_14028e48 = (*pcVar5)(local_504,
                                             *(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),uVar1
                                             ,local_4f4);
                    if (uStack_47e != 0) {
                      if (acStack_4be[0] == '\0') {
                        FUN_14007260(uStack_47e,acStack_4be);
                      }
                      pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_500);
                      DAT_14028e48 = (*pcVar5)(local_500,&local_400,&DAT_14026228);
                      pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_4f8);
                      DAT_14028e48 = (*pcVar5)(iStack_4f8,&local_400,acStack_4be);
                    }
                    uVar1 = uVar1 + 1;
                  } while (uVar1 <= local_4fc);
                }
              }
              pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&local_504);
              DAT_14028e48 = (*pcVar5)(local_504,param_4,&local_400);
              return DAT_14028e48;
            }
            return 0x10000;
          }
          if (*param_4 != 0x66) {
            if (*param_4 != 0x6a) {
              return 0x10000;
            }
            FUN_14008ed0(0,param_4,0);
          }
          FUN_14008b20(0,param_4,param_1 + 0x504);
          return 0;
        }
        if (*param_4 != 0x66) {
          if (*param_4 != 0x6a) {
            return 0x10000;
          }
          FUN_14008ed0(0,param_4,0);
        }
        FUN_14008b20(0,param_4,param_1 + 0x4f2);
        return 0;
      }
      if (*param_4 != 0x66) {
        if (*param_4 != 0x6a) {
          return 0x10000;
        }
        FUN_14008ed0(0,param_4,0);
      }
      if (*(int *)(param_1 + 0x4ee) != 0) {
        FUN_14008b20(0,param_4,param_1 + 0x4e0);
      }
      return 0;
    }
    if ((*param_4 != 0x66) && (*param_4 != 0x6a)) {
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x516) == 0) {
      iVar3 = FUN_1400d0b0((undefined1 *)&local_500,0);
      if (iVar3 != 0) {
        return 0x10000;
      }
      iVar3 = FUN_1400d190();
      FUN_1400d160();
      if (iVar3 != 0) {
        return 0x10000;
      }
      if (local_3fc[0] == '\0') {
        FUN_14007260(local_3bc,local_3fc);
      }
      pcVar4 = local_3fc;
    }
    else {
      pcVar4 = (char *)(*(int *)(param_1 + 0x516) + 0x2a);
    }
    FUN_14008ed0(0,local_4f4,(int)pcVar4);
    if (*param_4 == 0x6a) {
      FUN_14008ed0(0,param_4,0);
    }
    FUN_14008b20(0,param_4,(int)local_4f4);
    if (local_4e6 != 0) {
      pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_504);
      DAT_14028e48 = (*pcVar5)(local_504,local_4e6);
    }
    return 0;
  }
  if ((*param_4 != 1) && (*param_4 != 0x6a)) {
    return 0x10000;
  }
  *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x60);
  param_4[2] = *(short *)(param_1 + 100);
  return 0;
}



/* ==== FUN_140036f0 @ 140036f0 ==== 
 * signature: int __cdecl FUN_140036f0(undefined4 * param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 140036f0-14004063
 */

int __cdecl FUN_140036f0(undefined4 *param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined2 local_654;
  undefined2 local_652;
  undefined2 uStack_650;
  uint local_64c;
  int local_648;
  int iStack_644;
  uint uStack_640;
  int local_63c;
  undefined1 uStack_638;
  undefined1 auStack_606 [462];
  int local_438;
  undefined1 auStack_432 [70];
  undefined2 uStack_3ec;
  undefined2 uStack_3a2;
  undefined2 *puStack_32;
  undefined4 *puStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_openconnection_140262f4);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_closeconnection_140262cc);
    if ((char)uVar1 != '\0') {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&local_63c);
      piVar5 = &local_438;
      uVar6 = 0x200;
      uVar3 = FUN_14008a80((int)param_1);
      DAT_14028e48 = (*pcVar2)(local_63c,param_4,uVar3,piVar5,uVar6);
      if (DAT_14028e48 == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,(int *)&local_64c);
        uVar1 = 2;
        DAT_14028e48 = (*pcVar2)(local_64c,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                                 &uStack_640);
        if (1 < uStack_640) {
          do {
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,(int *)&local_64c);
            DAT_14028e48 = (*pcVar2)(local_64c,
                                     *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar1,
                                     &local_63c);
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&local_648);
            DAT_14028e48 = (*pcVar2)(local_648,&iStack_644,auStack_606,&local_438);
            if (iStack_644 == 0) {
              FUN_14007e60((int)&local_63c);
              uStack_638 = 0;
              FUN_140074e0(param_1,(int)&local_63c);
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,(int *)&local_64c);
              DAT_14028e48 = (*pcVar2)(local_64c,
                                       *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar1,
                                       &local_63c);
              return 0;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 <= uStack_640);
        }
      }
      return 0x10000;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_incomingmsg_140262b8);
    if ((char)uVar1 != '\0') {
      if (((*param_4 == 0x65) && (*(int *)(param_4 + 5) == 0x58)) && (*(int *)(param_4 + 7) != 0)) {
        return 0;
      }
      return 0x10000;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_defaultinfo_140262a4);
    if (((char)uVar1 != '\0') && (*param_4 == 1)) {
      *(undefined4 *)((int)param_1 + 0x2a) = *(undefined4 *)param_4;
      *(short *)((int)param_1 + 0x2e) = param_4[2];
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_defaulttarget_14026290);
    if ((char)uVar1 != '\0') {
      if (*param_4 == 0x66) {
        FUN_14008b20(0,(undefined2 *)(param_1 + 0xc),(int)param_4);
        *(undefined1 *)(*(int *)((int)param_1 + 0x3a) + *(int *)((int)param_1 + 0x3e)) = 0;
        return 0;
      }
      if ((*param_4 == 0x69) && (*(int *)(param_4 + 1) != 0)) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&local_438);
        DAT_14028e48 = (*pcVar2)(local_438,*(undefined4 *)(param_4 + 1),0x2f,
                                 *(undefined4 *)((int)param_1 + 0x3e),0);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_63c);
        DAT_14028e48 = (*pcVar2)(local_63c,&local_64c,*(undefined4 *)((int)param_1 + 0x3e));
        *(uint *)((int)param_1 + 0x3a) = local_64c;
        return 0;
      }
      return 0x10000;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_defaultevent_1402627c);
    if (((char)uVar1 != '\0') && (*param_4 == 0x66)) {
      FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x42),(int)param_4);
      *(undefined1 *)(param_1[0x13] + param_1[0x14]) = 0;
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_listeningperiod_14026268);
    if (((char)uVar1 != '\0') && (*param_4 == 1)) {
      if ((*(char *)((int)param_1 + 0x4ba) != '\0') &&
         (*(int *)((int)param_1 + 0x4b6) != *(int *)(param_4 + 1))) {
        FUN_14005f10((int)param_1,1,*(int *)(param_4 + 1));
      }
      param_1[6] = *(undefined4 *)param_4;
      *(short *)(param_1 + 7) = param_4[2];
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_outgoingperiod_14026254);
    if (((char)uVar1 != '\0') && (*param_4 == 1)) {
      if ((*(char *)(param_1 + 300) != '\0') && (param_1[299] != *(int *)(param_4 + 1))) {
        FUN_14005f10((int)param_1,0,*(int *)(param_4 + 1));
      }
      *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)param_4;
      *(short *)((int)param_1 + 0x22) = param_4[2];
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_incomingperiod_14026240);
    if (((char)uVar1 != '\0') && (*param_4 == 1)) {
      param_1[9] = *(undefined4 *)param_4;
      *(short *)(param_1 + 10) = param_4[2];
      return 0;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_listeningport_140260e4);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_14008910(param_2,(uint *)s_maxconnections_140260d0);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_14008910(param_2,(uint *)s_timeoutperiod_140260bc);
        if ((char)uVar1 == '\0') {
          iVar4 = 0x10000;
        }
        else {
          local_652 = 0;
          uStack_650 = 0;
          local_654 = 1;
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_438);
          iVar4 = (*pcVar2)(local_438,param_1,param_4,&local_654);
          DAT_14028e48 = iVar4;
          if (iVar4 == 0) {
            if (0 < CONCAT22(uStack_650,local_652)) {
              param_1[0x18] = CONCAT22(local_652,local_654);
              *(undefined2 *)(param_1 + 0x19) = uStack_650;
              return 0;
            }
            return 0x10000;
          }
        }
      }
      else {
        local_63c = 0;
        local_64c = local_64c & 0xffffff00;
        local_654 = 1;
        local_652 = 0;
        uStack_650 = 0;
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_438);
        iVar4 = (*pcVar2)(local_438,param_1,param_4,&local_654);
        DAT_14028e48 = iVar4;
        if (iVar4 == 0) {
          if (CONCAT22(uStack_650,local_652) < 1) {
            local_652 = 1;
            uStack_650 = 0;
          }
          if (*(int *)((int)param_1 + 0x516) == 0) {
            iVar4 = FUN_1400d0b0((undefined1 *)&local_64c,0);
            if (iVar4 != 0) {
              return 0x10000;
            }
            FUN_1400d160();
          }
          else {
            local_63c = *(int *)(*(int *)((int)param_1 + 0x516) + 0x14);
          }
          if (local_63c < CONCAT22(uStack_650,local_652)) {
            local_652 = (undefined2)local_63c;
            uStack_650 = (undefined2)((uint)local_63c >> 0x10);
          }
          *(uint *)((int)param_1 + 0x5a) = CONCAT22(local_652,local_654);
          *(undefined2 *)((int)param_1 + 0x5e) = uStack_650;
          return 0;
        }
      }
    }
    else {
      if (*(int *)((int)param_1 + 0x516) != 0) {
        return 0x10000;
      }
      local_652 = 0;
      uStack_650 = 0;
      local_654 = 1;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_438);
      iVar4 = (*pcVar2)(local_438,param_1,param_4,&local_654);
      DAT_14028e48 = iVar4;
      if (iVar4 == 0) {
        if (0 < CONCAT22(uStack_650,local_652)) {
          param_1[0x15] = CONCAT22(local_652,local_654);
          *(undefined2 *)(param_1 + 0x16) = uStack_650;
          return 0;
        }
        return 0x10000;
      }
    }
  }
  else {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&local_648);
    piVar5 = &local_63c;
    uVar6 = 0x200;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(local_648,param_4,uVar3,piVar5,uVar6);
    if (DAT_14028e48 != 0) {
      return 0x10000;
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x17,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,&local_438,0,0x436);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x22,&iStack_644);
    iVar4 = (*pcVar2)(iStack_644,param_1,s_nProcessSrv_140262e0,0xffffffff,1,&local_64c);
    DAT_14028e48 = iVar4;
    if (iVar4 == 0) {
      uStack_18 = 0;
      uStack_3ec = 0x40;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_648);
      DAT_14028e48 = (*pcVar2)(local_648,auStack_432,&local_63c);
      uStack_10 = 0;
      uStack_14 = 0;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&iStack_644);
      DAT_14028e48 = (*pcVar2)(iStack_644,0x12,&puStack_32);
      if (DAT_14028e48 == 0) {
        *puStack_32 = 0x69;
        *(undefined4 *)(puStack_32 + 3) = 0;
        *(undefined4 *)(puStack_32 + 5) = 0;
        *(undefined4 *)(puStack_32 + 1) = *param_1;
        *(undefined4 *)(puStack_32 + 7) = 0;
        uStack_3a2 = 2;
        puStack_2c = param_1;
        uStack_28 = 1;
        uStack_26 = 3;
        pcVar2 = (code *)FUN_14008ab0((int)param_1,1,2,&local_648);
        DAT_14028e48 = (*pcVar2)(local_648,&local_438);
        return 0;
      }
      return 0x10000;
    }
  }
  return iVar4;
}



/* ==== FUN_14004070 @ 14004070 ==== 
 * signature: undefined4 __cdecl FUN_14004070(int * param_1)
 * body: 14004070-1400429d
 */

undefined4 __cdecl FUN_14004070(int *param_1)

{
  int *piVar1;
  short *psVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_444;
  int iStack_440;
  int iStack_43c;
  int local_438 [257];
  int iStack_32;
  
  FUN_14004b30(param_1);
  FUN_14004760((int)param_1);
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    FUN_14005eb0((int)param_1,(short)iVar5);
    iVar5 = iVar6;
  } while (iVar6 < 5);
  if (*(int *)((int)param_1 + 0x6e) != 0) {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,local_438);
    DAT_14028e48 = (*pcVar3)(local_438[0],*(undefined4 *)((int)param_1 + 0x6e));
  }
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    local_444 = 0;
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,local_438);
    DAT_14028e48 = (*pcVar3)(local_438[0],*(undefined4 *)((int)param_1 + 0x6a),&local_444);
    uVar4 = 1;
    if (local_444 != 0) {
      do {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,3,&iStack_440);
        DAT_14028e48 = (*pcVar3)(iStack_440,*(undefined4 *)((int)param_1 + 0x6a),local_438);
        if (DAT_14028e48 == 0) {
          if (iStack_32 != 0) {
            FUN_14008dc0(iStack_32);
            pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_43c);
            DAT_14028e48 = (*pcVar3)(iStack_43c,iStack_32);
          }
          iStack_32 = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= local_444);
    }
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,local_438);
    DAT_14028e48 = (*pcVar3)(local_438[0],*(undefined4 *)((int)param_1 + 0x6a));
  }
  piVar1 = (int *)((int)param_1 + 0x516);
  *(undefined1 *)((int)param_1 + 0x4de) = 0;
  psVar2 = (short *)*piVar1;
  if (psVar2 == (short *)0x0) {
    return 0;
  }
  *psVar2 = *psVar2 + -1;
  if (*(short *)*piVar1 == 0) {
    if ((char)((short *)*piVar1)[0x39] != '\0') {
      DAT_14026034 = 0;
    }
    FUN_140060e0(param_1,piVar1);
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1f,local_438);
    DAT_14028e48 = (*pcVar3)(local_438[0],param_1,param_1);
    if (DAT_14028e48 != 0) {
      return 0;
    }
  }
  return 0;
}



/* ==== FUN_140042a0 @ 140042a0 ==== 
 * signature: undefined4 __cdecl FUN_140042a0(int * param_1, int param_2)
 * body: 140042a0-1400430c
 */

undefined4 __cdecl FUN_140042a0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((*(int *)((int)param_1 + 6) == iVar1) &&
     (*(int *)((int)param_1 + 10) == *(int *)(param_2 + 0x10))) {
    if (*(char *)((int)param_1 + 0x4de) != '\0') {
      return 0;
    }
    uVar2 = FUN_14004310(param_1);
    return uVar2;
  }
  if (((param_1[4] != iVar1) || (param_1[5] != *(int *)(param_2 + 0x10))) &&
     ((iVar1 != 0x7d2 && (iVar1 != 0x70b)))) {
    return 0x10000;
  }
  if (*(char *)((int)param_1 + 0x4de) == '\0') {
    return 0;
  }
  uVar2 = FUN_14004070(param_1);
  return uVar2;
}



/* ==== FUN_14004310 @ 14004310 ==== 
 * signature: undefined4 __cdecl FUN_14004310(int * param_1)
 * body: 14004310-1400475d
 */

undefined4 __cdecl FUN_14004310(int *param_1)

{
  char *pcVar1;
  LONG *pLVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  short *psVar8;
  short *psVar9;
  int local_8;
  int iStack_4;
  
  pLVar2 = (LONG *)((int)param_1 + 0x516);
  psVar8 = (short *)*pLVar2;
  if (psVar8 != (short *)0x0) {
    *psVar8 = *psVar8 + 1;
LAB_1400432e:
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xc],1,0,&local_8);
    DAT_14028e48 = (*pcVar3)(local_8,0x58,(int)param_1 + 0x6e);
    if (DAT_14028e48 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
      DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Out_of_memory__14026358);
      return 0;
    }
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xc],1,0,&local_8);
    DAT_14028e48 = (*pcVar3)(local_8,0x436,(int)param_1 + 0x6a);
    if (DAT_14028e48 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
      DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Out_of_memory__14026358);
      return 0;
    }
    *(undefined4 *)((int)param_1 + 0x4b6) = *(undefined4 *)((int)param_1 + 0x1a);
    param_1[299] = param_1[8];
    iVar5 = 0;
    piVar6 = param_1 + 0x12a;
    psVar8 = &DAT_140240f8;
    do {
      iVar4 = iVar5 << ((byte)iVar5 & 0x1f);
      psVar9 = psVar8 + 1;
      iVar5 = iVar5 + 1;
      *piVar6 = iVar4;
      piVar6[1] = (int)*psVar8;
      *(undefined1 *)(piVar6 + 2) = 0;
      piVar6 = (int *)((int)piVar6 + 10);
      psVar8 = psVar9;
    } while (psVar9 < &DAT_14024102);
    FUN_14005e40((int)param_1,1);
    *(undefined1 *)((int)param_1 + 0x4de) = 1;
    return 0;
  }
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,0,&local_8);
  DAT_14028e48 = (*pcVar3)(local_8,0x1dc,pLVar2);
  if (DAT_14028e48 != 0) {
    pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
    DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Out_of_memory__14026358);
    return 0;
  }
  DAT_14028e48 = 0;
  puVar7 = (undefined4 *)*pLVar2;
  for (iVar5 = 0x77; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)(*pLVar2 + 2) = 0;
  *(short *)*pLVar2 = *(short *)*pLVar2 + 1;
  iVar5 = FUN_1400d0b0((undefined1 *)(*pLVar2 + 0x72),*pLVar2);
  if (iVar5 == 0) {
    iVar5 = FUN_1400d190();
    if (iVar5 == 0) {
      if (*(char *)(*pLVar2 + 0x72) != '\0') {
        DAT_14026034 = 1;
      }
      pcVar1 = (char *)(*pLVar2 + 0x2a);
      if (*pcVar1 == '\0') {
        FUN_14007260(*(uint *)(*pLVar2 + 0x6a),pcVar1);
      }
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xc],1,0,&local_8);
      DAT_14028e48 = (*pcVar3)(local_8,0xf2,*pLVar2 + 0x1c);
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xc],1,0,&iStack_4);
      DAT_14028e48 = (*pcVar3)(iStack_4,0x9e,*pLVar2 + 0x20);
      iVar5 = FUN_14005f80(param_1,pLVar2);
      if (iVar5 != 0) {
        FUN_140060e0(param_1,pLVar2);
        pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
        DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Error_creating_server_stream_14026328);
        return 0;
      }
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x1e,&local_8);
      DAT_14028e48 = (*pcVar3)(local_8,param_1,param_1,0);
      if (DAT_14028e48 != 0) {
        pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_8);
        DAT_14028e48 = (*pcVar3)(local_8,param_1,1,s_Error_registering_net_service_14026308);
        return 0;
      }
      goto LAB_1400432e;
    }
  }
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,1,&local_8);
  DAT_14028e48 = (*pcVar3)(local_8,*pLVar2);
  *pLVar2 = 0;
  FUN_14007300((int)param_1,*param_1,0x835,0);
  pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&iStack_4);
  DAT_14028e48 = (*pcVar3)(iStack_4,param_1,1,s_Network_failed_14026348);
  return 0;
}



/* ==== FUN_14004760 @ 14004760 ==== 
 * signature: undefined4 __cdecl FUN_14004760(int param_1)
 * body: 14004760-14004b29
 */

undefined4 __cdecl FUN_14004760(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cStack_7d;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  uint local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [64];
  
  local_78 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_6c);
  DAT_14028e48 = (*pcVar1)(local_6c,*(undefined4 *)(param_1 + 0x6a),&local_70);
  if (local_70 == 0) {
    FUN_14005eb0(param_1,0);
    return 0;
  }
  uStack_74 = 1;
  if (local_70 != 0) {
    do {
      cStack_7d = '\0';
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_6c);
      DAT_14028e48 = (*pcVar1)(local_6c,*(undefined4 *)(param_1 + 0x6a),uStack_74,param_1 + 0x72);
      if (*(int *)(param_1 + 0x4a4) == 0) {
        if (*(short *)(param_1 + 0x49e) == 0) {
          if (*(int *)(param_1 + 0x4a0) == 0) {
            cStack_7d = '\x01';
          }
          else {
            local_78 = FUN_140055d0(param_1,param_1 + 0x72,*(int *)(param_1 + 0x4a0),param_1 + 0xc0,
                                    &cStack_7d);
          }
        }
        else {
          local_78 = 0x10000;
          cStack_7d = '\0';
        }
      }
      else {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_68);
        DAT_14028e48 = (*pcVar1)(iStack_68,*(undefined4 *)(param_1 + 0x4a4),&uStack_7c);
        uVar3 = 1;
        if (uStack_7c != 0) {
          do {
            pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_64);
            DAT_14028e48 = (*pcVar1)(iStack_64,*(undefined4 *)(param_1 + 0x4a4),uVar3,&iStack_44);
            if (iStack_44 == 0) {
              pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_5c);
              uVar5 = *(undefined4 *)(param_1 + 0x4a4);
              iVar2 = iStack_5c;
LAB_1400497f:
              uVar4 = uVar3 - 1;
              DAT_14028e48 = (*pcVar1)(iVar2,uVar5,uVar3);
              uStack_7c = uStack_7c - 1;
            }
            else {
              local_78 = FUN_140055d0(param_1,param_1 + 0x72,iStack_44,auStack_40,&cStack_7d);
              if ((local_78 == 0) || (uVar4 = uVar3, cStack_7d != '\0')) {
                pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_60);
                uVar5 = *(undefined4 *)(param_1 + 0x4a4);
                iVar2 = iStack_60;
                goto LAB_1400497f;
              }
            }
            uVar3 = uVar4 + 1;
          } while (uVar3 <= uStack_7c);
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_58);
        DAT_14028e48 = (*pcVar1)(iStack_58,*(undefined4 *)(param_1 + 0x4a4),&uStack_7c);
        if ((uStack_7c == 0) && (*(short *)(param_1 + 0x49e) < 1)) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&iStack_54);
          DAT_14028e48 = (*pcVar1)(iStack_54,*(undefined4 *)(param_1 + 0x4a4));
          cStack_7d = '\x01';
        }
        else {
          local_78 = 0x10000;
          cStack_7d = '\0';
        }
      }
      if ((local_78 == 0) || (cStack_7d != '\0')) {
        if (*(int *)(param_1 + 0x478) != 0) {
          FUN_14008dc0(*(int *)(param_1 + 0x478));
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_50);
          DAT_14028e48 = (*pcVar1)(iStack_50,*(undefined4 *)(param_1 + 0x478));
        }
        if (*(int *)(param_1 + 0x492) != 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&iStack_4c);
          DAT_14028e48 = (*pcVar1)(iStack_4c,*(undefined4 *)(param_1 + 0x492));
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_48);
        DAT_14028e48 = (*pcVar1)(iStack_48,*(undefined4 *)(param_1 + 0x6a),uStack_74);
        local_70 = local_70 - 1;
        uStack_74 = uStack_74 - 1;
      }
      uStack_74 = uStack_74 + 1;
    } while (uStack_74 <= local_70);
  }
  if (local_70 == 0) {
    FUN_14005eb0(param_1,0);
  }
  return 0;
}



/* ==== FUN_14004b30 @ 14004b30 ==== 
 * signature: int __cdecl FUN_14004b30(int * param_1)
 * body: 14004b30-140055c5
 */

int __cdecl FUN_14004b30(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  short local_82e;
  int iStack_82c;
  uint local_828;
  int local_824;
  uint local_820;
  int iStack_81c;
  uint uStack_818;
  int iStack_814;
  int iStack_810;
  int iStack_80c;
  int iStack_808;
  int iStack_804;
  int iStack_800;
  int iStack_7fc;
  uint local_7f8;
  undefined1 auStack_7f4 [64];
  uint uStack_7b4;
  undefined1 auStack_7b0 [4];
  char acStack_7ac [64];
  int iStack_76c;
  undefined1 auStack_764 [68];
  undefined4 uStack_720;
  char cStack_71c;
  int iStack_71a;
  undefined1 auStack_714 [4];
  undefined1 uStack_710;
  undefined1 uStack_70f;
  undefined1 uStack_70e;
  undefined1 auStack_6de [72];
  undefined1 auStack_696 [118];
  undefined1 local_620 [244];
  undefined1 auStack_52c [146];
  int iStack_49a;
  int iStack_126;
  short sStack_100;
  uint uStack_fe;
  int iStack_fa;
  undefined4 local_f4 [61];
  
  iVar3 = *(int *)((int)param_1 + 0x516);
  if (*(short *)(iVar3 + 2) == 0) {
    *(undefined2 *)(iVar3 + 2) = 0xb;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,(int *)&local_7f8);
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),1,
                             local_620);
    iVar3 = FUN_1400d280();
    if (iVar3 != 0) {
      if (iVar3 == -2) {
        FUN_14007300((int)param_1,*param_1,0x835,0);
      }
      return 0x10000;
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,(int *)&local_7f8);
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),1,
                             local_620);
    return 0;
  }
  if (0 < *(short *)(iVar3 + 0xe)) {
    local_82e = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_824);
    iVar3 = 1;
    DAT_14028e48 = (*pcVar2)(local_824,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x20),
                             &local_828);
    if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 0xe)) {
      do {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_824);
        DAT_14028e48 = (*pcVar2)(local_824,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x20),
                                 iVar3,&uStack_7b4);
        iVar5 = iVar3;
        if (cStack_71c != '\0') {
          local_82e = local_82e + 1;
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_82c);
          DAT_14028e48 = (*pcVar2)(iStack_82c,*(undefined4 *)((int)param_1 + 0x6a),uStack_7b4,
                                   auStack_52c);
          iStack_81c = DAT_14028e48;
          if ((DAT_14028e48 != 0) || (uVar9 = 0, iStack_49a != iStack_71a)) {
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_814);
            DAT_14028e48 = (*pcVar2)(iStack_814,*(undefined4 *)((int)param_1 + 0x6a),&uStack_818);
            uVar8 = 1;
            uVar9 = DAT_14028e48;
            if (uStack_818 != 0) {
              do {
                pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_810);
                DAT_14028e48 = (*pcVar2)(iStack_810,*(undefined4 *)((int)param_1 + 0x6a),uVar8,
                                         auStack_52c);
                uVar9 = DAT_14028e48;
                if (iStack_49a == iStack_71a) {
                  iStack_81c = 0;
                  uStack_7b4 = uVar8;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 <= uStack_818);
            }
          }
          DAT_14028e48 = uVar9;
          if ((iStack_76c == 0) && (acStack_7ac[0] == '\0')) {
            local_820 = 0;
            FUN_14007300((int)param_1,*(int *)(iStack_126 + 2),0x89b,(int)auStack_764);
          }
          else {
            iStack_81c = FUN_14006490(param_1,*(int *)((int)param_1 + 0x516),(int)auStack_7b0,
                                      local_f4,&local_820,iStack_126,(int)auStack_764,0);
          }
          if (iStack_81c == 0) {
            if (iStack_fa == 0) {
              uStack_fe = local_820;
              if (local_820 != 0) {
                FUN_14007300((int)param_1,*(int *)(iStack_126 + 2),0x89a,(int)acStack_7ac);
              }
            }
            else {
              local_7f8 = local_820;
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_80c);
              DAT_14028e48 = (*pcVar2)(iStack_80c,auStack_7f4,auStack_764);
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_808);
              DAT_14028e48 = (*pcVar2)(iStack_808,iStack_fa,&local_7f8);
            }
            sStack_100 = sStack_100 + -1;
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,&iStack_804);
            DAT_14028e48 = (*pcVar2)(iStack_804,*(undefined4 *)((int)param_1 + 0x6a),uStack_7b4,
                                     auStack_52c);
          }
          else {
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_800);
            DAT_14028e48 = (*pcVar2)(iStack_800,*(undefined4 *)((int)param_1 + 0x6a),uStack_7b4);
          }
          FUN_1400d5d0(CONCAT31(SUB43(auStack_764._64_4_,1),
                                *(undefined1 *)(*(int *)((int)param_1 + 0x516) + 0x72)),uStack_720);
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_7fc);
          iVar5 = iVar3 + -1;
          DAT_14028e48 = (*pcVar2)(iStack_7fc,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x20)
                                   ,iVar3);
          local_828 = local_828 - 1;
        }
        iVar3 = iVar5 + 1;
      } while (local_82e < *(short *)(*(int *)((int)param_1 + 0x516) + 0xe));
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 0xe) = 0;
  }
  sVar7 = *(short *)(*(int *)((int)param_1 + 0x516) + 4);
  if (0 < sVar7) {
    uVar8 = 0;
    if (sVar7 != 0) {
      do {
        iVar3 = FUN_14006490(param_1,*(int *)((int)param_1 + 0x516),0,local_f4,&local_820,0,0,0);
        if (iVar3 != 0) {
          *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 4) = 0;
          return iVar3;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)(int)*(short *)(*(int *)((int)param_1 + 0x516) + 4));
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 4) = 0;
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 2) = 1;
  }
  if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 8)) {
    *(undefined1 *)(*(int *)((int)param_1 + 0x516) + 0x19) = 1;
    iVar3 = *(int *)((int)param_1 + 0x516);
    FUN_14006cf0(param_1,iVar3,*(short *)(iVar3 + 8),iVar3 + 0x74);
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 8) = 0;
    *(undefined1 *)(*(int *)((int)param_1 + 0x516) + 0x19) = 0;
  }
  iVar3 = *(int *)((int)param_1 + 0x516);
  if (0 < *(short *)(iVar3 + 10)) {
    FUN_14006cf0(param_1,iVar3,*(short *)(iVar3 + 10),iVar3 + 0xc4);
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 10) = 0;
  }
  sVar7 = *(short *)(*(int *)((int)param_1 + 0x516) + 0xc);
  if (0 < sVar7) {
    iStack_82c = 0x30;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,(int *)&local_7f8);
    uVar8 = 2;
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                             &local_828);
    if (1 < local_828) {
      do {
        if (sVar7 < 1) break;
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_82c),1,6,(int *)&local_7f8);
        sVar6 = 0;
        DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                                 uVar8,auStack_714);
        if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 0xc)) {
          do {
            bVar1 = FUN_1400d520((int)auStack_696,
                                 (int *)(sVar6 * 4 + *(int *)((int)param_1 + 0x516) + 0x18c));
            if (bVar1) {
              sVar7 = sVar7 + -1;
              uStack_70e = 1;
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_82c),1,7,&local_824);
              DAT_14028e48 = (*pcVar2)(local_824,
                                       *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar8,
                                       auStack_714);
              break;
            }
            sVar6 = sVar6 + 1;
          } while (sVar6 < *(short *)(*(int *)((int)param_1 + 0x516) + 0xc));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 <= local_828);
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 0xc) = 0;
  }
  sVar7 = *(short *)(*(int *)((int)param_1 + 0x516) + 6);
  if (0 < sVar7) {
    iStack_82c = 0x30;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,(int *)&local_7f8);
    uVar8 = 2;
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                             &local_828);
    if (1 < local_828) {
      do {
        if (sVar7 < 1) break;
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_82c),1,6,(int *)&local_7f8);
        sVar6 = 0;
        DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                                 uVar8,auStack_714);
        if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 6)) {
          do {
            bVar1 = FUN_1400d520((int)auStack_696,
                                 (int *)(sVar6 * 4 + *(int *)((int)param_1 + 0x516) + 0x13c));
            if (bVar1) {
              sVar7 = sVar7 + -1;
              uStack_70f = 1;
              uStack_710 = 1;
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_82c),1,7,&local_824);
              DAT_14028e48 = (*pcVar2)(local_824,
                                       *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar8,
                                       auStack_714);
              puVar10 = auStack_6de;
              uVar9 = 0x89c;
              iVar3 = FUN_14008a80((int)param_1);
              FUN_14007300((int)param_1,iVar3,uVar9,(int)puVar10);
              break;
            }
            sVar6 = sVar6 + 1;
          } while (sVar6 < *(short *)(*(int *)((int)param_1 + 0x516) + 6));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 <= local_828);
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 6) = 0;
  }
  sVar7 = *(short *)(*(int *)((int)param_1 + 0x516) + 0x1a);
  if (0 < sVar7) {
    iStack_82c = CONCAT22(iStack_82c._2_2_,sVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,(int *)&local_7f8);
    uVar8 = 2;
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                             &local_828);
    if (1 < local_828) {
      do {
        if ((short)iStack_82c < 1) break;
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,(int *)&local_7f8);
        sVar7 = 0;
        DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                                 uVar8,auStack_714);
        if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 0x1a)) {
          do {
            bVar1 = FUN_1400d520((int)auStack_696,
                                 (int *)(sVar7 * 4 + *(int *)((int)param_1 + 0x516) + 0xec));
            if (bVar1) {
              iStack_82c = CONCAT22(iStack_82c._2_2_,(short)iStack_82c + -1);
              uStack_710 = 0;
              FUN_1400d500((int)auStack_696);
              FUN_140074e0(param_1,(int)auStack_714);
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,&local_824);
              DAT_14028e48 = (*pcVar2)(local_824,
                                       *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar8,
                                       auStack_714);
              puVar10 = auStack_6de;
              uVar9 = 0x89f;
              iVar3 = FUN_14008a80((int)param_1);
              FUN_14007300((int)param_1,iVar3,uVar9,(int)puVar10);
              break;
            }
            sVar7 = sVar7 + 1;
          } while (sVar7 < *(short *)(*(int *)((int)param_1 + 0x516) + 0x1a));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 <= local_828);
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 0x1a) = 0;
  }
  pcVar4 = (char *)(*(int *)((int)param_1 + 0x516) + 0x18);
  if (*pcVar4 != '\0') {
    *pcVar4 = '\0';
    FUN_14005dd0(param_1,*(int *)((int)param_1 + 0x516));
  }
  return 0;
}



/* ==== FUN_140055d0 @ 140055d0 ==== 
 * signature: int __cdecl FUN_140055d0(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5)
 * body: 140055d0-14005dc7
 */

int __cdecl
FUN_140055d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_158;
  int local_154;
  int iStack_150;
  int local_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  undefined1 local_13c [4];
  char cStack_138;
  char cStack_137;
  char cStack_136;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_118;
  undefined1 auStack_114 [4];
  short sStack_110;
  undefined1 auStack_106 [64];
  int iStack_c6;
  undefined1 auStack_be [22];
  int iStack_a8;
  undefined2 *puStack_a4;
  undefined1 auStack_a0 [64];
  undefined4 auStack_60 [6];
  int iStack_48;
  undefined2 *puStack_44;
  undefined1 auStack_40 [64];
  
  local_14c = 0;
  local_154 = 0x30;
  piVar1 = (int *)(param_2 + 0x92);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_158);
  DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),param_3,
                           local_13c);
  if (iStack_c6 == 0) {
    *param_5 = 1;
    return 0x10000;
  }
  if (iStack_124 == -1) {
    iStack_124 = *piVar1;
  }
  else if (*piVar1 != iStack_124) {
    return 0x10000;
  }
  if ((cStack_138 != '\0') && (cStack_136 != '\0')) {
    if ((iStack_12c == 0) && (iStack_128 == 0)) {
      iStack_12c = *(int *)(param_2 + 0x424);
      iStack_124 = *piVar1;
    }
    if (*(int *)(param_2 + 0x420) == 0) {
      local_158 = 0;
    }
    else {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_158);
      DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(param_2 + 0x420),&iStack_148);
      local_158 = FUN_1400d4d0((int)auStack_be,iStack_148 + iStack_128,iStack_12c - iStack_128,
                               &local_14c);
      iStack_128 = iStack_128 + local_14c;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_150);
      DAT_14028e48 = (*pcVar2)(iStack_150,*(undefined4 *)(param_2 + 0x420));
      sVar5 = 0;
      do {
        iVar3 = (int)sVar5;
        sVar5 = sVar5 + 1;
        puVar6 = (undefined4 *)(param_2 + 0x40a + iVar3 * 0x16);
        puVar7 = (undefined4 *)((int)auStack_60 + iVar3 * 0x16);
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
      } while (sVar5 < 1);
    }
    if ((local_158 != 0) && (local_158 != 0x2733)) {
      FUN_140074e0(param_1,(int)local_13c);
      FUN_1400d500((int)auStack_be);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,7,&local_158);
      DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),param_3,
                               local_13c);
      return 0x10000;
    }
    if (iStack_128 == iStack_12c) {
      if (iStack_a8 == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,0,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,0x48,&iStack_a8);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
      }
      if (cStack_137 == '\0') {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,&iStack_48);
      }
      else {
        cStack_137 = '\0';
        iStack_48 = iStack_118;
      }
      if ((*(int *)(param_2 + 0x406) == 0) || (*(int *)(*(int *)(param_2 + 0x406) + 2) == 0)) {
        puStack_44 = (undefined2 *)0x0;
      }
      else {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,0x12,&puStack_44);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
        *puStack_44 = 0x69;
        *(undefined4 *)(puStack_44 + 3) = 0;
        *(undefined4 *)(puStack_44 + 5) = 0;
        *(undefined4 *)(puStack_44 + 1) = 0;
        *(undefined4 *)(puStack_44 + 7) = 0;
        FUN_14008d10(puStack_44,*(undefined2 **)(param_2 + 0x406));
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,8,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,puStack_44);
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_158);
      DAT_14028e48 = (*pcVar2)(local_158,auStack_40,param_4);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,2,&iStack_150);
      DAT_14028e48 = (*pcVar2)(iStack_150,iStack_a8,&iStack_48);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&iStack_144);
      DAT_14028e48 = (*pcVar2)(iStack_144,auStack_114);
      sStack_110 = sStack_110 + -1;
      iStack_128 = 0;
      iStack_12c = 0;
      iStack_124 = -1;
      cStack_136 = 1;
      if (puStack_a4 != (undefined2 *)0x0) {
        FUN_14008dc0((int)puStack_a4);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,puStack_a4);
        puStack_a4 = (undefined2 *)0x0;
      }
      iVar3 = 0;
    }
    else {
      cStack_136 = local_158 != 0x2733;
      if (((*(int *)(param_2 + 0x406) != 0) && (*(int *)(*(int *)(param_2 + 0x406) + 2) != 0)) &&
         (puStack_a4 == (undefined2 *)0x0)) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,0x12,&puStack_a4);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
        *puStack_a4 = 0x69;
        *(undefined4 *)(puStack_a4 + 3) = 0;
        *(undefined4 *)(puStack_a4 + 5) = 0;
        *(undefined4 *)(puStack_a4 + 1) = 0;
        *(undefined4 *)(puStack_a4 + 7) = 0;
        FUN_14008d10(puStack_a4,*(undefined2 **)(param_2 + 0x406));
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,8,&local_158);
        DAT_14028e48 = (*pcVar2)(local_158,puStack_a4);
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_158);
      DAT_14028e48 = (*pcVar2)(local_158,auStack_a0,param_4);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&iStack_150);
      iVar3 = 0x10000;
      DAT_14028e48 = (*pcVar2)(iStack_150,&iStack_118);
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,7,&local_158);
    DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),param_3,
                             local_13c);
    return iVar3;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&local_158);
  DAT_14028e48 = (*pcVar2)(local_158,&iStack_140);
  if (*(int *)(param_1 + 0x62) * 1000 < iStack_140 - iStack_118) {
    *param_5 = 1;
    if (*(int *)(param_2 + 0x406) != 0) {
      FUN_14007300(param_1,*(int *)(*(int *)(param_2 + 0x406) + 2),0x89d,(int)auStack_106);
    }
    FUN_1400d500((int)auStack_be);
    FUN_140074e0(param_1,(int)local_13c);
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_154),1,7,&local_158);
  DAT_14028e48 = (*pcVar2)(local_158,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),param_3,
                           local_13c);
  return 0x10000;
}



/* ==== FUN_14005dd0 @ 14005dd0 ==== 
 * signature: undefined __cdecl FUN_14005dd0(undefined4 param_1, int param_2)
 * body: 14005dd0-14005e3f
 */

void __cdecl FUN_14005dd0(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int local_f8;
  undefined1 local_f4 [126];
  undefined1 auStack_76 [118];
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_f8);
  DAT_14028e48 = (*pcVar1)(local_f8,*(undefined4 *)(param_2 + 0x1c),1,local_f4);
  if (*(char *)(param_2 + 0x72) == '\0') {
    FUN_1400d500((int)auStack_76);
  }
  *(undefined2 *)(param_2 + 2) = 0xb;
  return;
}



/* ==== FUN_14005e40 @ 14005e40 ==== 
 * signature: undefined __cdecl FUN_14005e40(int param_1, short param_2)
 * body: 14005e40-14005ea6
 */

void __cdecl FUN_14005e40(int param_1,short param_2)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  iVar1 = param_1 + 0x4a8 + param_2 * 10;
  if (*(char *)(iVar1 + 8) == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x14),1,0,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,param_1,iVar1,*(undefined4 *)(iVar1 + 4),1,param_2);
    *(undefined1 *)(iVar1 + 8) = 1;
  }
  return;
}



/* ==== FUN_14005eb0 @ 14005eb0 ==== 
 * signature: undefined __cdecl FUN_14005eb0(int param_1, short param_2)
 * body: 14005eb0-14005f0a
 */

void __cdecl FUN_14005eb0(int param_1,short param_2)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  iVar1 = param_1 + 0x4a8 + param_2 * 10;
  if (*(char *)(iVar1 + 8) == '\x01') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x14),1,1,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,param_1,iVar1);
    *(undefined1 *)(iVar1 + 8) = 0;
  }
  return;
}



/* ==== FUN_14005f10 @ 14005f10 ==== 
 * signature: undefined __cdecl FUN_14005f10(int param_1, short param_2, int param_3)
 * body: 14005f10-14005f79
 */

void __cdecl FUN_14005f10(int param_1,short param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int local_4;
  
  iVar1 = param_1 + 0x4a8 + param_2 * 10;
  if ((*(int *)(param_1 + 0x4ac + param_2 * 10) != param_3) &&
     (*(int *)(iVar1 + 4) = param_3, *(char *)(iVar1 + 8) == '\x01')) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x14),1,3,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,param_1,iVar1,param_3);
  }
  return;
}



/* ==== FUN_14005f80 @ 14005f80 ==== 
 * signature: undefined4 __cdecl FUN_14005f80(int * param_1, LONG * param_2)
 * body: 14005f80-140060d7
 */

undefined4 __cdecl FUN_14005f80(int *param_1,LONG *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_fc;
  int iStack_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_76 [9];
  undefined4 local_64;
  undefined2 *local_5c [17];
  int *piStack_16;
  undefined2 uStack_12;
  undefined2 uStack_10;
  
  puVar3 = &local_f4;
  for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  iVar2 = FUN_1400d1b0(local_76,*param_2,'\x01');
  if (iVar2 != 0) {
    if (iVar2 == -2) {
      FUN_14007300((int)param_1,*param_1,0x835,0);
    }
    return 0x10000;
  }
  local_64 = 0;
  local_f0 = 1;
  local_f4._2_1_ = 1;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_fc);
  DAT_14028e48 = (*pcVar1)(local_fc,0x12,local_5c);
  *local_5c[0] = 0x69;
  *(undefined4 *)(local_5c[0] + 3) = 0;
  *(undefined4 *)(local_5c[0] + 5) = 0;
  *(int *)(local_5c[0] + 1) = *param_1;
  *(undefined4 *)(local_5c[0] + 7) = 0;
  uStack_12 = 1;
  piStack_16 = param_1;
  uStack_10 = 3;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_f8);
  DAT_14028e48 = (*pcVar1)(iStack_f8,*(undefined4 *)(*param_2 + 0x1c),&local_f4);
  *(undefined2 *)(*param_2 + 0x24) = 1;
  return 0;
}



/* ==== FUN_140060e0 @ 140060e0 ==== 
 * signature: undefined __cdecl FUN_140060e0(undefined4 param_1, int * param_2)
 * body: 140060e0-14006489
 */

void __cdecl FUN_140060e0(undefined4 param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uStack_164;
  uint local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int local_13c;
  int iStack_138;
  undefined1 auStack_f4 [4];
  char cStack_f0;
  int iStack_d8;
  undefined1 auStack_76 [18];
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_13c);
    uVar4 = 1;
    DAT_14028e48 = (*pcVar2)(local_13c,*(undefined4 *)(iVar1 + 0x1c),&local_160);
    if (local_160 != 0) {
      do {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_15c);
        DAT_14028e48 = (*pcVar2)(iStack_15c,*(undefined4 *)(iVar1 + 0x1c),uVar4,auStack_f4);
        if (cStack_f0 == '\0') {
LAB_140061b7:
          if (uVar4 == 1) goto LAB_140061bc;
        }
        else {
          if ((*(char *)(iVar1 + 0x72) == '\0') || (uVar4 != 1)) {
            FUN_1400d500((int)auStack_76);
            goto LAB_140061b7;
          }
LAB_140061bc:
          FUN_1400d250((int)auStack_76);
        }
        if (iStack_d8 != 0) {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&iStack_158);
          DAT_14028e48 = (*pcVar2)(iStack_158,iStack_d8);
        }
        if (iStack_64 != 0) {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_154);
          DAT_14028e48 = (*pcVar2)(iStack_154,iStack_64);
        }
        if (iStack_60 != 0) {
          uStack_164 = 0;
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_150);
          DAT_14028e48 = (*pcVar2)(iStack_150,iStack_60,&uStack_164);
          uVar3 = 1;
          if (uStack_164 != 0) {
            do {
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_14c);
              DAT_14028e48 = (*pcVar2)(iStack_14c,iStack_60,uVar3,&local_13c);
              if (iStack_138 != 0) {
                FUN_14008dc0(iStack_138);
                pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_148);
                DAT_14028e48 = (*pcVar2)(iStack_148,iStack_138);
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 <= uStack_164);
          }
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&iStack_144);
          DAT_14028e48 = (*pcVar2)(iStack_144,iStack_60);
        }
        if (iStack_5c != 0) {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_140);
          DAT_14028e48 = (*pcVar2)(iStack_140,iStack_5c);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= local_160);
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_13c);
    DAT_14028e48 = (*pcVar2)(local_13c,*(undefined4 *)(iVar1 + 0x1c));
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_13c);
    DAT_14028e48 = (*pcVar2)(local_13c,*(undefined4 *)(iVar1 + 0x20));
  }
  FUN_1400d160();
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_13c);
  DAT_14028e48 = (*pcVar2)(local_13c,*param_2);
  *param_2 = 0;
  return;
}



/* ==== FUN_14006490 @ 14006490 ==== 
 * signature: int __cdecl FUN_14006490(int * param_1, int param_2, int param_3, undefined4 * param_4, uint * param_5, int param_6, int param_7, int param_8)
 * body: 14006490-14006ce3
 */

int __cdecl
FUN_14006490(int *param_1,int param_2,int param_3,undefined4 *param_4,uint *param_5,int param_6,
            int param_7,int param_8)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  short sStack_118;
  short local_116;
  int local_114;
  uint local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  int local_100;
  int local_fc;
  int iStack_f8;
  undefined1 auStack_f4 [128];
  char *pcStack_74;
  undefined4 uStack_68;
  
  local_110 = 0;
  local_fc = 0;
  bVar9 = param_3 == 0;
  local_108 = local_108 & 0xffffff00;
  local_100 = 0xfffffff;
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 0x44);
    if (*piVar1 == 0) {
      uVar3 = FUN_140070d0((char *)(param_3 + 4),piVar1,&local_116);
      if ((uVar3 != 0) || (*piVar1 == 0)) {
        return 0x10000;
      }
      if (*(short *)(param_3 + 0x48) == 0) {
        *(short *)(param_3 + 0x48) = local_116;
      }
    }
    if (param_3 == 0) goto LAB_14006543;
    if ((*(uint *)(param_3 + 0x44) != 0) && (*(char *)(param_3 + 4) == '\0')) {
      FUN_14007260(*(uint *)(param_3 + 0x44),(char *)(param_3 + 4));
    }
  }
  if (param_3 != 0) {
    if (*(short *)(param_3 + 0x48) == 0) {
      *(short *)(param_3 + 0x48) = (short)*(undefined4 *)((int)param_1 + 0x56);
    }
    else {
      local_108 = CONCAT31(local_108._1_3_,1);
    }
  }
LAB_14006543:
  local_10c = 0x30;
  pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_114);
  uVar3 = 2;
  DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),&local_104);
  if (1 < local_104) {
    do {
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
      DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),uVar3,param_4);
      if (((!bVar9) && (*(int *)(param_3 + 0x44) == *(int *)((int)param_4 + 0x76))) &&
         (((char)local_108 == '\0' ||
          ((*(short *)(param_3 + 0x48) == *(short *)((int)param_4 + 0x7a) ||
           ((char)local_108 == '\0')))))) {
        *param_5 = uVar3;
        *(short *)(param_4 + 0xb) = *(short *)(param_4 + 0xb) + 1;
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,7,&local_114);
        DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),uVar3,param_4);
        return 0;
      }
      if ((*(int *)((int)param_4 + 0x76) == 0) && (local_110 == 0)) {
        local_110 = uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= local_104);
  }
  if (param_1[0x17] == 0) {
    param_1[0x17] = *(int *)(*(int *)((int)param_1 + 0x516) + 0x14);
  }
  if (local_110 == 0) {
    if ((uint)param_1[0x17] < local_104) {
      uVar3 = 2;
      if (1 < local_104) {
        do {
          pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
          DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),uVar3,param_4);
          if (param_4[0x25] != 0) {
            pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,9,(int *)&local_108);
            DAT_14028e48 = (*pcVar4)(local_108,param_4[0x25],&local_fc);
          }
          if ((((*(short *)(param_4 + 0xb) == 0) && (local_fc == 0)) && (param_4[2] == 0)) &&
             ((int)param_4[10] < local_100)) {
            local_110 = uVar3;
            local_100 = param_4[10];
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 <= local_104);
      }
      if (local_110 == 0) {
        if (bVar9) {
          pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
          DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),1,auStack_f4);
          FUN_140099e0(pcStack_74);
        }
        if ((param_6 != 0) && (*(int *)(param_6 + 2) != 0)) {
          FUN_14007300((int)param_1,*(int *)(param_6 + 2),0x89e,param_7);
        }
        return 0x10000;
      }
      if (local_110 != local_104) {
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
        DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),local_110,param_4);
      }
      FUN_1400d500((int)param_4 + 0x7e);
    }
    else {
      puVar7 = param_4;
      for (iVar5 = 0x3c; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      *(undefined1 *)((int)param_4 + 2) = 1;
      param_4[8] = 0x400;
      if (param_8 != 0) {
        sVar2 = 0;
        do {
          iVar5 = (int)sVar2;
          sVar2 = sVar2 + 1;
          puVar7 = (undefined4 *)(iVar5 * 0x16 + param_8);
          puVar8 = (undefined4 *)((int)param_4 + iVar5 * 0x16 + 0xdc);
          for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined2 *)puVar8 = *(undefined2 *)puVar7;
        } while (sVar2 < 1);
      }
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,2,&local_114);
      DAT_14028e48 = (*pcVar4)(local_114,param_4[8],param_4 + 7);
      if (DAT_14028e48 != 0) {
        return DAT_14028e48;
      }
      param_4[0x24] = 0;
    }
  }
  else if (local_110 != local_104) {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),local_110,param_4);
  }
  if (bVar9) {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),1,auStack_f4);
    uVar3 = FUN_14009800((int)param_4 + 0x7e,pcStack_74);
    if (uVar3 != 0) {
      FUN_14009a60();
      return 0x10000;
    }
    FUN_140070d0((char *)((int)param_4 + 0x36),(int *)((int)param_4 + 0x76),&sStack_118);
    *(undefined1 *)(param_4 + 1) = 1;
  }
  else {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),1,auStack_f4);
    param_4[0x23] = uStack_68;
    iVar5 = FUN_1400d2b0();
    if ((iVar5 != 0) && (iVar5 != 0x2733)) {
      if (iVar5 == -2) {
        FUN_14007300((int)param_1,*param_1,0x835,0);
      }
      return 0x10000;
    }
    *(undefined1 *)(param_4 + 1) = 0;
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,&iStack_f8,param_3 + 4);
    *(undefined4 *)((int)param_4 + 0x76) = *(undefined4 *)(param_3 + 0x44);
    *(undefined2 *)((int)param_4 + 0x7a) = *(undefined2 *)(param_3 + 0x48);
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,(int *)&local_108);
    DAT_14028e48 = (*pcVar4)(local_108,param_4 + 0x27,param_7);
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_100);
    DAT_14028e48 = (*pcVar4)(local_100,(int)param_4 + 0x36,param_3 + 4);
    *(undefined1 *)(iStack_f8 + 0x36 + (int)param_4) = 0;
    *(short *)(param_4 + 0xb) = *(short *)(param_4 + 0xb) + 1;
  }
  piVar1 = param_4 + 0x26;
  pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_114);
  DAT_14028e48 = (*pcVar4)(local_114,0x12,piVar1);
  *(undefined2 *)*piVar1 = 0x69;
  if (param_6 == 0) {
    *(undefined4 *)(*piVar1 + 6) = 0;
    *(undefined4 *)(*piVar1 + 10) = 0;
    *(int *)(*piVar1 + 2) = *param_1;
    *(undefined4 *)(*piVar1 + 0xe) = 0;
  }
  else {
    *(undefined4 *)(*piVar1 + 6) = 0;
    *(undefined4 *)(*piVar1 + 10) = 0;
    *(undefined4 *)(*piVar1 + 2) = *(undefined4 *)(param_6 + 2);
    *(undefined4 *)(*piVar1 + 0xe) = 0;
  }
  *(int **)((int)param_4 + 0xde) = param_1;
  *(undefined2 *)((int)param_4 + 0xe2) = 1;
  *(undefined2 *)(param_4 + 0x39) = 3;
  pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,0,&local_114);
  DAT_14028e48 = (*pcVar4)(local_114,param_4 + 9);
  param_4[6] = 0xffffffff;
  *(undefined1 *)((int)param_4 + 6) = 1;
  if (local_110 == 0) {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,2,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),param_4);
    sVar2 = *(short *)(param_2 + 0x24) + 1;
    *(short *)(param_2 + 0x24) = sVar2;
    *param_5 = (int)sVar2;
  }
  else {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,7,&local_114);
    DAT_14028e48 = (*pcVar4)(local_114,*(undefined4 *)(param_2 + 0x1c),local_110,param_4);
    *param_5 = local_110;
  }
  return 0;
}



/* ==== FUN_14006cf0 @ 14006cf0 ==== 
 * signature: int __cdecl FUN_14006cf0(undefined4 param_1, int param_2, short param_3, int param_4)
 * body: 14006cf0-14006f94
 */

int __cdecl FUN_14006cf0(undefined4 param_1,int param_2,short param_3,int param_4)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  short sStack_122;
  int iStack_120;
  uint uStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int local_10c;
  int iStack_108;
  uint local_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined1 auStack_f4 [28];
  undefined4 uStack_d8;
  int iStack_d4;
  undefined1 auStack_76 [118];
  
  local_10c = 0x30;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_118);
  DAT_14028e48 = (*pcVar2)(local_118,*(undefined4 *)(param_2 + 0x1c),&local_104);
  uStack_11c = 2;
  sStack_122 = param_3;
  if (1 < local_104) {
    do {
      if (sStack_122 < 1) {
        return 0;
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,6,&local_118);
      sVar4 = 0;
      DAT_14028e48 = (*pcVar2)(local_118,*(undefined4 *)(param_2 + 0x1c),uStack_11c,auStack_f4);
      if (0 < param_3) {
        do {
          bVar1 = FUN_1400d520((int)auStack_76,(int *)(param_4 + sVar4 * 4));
          if (bVar1) {
            sStack_122 = sStack_122 + -1;
            break;
          }
          sVar4 = sVar4 + 1;
        } while (sVar4 < param_3);
        if (sVar4 < param_3) {
          iStack_120 = iStack_d4;
          iVar3 = FUN_1400d2f0(auStack_76,uStack_d8,&iStack_120,&iStack_108);
          if (iVar3 != 0) {
            FUN_14005dd0(param_1,param_2);
            return 0;
          }
          iStack_d4 = iStack_120;
          iStack_120 = iStack_108;
          if (iStack_108 == 0) {
            return 0;
          }
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&iStack_100);
          DAT_14028e48 = (*pcVar2)(iStack_100,uStack_d8,&iStack_114);
          if (DAT_14028e48 != 0) {
            return DAT_14028e48;
          }
          *(undefined1 *)(iStack_114 + iStack_120) = 0;
          iVar3 = 0;
          while ((0 < iStack_120 && (iVar3 == 0))) {
            iStack_110 = iStack_120;
            iVar3 = FUN_14006fa0(param_1,param_2,(int)auStack_f4,iStack_114,&iStack_110);
            iStack_114 = iStack_114 + iStack_110;
            iStack_120 = iStack_120 - iStack_110;
          }
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_fc);
          DAT_14028e48 = (*pcVar2)(iStack_fc,uStack_d8);
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_10c),1,7,&iStack_f8);
          DAT_14028e48 = (*pcVar2)(iStack_f8,*(undefined4 *)(param_2 + 0x1c),uStack_11c,auStack_f4);
        }
      }
      uStack_11c = uStack_11c + 1;
    } while (uStack_11c <= local_104);
  }
  return 0;
}



/* ==== FUN_14006fa0 @ 14006fa0 ==== 
 * signature: undefined4 __cdecl FUN_14006fa0(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 * param_5)
 * body: 14006fa0-140070c4
 */

undefined4 __cdecl
FUN_14006fa0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 *param_5)

{
  code *pcVar1;
  int local_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  if (*(int *)(param_3 + 0xde) == 0) {
    *param_5 = 0xffffffff;
  }
  else {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(param_3 + 0xde),(int)*(short *)(param_3 + 0xe2),
                                  (int)*(short *)(param_3 + 0xe4),&local_4c);
    DAT_14028e48 = (*pcVar1)(local_4c,param_4,param_5,param_3);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_4c);
  DAT_14028e48 = (*pcVar1)(local_4c,*(undefined4 *)(param_3 + 0x94),1,auStack_48);
  if ((DAT_14028e48 == 0) && (iStack_44 != 0)) {
    FUN_14008dc0(iStack_44);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_4c);
    DAT_14028e48 = (*pcVar1)(local_4c,iStack_44);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&local_4c);
  DAT_14028e48 = (*pcVar1)(local_4c,*(undefined4 *)(param_3 + 0x94),1);
  return 0;
}



/* ==== FUN_140070d0 @ 140070d0 ==== 
 * signature: uint __cdecl FUN_140070d0(char * param_1, int * param_2, short * param_3)
 * body: 140070d0-1400725a
 */

uint __cdecl FUN_140070d0(char *param_1,int *param_2,short *param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  code *pcVar5;
  short sVar6;
  short sVar7;
  int local_1c;
  int local_18;
  int iStack_14;
  int local_10 [4];
  
  sVar7 = 0;
  local_1c = 0;
  pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,local_10);
  DAT_14028e48 = (*pcVar5)(local_10[0],&local_18,param_1);
  *param_3 = 0;
  pcVar5 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,7,&iStack_14);
  DAT_14028e48 = (*pcVar5)(iStack_14,&local_1c,param_1,0x3a);
  if (local_1c != 0) {
    local_18 = local_1c - (int)param_1;
    pcVar2 = (char *)(local_1c + 1);
    cVar3 = *pcVar2;
    while (cVar3 != '\0') {
      cVar3 = *pcVar2;
      if ((cVar3 < '0') || ('9' < cVar3)) {
        return 0x10000;
      }
      pcVar2 = pcVar2 + 1;
      *param_3 = *param_3 * 10 + (short)cVar3 + -0x30;
      cVar3 = *pcVar2;
    }
    param_1[local_18] = '\0';
  }
  sVar6 = 0;
  do {
    cVar3 = *param_1;
    piVar1 = local_10 + sVar6;
    *piVar1 = 0;
    for (; ((cVar3 != '.' && (cVar4 = *param_1, cVar4 != ':')) && (sVar7 < local_18));
        sVar7 = sVar7 + 1) {
      if ((cVar4 < '0') || ('9' < cVar4)) {
        return 0x10000;
      }
      param_1 = param_1 + 1;
      cVar3 = *param_1;
      *piVar1 = (int)cVar4 + *piVar1 * 10 + -0x30;
    }
    if (sVar6 < 3) {
      sVar7 = sVar7 + 1;
      param_1 = param_1 + 1;
    }
    sVar6 = sVar6 + 1;
  } while (sVar6 < 4);
  *param_2 = ((local_10[0] * 0x100 + local_10[1]) * 0x100 + local_10[2]) * 0x100 + local_10[3];
  return (*param_1 == '\0') - 1 & 0x10000;
}



/* ==== FUN_14007260 @ 14007260 ==== 
 * signature: undefined4 __cdecl FUN_14007260(uint param_1, char * param_2)
 * body: 14007260-140072fe
 */

undefined4 __cdecl FUN_14007260(uint param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_4;
  
  local_4 = 0x18;
  do {
    uVar4 = (0xff << ((byte)local_4 & 0x1f) & param_1) >> ((byte)local_4 & 0x1f);
    if (((int)uVar4 < 0) || (0xff < (int)uVar4)) {
      return 0x10000;
    }
    bVar1 = false;
    for (iVar3 = 100; (uVar4 != 0 || (iVar3 == 1)); iVar3 = iVar3 / 10) {
      iVar2 = (int)uVar4 / iVar3;
      if ((iVar2 != 0) || ((bVar1 || (iVar3 == 1)))) {
        *param_2 = (char)iVar2 + '0';
        param_2 = param_2 + 1;
        bVar1 = true;
      }
      uVar4 = uVar4 - iVar3 * iVar2;
    }
    if (local_4 != 0) {
      *param_2 = '.';
      param_2 = param_2 + 1;
    }
    local_4 = local_4 + -8;
  } while (-1 < local_4);
  *param_2 = '\0';
  return 0;
}



/* ==== FUN_14007300 @ 14007300 ==== 
 * signature: int __cdecl FUN_14007300(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 14007300-140074d1
 */

int __cdecl FUN_14007300(int param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int local_d4;
  int iStack_d0;
  undefined2 local_cc;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined2 uStack_c0;
  undefined4 uStack_be;
  undefined4 uStack_ba;
  undefined4 uStack_b6;
  undefined4 uStack_b2;
  undefined2 local_ac;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined2 local_80 [7];
  int iStack_72;
  undefined1 auStack_54 [84];
  
  if (param_2 == 0) {
    return 0x10000;
  }
  local_cc = 0x17;
  local_ac = 0x69;
  local_ca = param_3;
  local_c6 = 0;
  local_a6 = 0;
  local_a2 = 0;
  local_aa = 0;
  local_9e = 0;
  if (param_4 == 0) {
    local_80[0] = 0;
  }
  else {
    FUN_14008ed0(0,local_80,param_4);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_d4);
  iVar2 = (*pcVar1)(local_d4,param_2,s_parent_14026368,0,&local_ac);
  DAT_14028e48 = iVar2;
  if (iVar2 == 0) {
    uStack_ba = 0;
    uStack_be = local_aa;
    uStack_b6 = 0;
    uStack_b2 = 0;
    uStack_c0 = 0x69;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x16,&local_d4);
    puVar8 = auStack_54;
    puVar6 = local_80;
    uVar7 = 0x40000000;
    puVar5 = &local_cc;
    puVar4 = &uStack_c0;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(local_d4,uVar3,puVar4,puVar5,puVar6,uVar7,puVar8);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_d0);
    puVar8 = auStack_54;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(iStack_d0,uVar3,puVar8);
    if ((param_4 != 0) && (iStack_72 != 0)) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_d4);
      DAT_14028e48 = (*pcVar1)(local_d4,iStack_72);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ==== FUN_140074e0 @ 140074e0 ==== 
 * signature: undefined __cdecl FUN_140074e0(undefined4 param_1, int param_2)
 * body: 140074e0-1400768b
 */

void __cdecl FUN_140074e0(undefined4 param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int local_54;
  uint local_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  
  *(undefined2 *)(param_2 + 0x7a) = 0;
  *(undefined4 *)(param_2 + 0x76) = 0;
  *(undefined2 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  if (*(int *)(param_2 + 0x94) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_2 + 0x94),&local_50);
    uVar2 = 1;
    if (local_50 != 0) {
      do {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_54);
        DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_2 + 0x94),uVar2,auStack_48);
        if (iStack_44 != 0) {
          FUN_14008dc0(iStack_44);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&iStack_4c);
          DAT_14028e48 = (*pcVar1)(iStack_4c,iStack_44);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 <= local_50);
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_2 + 0x94));
    *(undefined4 *)(param_2 + 0x94) = 0;
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    FUN_14008dc0(*(int *)(param_2 + 0x98));
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_2 + 0x98));
    *(undefined4 *)(param_2 + 0x98) = 0;
  }
  *(undefined1 *)(param_2 + 0x36) = 0;
  return;
}



/* ==== FUN_14007690 @ 14007690 ==== 
 * signature: int __cdecl FUN_14007690(int * param_1, int param_2)
 * body: 14007690-14007878
 */

int __cdecl FUN_14007690(int *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  char local_fd;
  int local_fc;
  int iStack_f8;
  undefined4 auStack_f4 [61];
  
  local_fd = '\0';
  if (*(char *)((int)param_1 + 0x4ba) == '\0') {
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,1,&local_fc);
  DAT_14028e48 = (*pcVar1)(local_fc,param_2 + 0x92);
  *(undefined4 *)(param_2 + 0x8e) = 0x374;
  *(undefined2 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0x432) = 0;
  *(undefined2 *)(param_2 + 0x42c) = 0;
  if ((*(byte *)(param_2 + 0x4c) & 0x40) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_fc);
    DAT_14028e48 = (*pcVar1)(local_fc,param_2 + 0x4e,(char *)(param_2 + 6));
    uVar2 = FUN_140070d0((char *)(param_2 + 6),(int *)(param_2 + 0x46),(short *)(param_2 + 0x4a));
    if (uVar2 == 0) {
      iVar3 = FUN_14006490(param_1,*(int *)((int)param_1 + 0x516),param_2 + 2,auStack_f4,
                           (uint *)(param_2 + 0x42e),*(int *)(param_2 + 0x406),param_2 + 0x4e,
                           param_2 + 0x40a);
    }
    else {
      iVar3 = FUN_14007880(param_1,*(int *)((int)param_1 + 0x516),(undefined4 *)(param_2 + 2),1,
                           *(undefined4 *)(param_2 + 0x92),(uint *)(param_2 + 0x42e),
                           *(int *)(param_2 + 0x406),&local_fd,param_2 + 0x40a);
      *(ushort *)(param_2 + 0x42c) = (ushort)(local_fd == '\0');
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,8,&local_fc);
  DAT_14028e48 = (*pcVar1)(local_fc,*(undefined4 *)(param_2 + 0x406));
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_f8);
  DAT_14028e48 = (*pcVar1)(iStack_f8,*(undefined4 *)((int)param_1 + 0x6a),param_2);
  FUN_14005e40((int)param_1,0);
  return 0;
}



/* ==== FUN_14007880 @ 14007880 ==== 
 * signature: int __cdecl FUN_14007880(int * param_1, int param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5, uint * param_6, int param_7, char * param_8, int param_9)
 * body: 14007880-14007d01
 */

int __cdecl
FUN_14007880(int *param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            uint *param_6,int param_7,char *param_8,int param_9)

{
  code *pcVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  int local_1b0;
  uint local_1ac;
  int iStack_1a8;
  uint uStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [4];
  char acStack_18c [64];
  int iStack_14c;
  undefined2 uStack_148;
  undefined1 auStack_144 [64];
  int iStack_104;
  undefined4 uStack_100;
  char cStack_fc;
  undefined4 uStack_fa;
  undefined4 auStack_f4 [12];
  undefined4 uStack_c2;
  char acStack_be [64];
  uint uStack_7e;
  undefined1 auStack_58 [88];
  
  local_1a0 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_1b0);
  DAT_14028e48 = (*pcVar1)(local_1b0,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                           &local_1ac);
  if ((local_1ac != 0) && (uVar5 = 1, local_1ac != 0)) {
    do {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_1b0);
      DAT_14028e48 = (*pcVar1)(local_1b0,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                               uVar5,auStack_f4);
      if (uStack_7e != 0) {
        if (acStack_be[0] == '\0') {
          FUN_14007260(uStack_7e,acStack_be);
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_1a8);
        DAT_14028e48 = (*pcVar1)(iStack_1a8,&iStack_19c,param_3 + 1,auStack_58);
        if (iStack_19c == 0) {
          puVar4 = &uStack_c2;
          puVar6 = param_3;
          for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          *param_8 = '\x01';
          iVar2 = FUN_14006490(param_1,param_2,(int)param_3,auStack_f4,param_6,param_7,
                               (int)(param_3 + 1),param_9);
          return iVar2;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= local_1ac);
  }
  iVar2 = FUN_1400d540(CONCAT31((int3)((uint)&iStack_104 >> 8),*(undefined1 *)(param_2 + 0x72)),
                       param_3 + 1,&uStack_100,&iStack_104);
  if (iVar2 != 0) {
    return 0x10000;
  }
  uStack_148 = *(undefined2 *)(param_3 + 0x12);
  uStack_194 = param_4;
  uStack_fa = param_5;
  iStack_14c = 0;
  acStack_18c[0] = '\0';
  cStack_fc = '\0';
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_1b0);
  DAT_14028e48 = (*pcVar1)(local_1b0,auStack_144,param_3 + 1);
  *param_6 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_1a8);
  DAT_14028e48 = (*pcVar1)(iStack_1a8,*(undefined4 *)(param_2 + 0x20),&uStack_194);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_198);
  DAT_14028e48 = (*pcVar1)(iStack_198,*(undefined4 *)(param_2 + 0x20),&local_1ac);
  iVar2 = FUN_1400d610();
  if (iVar2 == 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_1b0);
    uVar7 = (*pcVar1)(local_1b0,*(undefined4 *)(param_2 + 0x20),local_1ac,&uStack_194);
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    DAT_14028e48 = (undefined4)uVar7;
    *param_8 = cStack_fc;
    if (cStack_fc != '\0') {
      if ((iStack_14c == 0) && (acStack_18c[0] == '\0')) {
        *param_6 = 0;
      }
      else {
        iVar2 = FUN_14006490(param_1,param_2,(int)auStack_190,auStack_f4,&uStack_1a4,param_7,
                             (int)auStack_144,param_9);
        uVar3 = extraout_EDX_00;
        if (iVar2 == 0) {
          *param_6 = uStack_1a4;
        }
        else {
          local_1a0 = 0x10000;
        }
      }
      FUN_1400d5d0(CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)(param_2 + 0x72)),uStack_100);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&local_1b0);
      DAT_14028e48 = (*pcVar1)(local_1b0,*(undefined4 *)(param_2 + 0x20),local_1ac);
      *(short *)(param_2 + 0xe) = *(short *)(param_2 + 0xe) + -1;
      if ((uStack_1a4 != 0) && (*(int *)(param_7 + 2) != 0)) {
        FUN_14007300((int)param_1,*(int *)(param_7 + 2),0x89a,(int)acStack_18c);
      }
    }
    return local_1a0;
  }
  FUN_1400d5d0(CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)(param_2 + 0x72)),uStack_100)
  ;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&local_1b0);
  DAT_14028e48 = (*pcVar1)(local_1b0,*(undefined4 *)(param_2 + 0x20),local_1ac);
  return 0x10000;
}



/* ==== FUN_14007d10 @ 14007d10 ==== 
 * signature: undefined4 __cdecl FUN_14007d10(uint * param_1, char * param_2, undefined4 * param_3, int param_4)
 * body: 14007d10-14007e55
 */

undefined4 __cdecl FUN_14007d10(uint *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  int local_18;
  undefined4 local_14;
  int iStack_10;
  undefined1 auStack_c [6];
  int iStack_6;
  short sStack_2;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,0,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,0xc,&local_14);
  FUN_14015100(param_2,param_3,local_14);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,local_14,3,auStack_c);
  if (iStack_6 != 0) {
    *(undefined1 *)(sStack_2 + iStack_6) = 0;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&local_18);
    DAT_14028e48 = (*pcVar1)(local_18,&iStack_10,iStack_6,"mMsg/1.1");
    if (iStack_10 == 0) {
      FUN_14007e80(param_1,local_14,param_2,*param_3,param_4);
    }
    else {
      FUN_14008380(param_1,local_14,param_2,*param_3,param_4);
    }
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,local_14);
  return 0;
}



/* ==== FUN_14007e60 @ 14007e60 ==== 
 * signature: undefined4 __cdecl FUN_14007e60(int param_1)
 * body: 14007e60-14007e74
 */

undefined4 __cdecl FUN_14007e60(int param_1)

{
  FUN_1400d500(param_1 + 0x7e);
  return 0;
}



/* ==== FUN_14007e80 @ 14007e80 ==== 
 * signature: undefined4 __cdecl FUN_14007e80(uint * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * body: 14007e80-14008045
 */

undefined4 __cdecl
FUN_14007e80(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  int local_470;
  int iStack_46c;
  int iStack_468;
  undefined1 auStack_464 [4];
  int iStack_460;
  int iStack_45c;
  int iStack_458;
  uint local_454 [2];
  undefined4 uStack_44c;
  undefined1 auStack_42e [46];
  undefined1 local_400 [1024];
  
  local_400[0] = 0;
  iVar1 = FUN_140157b0((int)param_1,*param_1,param_2,local_454,local_400);
  if (iVar1 == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_470);
    DAT_14028e48 = (*pcVar2)(local_470,0xffffffff,param_1 + 0x138);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_46c);
    DAT_14028e48 = (*pcVar2)(iStack_46c,auStack_464,param_5 + 0x36);
    FUN_14008ed0(0,(undefined2 *)(param_1 + 0x138),param_5 + 0x36);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_468);
    DAT_14028e48 = (*pcVar2)(iStack_468,0xffffffff,(undefined2 *)((int)param_1 + 0x4f2));
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_460);
    DAT_14028e48 = (*pcVar2)(iStack_460,auStack_464,local_400);
    FUN_14008ed0(0,(undefined2 *)((int)param_1 + 0x4f2),(int)local_400);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_45c);
    DAT_14028e48 = (*pcVar2)(iStack_45c,uStack_44c,local_454);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_458);
    DAT_14028e48 = (*pcVar2)(iStack_458,param_1,auStack_42e);
  }
  return 0;
}



/* ==== FUN_14008050 @ 14008050 ==== 
 * signature: undefined4 __cdecl FUN_14008050(int param_1, short param_2, undefined1 * param_3, int param_4, char param_5)
 * body: 14008050-14008370
 */

undefined4 __cdecl
FUN_14008050(int param_1,short param_2,undefined1 *param_3,int param_4,char param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_16c;
  int iStack_168;
  int local_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined1 local_140 [256];
  undefined1 auStack_40 [64];
  
  FUN_14012660(param_2,local_140);
  if (param_4 == 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_164);
    DAT_14028e48 = (*pcVar1)(local_164,&local_16c,local_140);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&iStack_160);
    DAT_14028e48 = (*pcVar1)(iStack_160,local_16c + 1,&iStack_168);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x15,&iStack_15c);
    param_3 = local_140;
    iStack_148 = iStack_15c;
    iVar2 = iStack_168;
    iVar3 = local_16c;
  }
  else {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_164);
    DAT_14028e48 = (*pcVar1)(local_164,local_140,s_Content_Type__text_plain_1402639c);
    FUN_14008990(auStack_40,&DAT_14026398);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_160);
    DAT_14028e48 = (*pcVar1)(iStack_160,local_140,s_Content_Length__14026384);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_15c);
    DAT_14028e48 = (*pcVar1)(iStack_15c,local_140,auStack_40);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_158);
    DAT_14028e48 = (*pcVar1)(iStack_158,local_140,&DAT_1402637c);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_154);
    DAT_14028e48 = (*pcVar1)(iStack_154,&local_16c,local_140);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&iStack_150);
    DAT_14028e48 = (*pcVar1)(iStack_150,local_16c + param_4 + 1,&iStack_168);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x15,&iStack_14c);
    DAT_14028e48 = (*pcVar1)(iStack_14c,iStack_168,local_140,local_16c);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x15,&iStack_148);
    iVar2 = iStack_168 + local_16c;
    iVar3 = param_4;
  }
  DAT_14028e48 = (*pcVar1)(iStack_148,iVar2,param_3,iVar3);
  FUN_1400d4d0(param_1 + 0x7e,iStack_168,local_16c + param_4,&uStack_144);
  if (param_5 != '\0') {
    FUN_14007e60(param_1);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_164);
  DAT_14028e48 = (*pcVar1)(local_164,iStack_168);
  return 0;
}



/* ==== FUN_14008380 @ 14008380 ==== 
 * signature: undefined4 __cdecl FUN_14008380(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5)
 * body: 14008380-1400879a
 */

undefined4 __cdecl
FUN_14008380(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iStack_154;
  undefined1 uStack_150;
  int iStack_14c;
  undefined1 *puStack_148;
  undefined1 local_144 [6];
  char *pcStack_13e;
  short sStack_13a;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  short sStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined4 uStack_126;
  int iStack_122;
  int *piStack_11e;
  int local_100 [64];
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,local_100);
  DAT_14028e48 = (*pcVar1)(local_100[0],param_2,1,local_144);
  if (pcStack_13e != (char *)0x0) {
    pcStack_13e[sStack_13a] = '\0';
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,local_100);
    DAT_14028e48 = (*pcVar1)(local_100[0],&iStack_130,pcStack_13e,&DAT_140263d8);
    if (iStack_130 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,local_100);
      DAT_14028e48 = (*pcVar1)(local_100[0],param_2,2,local_144);
      if (pcStack_13e != (char *)0x0) {
        iStack_134 = 0;
        pcStack_13e[sStack_13a] = '\0';
        uVar2 = FUN_14015050(&puStack_148,pcStack_13e,0x140263d4,0);
        if ((char)uVar2 == '\0') {
          puStack_148 = (undefined1 *)0x0;
        }
        else {
          *puStack_148 = 0;
          puStack_148 = puStack_148 + 1;
        }
        piVar3 = (int *)(pcStack_13e + 2);
        if (pcStack_13e[1] != '?') {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_154);
          DAT_14028e48 = (*pcVar1)(iStack_154,local_100,s_File____140263cc);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_14c);
          DAT_14028e48 = (*pcVar1)(iStack_14c,local_100,pcStack_13e + 1);
          piVar3 = local_100;
        }
        if (puStack_148 == (undefined1 *)0x0) {
          sStack_12c = 0x66;
          uStack_12a = 0xffff;
          uStack_128 = 0xffff;
          uStack_126 = 0;
          iStack_122 = 0;
          piStack_11e = (int *)0x0;
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x54),1,2,&iStack_154);
          DAT_14028e48 = (*pcVar1)(iStack_154,*param_1,piVar3,&sStack_12c);
          piVar3 = (int *)0x0;
          if ((sStack_12c == 0x66) && (piStack_11e != (int *)0x0)) {
            iStack_134 = iStack_122;
            piVar3 = piStack_11e;
          }
        }
        else {
          sStack_12c = 0;
          iStack_154 = DAT_140263c4;
          uStack_150 = DAT_140263c8;
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&iStack_14c);
          DAT_14028e48 = (*pcVar1)(iStack_14c,&sStack_12c,puStack_148);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x54),1,3,&iStack_138);
          DAT_14028e48 = (*pcVar1)(iStack_138,*param_1,piVar3,&sStack_12c);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_14c);
          DAT_14028e48 = (*pcVar1)(iStack_14c,param_1,&sStack_12c);
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_138);
          DAT_14028e48 = (*pcVar1)(iStack_138,&iStack_134,&iStack_154);
          piVar3 = &iStack_154;
        }
        if (param_5 != 0) {
          iVar4 = iStack_134;
          if (piVar3 == (int *)0x0) {
            piVar3 = (int *)0x0;
            iVar4 = 0;
          }
          FUN_14008050(param_5,200,(undefined1 *)piVar3,iVar4,'\x01');
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_154);
        DAT_14028e48 = (*pcVar1)(iStack_154,param_1,&sStack_12c);
      }
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,local_100);
    DAT_14028e48 = (*pcVar1)(local_100[0],&iStack_130,pcStack_13e,&DAT_140263c0);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,(int *)&sStack_12c);
    DAT_14028e48 = (*pcVar1)(CONCAT22(uStack_12a,sStack_12c),&iStack_130,pcStack_13e,&DAT_140263b8);
  }
  return 0;
}



/* ==== FUN_140087a0 @ 140087a0 ==== 
 * signature: undefined4 __cdecl FUN_140087a0(int param_1)
 * body: 140087a0-140088ae
 */

undefined4 __cdecl FUN_140087a0(int param_1)

{
  code *pcVar1;
  int local_100;
  uint local_fc;
  int iStack_f8;
  undefined1 auStack_f4 [4];
  undefined1 uStack_f0;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_100);
  DAT_14028e48 = (*pcVar1)(local_100,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),&local_fc);
  if (1 < local_fc) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_100);
    DAT_14028e48 = (*pcVar1)(local_100,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),2,
                             auStack_f4);
    FUN_14007e60((int)auStack_f4);
    uStack_f0 = 0;
    FUN_140074e0(param_1,(int)auStack_f4);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,&iStack_f8);
    DAT_14028e48 = (*pcVar1)(iStack_f8,*(undefined4 *)(*(int *)(param_1 + 0x516) + 0x1c),2,
                             auStack_f4);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_140088b0 @ 140088b0 ==== 
 * signature: undefined __cdecl FUN_140088b0(int param_1, int param_2)
 * body: 140088b0-140088eb
 */

void __cdecl FUN_140088b0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = 0;
  do {
    if (bVar2) {
      *(undefined1 *)(param_1 + iVar1) = 0;
    }
    else {
      *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
      bVar2 = ((undefined1 *)(param_2 + iVar1))[1] == '\0';
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}



/* ==== FUN_140088f0 @ 140088f0 ==== 
 * signature: undefined __cdecl FUN_140088f0(undefined4 * param_1, undefined4 * param_2)
 * body: 140088f0-1400890e
 */

void __cdecl FUN_140088f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



/* ==== FUN_14008910 @ 14008910 ==== 
 * signature: uint __cdecl FUN_14008910(uint * param_1, uint * param_2)
 * body: 14008910-1400893b
 */

uint __cdecl FUN_14008910(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((((*param_2 == uVar1) && (uVar1 = param_1[1], param_2[1] == uVar1)) &&
      (uVar1 = param_1[2], param_2[2] == uVar1)) && (uVar1 = param_1[3], param_2[3] == uVar1)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



/* ==== FUN_14008940 @ 14008940 ==== 
 * signature: undefined4 __cdecl FUN_14008940(int param_1, int param_2)
 * body: 14008940-1400898c
 */

undefined4 __cdecl FUN_14008940(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    cVar1 = *(char *)(param_1 + iVar3);
    if (('@' < cVar1) && (cVar1 < '[')) {
      cVar1 = cVar1 + ' ';
    }
    cVar2 = *(char *)(param_2 + iVar3);
    if (('@' < cVar2) && (cVar2 < '[')) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 < cVar2) {
      return 0xffffffff;
    }
    if (cVar2 < cVar1) {
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return 0;
}



/* ==== __break @ 1400898d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400898d-1400898d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400898e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400898e-1400898e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400898f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400898f-1400898f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14008990 @ 14008990 ==== 
 * signature: undefined __cdecl FUN_14008990(undefined4 param_1, undefined4 param_2)
 * body: 14008990-140089d6
 */

void __cdecl FUN_14008990(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1c,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_1,param_2,&stack0x0000000c);
  return;
}



/* ==== FUN_140089e0 @ 140089e0 ==== 
 * signature: undefined4 __cdecl FUN_140089e0(short param_1, int param_2, short param_3)
 * body: 140089e0-14008a02
 */

undefined4 __cdecl FUN_140089e0(short param_1,int param_2,short param_3)

{
  DAT_140263e0 = 0xffff;
  return *(undefined4 *)(*(int *)(**(int **)(param_2 + -4) + param_1 * 4) + param_3 * 8);
}



/* ==== __break @ 14008a03 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a03-14008a03
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a04 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a04-14008a04
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a05 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a05-14008a05
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a06 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a06-14008a06
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a07 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a07-14008a07
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a08 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a08-14008a08
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a09 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a09-14008a09
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a0a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a0a-14008a0a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a0b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a0b-14008a0b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a0c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a0c-14008a0c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a0d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a0d-14008a0d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a0e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a0e-14008a0e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a0f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a0f-14008a0f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14008a10 @ 14008a10 ==== 
 * signature: undefined4 __cdecl FUN_14008a10(undefined4 * param_1, short param_2)
 * body: 14008a10-14008a20
 */

undefined4 __cdecl FUN_14008a10(undefined4 *param_1,short param_2)

{
  return *(undefined4 *)(*(int *)*param_1 + param_2 * 8);
}



/* ==== __break @ 14008a21 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a21-14008a21
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a22 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a22-14008a22
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a23 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a23-14008a23
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a24 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a24-14008a24
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a25 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a25-14008a25
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a26 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a26-14008a26
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a27 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a27-14008a27
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a28 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a28-14008a28
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a29 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a29-14008a29
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a2a-14008a2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a2b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a2b-14008a2b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a2c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a2c-14008a2c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a2d-14008a2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a2e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a2e-14008a2e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a2f-14008a2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14008a30 @ 14008a30 ==== 
 * signature: int __cdecl FUN_14008a30(short param_1, int param_2, short param_3)
 * body: 14008a30-14008a78
 */

int __cdecl FUN_14008a30(short param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + -8);
  if (DAT_140263e0 == -1) {
    iVar2 = *(int *)(iVar1 + 0x14);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(param_2 + -4) + 4) + DAT_140263e0 * 4) + iVar1;
  }
  return *(int *)((*(int **)(iVar2 + -4))[1] +
                 *(int *)(*(int *)(**(int **)(iVar2 + -4) + param_1 * 4) + 4 + param_3 * 8) * 4) +
         iVar1;
}



/* ==== __break @ 14008a79 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a79-14008a79
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a7a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a7a-14008a7a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a7b-14008a7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a7c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a7c-14008a7c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a7d-14008a7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a7e-14008a7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008a7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a7f-14008a7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14008a80 @ 14008a80 ==== 
 * signature: undefined4 __cdecl FUN_14008a80(int param_1)
 * body: 14008a80-14008a8a
 */

undefined4 __cdecl FUN_14008a80(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + -8) + 8);
}



/* ==== FUN_14008a90 @ 14008a90 ==== 
 * signature: int __cdecl FUN_14008a90(short param_1, int param_2)
 * body: 14008a90-14008aaa
 */

int __cdecl FUN_14008a90(short param_1,int param_2)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + -8) + 0x14) + -4) + 4) + param_1 * 4
                 ) + *(int *)(param_2 + -8);
}



/* ==== __break @ 14008aab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008aab-14008aab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008aac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008aac-14008aac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008aad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008aad-14008aad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008aae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008aae-14008aae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14008aaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008aaf-14008aaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14008ab0 @ 14008ab0 ==== 
 * signature: undefined4 __cdecl FUN_14008ab0(int param_1, int param_2, int param_3, int * param_4)
 * body: 14008ab0-14008b12
 */

undefined4 __cdecl FUN_14008ab0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + -8);
  if (DAT_140263e0 == -1) {
    iVar2 = *(int *)(iVar1 + 0x14);
  }
  else {
    iVar2 = (int)DAT_140263e0;
    DAT_140263e0 = -1;
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + -4) + 4) + iVar2 * 4) + iVar1;
  }
  iVar1 = *(int *)((*(int **)(iVar2 + -4))[1] +
                  *(int *)(*(int *)(**(int **)(iVar2 + -4) + param_2 * 4) + 4 + param_3 * 8) * 4) +
          iVar1;
  *param_4 = iVar1;
  return *(undefined4 *)(*(int *)(**(int **)(iVar1 + -4) + param_2 * 4) + param_3 * 8);
}



/* ==== FUN_14008b20 @ 14008b20 ==== 
 * signature: undefined __cdecl FUN_14008b20(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 14008b20-14008d0d
 */

void __cdecl FUN_14008b20(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_c;
  undefined4 local_8;
  int iStack_4;
  
  if (*(int *)(param_3 + 0xe) != 0) {
    if (0 < *(int *)(param_3 + 10)) {
      *param_2 = 0x66;
      iVar3 = *(int *)(param_3 + 10);
      if ((*(int *)(param_2 + 7) != 0) && (*(int *)(param_2 + 3) != 0)) {
        iVar2 = *(int *)(param_2 + 3) + -1;
        if (iVar3 <= iVar2) {
          iVar2 = iVar3;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_3 + 0xe)
                                 ,iVar2);
        *(int *)(param_2 + 5) = iVar2;
        *(undefined1 *)(*(int *)(param_2 + 7) + iVar2) = 0;
        return;
      }
      local_8 = 0;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      *param_2 = 0x66;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 7) = 0;
      if (0 < iVar3) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,param_2 + 7,iVar3);
        if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
          *(int *)(param_2 + 3) = iVar3;
          **(undefined1 **)(param_2 + 7) = 0;
        }
      }
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
      DAT_14028e48 = (*pcVar1)(local_c,*(undefined4 *)(param_2 + 7),*(undefined4 *)(param_3 + 0xe));
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,&local_8,*(undefined4 *)(param_2 + 7));
      *(undefined4 *)(param_2 + 5) = local_8;
      return;
    }
    if ((*(int *)(param_3 + 0xe) != 0) && (*(int *)(param_2 + 7) == 0)) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_c);
      DAT_14028e48 = (*pcVar1)(local_c,param_2 + 7,1);
      *(undefined4 *)(param_2 + 3) = 1;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
  }
  *(undefined4 *)(param_2 + 5) = 0;
  if (*(undefined1 **)(param_2 + 7) != (undefined1 *)0x0) {
    **(undefined1 **)(param_2 + 7) = 0;
  }
  return;
}



/* ==== FUN_14008d10 @ 14008d10 ==== 
 * signature: undefined __cdecl FUN_14008d10(undefined2 * param_1, undefined2 * param_2)
 * body: 14008d10-14008d70
 */

void __cdecl FUN_14008d10(undefined2 *param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_14008dc0((int)param_1);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  puVar1 = *(undefined4 **)(param_1 + 7);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(undefined4 **)(param_2 + 7) != (undefined4 *)0x0) {
      iVar2 = 0;
      *puVar1 = **(undefined4 **)(param_2 + 7);
      do {
        iVar2 = iVar2 + 4;
        *(undefined4 *)(*(int *)(param_1 + 7) + iVar2) =
             *(undefined4 *)(*(int *)(param_2 + 7) + iVar2);
      } while (iVar2 < 0x20);
      return;
    }
    iVar2 = 0;
    *puVar1 = 0;
    do {
      iVar2 = iVar2 + 4;
      *(undefined4 *)(*(int *)(param_1 + 7) + iVar2) = 0;
    } while (iVar2 < 0x20);
  }
  return;
}



/* ==== FUN_14008d80 @ 14008d80 ==== 
 * signature: undefined __cdecl FUN_14008d80(int param_1)
 * body: 14008d80-14008db8
 */

void __cdecl FUN_14008d80(int param_1)

{
  if (*(int *)(param_1 + 2) != 0) {
    if (*(int *)(param_1 + 6) == 0) {
      if (*(int *)(param_1 + 10) == 0) goto LAB_14008db0;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
    }
    if (*(int *)(param_1 + 10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
    }
  }
LAB_14008db0:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



/* ==== FUN_14008dc0 @ 14008dc0 ==== 
 * signature: undefined __cdecl FUN_14008dc0(int param_1)
 * body: 14008dc0-14008dfe
 */

void __cdecl FUN_14008dc0(int param_1)

{
  if (*(int *)(param_1 + 6) == 0) {
    if (*(int *)(param_1 + 10) == 0) goto LAB_14008df0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 6) + 8) = *(undefined4 *)(param_1 + 10);
  }
  if (*(int *)(param_1 + 10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 10) + 4) = *(undefined4 *)(param_1 + 6);
  }
LAB_14008df0:
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



/* ==== FUN_14008e00 @ 14008e00 ==== 
 * signature: undefined __cdecl FUN_14008e00(int param_1, undefined4 * param_2, undefined2 param_3, short param_4)
 * body: 14008e00-14008e36
 */

void __cdecl FUN_14008e00(int param_1,undefined4 *param_2,undefined2 param_3,short param_4)

{
  if (*(short *)(param_1 + 0x22) <= param_4) {
    FUN_140088f0((undefined4 *)(param_1 + 0x11),param_2);
    *(undefined2 *)(param_1 + 0xa8) = param_3;
    *(short *)(param_1 + 0x22) = param_4 + 1;
  }
  return;
}



/* ==== FUN_14008e40 @ 14008e40 ==== 
 * signature: undefined __cdecl FUN_14008e40(int param_1, short param_2, short param_3, short param_4, undefined4 param_5)
 * body: 14008e40-14008e6f
 */

void __cdecl FUN_14008e40(int param_1,short param_2,short param_3,short param_4,undefined4 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x24 + param_3 * 4);
  *(undefined4 *)(*piVar1 + param_4 * 8) = param_5;
  *(int *)(*piVar1 + 4 + param_4 * 8) = (int)param_2;
  return;
}



/* ==== FUN_14008e70 @ 14008e70 ==== 
 * signature: undefined __cdecl FUN_14008e70(int param_1)
 * body: 14008e70-14008e8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_14008e70(int param_1)

{
  _DAT_14028e40 = *(undefined4 *)(param_1 + 0xb4);
  DAT_14028e44 = *(undefined4 *)(param_1 + 0xb8);
  return;
}



/* ==== FUN_14008e90 @ 14008e90 ==== 
 * signature: undefined4 __stdcall FUN_14008e90(undefined4 param_1, int param_2)
 * body: 14008e90-14008ec3
 */

undefined4 FUN_14008e90(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_14018710();
    return 1;
  }
  if (param_2 != 1) {
    return 1;
  }
  FUN_140183c0((int *)0x0);
  return 1;
}



/* ==== FUN_14008ed0 @ 14008ed0 ==== 
 * signature: undefined __cdecl FUN_14008ed0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 14008ed0-14008fd7
 */

void __cdecl FUN_14008ed0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int local_8;
  int local_4;
  
  if (param_3 != 0) {
    *param_2 = 0x66;
    local_4 = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,&local_4,param_3);
    *(int *)(param_2 + 5) = local_4;
    if (local_4 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_8);
      DAT_14028e48 = (*pcVar1)(local_8,param_2 + 7,1);
      **(undefined1 **)(param_2 + 7) = 0;
    }
    else {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xf,&local_8);
      DAT_14028e48 = (*pcVar1)(local_8,param_2 + 7,param_3);
    }
    *(int *)(param_2 + 3) = *(int *)(param_2 + 5) + 1;
    return;
  }
  *param_2 = 0x66;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}



/* ==== FUN_14008fe0 @ 14008fe0 ==== 
 * signature: undefined __cdecl FUN_14008fe0(short * param_1, int param_2)
 * body: 14008fe0-140090b9
 */

void __cdecl FUN_14008fe0(short *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  if ((*(short *)(param_2 + 2) != param_1[1]) || (*param_1 != 0x6d)) {
    piVar1 = (int *)(param_1 + 2);
    if ((*piVar1 != 0) && (*param_1 == 0x6d)) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_4);
      DAT_14028e48 = (*pcVar2)(local_4,*piVar1);
      *piVar1 = 0;
    }
    *param_1 = 0x6d;
    param_1[1] = *(short *)(param_2 + 2);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,(int)*(short *)(param_2 + 2) << 2,piVar1);
  }
  iVar4 = 0;
  if (0 < *(short *)(param_2 + 2)) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 2) + iVar3) =
           *(undefined4 *)(*(int *)(param_2 + 4) + iVar3);
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(short *)(param_2 + 2));
  }
  return;
}



/* ==== FUN_140090c0 @ 140090c0 ==== 
 * signature: undefined __cdecl FUN_140090c0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 140090c0-140091aa
 */

void __cdecl FUN_140090c0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  *param_2 = 0x65;
  if ((*(int *)(param_3 + 0xe) == 0) || (iVar3 = *(int *)(param_3 + 10), iVar3 == 0)) {
    *(undefined4 *)(param_2 + 5) = 0;
  }
  else {
    piVar1 = (int *)(param_2 + 7);
    if ((*piVar1 != 0) && (iVar4 = *(int *)(param_2 + 3), iVar4 != 0)) {
      if (iVar4 <= iVar3) {
        iVar3 = iVar4;
      }
      iVar4 = 0;
      if (0 < iVar3) {
        do {
          iVar4 = iVar4 + 1;
          *(undefined1 *)(*piVar1 + -1 + iVar4) =
               *(undefined1 *)(*(int *)(param_3 + 0xe) + -1 + iVar4);
        } while (iVar4 < iVar3);
      }
      *(int *)(param_2 + 5) = iVar3;
      return;
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,*(undefined4 *)(param_3 + 10),piVar1);
    if (*piVar1 != 0) {
      iVar4 = 0;
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 10);
      iVar3 = *(int *)(param_3 + 10);
      *(int *)(param_2 + 5) = iVar3;
      if (0 < iVar3) {
        do {
          *(undefined1 *)(*piVar1 + iVar4) = *(undefined1 *)(*(int *)(param_3 + 0xe) + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_2 + 5));
        return;
      }
    }
  }
  return;
}



/* ==== FUN_140091b0 @ 140091b0 ==== 
 * signature: undefined4 __cdecl FUN_140091b0(short * param_1, short * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
 * body: 140091b0-14009286
 */

undefined4 __cdecl
FUN_140091b0(short *param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  short sVar1;
  uint uVar2;
  
  if (((param_2 != (short *)0x0) && (*param_2 == 1)) &&
     ((sVar1 = *param_1, sVar1 == 0x17 || (sVar1 == 0x6a)))) {
    if (sVar1 == 0x6a) {
      *param_1 = 0x17;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    if ((*(uint *)(param_2 + 1) & 0xffffff) == 1) {
      uVar2 = *(uint *)(param_2 + 1) & 0xff000000;
      if (uVar2 == 0x20000000) {
        if (param_5 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_5;
          *(undefined4 *)(param_1 + 2) = param_5[1];
          param_1[4] = *(short *)(param_5 + 2);
          return 0;
        }
      }
      else if (uVar2 == 0x40000000) {
        if (param_4 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_4;
          *(undefined4 *)(param_1 + 2) = param_4[1];
          param_1[4] = *(short *)(param_4 + 2);
          return 0;
        }
      }
      else {
        if (uVar2 != 0x80000000) {
          return 0x10000;
        }
        if (param_3 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_3;
          *(undefined4 *)(param_1 + 2) = param_3[1];
          param_1[4] = *(short *)(param_3 + 2);
          return 0;
        }
      }
    }
  }
  return 0x10000;
}



/* ==== FUN_14009290 @ 14009290 ==== 
 * signature: undefined4 __stdcall FUN_14009290(void)
 * body: 14009290-14009589
 */

undefined4 FUN_14009290(void)

{
  int iVar1;
  undefined1 local_190 [382];
  ushort uStack_12;
  uint *puStack_4;
  
  DAT_140263fc = LoadLibraryA(s_Wsock32_DLL_14026540);
  if (DAT_140263fc == (HMODULE)0x0) {
    return 0;
  }
  DAT_14026400 = GetProcAddress(DAT_140263fc,s_WSAStartup_14026534);
  DAT_14026404 = GetProcAddress(DAT_140263fc,s_WSACleanup_14026528);
  DAT_14026408 = GetProcAddress(DAT_140263fc,s_WSAAsyncSelect_14026518);
  DAT_1402640c = GetProcAddress(DAT_140263fc,s_WSAAsyncGetHostByName_14026500);
  DAT_14026410 = GetProcAddress(DAT_140263fc,s_WSAGetLastError_140264f0);
  DAT_14026414 = GetProcAddress(DAT_140263fc,s_listen_140264e8);
  DAT_14026418 = GetProcAddress(DAT_140263fc,&DAT_140264e0);
  DAT_1402641c = GetProcAddress(DAT_140263fc,s_socket_140264d8);
  DAT_14026420 = GetProcAddress(DAT_140263fc,s_closesocket_140264cc);
  DAT_14026424 = GetProcAddress(DAT_140263fc,s_connect_140264c4);
  DAT_14026428 = GetProcAddress(DAT_140263fc,s_accept_140264bc);
  DAT_1402642c = GetProcAddress(DAT_140263fc,&DAT_140264b4);
  DAT_14026430 = GetProcAddress(DAT_140263fc,&DAT_140264ac);
  DAT_14026434 = GetProcAddress(DAT_140263fc,s_getsockname_140264a0);
  DAT_14026438 = GetProcAddress(DAT_140263fc,s_gethostname_14026494);
  DAT_1402643c = GetProcAddress(DAT_140263fc,s_gethostbyname_14026484);
  DAT_14026440 = GetProcAddress(DAT_140263fc,s_ntohs_1402647c);
  DAT_14026444 = GetProcAddress(DAT_140263fc,s_htonl_14026474);
  DAT_14026448 = GetProcAddress(DAT_140263fc,s_htons_1402646c);
  DAT_1402644c = GetProcAddress(DAT_140263fc,s_inet_addr_14026460);
  DAT_14026450 = GetProcAddress(DAT_140263fc,s_inet_ntoa_14026454);
  if (((((((DAT_14026400 != (FARPROC)0x0) && (DAT_14026404 != (FARPROC)0x0)) &&
         (DAT_14026408 != (FARPROC)0x0)) &&
        (((DAT_1402640c != (FARPROC)0x0 && (DAT_14026410 != (FARPROC)0x0)) &&
         ((DAT_14026414 != (FARPROC)0x0 &&
          ((DAT_14026418 != (FARPROC)0x0 && (DAT_1402641c != (FARPROC)0x0)))))))) &&
       ((DAT_14026420 != (FARPROC)0x0 &&
        (((DAT_14026424 != (FARPROC)0x0 && (DAT_14026428 != (FARPROC)0x0)) &&
         (DAT_1402642c != (FARPROC)0x0)))))) &&
      (((DAT_14026430 != (FARPROC)0x0 && (DAT_14026434 != (FARPROC)0x0)) &&
       (((DAT_14026438 != (FARPROC)0x0 &&
         ((DAT_1402643c != (FARPROC)0x0 && (DAT_14026440 != (FARPROC)0x0)))) &&
        (DAT_14026444 != (FARPROC)0x0)))))) &&
     (((DAT_14026448 != (FARPROC)0x0 && (DAT_1402644c != (FARPROC)0x0)) &&
      (DAT_14026450 != (FARPROC)0x0)))) {
    iVar1 = (*DAT_14026400)(0x101,local_190);
    if (iVar1 != 0) {
      FreeLibrary(DAT_140263fc);
      return 0;
    }
    if (puStack_4 != (uint *)0x0) {
      *puStack_4 = (uint)uStack_12;
    }
    return 1;
  }
  FreeLibrary(DAT_140263fc);
  return 0;
}



/* ==== FUN_14009590 @ 14009590 ==== 
 * signature: undefined __stdcall FUN_14009590(void)
 * body: 14009590-140095ab
 */

void FUN_14009590(void)

{
  if (DAT_14026404 != (code *)0x0) {
    (*DAT_14026404)();
  }
  if (DAT_140263fc != (HMODULE)0x0) {
    FreeLibrary(DAT_140263fc);
  }
  return;
}



/* ==== FUN_140095b0 @ 140095b0 ==== 
 * signature: undefined4 __cdecl FUN_140095b0(undefined4 * param_1, WNDPROC param_2, LONG param_3, LPCSTR param_4, HINSTANCE param_5)
 * body: 140095b0-1400964f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_140095b0(undefined4 *param_1,WNDPROC param_2,LONG param_3,LPCSTR param_4,HINSTANCE param_5)

{
  HWND hWnd;
  WNDCLASSA local_28;
  
  local_28.lpfnWndProc = param_2;
  local_28.style = 0;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 0;
  local_28.hIcon = (HICON)0x0;
  local_28.hInstance = param_5;
  local_28.hCursor = (HCURSOR)0x0;
  local_28.hbrBackground = (HBRUSH)0x0;
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.lpszClassName = param_4;
  RegisterClassA(&local_28);
  hWnd = CreateWindowExA(0,param_4,s_Windows_Sockets_Window_1402654c,0x80000000,0,0,10,10,(HWND)0x0,
                         (HMENU)0x0,param_5,(LPVOID)0x0);
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  *param_1 = hWnd;
  _DAT_14028e4c = GetWindowLongA(hWnd,-0x15);
  SetWindowLongA(hWnd,-0x15,param_3);
  return 1;
}



/* ==== FUN_14009650 @ 14009650 ==== 
 * signature: undefined __cdecl FUN_14009650(HWND param_1)
 * body: 14009650-1400965b
 */

void __cdecl FUN_14009650(HWND param_1)

{
  DestroyWindow(param_1);
  return;
}



/* ==== FUN_14009660 @ 14009660 ==== 
 * signature: undefined4 __stdcall FUN_14009660(void)
 * body: 14009660-1400971a
 */

undefined4 FUN_14009660(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_1c [2];
  undefined4 uStack_1a;
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_30 = 0;
  uStack_34 = 1;
  iVar2 = (*DAT_1402641c)(2);
  *(int *)(iStack_8 + 2) = iVar2;
  if (iVar2 != -1) {
    uVar1 = (*DAT_14026448)(uStack_4);
    uStack_30 = CONCAT22(uVar1,(undefined2)uStack_30);
    uStack_30 = (*DAT_14026444)(0);
    iVar3 = (*DAT_14026418)(iVar2,&uStack_34,0x10);
    if (iVar3 != -1) {
      iVar3 = (*DAT_14026434)(iVar2,auStack_1c,&uStack_30);
      if (iVar3 != -1) {
        (*DAT_14026440)(uStack_1a);
        iVar3 = (*DAT_14026408)(iVar2,*(undefined4 *)(iStack_8 + 10),0x400,0x2b);
        if (iVar3 != -1) {
          iVar2 = (*DAT_14026414)(iVar2,5);
          if (iVar2 != -1) {
            return 0;
          }
        }
      }
    }
  }
  uVar4 = (*DAT_14026410)();
  return uVar4;
}



/* ==== FUN_14009720 @ 14009720 ==== 
 * signature: int __stdcall FUN_14009720(void)
 * body: 14009720-140097c6
 */

int FUN_14009720(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_8;
  int iStack_4;
  
  uVar5 = 1;
  uVar4 = 2;
  iVar1 = (*DAT_1402641c)(2,1,0);
  *(int *)(iStack_8 + 2) = iVar1;
  if (iVar1 != -1) {
    (*DAT_14026448)(*(undefined2 *)(iStack_4 + 0x48));
    uVar2 = (*DAT_1402644c)(iStack_4 + 4);
    iVar3 = (*DAT_14026408)(iVar1,*(undefined4 *)(iStack_8 + 0xe),0x400,0x33);
    if (iVar3 != -1) {
      iVar3 = (*DAT_14026424)(iVar1,&stack0xffffffe4,0x10,uVar4,uVar5,uVar2);
      if (iVar3 != -1) {
        return 0;
      }
    }
  }
  iVar3 = (*DAT_14026410)();
  if ((iVar3 != 0x2733) && (iVar1 != -1)) {
    (*DAT_14026420)(iVar1);
    *(undefined4 *)(iStack_8 + 2) = 0;
  }
  return iVar3;
}



/* ==== FUN_140097d0 @ 140097d0 ==== 
 * signature: undefined4 __cdecl FUN_140097d0(int param_1)
 * body: 140097d0-140097f6
 */

undefined4 __cdecl FUN_140097d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_14026420)(*(undefined4 *)(param_1 + 2));
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 2) = 0;
    return 0;
  }
  uVar2 = (*DAT_14026410)();
  return uVar2;
}



/* ==== FUN_14009800 @ 14009800 ==== 
 * signature: uint __cdecl FUN_14009800(int param_1, char * param_2)
 * body: 14009800-140098b3
 */

uint __cdecl FUN_14009800(int param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_18;
  undefined4 uStack_12;
  undefined4 uStack_c;
  
  local_18 = 0x10;
  if (param_1 != 0) {
    uVar3 = (*DAT_14026428)(param_2,(int)&uStack_12 + 2,&local_18);
    *(undefined4 *)(param_1 + 2) = uVar3;
  }
  if (*(int *)(param_1 + 2) == -1) {
    uVar4 = (*DAT_14026410)();
    return (uVar4 == 0x2733) - 1 & uVar4;
  }
  pcVar5 = (char *)(*DAT_14026450)(uStack_c);
  uVar4 = 0xffffffff;
  pcVar8 = pcVar5;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar5;
  pcVar8 = param_2;
  for (uVar6 = ~uVar4 - 1 >> 2; pcVar8 = pcVar8 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = ~uVar4 - 1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  param_2[~uVar4 + 3] = '\0';
  uVar2 = (*DAT_14026440)(uStack_12);
  *(undefined2 *)(param_2 + 0x48) = uVar2;
  return 0;
}



/* ==== FUN_140098c0 @ 140098c0 ==== 
 * signature: undefined4 __cdecl FUN_140098c0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 140098c0-140098f3
 */

undefined4 __cdecl FUN_140098c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_retaddr;
  
  iVar1 = (*DAT_1402642c)(*(undefined4 *)(param_1 + 2),param_2,param_3,0);
  *unaff_retaddr = iVar1;
  if (iVar1 != -1) {
    return 0;
  }
  *unaff_retaddr = 0;
                    /* WARNING: Could not recover jumptable at 0x140098ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_14026410)();
  return uVar2;
}



/* ==== FUN_14009900 @ 14009900 ==== 
 * signature: undefined4 __cdecl FUN_14009900(undefined1 * param_1, undefined4 param_2, int param_3)
 * body: 14009900-14009942
 */

undefined4 __cdecl FUN_14009900(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_retaddr;
  
  iVar1 = (*DAT_14026430)(*(undefined4 *)(param_1 + 2),param_2,param_3,0);
  *unaff_retaddr = iVar1;
  if (iVar1 != -1) {
    if (param_3 <= iVar1) {
      *param_1 = 1;
    }
    return 0;
  }
  *unaff_retaddr = 0;
  uVar2 = (*DAT_14026410)();
  return uVar2;
}



/* ==== FUN_14009950 @ 14009950 ==== 
 * signature: undefined4 __stdcall FUN_14009950(void)
 * body: 14009950-140099da
 */

undefined4 FUN_14009950(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_64 [88];
  char *pcStack_c;
  
  (*DAT_14026438)(local_64,100);
  iVar2 = (*DAT_1402643c)(&stack0xffffff94);
  if (iVar2 == 0) {
    uVar3 = (*DAT_14026410)();
    return uVar3;
  }
  pcVar4 = (char *)(*DAT_14026450)(*(undefined4 *)**(undefined4 **)(iVar2 + 0xc));
  uVar5 = 0xffffffff;
  pcVar8 = pcVar4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar4;
  pcVar8 = pcStack_c;
  for (uVar6 = ~uVar5 - 1 >> 2; pcVar8 = pcVar8 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = ~uVar5 - 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = pcVar4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcStack_c[~uVar5 + 3] = '\0';
  uVar3 = (*DAT_1402644c)(pcVar4);
  *(undefined4 *)(pcStack_c + 0x44) = uVar3;
  return 0;
}



/* ==== FUN_140099e0 @ 140099e0 ==== 
 * signature: uint __cdecl FUN_140099e0(undefined4 param_1)
 * body: 140099e0-14009a30
 */

uint __cdecl FUN_140099e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  local_14 = 0x10;
  iVar1 = (*DAT_14026428)(param_1,local_10,&local_14);
  if (iVar1 == -1) {
    uVar2 = (*DAT_14026410)();
    return (uVar2 == 0x2733) - 1 & uVar2;
  }
  (*DAT_14026420)(iVar1);
  return 0;
}



/* ==== FUN_14009a40 @ 14009a40 ==== 
 * signature: undefined __cdecl FUN_14009a40(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 14009a40-14009a5f
 */

void __cdecl
FUN_14009a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  (*DAT_1402640c)(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ==== FUN_14009a60 @ 14009a60 ==== 
 * signature: undefined __stdcall FUN_14009a60(void)
 * body: 14009a60-14009a60
 */

void FUN_14009a60(void)

{
  return;
}



/* ==== PreFetchUrl @ 14009a70 ==== 
 * signature: undefined __cdecl PreFetchUrl(int param_1)
 * body: 14009a70-14009c87
 */

void __cdecl PreFetchUrl(int param_1)

{
                    /* 0x9a70  4  PreFetchUrl */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x58;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_140088b0(param_1,0x14026564);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_14009c90);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_14009d00);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_14009e10);
      goto LAB_14009b3d;
    }
LAB_14009b5a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_1400a340);
      goto LAB_14009b77;
    }
LAB_14009b94:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_14009f50);
      goto LAB_14009bb1;
    }
LAB_14009bce:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_1400a060);
      goto LAB_14009beb;
    }
LAB_14009c08:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_1400a150);
      goto LAB_14009c25;
    }
LAB_14009c42:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_14009c7c;
    FUN_14008e40(param_1,1,0,0x25,FUN_1400a190);
  }
  else {
LAB_14009b3d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_14009f00);
      goto LAB_14009b5a;
    }
LAB_14009b77:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_1400a4e0);
      goto LAB_14009b94;
    }
LAB_14009bb1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_14009fd0);
      goto LAB_14009bce;
    }
LAB_14009beb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_1400a110);
      goto LAB_14009c08;
    }
LAB_14009c25:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_1400a660);
      goto LAB_14009c42;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,0x2e,FUN_1400a280);
  }
LAB_14009c7c:
  FUN_14008e70(param_1);
  return;
}



/* ==== FUN_14009c90 @ 14009c90 ==== 
 * signature: undefined4 __cdecl FUN_14009c90(undefined2 * param_1)
 * body: 14009c90-14009cf8
 */

undefined4 __cdecl FUN_14009c90(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x1b] = 0x17;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  param_1[0x20] = 0x17;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[0x25] = 0x17;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x8fd;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x8fe;
  *(undefined4 *)(param_1 + 0x26) = 0x8ff;
  param_1[5] = 0x66;
  uVar1 = FUN_14008a80((int)param_1);
  *(undefined4 *)(param_1 + 0x2a) = uVar1;
  return 0;
}



/* ==== FUN_14009d00 @ 14009d00 ==== 
 * signature: undefined4 __cdecl FUN_14009d00(undefined4 * param_1, undefined4 * param_2)
 * body: 14009d00-14009e0b
 */

undefined4 __cdecl FUN_14009d00(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 10) = 0x66;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0xffffffff;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined2 *)((int)param_1 + 0x36) = 0x17;
  param_1[0xf] = 0;
  param_1[0xe] = 0x8fd;
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)((int)param_2 + 0x3e);
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0x8fe;
  *(undefined2 *)(param_1 + 0x10) = 0x17;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0x14] = 0;
  param_1[0x13] = 0x8ff;
  *(undefined2 *)((int)param_1 + 0x4a) = 0x17;
  *(undefined4 *)((int)param_1 + 0x4a) = *(undefined4 *)((int)param_2 + 0x4a);
  *(undefined4 *)((int)param_1 + 0x4e) = *(undefined4 *)((int)param_2 + 0x4e);
  *(undefined2 *)((int)param_1 + 0x52) = *(undefined2 *)((int)param_2 + 0x52);
  uVar2 = FUN_14008a80((int)param_1);
  param_1[0x15] = uVar2;
  return 0;
}



/* ==== FUN_14009e10 @ 14009e10 ==== 
 * signature: undefined4 __cdecl FUN_14009e10(undefined4 * param_1, undefined4 * param_2)
 * body: 14009e10-14009ef3
 */

undefined4 __cdecl FUN_14009e10(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  int local_8;
  int iStack_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  puVar1 = (undefined2 *)((int)param_1 + 10);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_8);
  DAT_14028e48 = (*pcVar2)(local_8,param_1,puVar1);
  *puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar2)(iStack_4,puVar1,(int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x36) = *(undefined4 *)((int)param_2 + 0x36);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)((int)param_2 + 0x3e);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x4a) = *(undefined4 *)((int)param_2 + 0x4a);
  *(undefined4 *)((int)param_1 + 0x4e) = *(undefined4 *)((int)param_2 + 0x4e);
  *(undefined2 *)((int)param_1 + 0x52) = *(undefined2 *)((int)param_2 + 0x52);
  return 0;
}



/* ==== FUN_14009f00 @ 14009f00 ==== 
 * signature: undefined4 __cdecl FUN_14009f00(int param_1)
 * body: 14009f00-14009f42
 */

undefined4 __cdecl FUN_14009f00(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_1,param_1 + 10);
  return 0;
}



/* ==== FUN_14009f50 @ 14009f50 ==== 
 * signature: undefined4 __cdecl FUN_14009f50(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 14009f50-14009fcd
 */

undefined4 __cdecl FUN_14009f50(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_c;
  int local_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,param_1,&local_c);
  *param_4 = *param_4 + local_c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10,&local_c);
  *param_4 = *param_4 + local_c;
  return 0;
}



/* ==== FUN_14009fd0 @ 14009fd0 ==== 
 * signature: undefined4 __cdecl FUN_14009fd0(int param_1, int param_2)
 * body: 14009fd0-1400a05a
 */

undefined4 __cdecl FUN_14009fd0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  local_e = 1;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,&local_e,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10);
  return 0;
}



/* ==== FUN_1400a060 @ 1400a060 ==== 
 * signature: undefined4 __cdecl FUN_1400a060(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1400a060-1400a102
 */

undefined4 __cdecl FUN_1400a060(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_a;
  int local_8;
  int iStack_4;
  
  if (param_4 == 1) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,&local_a,1);
    if (local_a == 1) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_8);
      DAT_14028e48 = (*pcVar1)(local_8,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10);
      return 0;
    }
  }
  return 0x10000;
}



/* ==== FUN_1400a110 @ 1400a110 ==== 
 * signature: undefined4 __cdecl FUN_1400a110(int param_1)
 * body: 1400a110-1400a142
 */

undefined4 __cdecl FUN_1400a110(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,1,param_1);
  return 0;
}



/* ==== FUN_1400a150 @ 1400a150 ==== 
 * signature: undefined4 __cdecl FUN_1400a150(int param_1)
 * body: 1400a150-1400a182
 */

undefined4 __cdecl FUN_1400a150(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,2,param_1);
  return 0;
}



/* ==== FUN_1400a190 @ 1400a190 ==== 
 * signature: undefined4 __cdecl FUN_1400a190(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1400a190-1400a276
 */

undefined4 __cdecl FUN_1400a190(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_2,param_3,param_1 + 0x36);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 0x40);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x4a);
  return 0;
}



/* ==== FUN_1400a280 @ 1400a280 ==== 
 * signature: undefined4 __cdecl FUN_1400a280(undefined4 param_1)
 * body: 1400a280-1400a339
 */

undefined4 __cdecl FUN_1400a280(undefined4 param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,s_events_140260f8,0x17,0xd);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,&DAT_14026584,0x66,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,&DAT_14026570,0x14,2);
  return 0;
}



/* ==== FUN_1400a340 @ 1400a340 ==== 
 * signature: undefined4 __cdecl FUN_1400a340(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1400a340-1400a4d6
 */

undefined4 __cdecl FUN_1400a340(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_14008910(param_2,(uint *)&DAT_14026584);
    if ((char)uVar2 != '\0') {
      if (*param_4 == 0x66) {
        FUN_14008b20(0,param_4,(int)param_1 + 10);
        return 0;
      }
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      *param_4 = 0x66;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[8] = 0;
      param_4[1] = -1;
      param_4[2] = -1;
      FUN_14008b20(0,param_4,(int)param_1 + 10);
      return 0;
    }
  }
  else {
    if ((param_3 == (short *)0x0) || (*param_3 != 1)) {
      return 0x10000;
    }
    sVar1 = *param_4;
    if ((sVar1 == 0x17) || (sVar1 == 0x6a)) {
      if (sVar1 == 0x6a) {
        *param_4 = 0x17;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
      }
      uVar2 = *(uint *)(param_3 + 1);
      if ((uVar2 & 0xff000000) == 0x20000000) {
        uVar2 = uVar2 & 0xffffff;
        if (uVar2 == 1) {
          *(undefined4 *)param_4 = *(undefined4 *)((int)param_1 + 0x36);
          *(undefined4 *)(param_4 + 2) = *(undefined4 *)((int)param_1 + 0x3a);
          param_4[4] = *(short *)((int)param_1 + 0x3e);
          return 0;
        }
        if (uVar2 == 2) {
          *(undefined4 *)param_4 = param_1[0x10];
          *(undefined4 *)(param_4 + 2) = param_1[0x11];
          param_4[4] = *(short *)(param_1 + 0x12);
          return 0;
        }
        if (uVar2 == 3) {
          *(undefined4 *)param_4 = *(undefined4 *)((int)param_1 + 0x4a);
          *(undefined4 *)(param_4 + 2) = *(undefined4 *)((int)param_1 + 0x4e);
          param_4[4] = *(short *)((int)param_1 + 0x52);
          return 0;
        }
      }
      else {
        if ((uVar2 & 0xff000000) != 0x80000000) {
          return 0x10000;
        }
        if ((uVar2 & 0xffffff) == 1) {
          *(undefined4 *)param_4 = *param_1;
          *(undefined4 *)(param_4 + 2) = param_1[1];
          param_4[4] = *(short *)(param_1 + 2);
          return 0;
        }
      }
    }
  }
  return 0x10000;
}



/* ==== FUN_1400a4e0 @ 1400a4e0 ==== 
 * signature: int __cdecl FUN_1400a4e0(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 1400a4e0-1400a65f
 */

int __cdecl FUN_1400a4e0(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026584);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026570);
    if ((((char)uVar1 != '\0') && (*param_4 == 0x14)) && (param_4[1] != 0)) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x48),1,2,(int *)&local_14);
      DAT_14028e48 = (*pcVar2)(CONCAT22(uStack_12,local_14),param_1,*(undefined4 *)(param_1 + 0x18),
                               0);
      return 0;
    }
    iVar3 = 0x10000;
  }
  else {
    local_14 = 0x66;
    uStack_12 = 0xffff;
    uStack_10 = 0xffff;
    local_e = 0;
    local_a = 0;
    local_6 = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
    iVar3 = (*pcVar2)(local_18,param_1,param_4,&local_14);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
      DAT_14028e48 = (*pcVar2)(local_18,param_1,(undefined2 *)(param_1 + 10));
      FUN_14008b20(0,(undefined2 *)(param_1 + 10),(int)&local_14);
      if (local_6 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,local_6);
      }
      return 0;
    }
  }
  return iVar3;
}



/* ==== FUN_1400a660 @ 1400a660 ==== 
 * signature: undefined4 __cdecl FUN_1400a660(int param_1, int param_2)
 * body: 1400a660-1400a88f
 */

undefined4 __cdecl FUN_1400a660(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_7c;
  undefined2 local_78;
  int local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  int iStack_64;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  undefined4 uStack_5a;
  int local_54 [21];
  
  iVar5 = *(int *)(param_2 + 0xc);
  if ((*(int *)(param_1 + 2) == iVar5) && (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    pcVar1 = (code *)FUN_14008ab0(DAT_14028e44[0x12],1,1,local_54);
    DAT_14028e48 = (*pcVar1)(local_54[0],param_1,*(undefined4 *)(param_1 + 0x18),0);
    return 0;
  }
  if ((*(int *)(param_2 + 8) != *(int *)(param_1 + 0x54)) &&
     ((((*(int *)(param_1 + 0x38) == iVar5 && (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x10))
        ) || ((*(int *)(param_1 + 0x42) == iVar5 &&
              (*(int *)(param_1 + 0x46) == *(int *)(param_2 + 0x10))))) ||
      ((*(int *)(param_1 + 0x4c) == iVar5 && (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x10)))
      )))) {
    local_72 = 0;
    local_6e = 0;
    local_76 = 0;
    local_6a = 0;
    local_78 = 0x69;
    pcVar1 = (code *)FUN_14008ab0(DAT_14028e44[4],1,5,&local_7c);
    DAT_14028e48 = (*pcVar1)(local_7c,*(undefined4 *)(param_1 + 0x54),s_parent_14026368,0,&local_78)
    ;
    if ((DAT_14028e48 == 0) && (local_76 != 0)) {
      uStack_5e = *(undefined4 *)(param_2 + 0xc);
      uStack_5a = *(undefined4 *)(param_2 + 0x10);
      uStack_60 = 0x17;
      pcVar1 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x16,&local_7c);
      piVar7 = local_54;
      uVar6 = 0;
      iVar5 = param_1 + 10;
      puVar4 = &uStack_60;
      puVar3 = &local_78;
      uVar2 = FUN_14008a80(param_1);
      DAT_14028e48 = (*pcVar1)(local_7c,uVar2,puVar3,puVar4,iVar5,uVar6,piVar7);
      pcVar1 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x17,&iStack_64);
      piVar7 = local_54;
      uVar2 = FUN_14008a80(param_1);
      DAT_14028e48 = (*pcVar1)(iStack_64,uVar2,piVar7);
      FUN_14008d80((int)&local_78);
      return 0x10000;
    }
    pcVar1 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_7c);
    DAT_14028e48 = (*pcVar1)(local_7c,param_1,1,s_Cannot_get_parent_14026598);
    return 0;
  }
  return 0x10000;
}



/* ==== nMessenger @ 1400a890 ==== 
 * signature: undefined __cdecl nMessenger(int param_1)
 * body: 1400a890-1400aac3
 */

void __cdecl nMessenger(int param_1)

{
                    /* 0xa890  5  nMessenger */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xe8;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_140088b0(param_1,0x140265ac);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_1400ab20);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_1400ac00);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_1400ade0);
      goto LAB_1400a95d;
    }
LAB_1400a97a:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_1400b060);
      goto LAB_1400a997;
    }
LAB_1400a9b4:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_1400b2e0);
      goto LAB_1400a9d1;
    }
LAB_1400a9ee:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_1400b6b0);
      goto LAB_1400aa0b;
    }
LAB_1400aa28:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_1400b670);
      goto LAB_1400aa45;
    }
LAB_1400aa62:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x25,FUN_1400ce20);
      goto LAB_1400aa7f;
    }
  }
  else {
LAB_1400a95d:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_1400af80);
      goto LAB_1400a97a;
    }
LAB_1400a997:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_1400b1b0);
      goto LAB_1400a9b4;
    }
LAB_1400a9d1:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_1400b980);
      goto LAB_1400a9ee;
    }
LAB_1400aa0b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_1400b630);
      goto LAB_1400aa28;
    }
LAB_1400aa45:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_1400c280);
      goto LAB_1400aa62;
    }
LAB_1400aa7f:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1400aab8;
    FUN_14008e40(param_1,1,0,0x2e,FUN_1400aad0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,1,0,FUN_1400ccb0);
  }
LAB_1400aab8:
  FUN_14008e70(param_1);
  return;
}



/* ==== FUN_1400aad0 @ 1400aad0 ==== 
 * signature: undefined4 __cdecl FUN_1400aad0(undefined4 param_1)
 * body: 1400aad0-1400ab17
 */

undefined4 __cdecl FUN_1400aad0(undefined4 param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_1,s_events_140260f8,0x17,0xd);
  return 0;
}



/* ==== FUN_1400ab20 @ 1400ab20 ==== 
 * signature: undefined4 __cdecl FUN_1400ab20(undefined2 * param_1)
 * body: 1400ab20-1400abf2
 */

undefined4 __cdecl FUN_1400ab20(undefined2 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x17,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_1,0,0xe8);
  uVar2 = FUN_14008a80((int)param_1);
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 0x67) = uVar2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 6) = 1;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 7;
  *(undefined4 *)(param_1 + 0xb) = 0xc9;
  *(undefined4 *)(param_1 + 0xd) = 5;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x4c] = 1;
  param_1[10] = 100;
  param_1[0x6b] = 0x66;
  return 0;
}



/* ==== FUN_1400ac00 @ 1400ac00 ==== 
 * signature: undefined4 __cdecl FUN_1400ac00(undefined2 * param_1, int param_2)
 * body: 1400ac00-1400add7
 */

undefined4 __cdecl FUN_1400ac00(undefined2 *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x17,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,param_1,0,0xe8);
  uVar2 = FUN_14008a80((int)param_1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x67) = uVar2;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1,param_2);
  param_1[5] = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 5,param_2 + 10);
  *(undefined4 *)(param_1 + 0x4d) = 7;
  param_1[0x4c] = 1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x98);
  param_1[0x4e] = *(undefined2 *)(param_2 + 0x9c);
  param_1[0x20] = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x20,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xb) = 0xc9;
  *(undefined4 *)(param_1 + 0xd) = 5;
  param_1[10] = 100;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2f,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10,param_2 + 0x14);
  param_1[0x36] = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36,param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[0x6b] = 0x66;
  return 0;
}



/* ==== FUN_1400ade0 @ 1400ade0 ==== 
 * signature: undefined4 __cdecl FUN_1400ade0(undefined4 * param_1, undefined4 * param_2)
 * body: 1400ade0-1400af7b
 */

undefined4 __cdecl FUN_1400ade0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  param_1[0x26] = param_2[0x26];
  *(undefined2 *)(param_1 + 0x27) = *(undefined2 *)(param_2 + 0x27);
  puVar1 = param_1 + 0x10;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
  DAT_14028e48 = (*pcVar2)(local_18,param_1,puVar1);
  *(undefined2 *)puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_14);
  DAT_14028e48 = (*pcVar2)(iStack_14,puVar1,param_2 + 0x10);
  puVar1 = param_1 + 5;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_10);
  DAT_14028e48 = (*pcVar2)(iStack_10,param_1,puVar1);
  *(undefined2 *)puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_c);
  DAT_14028e48 = (*pcVar2)(iStack_c,puVar1,param_2 + 5);
  puVar1 = param_1 + 0x1b;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar2)(iStack_8,param_1,puVar1);
  *(undefined2 *)puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar2)(iStack_4,puVar1,param_2 + 0x1b);
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  return 0;
}



/* ==== FUN_1400af80 @ 1400af80 ==== 
 * signature: undefined4 __cdecl FUN_1400af80(int param_1)
 * body: 1400af80-1400b05c
 */

undefined4 __cdecl FUN_1400af80(int param_1)

{
  code *pcVar1;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,param_1,param_1 + 0x40);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1,param_1 + 0x14);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,param_1 + 0x6c);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_1 + 0xd6);
  return 0;
}



/* ==== FUN_1400b060 @ 1400b060 ==== 
 * signature: undefined4 __cdecl FUN_1400b060(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 1400b060-1400b1a0
 */

undefined4 __cdecl FUN_1400b060(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,param_1,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 10,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x98,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x40,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x14,&local_1c);
  *param_4 = *param_4 + local_1c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x6c,&local_1c);
  *param_4 = *param_4 + local_1c;
  return 0;
}



/* ==== FUN_1400b1b0 @ 1400b1b0 ==== 
 * signature: undefined4 __cdecl FUN_1400b1b0(int param_1, int param_2)
 * body: 1400b1b0-1400b2d1
 */

undefined4 __cdecl FUN_1400b1b0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_1e;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_1e = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_1c);
  DAT_14028e48 = (*pcVar1)(local_1c,&local_1e,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x98);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x40);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x14);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x6c);
  return 0;
}



/* ==== FUN_1400b2e0 @ 1400b2e0 ==== 
 * signature: undefined4 __cdecl FUN_1400b2e0(undefined2 * param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1400b2e0-1400b62a
 */

undefined4 __cdecl FUN_1400b2e0(undefined2 *param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_1a;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 < 1) {
    if (param_4 == 0) {
      *param_1 = 0x17;
      param_1[5] = 0x17;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 6) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_18);
      DAT_14028e48 = (*pcVar1)(local_18,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
      DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 5);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_10);
      DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x4c);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_c);
      DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x20);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
      DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
      FUN_1400cf70(param_1,param_2);
      FUN_1400cf70(param_1,param_2);
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,&local_1a,1);
  if (local_1a == 2) {
    *param_1 = 0;
    param_1[0x36] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_18);
    DAT_14028e48 = (*pcVar1)(local_18,param_1);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
    DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 5);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_10);
    DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x4c);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_c);
    DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x20);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
    DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36);
    return 0;
  }
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_18);
  DAT_14028e48 = (*pcVar1)(local_18,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 5);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x4c);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x20);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
  FUN_1400cf70(param_1,param_2);
  FUN_1400cf70(param_1,param_2);
  return 0;
}



/* ==== FUN_1400b630 @ 1400b630 ==== 
 * signature: undefined4 __cdecl FUN_1400b630(int param_1)
 * body: 1400b630-1400b662
 */

undefined4 __cdecl FUN_1400b630(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,1,param_1);
  return 0;
}



/* ==== FUN_1400b670 @ 1400b670 ==== 
 * signature: undefined4 __cdecl FUN_1400b670(int param_1)
 * body: 1400b670-1400b6a2
 */

undefined4 __cdecl FUN_1400b670(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,2,param_1);
  return 0;
}



/* ==== FUN_1400b6b0 @ 1400b6b0 ==== 
 * signature: int __cdecl FUN_1400b6b0(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 1400b6b0-1400b81b
 */

int __cdecl FUN_1400b6b0(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_sendflatmessage_140265cc);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
    if ((char)uVar1 == '\0') {
      iVar2 = 0x10000;
    }
    else {
      local_14 = 0x66;
      uStack_12 = 0xffff;
      uStack_10 = 0xffff;
      local_e = 0;
      local_a = 0;
      local_6 = 0;
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
      iVar2 = (*pcVar3)(local_18,param_1,param_4,&local_14);
      DAT_14028e48 = iVar2;
      if (iVar2 == 0) {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
        DAT_14028e48 = (*pcVar3)(local_18,param_1,(undefined2 *)(param_1 + 0xd6));
        FUN_14008b20(0,(undefined2 *)(param_1 + 0xd6),(int)&local_14);
        if (local_6 != 0) {
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
          DAT_14028e48 = (*pcVar3)(local_18,local_6);
        }
        return 0;
      }
    }
    return iVar2;
  }
  if ((*param_4 == 0x66) && (*(char **)(param_4 + 7) != (char *)0x0)) {
    local_14 = (undefined2)*(undefined4 *)(param_4 + 5);
    uStack_12 = (undefined2)((uint)*(undefined4 *)(param_4 + 5) >> 0x10);
    iVar2 = FUN_1400ccb0(param_1,*(char **)(param_4 + 7),(undefined4 *)&local_14);
    return iVar2;
  }
  return 0x10000;
}



/* ==== FUN_1400b820 @ 1400b820 ==== 
 * signature: undefined __cdecl FUN_1400b820(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 1400b820-1400b973
 */

void __cdecl FUN_1400b820(undefined4 param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_208;
  int iStack_204;
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  local_200[0] = 0;
  local_100[0] = 0;
  if (*(int *)(param_2 + 2) == 900) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,3,&local_208);
    DAT_14028e48 = (*pcVar1)(local_208,param_1,param_2,local_200);
  }
  else {
    FUN_14008990(local_200,&DAT_14026398);
    FUN_14008990(local_100,&DAT_14026398);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_208);
  DAT_14028e48 = (*pcVar1)(local_208,param_3,local_200);
  if ((*(int *)(param_2 + 6) != 0) && (*(int *)(param_2 + 2) != 900)) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_208);
    DAT_14028e48 = (*pcVar1)(local_208,param_3,&DAT_140265e0);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_204);
    DAT_14028e48 = (*pcVar1)(iStack_204,param_3,local_100);
  }
  return;
}



/* ==== FUN_1400b980 @ 1400b980 ==== 
 * signature: int __cdecl FUN_1400b980(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1400b980-1400c27f
 */

int __cdecl FUN_1400b980(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iStack_954;
  int local_950;
  int local_94c;
  int local_948;
  int local_944;
  int iStack_940;
  int iStack_93c;
  int iStack_938;
  int iStack_934;
  int iStack_930;
  int iStack_92c;
  int iStack_928;
  int iStack_924;
  int iStack_920;
  int iStack_91c;
  int iStack_918;
  int iStack_914;
  int iStack_910;
  int iStack_90c;
  int iStack_908;
  int iStack_904;
  int local_900 [64];
  uint local_800 [512];
  
  uVar1 = FUN_14008910(param_2,(uint *)s_value_14026664);
  if ((char)uVar1 != '\0') {
    local_800[0] = local_800[0] & 0xffffff00;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_944);
    DAT_14028e48 = (*pcVar2)(local_944,local_800,s_Execute__event__14026650);
    FUN_1400b820(param_1,(int)param_1,local_800);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_940);
    DAT_14028e48 = (*pcVar2)(iStack_940,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_948);
    DAT_14028e48 = (*pcVar2)(local_948,local_800,s_Event__event__14026640);
    FUN_1400b820(param_1,(int)param_1 + 10,local_800);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_94c);
    DAT_14028e48 = (*pcVar2)(local_94c,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_950);
    DAT_14028e48 = (*pcVar2)(local_950,local_800,s_Target__target__1402662c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&iStack_954);
    piVar5 = local_900;
    uVar7 = 0xff;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(iStack_954,param_1 + 5,uVar3,piVar5,uVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_93c);
    DAT_14028e48 = (*pcVar2)(iStack_93c,local_800,local_900);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_938);
    DAT_14028e48 = (*pcVar2)(iStack_938,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_934);
    DAT_14028e48 = (*pcVar2)(iStack_934,local_800,s_Data__data__1402661c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&iStack_930);
    piVar5 = local_900;
    uVar7 = 0xff;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(iStack_930,param_1 + 0x10,uVar3,piVar5,uVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_92c);
    DAT_14028e48 = (*pcVar2)(iStack_92c,local_800,local_900);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_928);
    DAT_14028e48 = (*pcVar2)(iStack_928,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_924);
    DAT_14028e48 = (*pcVar2)(iStack_924,local_800,s_Host__data__1402660c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&iStack_920);
    piVar5 = local_900;
    uVar7 = 0xff;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(iStack_920,param_1 + 0x1b,uVar3,piVar5,uVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_91c);
    DAT_14028e48 = (*pcVar2)(iStack_91c,local_800,local_900);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_918);
    DAT_14028e48 = (*pcVar2)(iStack_918,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_914);
    DAT_14028e48 = (*pcVar2)(iStack_914,local_800,s_Flags__integer__140265f8);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,9,&iStack_910);
    piVar5 = local_900;
    uVar7 = 0xff;
    uVar3 = FUN_14008a80((int)param_1);
    DAT_14028e48 = (*pcVar2)(iStack_910,param_1 + 0x26,uVar3,piVar5,uVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_90c);
    DAT_14028e48 = (*pcVar2)(iStack_90c,local_800,local_900);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_908);
    DAT_14028e48 = (*pcVar2)(iStack_908,local_800,&DAT_14026228);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&iStack_904);
    DAT_14028e48 = (*pcVar2)(iStack_904,param_4,local_800);
    return DAT_14028e48;
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_flatmessage_140265e4);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_sourceip_14026094);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_14008910(param_2,(uint *)s_events_140260f8);
      if ((char)uVar1 != '\0') {
        iVar4 = FUN_140091b0(param_4,param_3,param_1,(undefined4 *)0x0,
                             (undefined4 *)((int)param_1 + 10));
        return iVar4;
      }
      uVar1 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
      if ((char)uVar1 != '\0') {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,(int *)local_800);
        DAT_14028e48 = (*pcVar2)(local_800[0],param_4,param_1[0x39]);
        return DAT_14028e48;
      }
      iVar4 = 0x10000;
    }
    else {
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x22,(int *)local_800);
      iVar4 = (*pcVar2)(local_800[0],param_1,s_nProcessSrv_140262e0,0xffffffff,0,local_900);
      DAT_14028e48 = iVar4;
      if (iVar4 == 0) {
        pcVar2 = (code *)FUN_14008ab0(local_900[0],0,0x16,(int *)local_800);
        iVar4 = (*pcVar2)(local_800[0],s_sourceip_14026094,0,param_4);
        DAT_14028e48 = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
      }
    }
    return iVar4;
  }
  if (*param_4 != 0x6a) {
    return 0x10000;
  }
  local_94c = 0;
  local_800[0] = 0;
  iVar4 = param_1[0x39];
  local_950 = 0;
  iVar6 = 0;
  uVar1 = FUN_1400cf40((int)(param_1 + 0x26));
  uVar3 = FUN_140147a0(param_1,&local_94c,local_800,&local_950,*(undefined4 *)((int)param_1 + 0xce),
                       (int)param_1 + 10,(short *)(param_1 + 5),(short *)(param_1 + 0x10),uVar1,
                       iVar6,iVar4);
  if ((char)uVar3 == '\0') {
    return 0x10000;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,local_900);
  DAT_14028e48 = (*pcVar2)(local_900[0],local_94c,&local_948);
  piVar5 = (int *)(param_4 + 7);
  *param_4 = 0x66;
  *piVar5 = 0;
  param_4[1] = -1;
  param_4[2] = -1;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  if (local_950 != -1) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,local_900);
    DAT_14028e48 = (*pcVar2)(local_900[0],piVar5,local_950 + 1);
    if ((undefined1 *)*piVar5 != (undefined1 *)0x0) {
      *(int *)(param_4 + 3) = local_950 + 1;
      *(undefined1 *)*piVar5 = 0;
    }
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,local_900);
  DAT_14028e48 = (*pcVar2)(local_900[0],&iStack_954,local_948);
  iVar4 = *(int *)(param_4 + 3);
  if (iStack_954 <= *(int *)(param_4 + 3)) {
    iVar4 = iStack_954;
  }
  iStack_954 = iVar4;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_944);
  DAT_14028e48 = (*pcVar2)(local_944,*piVar5,local_948,iStack_954);
  *(undefined1 *)(*piVar5 + iStack_954) = 0;
  *(int *)(param_4 + 5) = iStack_954;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&iStack_940);
  DAT_14028e48 = (*pcVar2)(iStack_940,local_94c);
  return 0;
}



/* ==== FUN_1400c280 @ 1400c280 ==== 
 * signature: undefined4 __cdecl FUN_1400c280(int param_1, int param_2)
 * body: 1400c280-1400cca3
 */

undefined4 __cdecl FUN_1400c280(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  short *psVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iStack_480;
  int local_47c;
  undefined2 local_478;
  undefined2 uStack_476;
  undefined2 uStack_474;
  undefined4 uStack_472;
  undefined4 uStack_46e;
  int iStack_46a;
  undefined2 local_464;
  undefined2 uStack_462;
  undefined2 uStack_460;
  undefined4 uStack_45e;
  undefined4 uStack_45a;
  int iStack_456;
  int local_450;
  char *pcStack_44c;
  int iStack_448;
  int local_444;
  int local_440;
  undefined4 local_43c;
  int local_438;
  undefined1 auStack_432 [70];
  undefined2 uStack_3ec;
  undefined2 uStack_3a2;
  undefined2 *puStack_32;
  int iStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
     (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) {
    return 0x10000;
  }
  if (*(short *)(param_1 + 0x6c) == 0) {
    uVar1 = FUN_1400cf40(param_1 + 0x98);
    uVar2 = FUN_14008a80(param_1);
    local_464 = (undefined2)uVar2;
    uStack_462 = (undefined2)((uint)uVar2 >> 0x10);
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x16,(int *)&local_478);
    psVar4 = (short *)(param_1 + 0x40);
    if (*psVar4 == 0x6e) {
      psVar4 = (short *)(param_2 + 0x26);
    }
    DAT_14028e48 = (*pcVar3)(CONCAT22(uStack_476,local_478),CONCAT22(uStack_462,local_464),
                             param_1 + 0x14,param_1 + 10,psVar4,uVar1,&local_438);
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x17,&iStack_480);
    piVar6 = &local_438;
    uVar2 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar3)(iStack_480,uVar2,piVar6);
    return 0;
  }
  local_440 = 1;
  local_43c = 0;
  local_444 = 0;
  local_47c = 0;
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x22,&local_438);
  DAT_14028e48 = (*pcVar3)(local_438,param_1,s_nProcessSrv_140262e0,0xffffffff,0,&local_450);
  if (DAT_14028e48 != 0) {
    pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Cannot_locate_net_service_140266fc);
    return 0;
  }
  local_478 = 0x66;
  uStack_476 = 0xffff;
  uStack_474 = 0xffff;
  uStack_472 = 0;
  uStack_46e = 0;
  iStack_46a = 0;
  iVar7 = 0;
  if (((*(short *)(param_1 + 0x14) == 100) && (*(int *)(param_1 + 0x1a) == 5)) &&
     (*(int *)(param_1 + 0x16) == 0xcf)) {
    pcVar3 = (code *)FUN_14008ab0(local_450,0,0x16,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,s_sourcepath_14026080,0,&local_478);
    iVar7 = DAT_14028e48;
    if (DAT_14028e48 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Cannot_resolve_object_path_of_se_140266d4);
      return 0;
    }
  }
  DAT_14028e48 = iVar7;
  psVar4 = (short *)(param_1 + 0x40);
  local_438 = FUN_14008a80(param_1);
  if (*psVar4 == 0x6e) {
    psVar4 = (short *)(param_2 + 0x26);
  }
  iVar7 = *(int *)(param_1 + 0xe4);
  iVar5 = iStack_46a;
  uVar1 = FUN_1400cf40(param_1 + 0x98);
  uVar2 = FUN_140147a0(param_1,&local_47c,&local_43c,&local_444,local_438,param_1 + 10,
                       (short *)(param_1 + 0x14),psVar4,uVar1,iVar5,iVar7);
  if ((char)uVar2 == '\0') {
    if (iStack_46a != 0) {
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,iStack_46a);
      iStack_46a = 0;
      uStack_472 = 0;
      uStack_46e = 0;
    }
    pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Error_forming_network_message__140266b4);
    return 0;
  }
  local_464 = 0x66;
  uStack_462 = 0xffff;
  uStack_460 = 0xffff;
  uStack_45e = 0;
  uStack_45a = 0;
  iStack_456 = 0;
  if (*(short *)(param_1 + 0x6c) == 0x6e) {
    pcVar3 = (code *)FUN_14008ab0(local_450,0,0x16,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,s_sourceip_14026094,0,&local_464);
    if (DAT_14028e48 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Cannot_obtain_source_s_IP_14026698);
      if (iStack_46a != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
        DAT_14028e48 = (*pcVar3)(local_438,iStack_46a);
        iStack_46a = 0;
        uStack_472 = 0;
        uStack_46e = 0;
      }
      if (iStack_456 != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
        DAT_14028e48 = (*pcVar3)(local_438,iStack_456);
        iStack_456 = 0;
        uStack_45e = 0;
        uStack_45a = 0;
      }
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,3,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,local_47c);
      return 0;
    }
  }
  else {
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xf],1,0,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,param_1,param_1 + 0x6c,&local_464);
    if (iStack_456 == 0) {
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,param_1,1,s_Invalid_host_entry_14026684);
      if (iStack_46a != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
        DAT_14028e48 = (*pcVar3)(local_438,iStack_46a);
        iStack_46a = 0;
        uStack_472 = 0;
        uStack_46e = 0;
      }
      if (iStack_456 != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&local_438);
        DAT_14028e48 = (*pcVar3)(local_438,iStack_456);
        iStack_456 = 0;
        uStack_45e = 0;
        uStack_45a = 0;
      }
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,3,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,local_47c);
      return 0;
    }
  }
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,4,&local_438);
  DAT_14028e48 = (*pcVar3)(local_438,&local_440,iStack_456,s_loopback_14026678);
  if (local_440 == 0) {
    iStack_480 = local_444;
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,6,&local_438);
    DAT_14028e48 = (*pcVar3)(local_438,local_47c,&pcStack_44c);
    FUN_1400ccb0(param_1,pcStack_44c,&iStack_480);
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,7,&iStack_448);
    DAT_14028e48 = (*pcVar3)(iStack_448,local_47c);
    if (local_47c != 0) {
      pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,3,&local_438);
      DAT_14028e48 = (*pcVar3)(local_438,local_47c);
      local_47c = 0;
    }
  }
  else {
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x17,&iStack_480);
    DAT_14028e48 = (*pcVar3)(iStack_480,&local_438,0,0x436);
    uStack_3ec = 0x40;
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0,(int *)&pcStack_44c);
    DAT_14028e48 = (*pcVar3)(pcStack_44c,auStack_432,iStack_456);
    iStack_18 = local_47c;
    uStack_10 = local_43c;
    iStack_14 = local_444;
    pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,0,&iStack_448);
    DAT_14028e48 = (*pcVar3)(iStack_448,0x12,&puStack_32);
    if (DAT_14028e48 != 0) {
      if (iStack_46a != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&iStack_480);
        DAT_14028e48 = (*pcVar3)(iStack_480,iStack_46a);
        iStack_46a = 0;
        uStack_472 = 0;
        uStack_46e = 0;
      }
      if (iStack_456 != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x10,&iStack_480);
        DAT_14028e48 = (*pcVar3)(iStack_480,iStack_456);
        iStack_456 = 0;
        uStack_45e = 0;
        uStack_45a = 0;
      }
      if (local_47c != 0) {
        pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[2],1,3,&iStack_480);
        DAT_14028e48 = (*pcVar3)(iStack_480,local_47c);
        local_47c = 0;
      }
      pcVar3 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&iStack_480);
      DAT_14028e48 = (*pcVar3)(iStack_480,param_1,1,s_Out_of_memory__14026358);
      return 0;
    }
    *puStack_32 = 0x69;
    *(undefined4 *)(puStack_32 + 3) = 0;
    *(undefined4 *)(puStack_32 + 5) = 0;
    *(undefined4 *)(puStack_32 + 1) = *(undefined4 *)(param_1 + 0xce);
    *(undefined4 *)(puStack_32 + 7) = 0;
    uStack_3a2 = 2;
    iStack_2c = local_450;
    uStack_28 = 1;
    uStack_26 = 3;
    pcVar3 = (code *)FUN_14008ab0(local_450,1,2,&iStack_480);
    DAT_14028e48 = (*pcVar3)(iStack_480,&local_438);
  }
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x1a,&local_438);
  DAT_14028e48 = (*pcVar3)(local_438,0xffffffff,&local_464);
  pcVar3 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x1a,&iStack_480);
  DAT_14028e48 = (*pcVar3)(iStack_480,0xffffffff,&local_478);
  return 0;
}



/* ==== FUN_1400ccb0 @ 1400ccb0 ==== 
 * signature: undefined4 __cdecl FUN_1400ccb0(int param_1, char * param_2, undefined4 * param_3)
 * body: 1400ccb0-1400cdb7
 */

undefined4 __cdecl FUN_1400ccb0(int param_1,char *param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int local_458;
  uint auStack_454 [21];
  undefined1 auStack_400 [1024];
  
  piVar1 = (int *)(param_1 + 0x9e);
  if (*piVar1 == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,0,&local_458);
    DAT_14028e48 = (*pcVar2)(local_458,0xc,piVar1);
  }
  else {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,8,&local_458);
    DAT_14028e48 = (*pcVar2)(local_458,*piVar1);
  }
  FUN_14015100(param_2,param_3,*piVar1);
  iVar3 = FUN_140157b0(param_1,*(uint *)(param_1 + 0xce),*piVar1,auStack_454,auStack_400);
  if (iVar3 == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&local_458);
    puVar5 = auStack_454;
    uVar4 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar2)(local_458,uVar4,puVar5);
  }
  return 0;
}



/* ==== FUN_1400cdc0 @ 1400cdc0 ==== 
 * signature: uint __cdecl FUN_1400cdc0(int param_1, undefined4 param_2)
 * body: 1400cdc0-1400ce1a
 */

uint __cdecl FUN_1400cdc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_14014b30((int *)(param_1 + 0xd2),param_2);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_14014cf0(param_1,*(int *)(param_1 + 0xce),0x8fd,0);
    return CONCAT31((int3)((uint)iVar2 >> 8),(char)uVar1);
  }
  uVar3 = FUN_14014cf0(param_1,*(int *)(param_1 + 0xce),0x8fe,0);
  return uVar3 & 0xffffff00;
}



/* ==== __break @ 1400ce1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400ce1b-1400ce1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400ce1c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400ce1c-1400ce1c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400ce1d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400ce1d-1400ce1d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400ce1e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400ce1e-1400ce1e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400ce1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400ce1f-1400ce1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1400ce20 @ 1400ce20 ==== 
 * signature: undefined4 __cdecl FUN_1400ce20(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1400ce20-1400cf36
 */

undefined4 __cdecl FUN_1400ce20(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&local_14);
  DAT_14028e48 = (*pcVar1)(local_14,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_2,param_3,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_2,param_3,param_1 + 0x40);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 0x14);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x6c);
  return 0;
}



/* ==== FUN_1400cf40 @ 1400cf40 ==== 
 * signature: uint __cdecl FUN_1400cf40(int param_1)
 * body: 1400cf40-1400cf67
 */

uint __cdecl FUN_1400cf40(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x80000000;
  }
  if ((uVar1 & 2) == 0) {
    uVar2 = uVar2 | 0x40000000;
  }
  if ((uVar1 & 4) == 0) {
    uVar2 = uVar2 | 0x20000000;
  }
  return uVar2;
}



/* ==== FUN_1400cf70 @ 1400cf70 ==== 
 * signature: undefined __cdecl FUN_1400cf70(undefined4 param_1, int param_2)
 * body: 1400cf70-1400d0a6
 */

void __cdecl FUN_1400cf70(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  int iStack_28;
  int iStack_24;
  undefined2 local_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined2 auStack_14 [3];
  undefined4 uStack_e;
  undefined4 uStack_a;
  int iStack_6;
  
  local_20 = 100;
  local_1e = 0;
  local_1a = 0;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,&local_20);
  FUN_14008ed0(0,auStack_14,0);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_24);
  DAT_14028e48 = (*pcVar1)(iStack_24,auStack_14);
  if (iStack_6 != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_30);
    DAT_14028e48 = (*pcVar1)(local_30,iStack_6);
    iStack_6 = 0;
    uStack_e = 0;
    uStack_a = 0;
  }
  uStack_2a = 0;
  iStack_28 = 0;
  uStack_2c = 0x6d;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,&uStack_2c);
  if (iStack_28 != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_30);
    DAT_14028e48 = (*pcVar1)(local_30,iStack_28);
  }
  return;
}



/* ==== FUN_1400d0b0 @ 1400d0b0 ==== 
 * signature: undefined4 __cdecl FUN_1400d0b0(undefined1 * param_1, int param_2)
 * body: 1400d0b0-1400d15f
 */

undefined4 __cdecl FUN_1400d0b0(undefined1 *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int local_8;
  HINSTANCE local_4;
  
  if (DAT_14026030 == 0) {
    *param_1 = 0;
    iVar1 = FUN_14009290();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (param_2 != 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1d,&local_8);
      DAT_14028e48 = (*pcVar2)(local_8,s_nProcessSrv_140262e0,&local_4);
      iVar1 = FUN_140095b0(&DAT_14026718,FUN_1400d7e0,param_2,&DAT_1402671c,local_4);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
    }
  }
  DAT_14026030 = DAT_14026030 + 1;
  return 0;
}



/* ==== FUN_1400d160 @ 1400d160 ==== 
 * signature: undefined __stdcall FUN_1400d160(void)
 * body: 1400d160-1400d185
 */

void FUN_1400d160(void)

{
  DAT_14026030 = DAT_14026030 + -1;
  if (DAT_14026030 == 0) {
    FUN_14009590();
    if (DAT_14026718 != (HWND)0x0) {
      FUN_14009650(DAT_14026718);
    }
  }
  return;
}



/* ==== FUN_1400d190 @ 1400d190 ==== 
 * signature: undefined4 __stdcall FUN_1400d190(void)
 * body: 1400d190-1400d1a6
 */

undefined4 FUN_1400d190(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_14009950();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ==== FUN_1400d1b0 @ 1400d1b0 ==== 
 * signature: int __cdecl FUN_1400d1b0(undefined2 * param_1, LONG param_2, char param_3)
 * body: 1400d1b0-1400d24a
 */

int __cdecl FUN_1400d1b0(undefined2 *param_1,LONG param_2,char param_3)

{
  code *pcVar1;
  int iVar2;
  HINSTANCE local_8;
  int local_4;
  
  iVar2 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1d,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,s_nProcessSrv_140262e0,&local_8);
  if (param_3 != '\0') {
    FUN_140095b0((undefined4 *)(param_1 + 5),FUN_1400d620,param_2,s_server_14026728,local_8);
    iVar2 = FUN_140095b0((undefined4 *)(param_1 + 7),FUN_1400d6d0,param_2,s_Client_14026720,local_8)
    ;
    *param_1 = 3;
    iVar2 = -(uint)(iVar2 == 0);
  }
  return iVar2;
}



/* ==== FUN_1400d250 @ 1400d250 ==== 
 * signature: undefined4 __cdecl FUN_1400d250(int param_1)
 * body: 1400d250-1400d270
 */

undefined4 __cdecl FUN_1400d250(int param_1)

{
  FUN_14009650(*(HWND *)(param_1 + 10));
  FUN_14009650(*(HWND *)(param_1 + 0xe));
  return 0;
}



/* ==== FUN_1400d280 @ 1400d280 ==== 
 * signature: int __stdcall FUN_1400d280(void)
 * body: 1400d280-1400d2a5
 */

int FUN_1400d280(void)

{
  int iVar1;
  
  iVar1 = FUN_14009660();
  if ((iVar1 == 0x2728) || (iVar1 == 0x2747)) {
    iVar1 = -2;
  }
  return iVar1;
}



/* ==== FUN_1400d2b0 @ 1400d2b0 ==== 
 * signature: int __stdcall FUN_1400d2b0(void)
 * body: 1400d2b0-1400d2d5
 */

int FUN_1400d2b0(void)

{
  int iVar1;
  
  iVar1 = FUN_14009720();
  if ((iVar1 == 0x2728) || (iVar1 == 0x2747)) {
    iVar1 = -2;
  }
  return iVar1;
}



/* ==== FUN_1400d2e0 @ 1400d2e0 ==== 
 * signature: undefined4 __stdcall FUN_1400d2e0(void)
 * body: 1400d2e0-1400d2e2
 */

undefined4 FUN_1400d2e0(void)

{
  return 0;
}



/* ==== __break @ 1400d2e3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2e3-1400d2e3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2e4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2e4-1400d2e4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2e5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2e5-1400d2e5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2e6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2e6-1400d2e6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2e7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2e7-1400d2e7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2e8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2e8-1400d2e8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2e9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2e9-1400d2e9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2ea-1400d2ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2eb-1400d2eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2ec-1400d2ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2ed-1400d2ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2ee-1400d2ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d2ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d2ef-1400d2ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1400d2f0 @ 1400d2f0 ==== 
 * signature: int __cdecl FUN_1400d2f0(undefined1 * param_1, undefined4 param_2, int * param_3, int * param_4)
 * body: 1400d2f0-1400d4c6
 */

/* WARNING: Removing unreachable block (ram,0x1400d3a3) */
/* WARNING: Removing unreachable block (ram,0x1400d4ba) */
/* WARNING: Removing unreachable block (ram,0x1400d409) */

int __cdecl FUN_1400d2f0(undefined1 *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  int local_14;
  undefined4 local_10;
  int iStack_c;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_14);
  DAT_14028e48 = (*pcVar1)(local_14,param_2,&local_10);
  if (DAT_14028e48 != 0) {
    return -1;
  }
  DAT_14028e48 = 0;
  iStack_c = FUN_14009900(param_1,local_10,*param_3);
  if (iStack_c == 0) {
    *param_4 = *param_4;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_14);
    DAT_14028e48 = (*pcVar1)(local_14,param_2);
    return 0;
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_14);
  DAT_14028e48 = (*pcVar1)(local_14,param_2);
  return iStack_c;
}



/* ==== FUN_1400d4d0 @ 1400d4d0 ==== 
 * signature: undefined __cdecl FUN_1400d4d0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * body: 1400d4d0-1400d4f2
 */

void __cdecl FUN_1400d4d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = 0;
  FUN_140098c0(param_1,param_2,param_3);
  return;
}



/* ==== FUN_1400d500 @ 1400d500 ==== 
 * signature: undefined4 __cdecl FUN_1400d500(int param_1)
 * body: 1400d500-1400d50f
 */

undefined4 __cdecl FUN_1400d500(int param_1)

{
  FUN_140097d0(param_1);
  return 0;
}



/* ==== FUN_1400d510 @ 1400d510 ==== 
 * signature: undefined4 __stdcall FUN_1400d510(void)
 * body: 1400d510-1400d512
 */

undefined4 FUN_1400d510(void)

{
  return 0;
}



/* ==== __break @ 1400d513 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d513-1400d513
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d514 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d514-1400d514
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d515 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d515-1400d515
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d516 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d516-1400d516
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d517 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d517-1400d517
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d518 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d518-1400d518
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d519 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d519-1400d519
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d51a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51a-1400d51a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d51b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51b-1400d51b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d51c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51c-1400d51c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d51d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51d-1400d51d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d51e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51e-1400d51e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1400d51f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51f-1400d51f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1400d520 @ 1400d520 ==== 
 * signature: bool __cdecl FUN_1400d520(int param_1, int * param_2)
 * body: 1400d520-1400d534
 */

bool __cdecl FUN_1400d520(int param_1,int *param_2)

{
  return *(int *)(param_1 + 2) == *param_2;
}



/* ==== FUN_1400d540 @ 1400d540 ==== 
 * signature: int __cdecl FUN_1400d540(undefined4 param_1, undefined4 param_2, undefined4 * param_3, int * param_4)
 * body: 1400d540-1400d5c5
 */

int __cdecl FUN_1400d540(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,0x400,&local_8);
  if (DAT_14028e48 != 0) {
    return -1;
  }
  *param_3 = local_8;
  iVar2 = FUN_14009a40(DAT_14026718,0x401,param_2,local_8,0x400);
  *param_4 = iVar2;
  return -(uint)(iVar2 == 0);
}



/* ==== FUN_1400d5d0 @ 1400d5d0 ==== 
 * signature: undefined __cdecl FUN_1400d5d0(undefined4 param_1, undefined4 param_2)
 * body: 1400d5d0-1400d60c
 */

void __cdecl FUN_1400d5d0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,param_2);
  return;
}



/* ==== FUN_1400d610 @ 1400d610 ==== 
 * signature: undefined4 __stdcall FUN_1400d610(void)
 * body: 1400d610-1400d612
 */

undefined4 FUN_1400d610(void)

{
  return 0;
}



/* ==== FUN_1400d620 @ 1400d620 ==== 
 * signature: LRESULT __stdcall FUN_1400d620(HWND param_1, UINT param_2, WPARAM param_3, uint param_4)
 * body: 1400d620-1400d6c4
 */

LRESULT FUN_1400d620(HWND param_1,UINT param_2,WPARAM param_3,uint param_4)

{
  LONG LVar1;
  LRESULT LVar2;
  uint uVar3;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 != 0x400) {
    if (param_2 == 0xc) {
      return 0;
    }
    LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar2;
  }
  if ((short)(param_4 >> 0x10) != 0) {
    return 0;
  }
  uVar3 = param_4 & 0xffff;
  if (uVar3 != 1) {
    if (uVar3 == 8) {
      *(short *)(LVar1 + 4) = *(short *)(LVar1 + 4) + 1;
      return 0;
    }
    if (uVar3 == 0x20) {
      *(WPARAM *)(LVar1 + 0xec + *(short *)(LVar1 + 0x1a) * 4) = param_3;
      *(short *)(LVar1 + 0x1a) = *(short *)(LVar1 + 0x1a) + 1;
      return 0;
    }
    return 0;
  }
  *(WPARAM *)(LVar1 + 0x74 + *(short *)(LVar1 + 8) * 4) = param_3;
  *(short *)(LVar1 + 8) = *(short *)(LVar1 + 8) + 1;
  return 0;
}



/* ==== FUN_1400d6d0 @ 1400d6d0 ==== 
 * signature: LRESULT __stdcall FUN_1400d6d0(HWND param_1, UINT param_2, WPARAM param_3, uint param_4)
 * body: 1400d6d0-1400d79c
 */

LRESULT FUN_1400d6d0(HWND param_1,UINT param_2,WPARAM param_3,uint param_4)

{
  LONG LVar1;
  LRESULT LVar2;
  
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (param_2 == 0x400) {
    if ((short)(param_4 >> 0x10) == 0) {
      switch(param_4 & 0xffff) {
      case 1:
        *(WPARAM *)(LVar1 + 0x74 + *(short *)(LVar1 + 8) * 4) = param_3;
        *(short *)(LVar1 + 8) = *(short *)(LVar1 + 8) + 1;
        return 0;
      case 2:
        *(WPARAM *)(LVar1 + 0x18c + *(short *)(LVar1 + 0xc) * 4) = param_3;
        *(short *)(LVar1 + 0xc) = *(short *)(LVar1 + 0xc) + 1;
        return 0;
      case 0x10:
        *(WPARAM *)(LVar1 + 0x13c + *(short *)(LVar1 + 6) * 4) = param_3;
        *(short *)(LVar1 + 6) = *(short *)(LVar1 + 6) + 1;
        return 0;
      case 0x20:
        *(WPARAM *)(LVar1 + 0xec + *(short *)(LVar1 + 0x1a) * 4) = param_3;
        *(short *)(LVar1 + 0x1a) = *(short *)(LVar1 + 0x1a) + 1;
      }
      return 0;
    }
    return 0;
  }
  if (param_2 == 0xc) {
    return 0;
  }
  LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
  return LVar2;
}



/* ==== FUN_1400d79d @ 1400d79d ==== 
 * signature: undefined __fastcall FUN_1400d79d(undefined4 param_1, int param_2)
 * body: 1400d79d-1400d79f
 */

void __fastcall FUN_1400d79d(undefined4 param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  uint in_EAX;
  undefined3 uVar5;
  int iVar4;
  char cVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  cVar6 = (char)param_2;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + cVar6;
  uVar5 = (undefined3)(in_EAX >> 8);
  bVar3 = *(byte *)(unaff_EBX + (in_EAX & 0xff));
  pcVar1 = (char *)(unaff_EBX + unaff_EBP * 2);
  *pcVar1 = *pcVar1 + cVar6;
  bVar3 = *(byte *)(unaff_EBX + (uint)bVar3);
  (&stack0x00000000)[CONCAT31(uVar5,bVar3) * 4] =
       (&stack0x00000000)[CONCAT31(uVar5,bVar3) * 4] + cVar6;
  bVar3 = *(byte *)(unaff_EBX + (uint)bVar3);
  pcVar1 = (char *)(unaff_EDI + param_2 * 4);
  *pcVar1 = *pcVar1 + cVar6;
  iVar4 = CONCAT31(uVar5,*(undefined1 *)(unaff_EBX + (uint)bVar3));
  *(char *)(iVar4 * 2) = *(char *)(iVar4 * 2) + cVar6;
  *(int *)(&stack0x00000000 + iVar4) = *(int *)(&stack0x00000000 + iVar4) + iVar4;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* ==== FUN_1400d7e0 @ 1400d7e0 ==== 
 * signature: LRESULT __stdcall FUN_1400d7e0(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
 * body: 1400d7e0-1400d991
 */

LRESULT FUN_1400d7e0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  char cVar1;
  LONG LVar2;
  LRESULT LVar3;
  code *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int local_b0;
  int local_ac;
  uint local_a8 [2];
  undefined1 auStack_a0 [7];
  char cStack_99;
  undefined4 auStack_98 [34];
  WPARAM WStack_10;
  int iStack_c;
  undefined1 uStack_8;
  
  LVar2 = GetWindowLongA(param_1,-0x15);
  if (param_2 != 0x401) {
    if (param_2 == 0xc) {
      return 0;
    }
    LVar3 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar3;
  }
  local_ac = 0x30;
  pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_b0);
  DAT_14028e48 = (*pcVar4)(local_b0,*(undefined4 *)(LVar2 + 0x20),local_a8);
  uVar8 = 1;
  if (local_a8[0] == 0) {
    return 0;
  }
  while( true ) {
    pcVar4 = (code *)FUN_14008ab0(*(int *)(local_ac + DAT_14028e44),1,6,&local_b0);
    DAT_14028e48 = (*pcVar4)(local_b0,*(undefined4 *)(LVar2 + 0x20),uVar8,auStack_a0);
    if (param_3 == WStack_10) break;
    uVar8 = uVar8 + 1;
    if (local_a8[0] < uVar8) {
      return 0;
    }
  }
  uStack_8 = 1;
  if ((short)((uint)param_4 >> 0x10) == 0) {
    pcVar5 = (char *)(*DAT_14026450)(*(undefined4 *)**(undefined4 **)(iStack_c + 0xc));
    uVar6 = 0xffffffff;
    pcVar9 = pcVar5;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = pcVar5;
    pcVar10 = (char *)auStack_98;
    for (uVar7 = ~uVar6 - 1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = ~uVar6 - 1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    *(undefined1 *)((int)auStack_98 + (~uVar6 - 1)) = 0;
  }
  pcVar4 = (code *)FUN_14008ab0(*(int *)(local_ac + DAT_14028e44),1,7,&local_b0);
  DAT_14028e48 = (*pcVar4)(local_b0,*(undefined4 *)(LVar2 + 0x20),uVar8,auStack_a0);
  *(short *)(LVar2 + 0xe) = *(short *)(LVar2 + 0xe) + 1;
  return 0;
}



/* ==== FetchUrlText @ 1400d9a0 ==== 
 * signature: undefined __cdecl FetchUrlText(int param_1)
 * body: 1400d9a0-1400dbd1
 */

void __cdecl FetchUrlText(int param_1)

{
                    /* 0xd9a0  1  FetchUrlText */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xaa;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_140088b0(param_1,0x14026730);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_1400dbe0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_1400dc80);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_1400ddb0);
      goto LAB_1400da6b;
    }
LAB_1400da88:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_1400e3b0);
      goto LAB_1400daa5;
    }
LAB_1400dac2:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_1400df80);
      goto LAB_1400dadf;
    }
LAB_1400dafc:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_1400e0e0);
      goto LAB_1400db19;
    }
LAB_1400db36:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_1400e1f0);
      goto LAB_1400db53;
    }
LAB_1400db70:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x25,FUN_1400e230);
      goto LAB_1400db8d;
    }
  }
  else {
LAB_1400da6b:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_1400dec0);
      goto LAB_1400da88;
    }
LAB_1400daa5:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_1400e650);
      goto LAB_1400dac2;
    }
LAB_1400dadf:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_1400e030);
      goto LAB_1400dafc;
    }
LAB_1400db19:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_1400e1b0);
      goto LAB_1400db36;
    }
LAB_1400db53:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_1400e9b0);
      goto LAB_1400db70;
    }
LAB_1400db8d:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_1400dbc6;
    FUN_14008e40(param_1,1,0,0x2e,FUN_1400e2c0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,1,0,FUN_1400edd0);
  }
LAB_1400dbc6:
  FUN_14008e70(param_1);
  return;
}



/* ==== FUN_1400dbe0 @ 1400dbe0 ==== 
 * signature: undefined4 __cdecl FUN_1400dbe0(undefined2 * param_1)
 * body: 1400dbe0-1400dc7d
 */

undefined4 __cdecl FUN_1400dbe0(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[0x1b] = 0;
  param_1[0x33] = 0x66;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  param_1[0x3c] = 0x66;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x45] = 0x66;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  uVar1 = FUN_14008a80((int)param_1);
  *(undefined4 *)(param_1 + 0x31) = uVar1;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 1;
  *(undefined1 *)(param_1 + 0x54) = 0;
  return 0;
}



/* ==== FUN_1400dc80 @ 1400dc80 ==== 
 * signature: undefined4 __cdecl FUN_1400dc80(undefined4 * param_1, undefined4 * param_2)
 * body: 1400dc80-1400ddae
 */

undefined4 __cdecl FUN_1400dc80(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_8;
  int iStack_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 10) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,(int)param_1 + 10,(int)param_2 + 10);
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,(int)param_1 + 0x36,(int)param_2 + 0x36);
  *(undefined2 *)((int)param_1 + 0x8a) = 0x66;
  param_1[0x23] = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0x66) = 0x66;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0x66;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  uVar2 = FUN_14008a80((int)param_1);
  *(undefined4 *)((int)param_1 + 0x62) = uVar2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)((int)param_1 + 0xa9) = 1;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return 0;
}



/* ==== FUN_1400ddb0 @ 1400ddb0 ==== 
 * signature: undefined4 __cdecl FUN_1400ddb0(undefined4 * param_1, undefined4 * param_2)
 * body: 1400ddb0-1400deb1
 */

undefined4 __cdecl FUN_1400ddb0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_10);
  DAT_14028e48 = (*pcVar2)(local_10,param_1,(int)param_1 + 10);
  puVar1 = (undefined2 *)((int)param_1 + 0x36);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_c);
  DAT_14028e48 = (*pcVar2)(iStack_c,param_1,puVar1);
  *puVar1 = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_8);
  DAT_14028e48 = (*pcVar2)(iStack_8,(int)param_1 + 10,(int)param_2 + 10);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar2)(iStack_4,puVar1,(int)param_2 + 0x36);
  return 0;
}



/* ==== FUN_1400dec0 @ 1400dec0 ==== 
 * signature: undefined4 __cdecl FUN_1400dec0(int param_1)
 * body: 1400dec0-1400df76
 */

undefined4 __cdecl FUN_1400dec0(int param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,param_1 + 0x36);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_1 + 0x8a);
  FUN_1400e8f0(param_1);
  return 0;
}



/* ==== FUN_1400df80 @ 1400df80 ==== 
 * signature: undefined4 __cdecl FUN_1400df80(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 1400df80-1400e02d
 */

undefined4 __cdecl FUN_1400df80(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36,&local_10);
  *param_4 = *param_4 + local_10;
  return 0;
}



/* ==== FUN_1400e030 @ 1400e030 ==== 
 * signature: undefined4 __cdecl FUN_1400e030(int param_1, int param_2)
 * body: 1400e030-1400e0df
 */

undefined4 __cdecl FUN_1400e030(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_12;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_12 = 1;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,&local_12,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36);
  return 0;
}



/* ==== FUN_1400e0e0 @ 1400e0e0 ==== 
 * signature: undefined4 __cdecl FUN_1400e0e0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1400e0e0-1400e1a7
 */

undefined4 __cdecl FUN_1400e0e0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 == 1) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_c);
    DAT_14028e48 = (*pcVar1)(local_c,&local_e,1);
    if (local_e == 1) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_c);
      DAT_14028e48 = (*pcVar1)(local_c,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
      DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36);
      return 0;
    }
  }
  return 0x10000;
}



/* ==== FUN_1400e1b0 @ 1400e1b0 ==== 
 * signature: undefined4 __cdecl FUN_1400e1b0(int param_1)
 * body: 1400e1b0-1400e1e2
 */

undefined4 __cdecl FUN_1400e1b0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,1,param_1);
  return 0;
}



/* ==== FUN_1400e1f0 @ 1400e1f0 ==== 
 * signature: undefined4 __cdecl FUN_1400e1f0(int param_1)
 * body: 1400e1f0-1400e222
 */

undefined4 __cdecl FUN_1400e1f0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,2,param_1);
  return 0;
}



/* ==== FUN_1400e230 @ 1400e230 ==== 
 * signature: undefined4 __cdecl FUN_1400e230(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 1400e230-1400e2b6
 */

undefined4 __cdecl FUN_1400e230(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x36);
  return 0;
}



/* ==== FUN_1400e2c0 @ 1400e2c0 ==== 
 * signature: undefined4 __cdecl FUN_1400e2c0(undefined4 param_1)
 * body: 1400e2c0-1400e3ad
 */

undefined4 __cdecl FUN_1400e2c0(undefined4 param_1)

{
  code *pcVar1;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,param_1,s_events_140260f8,0x17,0xd);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1,&DAT_14026584,0x66,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,&DAT_14026570,0x14,2);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,s_stripheader_14026740,0x14,6);
  return 0;
}



/* ==== FUN_1400e3b0 @ 1400e3b0 ==== 
 * signature: int __cdecl FUN_1400e3b0(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1400e3b0-1400e642
 */

int __cdecl FUN_1400e3b0(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  uVar2 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_14008910(param_2,(uint *)&DAT_14026584);
    if ((char)uVar2 != '\0') {
      if (*param_4 == 0x66) {
        FUN_14008b20(0,param_4,(int)param_1 + 10);
        return 0;
      }
      if (*param_4 == 0x6a) {
        *param_4 = 0x66;
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[5] = 0;
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[8] = 0;
        param_4[1] = -1;
        param_4[2] = -1;
        FUN_14008b20(0,param_4,(int)param_1 + 10);
        return 0;
      }
      return 0x10000;
    }
    uVar2 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_14008910(param_2,(uint *)s_stripheader_14026740);
      if ((char)uVar2 != '\0') {
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0xd,(int *)&local_14);
        DAT_14028e48 = (*pcVar4)(CONCAT22(uStack_12,local_14),param_4,
                                 *(undefined1 *)((int)param_1 + 0xa9));
        return DAT_14028e48;
      }
      iVar3 = 0x10000;
    }
    else {
      local_14 = 0x66;
      uStack_12 = 0xffff;
      uStack_10 = 0xffff;
      local_e = 0;
      local_a = 0;
      local_6 = 0;
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
      iVar3 = (*pcVar4)(local_18,param_1,param_4,&local_14);
      DAT_14028e48 = iVar3;
      if (iVar3 == 0) {
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
        DAT_14028e48 = (*pcVar4)(local_18,param_1,(undefined2 *)((int)param_1 + 0x8a));
        FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x8a),(int)&local_14);
        if (local_6 != 0) {
          pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
          DAT_14028e48 = (*pcVar4)(local_18,local_6);
        }
        return 0;
      }
    }
  }
  else {
    iVar3 = 0x10000;
    if ((param_3 == (short *)0x0) || (*param_3 != 1)) {
      return 0x10000;
    }
    sVar1 = *param_4;
    if ((sVar1 == 0x17) || (sVar1 == 0x6a)) {
      if (sVar1 == 0x6a) {
        *param_4 = 0x17;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
      }
      if (((*(uint *)(param_3 + 1) & 0xff000000) == 0x80000000) &&
         ((*(uint *)(param_3 + 1) & 0xffffff) == 1)) {
        *(undefined4 *)param_4 = *param_1;
        *(undefined4 *)(param_4 + 2) = param_1[1];
        param_4[4] = *(short *)(param_1 + 2);
        return 0;
      }
    }
  }
  return iVar3;
}



/* ==== FUN_1400e650 @ 1400e650 ==== 
 * signature: int __cdecl FUN_1400e650(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 1400e650-1400e8e5
 */

int __cdecl FUN_1400e650(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026584);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
    if ((char)uVar1 != '\0') {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,(int *)&local_14);
      DAT_14028e48 = (*pcVar2)(CONCAT22(uStack_12,local_14),param_4,*(undefined4 *)(param_1 + 0x98))
      ;
      return DAT_14028e48;
    }
    uVar1 = FUN_14008910(param_2,(uint *)s_stripheader_14026740);
    if ((char)uVar1 != '\0') {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0xc,(int *)&local_14);
      DAT_14028e48 = (*pcVar2)(CONCAT22(uStack_12,local_14),param_4,0,param_1 + 0xa9);
      return DAT_14028e48;
    }
    uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026570);
    if ((((char)uVar1 != '\0') && (*param_4 == 0x14)) && (param_4[1] != 0)) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x22,(int *)&local_14);
      DAT_14028e48 = (*pcVar2)(CONCAT22(uStack_12,local_14),param_1,s_nProcessSrv_140262e0,
                               0xffffffff,0,&local_18);
      if (DAT_14028e48 == 0) {
        pcVar2 = (code *)FUN_14008ab0(local_18,1,4,(int *)&local_14);
        DAT_14028e48 = (*pcVar2)(CONCAT22(uStack_12,local_14),param_1);
      }
      FUN_1400e8f0(param_1);
      *(undefined1 *)(param_1 + 0xa8) = 1;
      FUN_14014cf0(param_1,*(int *)(param_1 + 0x62),0x8ff,0);
      return 0;
    }
    iVar3 = 0x10000;
  }
  else {
    local_14 = 0x66;
    uStack_12 = 0xffff;
    uStack_10 = 0xffff;
    local_e = 0;
    local_a = 0;
    local_6 = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
    iVar3 = (*pcVar2)(local_18,param_1,param_4,&local_14);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
      DAT_14028e48 = (*pcVar2)(local_18,param_1,(undefined2 *)(param_1 + 10));
      FUN_14008b20(0,(undefined2 *)(param_1 + 10),(int)&local_14);
      if (local_6 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,local_6);
      }
      return 0;
    }
  }
  return iVar3;
}



/* ==== FUN_1400e8f0 @ 1400e8f0 ==== 
 * signature: undefined __cdecl FUN_1400e8f0(int param_1)
 * body: 1400e8f0-1400e9a8
 */

void __cdecl FUN_1400e8f0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x86) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x86));
    *(undefined4 *)(param_1 + 0x86) = 0;
    *(undefined4 *)(param_1 + 0x7e) = 0;
    *(undefined4 *)(param_1 + 0x82) = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}



/* ==== FUN_1400e9b0 @ 1400e9b0 ==== 
 * signature: undefined4 __cdecl FUN_1400e9b0(int param_1, int param_2)
 * body: 1400e9b0-1400ed6a
 */

undefined4 __cdecl FUN_1400e9b0(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_648;
  undefined4 local_644;
  int local_640;
  int local_63c;
  undefined4 local_638;
  undefined1 auStack_632 [70];
  undefined2 uStack_5ec;
  undefined2 uStack_5a2;
  undefined2 *puStack_232;
  int iStack_22c;
  undefined2 uStack_228;
  undefined2 uStack_226;
  undefined4 uStack_218;
  int iStack_214;
  undefined4 uStack_210;
  char local_200 [256];
  undefined1 local_100 [256];
  
  if ((*(int *)(param_2 + 0xc) != *(int *)(param_1 + 2)) ||
     (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) {
    return 0x10000;
  }
  if (0 < *(int *)(param_1 + 0xa0)) {
    return 0;
  }
  puVar5 = &local_638;
  for (iVar4 = 0x10d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  FUN_1400e8f0(param_1);
  cVar1 = FUN_1400ed70(param_1);
  if (cVar1 == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Cannot_resolve_URL_14026784);
    return 0;
  }
  FUN_14012750(*(int *)(param_1 + 0x74),0,(int)local_100);
  FUN_14012750(*(int *)(param_1 + 0x74),1,(int)local_200);
  if (local_200[0] == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Host_not_specified_14026770);
    return 0;
  }
  local_644 = 0;
  local_640 = 0;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x22,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,param_1,s_nProcessSrv_140262e0,0xffffffff,0,&local_63c);
  if (DAT_14028e48 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Cannot_locate_net_service_140266fc);
    return 0;
  }
  uStack_5ec = 0x40;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,auStack_632,local_200);
  uStack_218 = 0;
  uVar3 = FUN_14013780(param_1,&uStack_218,&local_644,&local_640,*(int *)(param_1 + 0x74),1,
                       *(int *)(param_1 + 0x98),0,0);
  if ((char)uVar3 == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Error_forming_HTTP_message_14026754);
    return 0;
  }
  uStack_210 = local_644;
  iStack_214 = local_640;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[2],1,0,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,0x12,&puStack_232);
  if (DAT_14028e48 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Out_of_memory__14026358);
    return 0;
  }
  *puStack_232 = 0x69;
  *(undefined4 *)(puStack_232 + 3) = 0;
  *(undefined4 *)(puStack_232 + 5) = 0;
  *(undefined4 *)(puStack_232 + 1) = *(undefined4 *)(param_1 + 0x62);
  *(undefined4 *)(puStack_232 + 7) = 0;
  uStack_228 = 1;
  iStack_22c = param_1;
  uStack_226 = 0;
  uStack_5a2 = 1;
  pcVar2 = (code *)FUN_14008ab0(local_63c,1,2,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,&local_638);
  return 0;
}



/* ==== FUN_1400ed70 @ 1400ed70 ==== 
 * signature: char __cdecl FUN_1400ed70(int param_1)
 * body: 1400ed70-1400edc4
 */

char __cdecl FUN_1400ed70(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,param_1,param_1 + 10,param_1 + 0x66);
  }
  return '\x01' - (*(int *)(param_1 + 0x74) == 0);
}



/* ==== FUN_1400edd0 @ 1400edd0 ==== 
 * signature: int __cdecl FUN_1400edd0(int param_1, int param_2, int * param_3)
 * body: 1400edd0-1400f184
 */

int __cdecl FUN_1400edd0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined1 auStack_14 [20];
  
  iVar5 = 0;
  local_58 = 0;
  bVar2 = false;
  if (*(char *)(param_1 + 0xa8) != '\0') {
    return 0x10000;
  }
  if (*(int *)(param_1 + 0xa0) < 1) {
    *(int *)(param_1 + 0x9c) = 0;
    uVar4 = FUN_14014b30((int *)(param_1 + 0x9c),param_2);
    if ((char)uVar4 != '\0') {
      if (*(char *)(param_1 + 0xa9) == '\0') {
        local_58 = *param_3;
        local_48 = param_2;
        local_50 = local_58;
      }
      else {
        FUN_14014920(param_2,*param_3,&local_48,&local_50,&local_58);
      }
      *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
      piVar1 = (int *)(param_1 + 0x86);
      *(undefined4 *)(param_1 + 0x7e) = 0;
      *piVar1 = 0;
      *(undefined4 *)(param_1 + 0x82) = 0;
      *(undefined2 *)(param_1 + 0x78) = 0x66;
      if (local_58 != -1 && -1 < local_58 + 1) {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_40);
        DAT_14028e48 = (*pcVar3)(local_40,piVar1,local_58 + 1);
        if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
          *(int *)(param_1 + 0x7e) = local_58 + 1;
          *(undefined1 *)*piVar1 = 0;
        }
      }
      if (DAT_14028e48 == 0) {
        iVar5 = local_58;
        if (local_50 <= local_58) {
          iVar5 = local_50;
        }
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_40);
        DAT_14028e48 = (*pcVar3)(local_40,*piVar1,local_48,iVar5);
        *(undefined1 *)(*piVar1 + iVar5) = 0;
        iVar5 = 0;
        if ((local_50 < local_58) && (0 < local_58)) {
          *(int *)(param_1 + 0xa0) = local_58;
        }
        else {
          *(undefined4 *)(param_1 + 0xa0) = 0;
          bVar2 = true;
        }
        goto LAB_1400f0c6;
      }
    }
    iVar5 = FUN_14014cf0(param_1,*(int *)(param_1 + 0x62),0x8fe,0);
    FUN_1400e8f0(param_1);
  }
  else if (*(int *)(param_1 + 0x86) == 0) {
    iVar5 = 0x10000;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_14014cf0(param_1,*(int *)(param_1 + 0x62),0x8fe,0);
  }
  else {
    local_4c = 0x34;
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_40);
    DAT_14028e48 = (*pcVar3)(local_40,&local_54,*(undefined4 *)(param_1 + 0x86));
    iVar6 = *(int *)(param_1 + 0xa0) - local_54;
    if (*param_3 < iVar6) {
      iVar6 = *param_3;
    }
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_4c),1,1,&local_40);
    DAT_14028e48 = (*pcVar3)(local_40,*(int *)(param_1 + 0x86) + local_54,param_2,iVar6);
    *(undefined1 *)(*(int *)(param_1 + 0x86) + local_54 + iVar6) = 0;
    if (local_54 + iVar6 < *(int *)(param_1 + 0xa0)) {
      uStack_3c = (undefined2)*(int *)(param_1 + 0xa0);
      local_40 = CONCAT22((short)(local_54 + iVar6),10);
      iVar5 = FUN_14014ed0(param_1,*(int *)(param_1 + 0x62),0x900,&local_40);
    }
    else {
      bVar2 = true;
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
  }
LAB_1400f0c6:
  if (bVar2) {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1c,&local_40);
    DAT_14028e48 = (*pcVar3)(local_40,param_1 + 0x36,param_1,&iStack_44,auStack_14);
    if ((DAT_14028e48 == 0) && (iStack_44 != 0)) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,6,&local_40);
      DAT_14028e48 = (*pcVar3)(local_40,iStack_44,auStack_14,0,param_1 + 0x78);
    }
    iVar5 = FUN_14014cf0(param_1,*(int *)(param_1 + 0x62),0x8fd,0);
    FUN_1400e8f0(param_1);
  }
  return iVar5;
}



/* ==== FUN_1400f190 @ 1400f190 ==== 
 * signature: int __cdecl FUN_1400f190(int param_1, int param_2)
 * body: 1400f190-1400fa02
 */

int __cdecl FUN_1400f190(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  uint *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  char local_149;
  int local_148;
  short local_144;
  int local_142;
  byte *local_13e;
  int iStack_134;
  undefined2 uStack_130;
  short sStack_12e;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined4 local_128;
  int local_124;
  undefined2 local_120;
  uint local_11e;
  uint local_11a;
  int iStack_114;
  int iStack_110;
  undefined2 local_10c;
  uint local_10a;
  uint local_106;
  uint local_100 [5];
  undefined2 local_ec;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined4 local_de;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  undefined2 uStack_ac;
  int iStack_aa;
  undefined1 auStack_80 [2];
  undefined4 uStack_7e;
  undefined1 auStack_54 [84];
  
  local_149 = '\0';
  bVar3 = false;
  bVar4 = false;
  bVar2 = false;
  puVar8 = local_100;
  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  local_100[1] = 0xaa55a5a5;
  uVar5 = FUN_14010280(param_1,param_2,10,&local_144,(int *)0x0);
  if (((char)uVar5 == '\0') || (local_142 != 4)) {
    local_100[0] = *(uint *)(param_1 + 0x2c);
  }
  else {
    local_100[0] = ((int)(char)local_13e[2] | (int)(char)*local_13e << 0x10) << 8 |
                   (int)(char)local_13e[1] << 0x10 | (int)(char)local_13e[3];
  }
  local_100[3] = 1;
  local_100[4] = 0;
  uVar5 = FUN_14010280(param_1,param_2,0x28,&local_144,(int *)0x0);
  if (((char)uVar5 == '\0') || (local_142 != 4)) {
    uVar5 = FUN_14010280(param_1,param_2,0x2a,&local_144,(int *)0x0);
    if (((char)uVar5 == '\0') || (local_142 != 8)) {
      uVar5 = FUN_14010280(param_1,param_2,0x29,&local_144,(int *)0x0);
      if ((char)uVar5 == '\0') {
        pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,2,&local_148);
        DAT_14028e48 = (*pcVar6)(local_148,param_1,*(undefined4 *)(param_1 + 0x50),&local_120);
        if (DAT_14028e48 != 0) {
          return 0x10000;
        }
      }
      else {
        pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,2,&local_148);
        DAT_14028e48 = (*pcVar6)(local_148,param_1,local_13e,&local_120);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
      }
    }
    else {
      local_11e = ((uint)local_13e[2] | (uint)*local_13e << 0x10) << 8 | (uint)local_13e[1] << 0x10
                  | (uint)local_13e[3];
      local_11a = ((uint)local_13e[4] << 0x10 | (uint)local_13e[6]) << 8 |
                  (uint)local_13e[5] << 0x10 | (uint)local_13e[7];
      local_120 = 0x17;
      local_100[3] = local_11e;
      local_100[4] = local_11a;
    }
  }
  else {
    local_120 = 0x17;
    local_11e = ((uint)local_13e[2] | (uint)*local_13e << 0x10) << 8 | (uint)local_13e[1] << 0x10 |
                (uint)local_13e[3];
    local_11a = local_100[4];
    local_100[3] = local_11e;
  }
  uVar5 = FUN_14010280(param_1,param_2,0x1e,&local_144,(int *)0x0);
  if (((char)uVar5 == '\0') || (local_142 != 8)) {
    uVar5 = FUN_14010280(param_1,param_2,0x1f,&local_144,(int *)0x0);
    if ((char)uVar5 == '\0') {
      if ((*(int *)(param_1 + 0x3a) == 0) || (*(int *)(param_1 + 0x3e) == 0)) {
        return 0x10000;
      }
      iVar7 = FUN_140120a0(param_1,*(int *)(param_1 + 0x3e),&local_128);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
    else {
      iVar7 = FUN_140120a0(param_1,local_13e,&local_128);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
  }
  else {
    local_10a = ((uint)local_13e[2] | (uint)*local_13e << 0x10) << 8 | (uint)local_13e[1] << 0x10 |
                (uint)local_13e[3];
    local_106 = ((uint)local_13e[4] << 0x10 | (uint)local_13e[6]) << 8 | (uint)local_13e[5] << 0x10
                | (uint)local_13e[7];
    if (((uint)local_13e[5] << 0x10 & 0x40000) == 0) {
      return 0x10000;
    }
    local_10c = 100;
    iVar7 = FUN_14012230(param_1,(int)&local_10c,&local_128);
    if (iVar7 != 0) {
      return iVar7;
    }
  }
  local_e6 = 0;
  local_e2 = 0;
  local_de = 0;
  local_ec = 0x69;
  piVar1 = (int *)(param_1 + 0x4fc);
  local_ea = local_128;
  **(undefined1 **)(param_1 + 0x512) = 0;
  **(undefined1 **)(param_1 + 0x500) = **(undefined1 **)(param_1 + 0x512);
  *piVar1 = 0;
  uVar5 = FUN_14010280(param_1,param_2,0x15,&local_144,(int *)0x0);
  if ((char)uVar5 != '\0') {
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_148);
    DAT_14028e48 = (*pcVar6)(local_148,*(undefined4 *)(param_1 + 0x500),local_13e);
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_134);
    DAT_14028e48 = (*pcVar6)(iStack_134,piVar1,local_13e);
    *(undefined1 *)(*piVar1 + *(int *)(param_1 + 0x500)) = 0;
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,7,(int *)&uStack_12c);
    DAT_14028e48 = (*pcVar6)(CONCAT22(uStack_12a,uStack_12c),&iStack_110,local_13e,0x2f);
    *(int *)(param_1 + 0x50e) = iStack_110 - (int)local_13e;
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,(int *)&uStack_130);
    DAT_14028e48 = (*pcVar6)(CONCAT22(sStack_12e,uStack_130),*(undefined4 *)(param_1 + 0x512),
                             local_13e,*(undefined4 *)(param_1 + 0x50e));
    *(undefined1 *)(*(int *)(param_1 + 0x50e) + *(int *)(param_1 + 0x512)) = 0;
  }
  local_124 = 0;
  do {
    iVar7 = FUN_140103b0(param_1,param_2,&local_124,&local_144);
    if (iVar7 != 0) goto LAB_1400f6cc;
  } while ((local_144 < 0x32) || (0x3e < local_144));
  bVar2 = true;
LAB_1400f6cc:
  if (bVar2) {
    if (local_144 == 0x3d) {
      iVar7 = FUN_14011790(param_1,param_2,&uStack_da,&local_124,CONCAT11(*local_13e,local_13e[1]));
      if (iVar7 != 0) {
        return iVar7;
      }
      bVar4 = true;
    }
    else if (local_144 == 0x3a) {
      sStack_12e = CONCAT11(local_13e[2],local_13e[3]);
      iVar7 = FUN_14011230(param_1,param_2,&uStack_da,&iStack_114,&local_124,
                           CONCAT11(*local_13e,local_13e[1]),sStack_12e);
      if (iVar7 != 0) {
        return iVar7;
      }
      bVar3 = true;
    }
    else {
      iVar7 = FUN_14010a70(param_1,param_2,&uStack_da,&local_144,&local_149);
      if (iVar7 != 0) {
        return iVar7;
      }
    }
  }
  else {
    uStack_da = 0;
  }
  pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x16,&local_148);
  puVar13 = auStack_54;
  puVar11 = &uStack_da;
  puVar10 = &local_120;
  puVar9 = &local_ec;
  uVar12 = local_100[0];
  uVar5 = FUN_14008a80(param_1);
  DAT_14028e48 = (*pcVar6)(local_148,uVar5,puVar9,puVar10,puVar11,uVar12,puVar13);
  pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_134);
  puVar13 = auStack_54;
  uVar5 = FUN_14008a80(param_1);
  DAT_14028e48 = (*pcVar6)(iStack_134,uVar5,puVar13);
  pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,1,(int *)&uStack_12c);
  DAT_14028e48 = (*pcVar6)(CONCAT22(uStack_12a,uStack_12c),*(undefined4 *)(param_2 + 0x50));
  if (bVar3) {
    if ((local_149 != '\0') && (iVar7 = 1, 0 < sStack_12e)) {
      do {
        uStack_ac = 1;
        iStack_aa = iVar7;
        pcVar6 = (code *)FUN_14008ab0(iStack_114,0,0x16,&local_148);
        DAT_14028e48 = (*pcVar6)(local_148,s_insert_14026798,&uStack_ac,auStack_80);
        if (DAT_14028e48 != 0) {
          return DAT_14028e48;
        }
        iVar7 = iVar7 + 1;
        pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&iStack_134);
        DAT_14028e48 = (*pcVar6)(iStack_134,uStack_7e);
      } while (iVar7 <= sStack_12e);
    }
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x23,&local_148);
    DAT_14028e48 = (*pcVar6)(local_148,iStack_114);
    return 0;
  }
  if (local_149 != '\0') {
    pcVar6 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&local_148);
    DAT_14028e48 = (*pcVar6)(local_148,uStack_d8);
    return 0;
  }
  if (bVar4) {
    FUN_14011d90(param_1,(int)&uStack_da);
  }
  return 0;
}



/* ==== FUN_1400fa10 @ 1400fa10 ==== 
 * signature: undefined FUN_1400fa10(void)
 * body: 1400fa10-140101a2
 */

int FUN_1400fa10(int param_1,int param_2,int *param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  short sVar7;
  size_t sVar8;
  int *piVar9;
  char cVar10;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  int iStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  size_t sStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  size_t sStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined1 auStack_8 [8];
  
  iStack_34 = 8;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&iStack_48);
  DAT_14028e48 = (*pcVar3)(iStack_48,param_4,&iStack_38);
  uStack_50 = 0xd;
  uStack_4f = 10;
  uStack_4e = 0;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_30);
  DAT_14028e48 = (*pcVar3)(iStack_30,iStack_38,s_MfMp_TCP_1_1_140267cc);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_2c);
  DAT_14028e48 = (*pcVar3)(iStack_2c,iStack_38,&uStack_50);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_28);
  DAT_14028e48 = (*pcVar3)(iStack_28,iStack_38,s_Content_length__140267b8);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,(int *)&sStack_24);
  DAT_14028e48 = (*pcVar3)(sStack_24,&iStack_c,iStack_38);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_20);
  DAT_14028e48 = (*pcVar3)(iStack_20,iStack_38,s__140267b0);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_18);
  DAT_14028e48 = (*pcVar3)(iStack_18,iStack_38,&uStack_50);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_14);
  DAT_14028e48 = (*pcVar3)(iStack_14,iStack_38,&uStack_50);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_10);
  DAT_14028e48 = (*pcVar3)(iStack_10,&sStack_40,iStack_38);
  puVar6 = (undefined1 *)(iStack_38 + 0x29);
  sStack_24 = sStack_40;
  iStack_4c = 0;
  puStack_3c = puVar6;
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 8)) {
    iStack_4c = 10;
    FUN_140101b0(param_1,puVar6,10,4,(int *)(param_2 + 8),0,(void *)0x0,'\x01');
    puVar6 = puStack_3c + iStack_4c;
  }
  iVar4 = *(int *)(param_2 + 0x30);
  if (iVar4 == 0) {
    cVar10 = '\x01';
    piVar9 = (int *)(param_2 + 0x2c);
    iStack_4c = iStack_4c + 10;
    sVar8 = 4;
    sVar7 = 0x28;
LAB_1400fd6f:
    FUN_140101b0(param_1,puVar6,sVar7,sVar8,piVar9,0,(void *)0x0,cVar10);
    puVar6 = puStack_3c + iStack_4c;
  }
  else {
    if (*(int *)(param_2 + 0x2c) == 0x4b0) {
      iStack_48 = -0x4ffc0000;
      uStack_41 = (undefined1)iVar4;
      uStack_42 = (undefined1)((uint)iVar4 >> 8);
      cVar10 = '\0';
      uStack_43 = (undefined1)((uint)iVar4 >> 0x10);
      piVar9 = &iStack_48;
      uStack_44 = (undefined1)((uint)iVar4 >> 0x18);
      iStack_4c = iStack_4c + 0xe;
      sVar8 = 8;
      sVar7 = 0x2a;
      goto LAB_1400fd6f;
    }
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_48);
    DAT_14028e48 = (*pcVar3)(iStack_48,&iStack_1c,param_2 + 0xc,*(undefined4 *)(param_1 + 0x50));
    if (iStack_1c != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_48);
      DAT_14028e48 = (*pcVar3)(iStack_48,&sStack_40,param_2 + 0xc);
      sVar8 = sStack_40 + 1;
      cVar10 = '\0';
      piVar9 = (int *)(param_2 + 0xc);
      iStack_4c = iStack_4c + sStack_40 + 7;
      sVar7 = 0x29;
      sStack_40 = sVar8;
      goto LAB_1400fd6f;
    }
  }
  uVar1 = *(uint *)(param_2 + 0x138);
  if ((uVar1 & 0x40000) == 0) {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_48);
    DAT_14028e48 = (*pcVar3)(iStack_48,&iStack_1c,param_2 + 0x34,*(undefined4 *)(param_1 + 0x3e));
    if (iStack_1c != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_48);
      DAT_14028e48 = (*pcVar3)(iStack_48,&sStack_40,param_2 + 0x34);
      sVar8 = sStack_40 + 1;
      piVar9 = (int *)(param_2 + 0x34);
      iStack_4c = iStack_4c + sStack_40 + 7;
      sVar7 = 0x1f;
      sStack_40 = sVar8;
      goto LAB_1400fe73;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x134);
    iStack_48 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    uStack_41 = (undefined1)uVar1;
    iStack_4c = iStack_4c + 0xe;
    uStack_42 = (undefined1)(uVar1 >> 8);
    uStack_43 = (undefined1)(uVar1 >> 0x10);
    piVar9 = &iStack_48;
    uStack_44 = (undefined1)(uVar1 >> 0x18);
    sVar8 = 8;
    sVar7 = 0x1e;
LAB_1400fe73:
    FUN_140101b0(param_1,puVar6,sVar7,sVar8,piVar9,0,(void *)0x0,'\0');
    puVar6 = puStack_3c + iStack_4c;
  }
  if (*(short *)(param_2 + 0x23c) == 0x75) {
    iVar4 = FUN_140113c0(param_1,param_2 + 0x23c,&DAT_140267ac,puVar6,&iStack_4c,param_4,param_5,
                         (int *)&puStack_3c);
    if (iVar4 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_48);
LAB_1401000a:
      DAT_14028e48 = (*pcVar3)(iStack_48,param_4);
      return iVar4;
    }
  }
  else if ((*(uint *)(param_2 + 0x268) & 0x200000) == 0) {
    if (*(short *)(param_2 + 0x23c) == 0) goto LAB_14010027;
    iVar4 = FUN_140104c0(param_1,(short *)(param_2 + 0x23c),&DAT_140267ac,puVar6,&iStack_4c,
                         *(uint *)(param_2 + 0x268),param_4,param_5,(int *)&puStack_3c);
    if (iVar4 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_48);
      goto LAB_1401000a;
    }
  }
  else {
    puVar5 = (undefined4 *)FUN_14008a90(0,*(int *)(param_2 + 0x23e));
    uVar2 = *puVar5;
    *(undefined4 *)(param_2 + 0x242) = 0;
    *(undefined4 *)(param_2 + 0x23e) = uVar2;
    *(undefined4 *)(param_2 + 0x246) = 0;
    *(undefined4 *)(param_2 + 0x24a) = 0;
    *(undefined2 *)(param_2 + 0x23c) = 0x69;
    iVar4 = FUN_14010ee0(param_1,param_2 + 0x23c,&DAT_140267ac,puVar6,&iStack_4c,param_4,param_5,
                         (int *)&puStack_3c);
    if (iVar4 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_48);
      goto LAB_1401000a;
    }
  }
  puVar6 = puStack_3c + iStack_4c;
LAB_14010027:
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_48);
  DAT_14028e48 = (*pcVar3)(iStack_48,&sStack_40,(undefined4 *)(param_2 + 0x26c));
  sVar8 = sStack_40 + 1;
  iStack_4c = iStack_4c + sStack_40 + 7;
  sStack_40 = sVar8;
  FUN_140101b0(param_1,puVar6,0x15,sVar8,(undefined4 *)(param_2 + 0x26c),0,(void *)0x0,'\0');
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_30);
  DAT_14028e48 = (*pcVar3)(iStack_30,param_4);
  FUN_14012010(iStack_4c,(int)auStack_8);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_2c);
  DAT_14028e48 = (*pcVar3)(iStack_2c,&sStack_40,auStack_8);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,6,&iStack_28);
  DAT_14028e48 = (*pcVar3)(iStack_28,param_4,&iStack_38);
  FID_conflict__memcpy((void *)(iStack_c + iStack_38),auStack_8,sStack_40);
  *param_3 = iStack_4c + sStack_24;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_20);
  DAT_14028e48 = (*pcVar3)(iStack_20,param_4);
  return 0;
}



/* ==== FUN_140101a3 @ 140101a3 ==== 
 * signature: undefined FUN_140101a3(void)
 * body: 140101a3-140101a3
 */

void FUN_140101a3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101a4 @ 140101a4 ==== 
 * signature: undefined FUN_140101a4(void)
 * body: 140101a4-140101a4
 */

void FUN_140101a4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101a5 @ 140101a5 ==== 
 * signature: undefined FUN_140101a5(void)
 * body: 140101a5-140101a5
 */

void FUN_140101a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101a6 @ 140101a6 ==== 
 * signature: undefined FUN_140101a6(void)
 * body: 140101a6-140101a6
 */

void FUN_140101a6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101a7 @ 140101a7 ==== 
 * signature: undefined FUN_140101a7(void)
 * body: 140101a7-140101a7
 */

void FUN_140101a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101a8 @ 140101a8 ==== 
 * signature: undefined FUN_140101a8(void)
 * body: 140101a8-140101a8
 */

void FUN_140101a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101a9 @ 140101a9 ==== 
 * signature: undefined FUN_140101a9(void)
 * body: 140101a9-140101a9
 */

void FUN_140101a9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101aa @ 140101aa ==== 
 * signature: undefined FUN_140101aa(void)
 * body: 140101aa-140101aa
 */

void FUN_140101aa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101ab @ 140101ab ==== 
 * signature: undefined FUN_140101ab(void)
 * body: 140101ab-140101ab
 */

void FUN_140101ab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101ac @ 140101ac ==== 
 * signature: undefined FUN_140101ac(void)
 * body: 140101ac-140101ac
 */

void FUN_140101ac(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101ad @ 140101ad ==== 
 * signature: undefined FUN_140101ad(void)
 * body: 140101ad-140101ad
 */

void FUN_140101ad(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101ae @ 140101ae ==== 
 * signature: undefined FUN_140101ae(void)
 * body: 140101ae-140101ae
 */

void FUN_140101ae(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101af @ 140101af ==== 
 * signature: undefined FUN_140101af(void)
 * body: 140101af-140101af
 */

void FUN_140101af(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140101b0 @ 140101b0 ==== 
 * signature: undefined __cdecl FUN_140101b0(undefined4 param_1, undefined1 * param_2, short param_3, size_t param_4, undefined4 * param_5, size_t param_6, void * param_7, char param_8)
 * body: 140101b0-14010276
 */

void __cdecl
FUN_140101b0(undefined4 param_1,undefined1 *param_2,short param_3,size_t param_4,undefined4 *param_5
            ,size_t param_6,void *param_7,char param_8)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  param_2[1] = (undefined1)param_3;
  *param_2 = param_3._1_1_;
  param_2[5] = (char)param_4;
  param_2[4] = (char)(param_4 >> 8);
  param_2[3] = (char)(param_4 >> 0x10);
  puVar3 = param_2 + 6;
  param_2[2] = (char)(param_4 >> 0x18);
  if (param_8 == '\x01') {
    if (param_4 == 2) {
      uVar1 = *(undefined2 *)param_5;
      param_2[7] = (char)uVar1;
      *puVar3 = (char)((ushort)uVar1 >> 8);
    }
    else if (param_4 == 4) {
      uVar2 = *param_5;
      param_2[9] = (char)uVar2;
      param_2[8] = (char)((uint)uVar2 >> 8);
      param_2[7] = (char)((uint)uVar2 >> 0x10);
      *puVar3 = (char)((uint)uVar2 >> 0x18);
    }
    else if (param_4 == 8) {
      FUN_14010490((int)puVar3,(int)param_5);
    }
  }
  else {
    FID_conflict__memcpy(puVar3,param_5,param_4);
  }
  puVar3 = puVar3 + param_4;
  if ((0x31 < param_3) && (param_3 < 0x3f)) {
    puVar3[1] = (char)param_6;
    *puVar3 = (char)(param_6 >> 8);
    if (0 < (int)param_6) {
      FID_conflict__memcpy(puVar3 + 2,param_7,param_6);
    }
  }
  return;
}



/* ==== FUN_14010280 @ 14010280 ==== 
 * signature: undefined4 __cdecl FUN_14010280(undefined4 param_1, int param_2, short param_3, short * param_4, int * param_5)
 * body: 14010280-140103a7
 */

uint __cdecl FUN_14010280(undefined4 param_1,int param_2,short param_3,short *param_4,int *param_5)

{
  undefined1 *puVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  
  iVar5 = 0;
  param_4[5] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  *param_4 = param_3;
  if (param_5 != (int *)0x0) {
    iVar5 = *param_5;
  }
  uVar4 = param_2;
  if (iVar5 < *(int *)(param_2 + 0x4c)) {
    do {
      puVar1 = (undefined1 *)(*(int *)(param_2 + 0x50) + iVar5);
      sVar2 = CONCAT11(*puVar1,puVar1[1]);
      uVar4 = ((uint)(byte)puVar1[2] << 0x10 | (uint)*(byte *)(*(int *)(param_2 + 0x50) + 4 + iVar5)
              ) << 8 | (uint)(byte)puVar1[3] << 0x10 | (uint)(byte)puVar1[5];
      if ((sVar2 < 0x32) || (0x3e < sVar2)) {
        sVar7 = 0;
        sVar6 = 0;
      }
      else {
        sVar6 = 2;
        sVar7 = CONCAT11(puVar1[uVar4 + 6],puVar1[uVar4 + 7]);
      }
      if (sVar2 == param_3) {
        piVar3 = (int *)(puVar1 + 6);
        *(uint *)(param_4 + 1) = uVar4;
        *(int **)(param_4 + 3) = piVar3;
        if (sVar6 != 0) {
          param_4[5] = sVar7;
          piVar3 = (int *)(puVar1 + uVar4 + 8);
          *(int **)(param_4 + 6) = piVar3;
        }
        if (param_5 != (int *)0x0) {
          *param_5 = (int)sVar7 + (int)sVar6 + uVar4 + iVar5 + 6;
          piVar3 = param_5;
        }
        return CONCAT31((int3)((uint)piVar3 >> 8),1);
      }
      uVar4 = (int)sVar7 + (int)sVar6 + uVar4 + 6;
      iVar5 = iVar5 + uVar4;
    } while (iVar5 < *(int *)(param_2 + 0x4c));
  }
  return uVar4 & 0xffffff00;
}



/* ==== FUN_140103b0 @ 140103b0 ==== 
 * signature: undefined4 __cdecl FUN_140103b0(undefined4 param_1, int param_2, int * param_3, short * param_4)
 * body: 140103b0-14010489
 */

undefined4 __cdecl FUN_140103b0(undefined4 param_1,int param_2,int *param_3,short *param_4)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short local_6;
  
  iVar4 = 0;
  if (param_3 != (int *)0x0) {
    iVar4 = *param_3;
  }
  if (iVar4 <= *(int *)(param_2 + 0x4c) + -2) {
    puVar1 = (undefined1 *)(*(int *)(param_2 + 0x50) + iVar4);
    sVar2 = CONCAT11(*puVar1,*(undefined1 *)(*(int *)(param_2 + 0x50) + 1 + iVar4));
    *param_4 = sVar2;
    uVar3 = ((uint)(byte)puVar1[2] << 0x10 | (uint)(byte)puVar1[4]) << 8 |
            (uint)(byte)puVar1[3] << 0x10 | (uint)(byte)puVar1[5];
    *(uint *)(param_4 + 1) = uVar3;
    *(undefined1 **)(param_4 + 3) = puVar1 + 6;
    if ((sVar2 < 0x32) || (0x3e < sVar2)) {
      sVar2 = 0;
      local_6 = 0;
    }
    else {
      local_6 = 2;
      sVar2 = CONCAT11(puVar1[uVar3 + 6],puVar1[uVar3 + 7]);
      param_4[5] = sVar2;
      *(undefined1 **)(param_4 + 6) = puVar1 + uVar3 + 8;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = (int)sVar2 + (int)local_6 + iVar4 + uVar3 + 6;
    }
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_14010490 @ 14010490 ==== 
 * signature: undefined __cdecl FUN_14010490(int param_1, int param_2)
 * body: 14010490-140104b6
 */

void __cdecl FUN_14010490(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 0;
  do {
    iVar2 = (int)sVar1;
    sVar1 = sVar1 + 1;
    *(undefined1 *)(param_1 + iVar2) = *(undefined1 *)((param_2 - iVar2) + 7);
  } while (sVar1 < 8);
  return;
}



/* ==== FUN_140104c0 @ 140104c0 ==== 
 * signature: int __cdecl FUN_140104c0(undefined4 param_1, short * param_2, char * param_3, undefined1 * param_4, int * param_5, uint param_6, undefined4 param_7, int * param_8, int * param_9)
 * body: 140104c0-14010a60
 */

int __cdecl
FUN_140104c0(undefined4 param_1,short *param_2,char *param_3,undefined1 *param_4,int *param_5,
            uint param_6,undefined4 param_7,int *param_8,int *param_9)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar6;
  char cVar7;
  code *pcVar4;
  int iVar5;
  char cVar8;
  uint uVar9;
  char *pcVar10;
  short sVar11;
  size_t sVar12;
  int *piVar13;
  short local_126;
  int local_124;
  undefined4 local_120;
  undefined1 local_11c [8];
  size_t local_114;
  int local_110;
  size_t local_10c;
  int local_108;
  undefined4 *puStack_104;
  int local_100 [64];
  
  uVar9 = 0xffffffff;
  pcVar10 = param_3;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar6 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar6 != '\0');
  uVar9 = ~uVar9;
  sVar1 = uVar9 - 1;
  sVar11 = *param_2;
  if (sVar11 == 1) {
    if ((param_6 & 0x100000) != 0) {
      uVar2 = *(undefined4 *)(param_2 + 1);
      local_110 = 8;
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,5,&local_124);
      DAT_14028e48 = (*pcVar4)(local_124,uVar2,&local_10c);
      iVar5 = FUN_140119a0(param_1,*param_5,local_10c + sVar1 + 8,param_7,param_8,param_9);
      if (iVar5 != 0) {
        return iVar5;
      }
      pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_110),1,6,&local_124);
      DAT_14028e48 = (*pcVar4)(local_124,uVar2,&puStack_104);
      if (DAT_14028e48 == 0) {
        iVar5 = *param_5;
        iVar3 = *param_9;
        *param_5 = *param_5 + sVar1 + local_10c + 8;
        FUN_140101b0(param_1,(undefined1 *)(iVar5 + iVar3),0x3c,local_10c,puStack_104,sVar1,param_3,
                     '\0');
        pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_110),1,7,&local_124);
        DAT_14028e48 = (*pcVar4)(local_124,uVar2);
        return 0;
      }
      return DAT_14028e48;
    }
    local_108 = *(int *)(param_2 + 1);
    cVar6 = '\x01';
    piVar13 = &local_108;
    *param_5 = *param_5 + uVar9 + 0xb;
    sVar11 = 0x32;
    sVar12 = 4;
  }
  else if (sVar11 == 0x66) {
    iVar5 = *(int *)(param_2 + 5);
    *(undefined1 *)(*(int *)(param_2 + 7) + iVar5) = 0;
    local_114 = iVar5 + 1;
    iVar5 = FUN_140119a0(param_1,*param_5,local_114 + sVar1 + 8,param_7,param_8,param_9);
    if (iVar5 != 0) {
      return iVar5;
    }
    cVar6 = '\0';
    param_4 = (undefined1 *)(*param_9 + *param_5);
    *param_5 = *param_5 + sVar1 + local_114 + 8;
    piVar13 = *(int **)(param_2 + 7);
    sVar11 = 0x33;
    sVar12 = local_114;
  }
  else if (sVar11 == 0x14) {
    local_126 = param_2[1];
    piVar13 = (int *)&local_126;
    cVar6 = '\x01';
    *param_5 = *param_5 + uVar9 + 9;
    sVar12 = 2;
    sVar11 = 0x35;
  }
  else if (sVar11 == 0xb) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    local_124 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    uVar2 = *(undefined4 *)(param_2 + 3);
    cVar6 = '\0';
    local_120 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0xf;
    sVar12 = 8;
    sVar11 = 0x36;
  }
  else if (sVar11 == 10) {
    cVar6 = (char)((ushort)param_2[1] >> 8);
    cVar7 = cVar6 >> 7;
    local_124 = CONCAT31(CONCAT21(CONCAT11((char)param_2[1],cVar6),cVar7),cVar7);
    cVar7 = (char)((ushort)param_2[2] >> 8);
    cVar6 = '\0';
    cVar8 = cVar7 >> 7;
    local_120 = CONCAT31(CONCAT21(CONCAT11((char)param_2[2],cVar7),cVar8),cVar8);
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0xf;
    sVar12 = 8;
    sVar11 = 0x37;
  }
  else if (sVar11 == 0xf) {
    local_120 = *(undefined4 *)(param_2 + 3);
    local_124 = *(int *)(param_2 + 1);
    cVar6 = '\x01';
    piVar13 = &local_124;
    sVar12 = 8;
    *param_5 = *param_5 + uVar9 + 0xf;
    sVar11 = 0x38;
  }
  else if (sVar11 == 0x10) {
    FUN_14010490((int)&local_124,(int)(param_2 + 1));
    FUN_14010490((int)local_11c,(int)(param_2 + 5));
    cVar6 = '\0';
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0x17;
    sVar12 = 0x10;
    sVar11 = 0x39;
  }
  else if (sVar11 == 100) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    local_124 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    uVar2 = *(undefined4 *)(param_2 + 3);
    cVar6 = '\0';
    local_120 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0xf;
    sVar12 = 8;
    sVar11 = 0x3e;
  }
  else if (sVar11 == 9) {
    uVar2 = *(undefined4 *)(param_2 + 1);
    local_124 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    uVar2 = *(undefined4 *)(param_2 + 5);
    cVar6 = '\0';
    local_120 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    piVar13 = &local_124;
    *param_5 = *param_5 + uVar9 + 0x13;
    sVar12 = 0xc;
    sVar11 = 0x3b;
  }
  else {
    if (sVar11 != 0x69) {
      return 0;
    }
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&local_124);
    DAT_14028e48 = (*pcVar4)(local_124,*(undefined4 *)(param_2 + 1),0x2f,local_100,0);
    if (DAT_14028e48 != 0) {
      return DAT_14028e48;
    }
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_124);
    DAT_14028e48 = (*pcVar4)(local_124,&local_114,local_100);
    sVar12 = local_114 + 1;
    cVar6 = '\0';
    piVar13 = local_100;
    *param_5 = *param_5 + sVar12 + sVar1 + 8;
    sVar11 = 0x34;
    local_114 = sVar12;
  }
  FUN_140101b0(param_1,param_4,sVar11,sVar12,piVar13,sVar1,param_3,cVar6);
  return 0;
}



/* ==== __break @ 14010a61 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a61-14010a61
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a62 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a62-14010a62
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a63 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a63-14010a63
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a64 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a64-14010a64
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a65 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a65-14010a65
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a66 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a66-14010a66
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a67 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a67-14010a67
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a68 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a68-14010a68
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a69 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a69-14010a69
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6a-14010a6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6b-14010a6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a6c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6c-14010a6c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a6d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6d-14010a6d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6e-14010a6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14010a6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6f-14010a6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14010a70 @ 14010a70 ==== 
 * signature: int __cdecl FUN_14010a70(undefined4 param_1, undefined4 param_2, undefined2 * param_3, short * param_4, undefined1 * param_5)
 * body: 14010a70-14010ed3
 */

int __cdecl
FUN_14010a70(undefined4 param_1,undefined4 param_2,undefined2 *param_3,short *param_4,
            undefined1 *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  short sVar17;
  byte *pbVar18;
  int iVar19;
  code *pcVar20;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  sVar17 = *param_4;
  if ((sVar17 == 0x32) && (*(int *)(param_4 + 1) == 4)) {
    pbVar18 = *(byte **)(param_4 + 3);
    bVar1 = pbVar18[2];
    bVar2 = *pbVar18;
    bVar3 = pbVar18[1];
    bVar4 = pbVar18[3];
    *param_3 = 1;
    *(uint *)(param_3 + 1) =
         ((uint)bVar1 | (uint)bVar2 << 0x10) << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
    return 0;
  }
  if (sVar17 == 0x33) {
    *param_3 = 0x66;
    *(undefined4 *)(param_3 + 1) = param_1;
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_4 + 1);
    *(int *)(param_3 + 5) = *(int *)(param_4 + 1) + -1;
    *(undefined4 *)(param_3 + 7) = *(undefined4 *)(param_4 + 3);
    return 0;
  }
  if (sVar17 == 0x34) {
    *param_3 = 0x6a;
    iVar19 = FUN_140120a0(param_1,*(undefined4 *)(param_4 + 3),&local_4);
    if (iVar19 == 0) {
      *param_3 = 0x69;
      *(undefined4 *)(param_3 + 3) = 0;
      *(undefined4 *)(param_3 + 5) = 0;
      *(undefined4 *)(param_3 + 1) = local_4;
      *(undefined4 *)(param_3 + 7) = 0;
      return 0;
    }
  }
  else {
    if (sVar17 == 0x35) {
      uVar5 = **(undefined1 **)(param_4 + 3);
      uVar6 = (*(undefined1 **)(param_4 + 3))[1];
      *param_3 = 0x14;
      param_3[1] = CONCAT11(uVar5,uVar6);
      return 0;
    }
    if (sVar17 == 0x36) {
      pbVar18 = *(byte **)(param_4 + 3);
      bVar1 = pbVar18[2];
      bVar2 = *pbVar18;
      bVar3 = pbVar18[1];
      bVar4 = pbVar18[3];
      bVar7 = pbVar18[6];
      bVar8 = pbVar18[4];
      bVar9 = pbVar18[5];
      bVar10 = pbVar18[7];
      *param_3 = 0xb;
      *(uint *)(param_3 + 1) =
           ((uint)bVar1 | (uint)bVar2 << 0x10) << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
      *(uint *)(param_3 + 3) =
           ((uint)bVar8 << 0x10 | (uint)bVar7) << 8 | (uint)bVar9 << 0x10 | (uint)bVar10;
      return 0;
    }
    if (sVar17 == 0x37) {
      iVar19 = *(int *)(param_4 + 3);
      uVar5 = *(undefined1 *)(iVar19 + 2);
      uVar6 = *(undefined1 *)(iVar19 + 3);
      uVar11 = *(undefined1 *)(iVar19 + 6);
      uVar12 = *(undefined1 *)(iVar19 + 7);
      *param_3 = 10;
      param_3[2] = CONCAT11(uVar11,uVar12);
      param_3[1] = CONCAT11(uVar5,uVar6);
      return 0;
    }
    if ((sVar17 == 0x38) && (*(int *)(param_4 + 1) == 8)) {
      FUN_14010490((int)&local_18,*(int *)(param_4 + 3));
      *param_3 = 0xf;
      *(undefined4 *)(param_3 + 3) = local_14;
      *(int *)(param_3 + 1) = local_18;
      return 0;
    }
    if (sVar17 == 0x39) {
      FUN_14010490((int)&local_18,*(int *)(param_4 + 3));
      FUN_14010490((int)&local_c,*(int *)(param_4 + 3) + 8);
      *param_3 = 0x10;
      *(undefined4 *)(param_3 + 3) = local_14;
      *(undefined4 *)(param_3 + 7) = local_8;
      *(int *)(param_3 + 1) = local_18;
      *(undefined4 *)(param_3 + 9) = 0;
      *(undefined4 *)(param_3 + 0xb) = 0x408f4000;
      *(void **)(param_3 + 5) = local_c;
      return 0;
    }
    if (sVar17 == 0x3e) {
      pbVar18 = *(byte **)(param_4 + 3);
      bVar1 = pbVar18[2];
      bVar2 = *pbVar18;
      bVar3 = pbVar18[1];
      bVar4 = pbVar18[3];
      bVar7 = pbVar18[6];
      bVar8 = pbVar18[4];
      bVar9 = pbVar18[5];
      bVar10 = pbVar18[7];
      *param_3 = 100;
      *(uint *)(param_3 + 1) =
           ((uint)bVar1 | (uint)bVar2 << 0x10) << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
      *(uint *)(param_3 + 3) =
           ((uint)bVar8 << 0x10 | (uint)bVar7) << 8 | (uint)bVar9 << 0x10 | (uint)bVar10;
      return 0;
    }
    if (sVar17 == 0x3b) {
      pbVar18 = *(byte **)(param_4 + 3);
      bVar1 = pbVar18[2];
      bVar2 = *pbVar18;
      bVar3 = pbVar18[1];
      bVar4 = pbVar18[3];
      bVar7 = pbVar18[6];
      bVar8 = pbVar18[4];
      bVar9 = pbVar18[5];
      bVar10 = pbVar18[7];
      bVar13 = pbVar18[10];
      bVar14 = pbVar18[8];
      bVar15 = pbVar18[9];
      bVar16 = pbVar18[0xb];
      *param_3 = 9;
      *(uint *)(param_3 + 1) =
           ((uint)bVar1 | (uint)bVar2 << 0x10) << 8 | (uint)bVar3 << 0x10 | (uint)bVar4;
      *(uint *)(param_3 + 3) =
           ((uint)bVar8 << 0x10 | (uint)bVar7) << 8 | (uint)bVar9 << 0x10 | (uint)bVar10;
      *(uint *)(param_3 + 5) =
           ((uint)bVar14 << 0x10 | (uint)bVar13) << 8 | (uint)bVar15 << 0x10 | (uint)bVar16;
      return 0;
    }
    if (sVar17 == 0x3c) {
      *param_5 = 1;
      pcVar20 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,2,&local_18);
      iVar19 = (*pcVar20)(local_18,*(undefined4 *)(param_4 + 1),&local_10);
      DAT_14028e48 = iVar19;
      if (iVar19 == 0) {
        pcVar20 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_18);
        iVar19 = (*pcVar20)(local_18,local_10,&local_c);
        DAT_14028e48 = iVar19;
        if (iVar19 == 0) {
          FID_conflict__memcpy(local_c,*(void **)(param_4 + 3),*(size_t *)(param_4 + 1));
          pcVar20 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_18);
          DAT_14028e48 = (*pcVar20)(local_18,local_10);
          *param_3 = 1;
          *(undefined4 *)(param_3 + 1) = local_10;
          return 0;
        }
      }
    }
    else {
      iVar19 = 0x10000;
    }
  }
  return iVar19;
}



/* ==== FUN_14010ee0 @ 14010ee0 ==== 
 * signature: int __cdecl FUN_14010ee0(undefined4 param_1, int param_2, char * param_3, undefined1 * param_4, int * param_5, undefined4 param_6, int * param_7, int * param_8)
 * body: 14010ee0-14011221
 */

int __cdecl
FUN_14010ee0(undefined4 param_1,int param_2,char *param_3,undefined1 *param_4,int *param_5,
            undefined4 param_6,int *param_7,int *param_8)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int local_7c;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined2 local_74;
  int local_72;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_66;
  int iStack_60;
  int iStack_5c;
  short asStack_58 [22];
  undefined2 uStack_2c;
  int iStack_2a;
  
  local_6c = *(undefined4 *)(param_2 + 2);
  local_66 = 0;
  local_68 = 1;
  local_74 = 1;
  local_72 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_7c);
  iVar3 = (*pcVar2)(local_7c,local_6c,s_listtype_140267f0,0,&local_68);
  DAT_14028e48 = iVar3;
  if (iVar3 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_7c);
    DAT_14028e48 = (*pcVar2)(local_7c,param_6);
    return iVar3;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_7c);
  iVar3 = (*pcVar2)(local_7c,local_6c,s_count_140267dc,0,&local_74);
  DAT_14028e48 = iVar3;
  if (iVar3 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_7c);
    DAT_14028e48 = (*pcVar2)(local_7c,param_6);
    return iVar3;
  }
  uVar5 = 0xffffffff;
  uStack_77 = (undefined1)local_66;
  uStack_78 = (undefined1)((uint)local_66 >> 8);
  uStack_75 = (undefined1)local_72;
  uStack_76 = (undefined1)((uint)local_72 >> 8);
  pcVar7 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  *param_5 = *param_5 + ~uVar5 + 0xb;
  uVar5 = 0xffffffff;
  pcVar7 = param_3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar3 = 1;
  FUN_140101b0(param_1,param_4,0x3a,4,(undefined4 *)&uStack_78,~uVar5 - 1,param_3,'\0');
  puVar6 = (undefined1 *)(*param_8 + *param_5);
  if (0 < local_72) {
    do {
      uStack_2c = 1;
      asStack_58[0] = 0x6a;
      iStack_2a = iVar3;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_7c);
      DAT_14028e48 = (*pcVar2)(local_7c,local_6c,s_value_14026664,&uStack_2c,asStack_58);
      iStack_5c = DAT_14028e48;
      if (DAT_14028e48 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_7c);
        DAT_14028e48 = (*pcVar2)(local_7c,param_6);
        return iStack_5c;
      }
      iVar4 = FUN_140104c0(param_1,asStack_58,&DAT_140267ac,puVar6,param_5,0,param_6,param_7,param_8
                          );
      if (iVar4 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_7c);
        DAT_14028e48 = (*pcVar2)(local_7c,param_6);
        return iVar4;
      }
      iVar3 = iVar3 + 1;
      puVar6 = (undefined1 *)(*param_8 + *param_5);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_60);
      DAT_14028e48 = (*pcVar2)(iStack_60,param_1,asStack_58);
    } while (iVar3 <= local_72);
  }
  return 0;
}



/* ==== __break @ 14011222 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011222-14011222
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14011223 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011223-14011223
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14011224 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011224-14011224
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14011225 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011225-14011225
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14011226 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011226-14011226
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14011227 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011227-14011227
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14011228 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011228-14011228
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14011229 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14011229-14011229
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401122a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122a-1401122a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401122b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122b-1401122b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401122c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122c-1401122c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401122d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122d-1401122d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401122e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122e-1401122e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401122f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122f-1401122f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14011230 @ 14011230 ==== 
 * signature: int __cdecl FUN_14011230(undefined4 param_1, int param_2, undefined2 * param_3, int * param_4, int * param_5, short param_6, short param_7)
 * body: 14011230-140113b1
 */

int __cdecl
FUN_14011230(undefined4 param_1,int param_2,undefined2 *param_3,int *param_4,int *param_5,
            short param_6,short param_7)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_99;
  int local_98;
  short asStack_94 [8];
  undefined2 uStack_84;
  int iStack_82;
  undefined2 uStack_58;
  int iStack_56;
  undefined2 auStack_2c [22];
  
  local_99 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0xe,&local_98);
  iVar3 = (*pcVar2)(local_98,param_1,s_ListMod_14026808,param_4);
  DAT_14028e48 = iVar3;
  if (iVar3 == 0) {
    iStack_82 = (int)param_6;
    uStack_84 = 1;
    pcVar2 = (code *)FUN_14008ab0(*param_4,0,0x17,&local_98);
    iVar3 = (*pcVar2)(local_98,s_listtype_140267f0,0,&uStack_84);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      iVar3 = 1;
      if (0 < param_7) {
        do {
          DAT_14028e48 = 0;
          uStack_58 = 1;
          iStack_56 = iVar3;
          FUN_140103b0(param_1,param_2,param_5,asStack_94);
          iVar4 = FUN_14010a70(param_1,param_2,auStack_2c,asStack_94,&local_99);
          if (iVar4 != 0) {
            return iVar4;
          }
          pcVar2 = (code *)FUN_14008ab0(*param_4,0,0x17,&local_98);
          DAT_14028e48 = (*pcVar2)(local_98,s_insert_14026798,&uStack_58,auStack_2c);
          if (DAT_14028e48 != 0) {
            return DAT_14028e48;
          }
          iVar3 = iVar3 + 1;
          DAT_14028e48 = 0;
        } while (iVar3 <= param_7);
      }
      puVar5 = (undefined4 *)FUN_14008a90(0,*param_4);
      uVar1 = *puVar5;
      *param_3 = 0x69;
      *(undefined4 *)(param_3 + 3) = 0;
      iVar3 = 0;
      *(undefined4 *)(param_3 + 5) = 0;
      *(undefined4 *)(param_3 + 1) = uVar1;
      *(undefined4 *)(param_3 + 7) = 0;
    }
  }
  return iVar3;
}



/* ==== __break @ 140113b2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b2-140113b2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113b3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b3-140113b3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113b4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b4-140113b4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113b5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b5-140113b5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113b6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b6-140113b6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113b7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b7-140113b7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113b8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b8-140113b8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113b9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113b9-140113b9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113ba-140113ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113bb-140113bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113bc-140113bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113bd-140113bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113be-140113be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140113bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113bf-140113bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140113c0 @ 140113c0 ==== 
 * signature: int __cdecl FUN_140113c0(undefined4 param_1, int param_2, char * param_3, undefined1 * param_4, int * param_5, undefined4 param_6, int * param_7, int * param_8)
 * body: 140113c0-140116f3
 */

int __cdecl
FUN_140113c0(undefined4 param_1,int param_2,char *param_3,undefined1 *param_4,int *param_5,
            undefined4 param_6,int *param_7,int *param_8)

{
  char cVar1;
  code *pcVar2;
  size_t sVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  int local_1a8;
  undefined2 uStack_1a4;
  char *pcStack_1a2;
  char *pcStack_19e;
  int local_198;
  undefined2 local_194;
  int local_192;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  short sStack_16c;
  char *pcStack_16a;
  char *pcStack_166;
  undefined4 uStack_162;
  undefined4 uStack_15e;
  undefined1 auStack_140 [20];
  undefined2 uStack_12c;
  int iStack_12a;
  char acStack_100 [256];
  
  iVar4 = -1;
  pcVar6 = param_3;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_194 = 1;
  local_192 = 0;
  local_1a8 = 0x10;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_198);
  DAT_14028e48 = (*pcVar2)(local_198,*(undefined4 *)(param_2 + 6),s_count_140267dc,0,&local_194);
  if ((DAT_14028e48 != 0) || (local_192 < 1)) {
    return 0;
  }
  uStack_1a9 = (undefined1)local_192;
  uStack_1aa = (undefined1)((uint)local_192 >> 8);
  sVar3 = (size_t)(short)(~(ushort)iVar4 - 1);
  *param_5 = *param_5 + sVar3 + 10;
  FUN_140101b0(param_1,param_4,0x3d,2,(undefined4 *)&uStack_1aa,sVar3,param_3,'\0');
  iStack_188 = 1;
  puVar5 = (undefined1 *)(*param_5 + *param_8);
  do {
    pcStack_1a2 = acStack_100;
    iStack_12a = iStack_188;
    pcStack_19e = (char *)0x0;
    uStack_12c = 1;
    uStack_1a4 = 0x75;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_1a8),1,5,&local_198);
    DAT_14028e48 = (*pcVar2)(local_198,*(undefined4 *)(param_2 + 6),s_value_14026664,&uStack_12c,
                             &uStack_1a4);
    if (DAT_14028e48 != 0) {
      return 0;
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,5,&iStack_184);
    DAT_14028e48 = (*pcVar2)(iStack_184,pcStack_19e,&iStack_18c);
    if ((DAT_14028e48 == 0) && (iStack_18c != 0)) {
      pcVar2 = (code *)FUN_14008ab0(iStack_18c,0,1,&iStack_180);
      DAT_14028e48 = (*pcVar2)(iStack_180,auStack_140);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_17c);
      DAT_14028e48 = (*pcVar2)(iStack_17c,&iStack_178,auStack_140,s_ListMod_1402681c);
      if (iStack_178 != 0) {
        return 0x10000;
      }
      pcStack_16a = pcStack_19e;
      pcStack_166 = (char *)0x0;
      uStack_162 = 0;
      uStack_15e = 0;
      sStack_16c = 0x69;
      iVar4 = FUN_14010ee0(param_1,(int)&sStack_16c,pcStack_1a2,puVar5,param_5,param_6,param_7,
                           param_8);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    else {
      sStack_16c = 0x6a;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_1a8),1,5,&iStack_174);
      DAT_14028e48 = (*pcVar2)(iStack_174,pcStack_19e,s_value_14026664,0,&sStack_16c);
      if (DAT_14028e48 != 0) {
        return DAT_14028e48;
      }
      if (sStack_16c == 0x75) {
        pcStack_16a = pcStack_1a2;
        pcStack_166 = pcStack_19e;
        sStack_16c = 0x75;
        iVar4 = FUN_140113c0(param_1,(int)&sStack_16c,pcStack_1a2,puVar5,param_5,param_6,param_7,
                             param_8);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      else {
        iVar4 = FUN_140104c0(param_1,&sStack_16c,pcStack_1a2,puVar5,param_5,0,param_6,param_7,
                             param_8);
        if (iVar4 != 0) {
          return iVar4;
        }
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + local_1a8),1,0x1a,&iStack_170);
        DAT_14028e48 = (*pcVar2)(iStack_170,param_1,&sStack_16c);
      }
    }
    iStack_188 = iStack_188 + 1;
    puVar5 = (undefined1 *)(*param_5 + *param_8);
  } while( true );
}



/* ==== FUN_140116f4 @ 140116f4 ==== 
 * signature: undefined FUN_140116f4(void)
 * body: 140116f4-1401177e
 * decompiler message: Low-level Error: Cannot properly adjust input varnodes
 */
/* Decompilation failed. Instructions follow.
140116f4  MOV EAX,dword ptr [ESP + 0x1d8]
140116fb  PUSH EBP
140116fc  MOV ECX,dword ptr [ESP + 0x1d8]
14011703  PUSH EAX
14011704  MOV EDX,dword ptr [ESP + 0x22]
14011708  PUSH ECX
14011709  LEA EAX,[ESP + 0x5c]
1401170d  PUSH 0x0
1401170f  PUSH EDI
14011710  PUSH EBX
14011711  PUSH EDX
14011712  PUSH EAX
14011713  PUSH ESI
14011714  CALL 0x140104c0
14011719  ADD ESP,0x24
1401171c  TEST EAX,EAX
1401171e  JNZ 0x14011781
14011720  LEA EAX,[ESP + 0x4c]
14011724  MOV ECX,dword ptr [0x14028e44]
1401172a  MOV EDX,dword ptr [ESP + 0x14]
1401172e  PUSH EAX
1401172f  PUSH 0x1a
14011731  PUSH 0x1
14011733  MOV EAX,dword ptr [ECX + EDX*0x1]
14011736  PUSH EAX
14011737  CALL 0x14008ab0
1401173c  LEA ECX,[ESP + 0x60]
14011740  MOV EDX,dword ptr [ESP + 0x5c]
14011744  ADD ESP,0x10
14011747  PUSH ECX
14011748  PUSH ESI
14011749  PUSH EDX
1401174a  CALL EAX
1401174c  ADD ESP,0xc
1401174f  MOV [0x14028e48],EAX
14011754  MOV EBX,dword ptr [EDI]
14011756  INC dword ptr [ESP + 0x34]
1401175a  ADD EBX,dword ptr [EBP]
1401175d  JMP 0x140114a7
14011762  XOR EAX,EAX
14011764  POP EBP
14011765  POP EDI
14011766  POP ESI
14011767  POP EBX
14011768  ADD ESP,0x1ac
1401176e  RET
1401176f  MOV EAX,0x10000
14011774  POP EBP
14011775  POP EDI
14011776  POP ESI
14011777  POP EBX
14011778  ADD ESP,0x1ac
1401177e  RET
*/


/* ==== FUN_1401177f @ 1401177f ==== 
 * signature: undefined4 __stdcall FUN_1401177f(void)
 * body: 1401177f-1401178b
 */

undefined4 FUN_1401177f(void)

{
  return 0;
}



/* ==== __break @ 1401178c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401178c-1401178c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401178d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401178d-1401178d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401178e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401178e-1401178e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401178f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401178f-1401178f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14011790 @ 14011790 ==== 
 * signature: int __cdecl FUN_14011790(undefined4 param_1, int param_2, undefined2 * param_3, int * param_4, short param_5)
 * body: 14011790-1401199b
 */

int __cdecl
FUN_14011790(undefined4 param_1,int param_2,undefined2 *param_3,int *param_4,short param_5)

{
  code *pcVar1;
  int iVar2;
  short sVar3;
  undefined1 uStack_b1;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  short asStack_a4 [3];
  undefined1 *puStack_9e;
  undefined4 uStack_98;
  int local_94;
  undefined2 uStack_90;
  undefined4 uStack_8e;
  undefined4 uStack_8a;
  undefined2 uStack_84;
  undefined4 uStack_82;
  undefined2 uStack_58;
  int iStack_56;
  undefined2 auStack_2c [22];
  
  local_94 = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_b0);
  sVar3 = 1;
  DAT_14028e48 = (*pcVar1)(local_b0,param_1,0x2c7,&local_a8);
  if (0 < param_5) {
    do {
      iStack_56 = (int)sVar3;
      uStack_58 = 1;
      FUN_140103b0(param_1,param_2,param_4,asStack_a4);
      if (asStack_a4[0] == 0x3a) {
        iVar2 = FUN_14011230(param_1,param_2,&uStack_84,&local_94,param_4,
                             CONCAT11(*puStack_9e,puStack_9e[1]),
                             CONCAT11(puStack_9e[2],puStack_9e[3]));
        if (iVar2 != 0) {
          return iVar2;
        }
        uStack_ac = uStack_82;
      }
      else if (asStack_a4[0] == 0x3d) {
        iVar2 = FUN_14011790(param_1,param_2,&uStack_84,param_4,CONCAT11(*puStack_9e,puStack_9e[1]))
        ;
        if (iVar2 != 0) {
          return iVar2;
        }
        uStack_ac = uStack_82;
      }
      else {
        iVar2 = FUN_14010a70(param_1,param_2,auStack_2c,asStack_a4,&uStack_b1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_14011a90(param_1,auStack_2c,&uStack_ac);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      sVar3 = sVar3 + 1;
      uStack_8e = uStack_98;
      uStack_8a = uStack_ac;
      uStack_90 = 0x75;
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,6,&local_b0);
      DAT_14028e48 = (*pcVar1)(local_b0,local_a8,s_value_14026664,&uStack_58,&uStack_90);
    } while (sVar3 <= param_5);
  }
  *param_3 = 0x69;
  *(undefined4 *)(param_3 + 3) = 0;
  *(undefined4 *)(param_3 + 5) = 0;
  *(undefined4 *)(param_3 + 1) = local_a8;
  *(undefined4 *)(param_3 + 7) = 0;
  return 0;
}



/* ==== __break @ 1401199c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401199c-1401199c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401199d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401199d-1401199d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401199e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401199e-1401199e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401199f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401199f-1401199f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140119a0 @ 140119a0 ==== 
 * signature: int __cdecl FUN_140119a0(undefined4 param_1, int param_2, int param_3, undefined4 param_4, int * param_5, int * param_6)
 * body: 140119a0-14011a86
 */

int __cdecl
FUN_140119a0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int *param_6
            )

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  if (*param_5 < param_3 + param_2) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,param_4);
    *param_5 = param_3 + param_2 + 0x200;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,4,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,param_4,*param_5);
    if (DAT_14028e48 != 0) {
      return DAT_14028e48;
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,param_4,param_6);
    *param_6 = *param_6 + 0x29;
    if (DAT_14028e48 != 0) {
      return DAT_14028e48;
    }
  }
  return 0;
}



/* ==== FUN_14011a90 @ 14011a90 ==== 
 * signature: int __cdecl FUN_14011a90(undefined4 param_1, undefined2 * param_2, undefined4 * param_3)
 * body: 14011a90-14011cf2
 */

int __cdecl FUN_14011a90(undefined4 param_1,undefined2 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_30;
  undefined2 local_2c;
  undefined4 local_2a;
  
  local_2c = 1;
  local_2a = 1;
  switch(*param_2) {
  case 1:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x322;
    break;
  default:
    return 0x10000;
  case 10:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x326;
    break;
  case 0xb:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x324;
    break;
  case 0xf:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x328;
    break;
  case 0x10:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x327;
    break;
  case 0x14:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x321;
    break;
  case 0x66:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x329;
    break;
  case 0x69:
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,0,&local_30);
    uVar2 = 0x323;
  }
  DAT_14028e48 = (*pcVar1)(local_30,param_1,uVar2,param_3);
  if (DAT_14028e48 != 0) {
    return DAT_14028e48;
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,6,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,*param_3,s_value_14026664,&local_2c,param_2);
  return DAT_14028e48;
}



/* ==== FUN_14011d90 @ 14011d90 ==== 
 * signature: int __cdecl FUN_14011d90(undefined4 param_1, int param_2)
 * body: 14011d90-14012004
 */

int __cdecl FUN_14011d90(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_184;
  undefined2 local_180;
  int local_17e;
  undefined2 uStack_178;
  undefined1 *puStack_176;
  int iStack_172;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  short sStack_158;
  int iStack_156;
  undefined4 uStack_152;
  undefined4 uStack_14e;
  undefined4 uStack_14a;
  undefined2 uStack_12c;
  int iStack_12a;
  undefined1 auStack_100 [256];
  
  local_180 = 1;
  local_17e = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_184);
  DAT_14028e48 = (*pcVar1)(local_184,*(undefined4 *)(param_2 + 2),s_count_140267dc,0,&local_180);
  if ((DAT_14028e48 != 0) || (local_17e < 1)) {
    return 0;
  }
  DAT_14028e48 = 0;
  iVar3 = local_17e;
  do {
    if (iVar3 < 1) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,1,&local_184);
      DAT_14028e48 = (*pcVar1)(local_184,*(undefined4 *)(param_2 + 2));
      return 0;
    }
    puStack_176 = auStack_100;
    uStack_12c = 1;
    uStack_178 = 0x75;
    iStack_172 = 0;
    iStack_12a = iVar3;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_184);
    DAT_14028e48 = (*pcVar1)(local_184,*(undefined4 *)(param_2 + 2),s_value_14026664,&uStack_12c,
                             &uStack_178);
    if (DAT_14028e48 != 0) {
      return 0;
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,5,&iStack_168);
    DAT_14028e48 = (*pcVar1)(iStack_168,iStack_172,&iStack_16c);
    if ((DAT_14028e48 == 0) && (iStack_16c != 0)) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x23,&iStack_164);
      iVar2 = iStack_164;
      iVar4 = iStack_16c;
LAB_14011f95:
      DAT_14028e48 = (*pcVar1)(iVar2,iVar4);
    }
    else {
      sStack_158 = 0x6a;
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&iStack_160);
      DAT_14028e48 = (*pcVar1)(iStack_160,iStack_172,s_value_14026664,0,&sStack_158);
      if (DAT_14028e48 != 0) {
        return DAT_14028e48;
      }
      if (sStack_158 != 0x75) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x50),1,1,&iStack_15c);
        iVar2 = iStack_15c;
        iVar4 = iStack_172;
        goto LAB_14011f95;
      }
      uStack_152 = 0;
      uStack_14e = 0;
      iStack_156 = iStack_172;
      sStack_158 = 0x69;
      uStack_14a = 0;
      FUN_14011d90(param_1,(int)&sStack_158);
    }
    iVar3 = iVar3 + -1;
  } while( true );
}



/* ==== __break @ 14012005 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14012005-14012005
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14012006 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14012006-14012006
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14012007 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14012007-14012007
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14012008 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14012008-14012008
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14012009 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14012009-14012009
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401200a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200a-1401200a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401200b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200b-1401200b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401200c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200c-1401200c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401200d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200d-1401200d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401200e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200e-1401200e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401200f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401200f-1401200f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14012010 @ 14012010 ==== 
 * signature: undefined __cdecl FUN_14012010(int param_1, int param_2)
 * body: 14012010-1401209f
 */

void __cdecl FUN_14012010(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined4 local_4;
  
  local_4 = 10;
  sVar3 = 1;
  iVar1 = param_1 / 10;
  while (iVar1 != 0) {
    sVar3 = sVar3 + 1;
    local_4 = local_4 * 10;
    iVar1 = param_1 / local_4;
  }
  sVar2 = 0;
  *(undefined1 *)(sVar3 + param_2) = 0;
  if (0 < sVar3) {
    do {
      local_4 = local_4 / 10;
      iVar1 = (int)sVar2;
      sVar2 = sVar2 + 1;
      *(char *)(iVar1 + param_2) = (char)(param_1 / local_4) + '0';
      param_1 = param_1 - local_4 * (param_1 / local_4);
    } while (sVar2 < sVar3);
  }
  return;
}



/* ==== FUN_140120a0 @ 140120a0 ==== 
 * signature: int __cdecl FUN_140120a0(undefined4 param_1, undefined4 param_2, undefined4 * param_3)
 * body: 140120a0-14012226
 */

int __cdecl FUN_140120a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int local_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  undefined1 auStack_14 [2];
  undefined4 uStack_12;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_28);
  DAT_14028e48 = (*pcVar1)(local_28,&local_1c,param_2);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,&iStack_18,param_2,&DAT_14026824);
  if ((local_1c == 0) || (iStack_18 == 0)) {
    *param_3 = 0;
    iVar2 = 0;
  }
  else {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,0,&local_28);
    DAT_14028e48 = (*pcVar1)(local_28,param_1,0x2f,param_2,&iStack_24);
    if ((DAT_14028e48 != 0) || (iStack_24 == 0)) {
      return 0x10000;
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_28);
    iVar2 = (*pcVar1)(local_28,iStack_24,1,auStack_14);
    DAT_14028e48 = iVar2;
    if (iVar2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,1,&local_28);
      DAT_14028e48 = (*pcVar1)(local_28,iStack_24);
      *param_3 = uStack_12;
      return 0;
    }
  }
  return iVar2;
}



/* ==== FUN_14012230 @ 14012230 ==== 
 * signature: int __cdecl FUN_14012230(int param_1, int param_2, undefined4 * param_3)
 * body: 14012230-140123be
 */

int __cdecl FUN_14012230(int param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int local_60;
  undefined4 local_5c;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined4 uStack_52;
  undefined4 uStack_4e;
  undefined4 uStack_4a;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined4 uStack_1e;
  
  *param_3 = 0;
  if ((*(int *)(param_2 + 2) != 0x65) && (*(int *)(param_2 + 2) != 0x69)) {
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x20,&local_60);
  iVar2 = (*pcVar1)(local_60,&local_5c);
  DAT_14028e48 = iVar2;
  if (iVar2 == 0) {
    uStack_58 = 0x69;
    uStack_52 = 0;
    uStack_2c = 0x69;
    uStack_4e = 0;
    uStack_56 = 0;
    uStack_4a = 0;
    uStack_26 = 0;
    uStack_22 = 0;
    uStack_2a = 0;
    uStack_1e = 0;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_60);
    iVar2 = (*pcVar1)(local_60,local_5c,s_worldmanager_14026854,0,&uStack_58);
    DAT_14028e48 = iVar2;
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 2) == 0x65) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_60);
        pcVar3 = s_sharedscene_14026840;
      }
      else {
        if (*(int *)(param_2 + 2) != 0x69) {
          return 0x10000;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_60);
        pcVar3 = s_currentscene_1402682c;
      }
      DAT_14028e48 = (*pcVar1)(local_60,uStack_56,pcVar3,0,&uStack_2c);
      if (DAT_14028e48 != 0) {
        return DAT_14028e48;
      }
      *param_3 = uStack_2a;
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ==== FUN_140123c0 @ 140123c0 ==== 
 * signature: undefined4 __cdecl FUN_140123c0(int param_1, undefined4 param_2, int param_3)
 * body: 140123c0-1401242c
 */

uint __cdecl FUN_140123c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint in_EAX;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 4);
  iVar1 = *piVar3;
  while( true ) {
    if (iVar1 == 0) {
      return in_EAX & 0xffffff00;
    }
    if (*piVar3 == param_3) break;
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + 1;
    iVar1 = *piVar3;
    in_EAX = param_3;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_4);
  DAT_14028e48 = (*pcVar2)(local_4,param_2,*(undefined4 *)(param_1 + iVar4 * 8));
  return CONCAT31((int3)((uint)DAT_14028e48 >> 8),1);
}



/* ==== FUN_14012430 @ 14012430 ==== 
 * signature: undefined4 __cdecl FUN_14012430(undefined4 * param_1, undefined4 * param_2, undefined4 param_3)
 * body: 14012430-140124bb
 */

uint __cdecl FUN_14012430(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar5 = 0;
  iVar1 = param_1[1];
  puVar2 = param_1;
  puVar3 = param_1;
  while( true ) {
    if (iVar1 == 0) {
      return (uint)puVar3 & 0xffffff00;
    }
    pcVar4 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&local_8);
    DAT_14028e48 = (undefined4 *)(*pcVar4)(local_8,&local_4,param_3,*puVar2);
    if (local_4 == 0) break;
    iVar5 = iVar5 + 1;
    iVar1 = puVar2[3];
    puVar2 = puVar2 + 2;
    puVar3 = DAT_14028e48;
  }
  *param_2 = param_1[iVar5 * 2 + 1];
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}



/* ==== FUN_140124c0 @ 140124c0 ==== 
 * signature: undefined __cdecl FUN_140124c0(int param_1)
 * body: 140124c0-14012580
 */

void __cdecl FUN_140124c0(int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_20c;
  int local_208;
  int iStack_204;
  char acStack_200 [512];
  
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_208);
  iVar4 = 0;
  DAT_14028e48 = (*pcVar2)(local_208,&local_20c,param_1);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_204);
  iVar3 = 0;
  DAT_14028e48 = (*pcVar2)(iStack_204,acStack_200,param_1);
  if (0 < local_20c) {
    do {
      if (acStack_200[iVar3] == ' ') {
        puVar1 = (undefined1 *)(param_1 + iVar4);
        iVar4 = iVar4 + 3;
        *puVar1 = 0x25;
        puVar1[1] = 0x32;
        puVar1[2] = 0x30;
      }
      else {
        *(char *)(param_1 + iVar4) = acStack_200[iVar3];
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_20c);
  }
  *(undefined1 *)(param_1 + iVar4) = 0;
  return;
}



/* ==== FUN_14012590 @ 14012590 ==== 
 * signature: undefined __cdecl FUN_14012590(int param_1)
 * body: 14012590-14012655
 */

void __cdecl FUN_14012590(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_20c;
  int local_208;
  int iStack_204;
  char acStack_200 [512];
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_208);
  iVar3 = 0;
  DAT_14028e48 = (*pcVar1)(local_208,&local_20c,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_204);
  iVar2 = 0;
  DAT_14028e48 = (*pcVar1)(iStack_204,acStack_200,param_1);
  if (0 < local_20c) {
    do {
      if (((acStack_200[iVar2] == '%') && (acStack_200[iVar2 + 1] == '2')) &&
         (acStack_200[iVar2 + 2] == '0')) {
        *(undefined1 *)(param_1 + iVar3) = 0x20;
        iVar2 = iVar2 + 2;
      }
      else {
        *(char *)(param_1 + iVar3) = acStack_200[iVar2];
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_20c);
  }
  *(undefined1 *)(param_1 + iVar3) = 0;
  return;
}



/* ==== FUN_14012660 @ 14012660 ==== 
 * signature: undefined4 __cdecl FUN_14012660(short param_1, undefined4 param_2)
 * body: 14012660-14012741
 */

undefined4 __cdecl FUN_14012660(short param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int local_10c;
  int iStack_108;
  int iStack_104;
  undefined1 local_100 [256];
  
  uVar1 = FUN_140123c0(0x14026b00,local_100,(int)param_1);
  if ((char)uVar1 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_10c);
    DAT_14028e48 = (*pcVar2)(local_10c,param_2,s_HTTP_1_0_14026b1c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_108);
    DAT_14028e48 = (*pcVar2)(iStack_108,param_2,local_100);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_104);
    DAT_14028e48 = (*pcVar2)(iStack_104,param_2,&DAT_14026b18);
    return CONCAT31((int3)((uint)DAT_14028e48 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}



/* ==== FUN_14012750 @ 14012750 ==== 
 * signature: bool __cdecl FUN_14012750(int param_1, short param_2, int param_3)
 * body: 14012750-14012ade
 */

bool __cdecl FUN_14012750(int param_1,short param_2,int param_3)

{
  code *pcVar1;
  undefined *puVar2;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
      DAT_14028e48 = (*pcVar1)(local_c,param_3,&DAT_14026b48);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,&iStack_8,param_1,&DAT_14026b44);
      if (iStack_8 != 0) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,param_3,param_1,iStack_8 - param_1);
        *(undefined1 *)((iStack_8 - param_1) + param_3) = 0;
      }
    }
    else {
      if (param_2 == 1) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,param_3,s_www_mfactory_com_14026b30);
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&iStack_4);
        DAT_14028e48 = (*pcVar1)(iStack_4,&iStack_8,param_1,&DAT_14026b44);
        if (iStack_8 != 0) {
          param_1 = iStack_8 + 3;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,&iStack_8,param_1,&DAT_14026b2c);
        if (iStack_8 == 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
          DAT_14028e48 = (*pcVar1)(local_c,param_3,param_1);
        }
        else {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_c);
          DAT_14028e48 = (*pcVar1)(local_c,param_3,param_1,iStack_8 - param_1);
          *(undefined1 *)((iStack_8 - param_1) + param_3) = 0;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,&iStack_8,param_3,&DAT_140265e0);
        if (iStack_8 != 0) goto LAB_14012acd;
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_c);
        puVar2 = &DAT_14026b28;
      }
      else {
        if (param_2 != 2) goto LAB_14012acd;
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,param_3,&DAT_140267ac);
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&iStack_4);
        DAT_14028e48 = (*pcVar1)(iStack_4,&iStack_8,param_1,&DAT_14026b44);
        if (iStack_8 != 0) {
          param_1 = iStack_8 + 3;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,&iStack_8,param_1,&DAT_14026b2c);
        if (iStack_8 == 0) goto LAB_14012acd;
        puVar2 = (undefined *)(iStack_8 + 1);
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
      }
      DAT_14028e48 = (*pcVar1)(local_c,param_3,puVar2);
    }
  }
LAB_14012acd:
  return DAT_14028e48 == 0;
}



/* ==== FUN_14012ae0 @ 14012ae0 ==== 
 * signature: undefined4 __cdecl FUN_14012ae0(uint param_1, undefined4 * param_2, uint * param_3)
 * body: 14012ae0-14012b8f
 */

uint __cdecl FUN_14012ae0(uint param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 in_EAX;
  code *pcVar1;
  int local_c;
  int local_8;
  int iStack_4;
  
  if (*param_3 < param_1) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,5,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,*param_2,&local_c);
    local_c = local_c + (param_1 - *param_3);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,4,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,*param_2,local_c);
    if (DAT_14028e48 != 0) {
      return DAT_14028e48 & 0xffffff00;
    }
    *param_3 = param_1;
    in_EAX = 0;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



/* ==== FUN_14012b90 @ 14012b90 ==== 
 * signature: undefined4 __cdecl FUN_14012b90(int * param_1, undefined4 * param_2, uint * param_3)
 * body: 14012b90-14012c78
 */

undefined4 __cdecl FUN_14012b90(int *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  int local_c;
  undefined4 local_8;
  int iStack_4;
  
  uVar1 = FUN_14012ae0(2,param_2,param_3);
  if ((char)uVar1 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_c);
    uVar1 = (*pcVar2)(local_c,*param_2,&local_8);
    DAT_14028e48 = uVar1;
    if (uVar1 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_c);
      DAT_14028e48 = (*pcVar2)(local_c,local_8,&DAT_14026b18);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_4);
      DAT_14028e48 = (*pcVar2)(iStack_4,*param_2);
      uVar1 = DAT_14028e48 >> 8;
      *param_3 = *param_3 - 2;
      *param_1 = *param_1 + 2;
      return CONCAT31((int3)uVar1,1);
    }
  }
  return uVar1 & 0xffffff00;
}



/* ==== FUN_14012c80 @ 14012c80 ==== 
 * signature: undefined4 __cdecl FUN_14012c80(int * param_1, undefined4 * param_2, int param_3, uint * param_4)
 * body: 14012c80-14012dbc
 */

undefined4 __cdecl FUN_14012c80(int *param_1,undefined4 *param_2,int param_3,uint *param_4)

{
  undefined4 in_EAX;
  code *pcVar1;
  uint uVar2;
  int local_10;
  uint local_c;
  undefined4 uStack_8;
  int iStack_4;
  
  if (param_3 == 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,&local_c,param_3);
  uVar2 = FUN_14012ae0(local_c,param_2,param_4);
  if ((char)uVar2 != '\0') {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_10);
    uVar2 = (*pcVar1)(local_10,*param_2,&uStack_8);
    DAT_14028e48 = uVar2;
    if (uVar2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_10);
      DAT_14028e48 = (*pcVar1)(local_10,uStack_8,param_3);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,*param_2);
      uVar2 = DAT_14028e48 >> 8;
      *param_4 = *param_4 - local_c;
      *param_1 = *param_1 + local_c;
      return CONCAT31((int3)uVar2,1);
    }
  }
  return uVar2 & 0xffffff00;
}



/* ==== FUN_14012dc0 @ 14012dc0 ==== 
 * signature: undefined4 __cdecl FUN_14012dc0(int * param_1, undefined4 * param_2, uint * param_3)
 * body: 14012dc0-14012f37
 */

undefined4 __cdecl FUN_14012dc0(int *param_1,undefined4 *param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_30;
  undefined4 uStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  undefined4 local_1c [7];
  
  pcVar4 = s_User_Agent__mTropolis_2_0_14026b50;
  puVar5 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)pcVar4;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_30);
  DAT_14028e48 = (*pcVar1)(local_30,&local_28,local_1c);
  uVar6 = local_28 + 2;
  uVar2 = FUN_14012ae0(uVar6,param_2,param_3);
  if ((char)uVar2 != '\0') {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_30);
    uVar2 = (*pcVar1)(local_30,*param_2,&uStack_2c);
    DAT_14028e48 = uVar2;
    if (uVar2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_30);
      DAT_14028e48 = (*pcVar1)(local_30,uStack_2c,local_1c);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_24);
      DAT_14028e48 = (*pcVar1)(iStack_24,uStack_2c,&DAT_14026b18);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_20);
      DAT_14028e48 = (*pcVar1)(iStack_20,*param_2);
      uVar2 = DAT_14028e48 >> 8;
      *param_3 = *param_3 - uVar6;
      *param_1 = *param_1 + uVar6;
      return CONCAT31((int3)uVar2,1);
    }
  }
  return uVar2 & 0xffffff00;
}



/* ==== FUN_14012f40 @ 14012f40 ==== 
 * signature: undefined4 __cdecl FUN_14012f40(short param_1, undefined4 param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * body: 14012f40-140130c0
 */

undefined4 __cdecl
FUN_14012f40(short param_1,undefined4 param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  undefined4 in_EAX;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int local_14;
  undefined4 uStack_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if ((param_1 != 3) && (param_1 != 4)) {
    return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),param_1) >> 8),1);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_14);
  DAT_14028e48 = (*pcVar1)(local_14,&local_c,param_2);
  uVar3 = local_c + 2;
  uVar2 = FUN_14012ae0(uVar3,param_4,param_5);
  if ((char)uVar2 != '\0') {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_14);
    uVar2 = (*pcVar1)(local_14,*param_4,&uStack_10);
    DAT_14028e48 = uVar2;
    if (uVar2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_14);
      DAT_14028e48 = (*pcVar1)(local_14,uStack_10,param_2);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_8);
      DAT_14028e48 = (*pcVar1)(iStack_8,uStack_10,&DAT_14026b18);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,*param_4);
      uVar2 = DAT_14028e48 >> 8;
      *param_5 = *param_5 - uVar3;
      *param_3 = *param_3 + uVar3;
      return CONCAT31((int3)uVar2,1);
    }
  }
  return uVar2 & 0xffffff00;
}



/* ==== FUN_140130d0 @ 140130d0 ==== 
 * signature: undefined4 __cdecl FUN_140130d0(short param_1, undefined4 param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * body: 140130d0-140132db
 */

undefined4 __cdecl
FUN_140130d0(short param_1,undefined4 param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  undefined4 in_EAX;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int local_58;
  int iStack_54;
  int local_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 local_40 [64];
  
  if ((param_1 != 3) && (param_1 != 4)) {
    return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),param_1) >> 8),1);
  }
  FUN_14008990(local_40,&DAT_14026398);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_58);
  DAT_14028e48 = (*pcVar2)(local_58,&local_50,s_Content_Length__14026b6c);
  iVar1 = local_50;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_54);
  DAT_14028e48 = (*pcVar2)(iStack_54,&local_50,local_40);
  uVar4 = iVar1 + local_50 + 2;
  uVar3 = FUN_14012ae0(uVar4,param_4,param_5);
  if ((char)uVar3 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_58);
    uVar3 = (*pcVar2)(local_58,*param_4,&uStack_4c);
    DAT_14028e48 = uVar3;
    if (uVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_58);
      DAT_14028e48 = (*pcVar2)(local_58,uStack_4c,s_Content_Length__14026b6c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_54);
      DAT_14028e48 = (*pcVar2)(iStack_54,uStack_4c,local_40);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_48);
      DAT_14028e48 = (*pcVar2)(iStack_48,uStack_4c,&DAT_14026b18);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_44);
      DAT_14028e48 = (*pcVar2)(iStack_44,*param_4);
      uVar3 = DAT_14028e48 >> 8;
      *param_5 = *param_5 - uVar4;
      *param_3 = *param_3 + uVar4;
      return CONCAT31((int3)uVar3,1);
    }
  }
  return uVar3 & 0xffffff00;
}



/* ==== FUN_140132e0 @ 140132e0 ==== 
 * signature: undefined4 __cdecl FUN_140132e0(int param_1, short param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * body: 140132e0-14013770
 */

undefined4 __cdecl
FUN_140132e0(int param_1,short param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_144;
  undefined4 uStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined1 local_120 [20];
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [256];
  
  local_10c = DAT_14026bb0;
  local_108 = DAT_14026bb4;
  local_104 = DAT_14026bb8;
  FUN_14012750(param_1,2,(int)local_100);
  if (param_2 == 1) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = &DAT_14026ba8;
  }
  else if (param_2 == 2) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = s_HEAD_14026ba0;
  }
  else if (param_2 == 3) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = s_POST_14026b98;
  }
  else if (param_2 == 4) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = &DAT_14026b90;
  }
  else if (param_2 == 5) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = s_DELETE_14026b88;
  }
  else if (param_2 == 6) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = s_TRACE_14026b80;
  }
  else {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
    pcVar5 = &DAT_140267ac;
  }
  DAT_14028e48 = (*pcVar2)(local_144,local_120,pcVar5);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_144);
  DAT_14028e48 = (*pcVar2)(local_144,&iStack_13c,local_120);
  iVar1 = iStack_13c;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_138);
  DAT_14028e48 = (*pcVar2)(iStack_138,&iStack_13c,local_100);
  iVar1 = iVar1 + iStack_13c;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_134);
  DAT_14028e48 = (*pcVar2)(iStack_134,&iStack_13c,&local_10c);
  uVar4 = iVar1 + iStack_13c + 5;
  uVar3 = FUN_14012ae0(uVar4,param_4,param_5);
  if ((char)uVar3 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_144);
    uVar3 = (*pcVar2)(local_144,*param_4,&uStack_140);
    DAT_14028e48 = uVar3;
    if (uVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_144);
      DAT_14028e48 = (*pcVar2)(local_144,uStack_140,local_120);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_138);
      DAT_14028e48 = (*pcVar2)(iStack_138,uStack_140,&DAT_14026b2c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_134);
      DAT_14028e48 = (*pcVar2)(iStack_134,uStack_140,local_100);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_130);
      DAT_14028e48 = (*pcVar2)(iStack_130,uStack_140,&DAT_14026b7c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_12c);
      DAT_14028e48 = (*pcVar2)(iStack_12c,uStack_140,&local_10c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_128);
      DAT_14028e48 = (*pcVar2)(iStack_128,uStack_140,&DAT_14026b18);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_124);
      DAT_14028e48 = (*pcVar2)(iStack_124,*param_4);
      uVar3 = DAT_14028e48 >> 8;
      *param_5 = *param_5 - uVar4;
      *param_3 = *param_3 + (uVar4 - 1);
      return CONCAT31((int3)uVar3,1);
    }
  }
  return uVar3 & 0xffffff00;
}



/* ==== FUN_14013780 @ 14013780 ==== 
 * signature: undefined4 __cdecl FUN_14013780(undefined4 param_1, undefined4 * param_2, undefined4 * param_3, int * param_4, int param_5, short param_6, int param_7, undefined4 param_8, undefined4 param_9)
 * body: 14013780-140138fc
 */

uint __cdecl
FUN_14013780(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,int param_5,
            short param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_c;
  int local_8;
  undefined4 uStack_4;
  
  local_c = 0x400;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,2,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,0x400,param_2);
  if (DAT_14028e48 != 0) {
    return DAT_14028e48 & 0xffffff00;
  }
  uVar2 = FUN_140132e0(param_5,param_6,param_4,param_2,&local_c);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_14012dc0(param_4,param_2,&local_c);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_14012c80(param_4,param_2,param_7,&local_c);
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_140130d0(param_6,param_9,param_4,param_2,&local_c);
        if ((char)uVar2 != '\0') {
          uVar2 = FUN_14012b90(param_4,param_2,&local_c);
          if ((char)uVar2 != '\0') {
            uVar2 = FUN_14012f40(param_6,param_8,param_4,param_2,&local_c);
            if ((char)uVar2 != '\0') {
              pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,5,&local_8);
              DAT_14028e48 = (*pcVar1)(local_8,*param_2,&uStack_4);
              uVar3 = DAT_14028e48 >> 8;
              *param_3 = uStack_4;
              return CONCAT31((int3)uVar3,1);
            }
          }
        }
      }
    }
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,*param_2);
  uVar3 = DAT_14028e48 & 0xffffff00;
  *param_2 = 0;
  return uVar3;
}



/* ==== FUN_14013900 @ 14013900 ==== 
 * signature: undefined4 __cdecl FUN_14013900(undefined4 param_1, undefined4 param_2, short * param_3)
 * body: 14013900-14013b9d
 */

undefined4 __cdecl FUN_14013900(undefined4 param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  code *pcVar2;
  int local_34;
  int iStack_30;
  undefined2 local_2c;
  undefined4 uStack_2a;
  
  sVar1 = *param_3;
  if (sVar1 == 0x73) {
    local_2c = 0x6a;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_34);
    DAT_14028e48 = (*pcVar2)(local_34,param_1,param_3,&local_2c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&iStack_30);
    DAT_14028e48 = (*pcVar2)(iStack_30,uStack_2a,0x2f,param_2,0);
    return DAT_14028e48;
  }
  if (sVar1 == 0x69) {
    local_2c = 0x6a;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_34);
    DAT_14028e48 = (*pcVar2)(local_34,param_1,param_3,&local_2c);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&iStack_30);
    DAT_14028e48 = (*pcVar2)(iStack_30,uStack_2a,0x2f,param_2,0);
    return DAT_14028e48;
  }
  if ((sVar1 == 0x76) && (*(int *)(param_3 + 7) != 0)) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_34);
    DAT_14028e48 = (*pcVar2)(local_34,param_2,*(undefined4 *)(param_3 + 7));
    return DAT_14028e48;
  }
  if (sVar1 == 100) {
    if (*(int *)(param_3 + 3) == 5) {
      FUN_140123c0(0x14026a90,param_2,*(int *)(param_3 + 1));
      return 0;
    }
    if (*(int *)(param_3 + 3) == 6) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_34);
      DAT_14028e48 = (*pcVar2)(local_34,param_2,s_<error>_14026bbc);
      return 0x10000;
    }
  }
  if (sVar1 == 100) {
    if (*(int *)(param_3 + 3) == 1) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_34);
      DAT_14028e48 = (*pcVar2)(local_34,param_2,s_<error>_14026bbc);
      return 0x10000;
    }
    if (*(int *)(param_3 + 3) == 0xb) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_34);
      DAT_14028e48 = (*pcVar2)(local_34,param_2,s_<error>_14026bbc);
      return 0x10000;
    }
  }
  return 0;
}



/* ==== FUN_14013ba0 @ 14013ba0 ==== 
 * signature: undefined4 __cdecl FUN_14013ba0(undefined4 param_1, undefined4 param_2, int param_3, int * param_4, undefined4 * param_5, uint * param_6)
 * body: 14013ba0-14013e23
 */

undefined4 __cdecl
FUN_14013ba0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5,
            uint *param_6)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int local_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  int iStack_208;
  int iStack_204;
  undefined1 local_200 [512];
  
  if (param_3 == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,1,&local_218);
    uVar3 = (*pcVar2)(local_218,param_2,0x2f,local_200,0);
  }
  else {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_218);
    uVar3 = (*pcVar2)(local_218,local_200,param_3);
  }
  DAT_14028e48 = uVar3;
  if (uVar3 == 0) {
    FUN_140124c0((int)local_200);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_218);
    DAT_14028e48 = (*pcVar2)(local_218,&iStack_210,local_200);
    iVar1 = iStack_210;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_214);
    DAT_14028e48 = (*pcVar2)(iStack_214,&iStack_210,s_SNDR__14026bc4);
    uVar4 = iVar1 + iStack_210 + 2;
    uVar3 = FUN_14012ae0(uVar4,param_5,param_6);
    if ((char)uVar3 != '\0') {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_218);
      uVar3 = (*pcVar2)(local_218,*param_5,&uStack_20c);
      DAT_14028e48 = uVar3;
      if (uVar3 == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_218);
        DAT_14028e48 = (*pcVar2)(local_218,uStack_20c,s_SNDR__14026bc4);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_214);
        DAT_14028e48 = (*pcVar2)(iStack_214,uStack_20c,local_200);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_208);
        DAT_14028e48 = (*pcVar2)(iStack_208,uStack_20c,&DAT_14026b18);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_204);
        DAT_14028e48 = (*pcVar2)(iStack_204,*param_5);
        uVar3 = DAT_14028e48 >> 8;
        *param_6 = *param_6 - uVar4;
        *param_4 = *param_4 + uVar4;
        return CONCAT31((int3)uVar3,1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}



/* ==== FUN_14013e30 @ 14013e30 ==== 
 * signature: undefined4 __cdecl FUN_14013e30(undefined4 param_1, int param_2, short * param_3, uint param_4, int * param_5, undefined4 * param_6, uint * param_7)
 * body: 14013e30-140144cf
 */

undefined4 __cdecl
FUN_14013e30(undefined4 param_1,int param_2,short *param_3,uint param_4,int *param_5,
            undefined4 *param_6,uint *param_7)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int local_424;
  undefined4 uStack_420;
  int iStack_41c;
  int local_418;
  undefined1 auStack_414 [8];
  int iStack_40c;
  int iStack_408;
  int iStack_404;
  undefined1 local_400 [2];
  undefined1 auStack_3fe [254];
  undefined1 local_300 [256];
  undefined1 auStack_200 [512];
  
  iVar4 = 0;
  if (*(int *)(param_2 + 2) == 900) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_424);
    DAT_14028e48 = (*pcVar2)(local_424,local_400,&DAT_14026be0);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,3,&iStack_41c);
    DAT_14028e48 = (*pcVar2)(iStack_41c,param_1,param_2,auStack_3fe);
  }
  else {
    FUN_14008990(local_400,&DAT_14026398);
    if (*(int *)(param_2 + 6) != 0) {
      FUN_14008990(local_300,&DAT_14026398);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_424);
      DAT_14028e48 = (*pcVar2)(local_424,&local_418,local_300);
      iVar4 = local_418 + 1;
    }
  }
  FUN_140124c0((int)local_400);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_424);
  DAT_14028e48 = (*pcVar2)(local_424,&local_418,local_400);
  bVar1 = false;
  iVar4 = iVar4 + local_418;
  auStack_200[0] = 0;
  uVar3 = FUN_14013900(param_1,auStack_200,param_3);
  if (uVar3 != 0) goto LAB_140144c3;
  FUN_140124c0((int)auStack_200);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_424);
  DAT_14028e48 = (*pcVar2)(local_424,&local_418,auStack_200);
  iVar4 = iVar4 + local_418;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_41c);
  DAT_14028e48 = (*pcVar2)(iStack_41c,&local_418,"mMsg/1.1");
  uVar5 = iVar4 + local_418 + 5;
  if (param_4 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_424);
    DAT_14028e48 = (*pcVar2)(local_424,auStack_414,&DAT_14026bdc);
    if ((((param_4 & 0x80000000) == 0) || ((param_4 & 0x40000000) == 0)) ||
       ((param_4 & 0x20000000) == 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      if ((param_4 & 0x80000000) == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        DAT_14028e48 = (*pcVar2)(local_424,auStack_414,&DAT_14026bd4);
      }
      if ((param_4 & 0x40000000) == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        DAT_14028e48 = (*pcVar2)(local_424,auStack_414,&DAT_14026bd0);
      }
      if ((param_4 & 0x20000000) == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        puVar6 = &DAT_14026bcc;
        goto LAB_14014191;
      }
    }
    else {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
      puVar6 = &DAT_14026bd8;
LAB_14014191:
      DAT_14028e48 = (*pcVar2)(local_424,auStack_414,puVar6);
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_424);
    DAT_14028e48 = (*pcVar2)(local_424,&local_418,auStack_414);
    uVar5 = uVar5 + local_418 + 2;
  }
  uVar3 = FUN_14012ae0(uVar5,param_6,param_7);
  if ((char)uVar3 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_424);
    uVar3 = (*pcVar2)(local_424,*param_6,&uStack_420);
    DAT_14028e48 = uVar3;
    if (uVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_424);
      DAT_14028e48 = (*pcVar2)(local_424,uStack_420,local_400);
      if ((*(int *)(param_2 + 6) != 0) && (*(int *)(param_2 + 2) != 900)) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        DAT_14028e48 = (*pcVar2)(local_424,uStack_420,&DAT_140265e0);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_41c);
        DAT_14028e48 = (*pcVar2)(iStack_41c,uStack_420,local_300);
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
      DAT_14028e48 = (*pcVar2)(local_424,uStack_420,&DAT_14026b7c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_41c);
      DAT_14028e48 = (*pcVar2)(iStack_41c,uStack_420,auStack_200);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_40c);
      DAT_14028e48 = (*pcVar2)(iStack_40c,uStack_420,&DAT_14026b7c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_408);
      DAT_14028e48 = (*pcVar2)(iStack_408,uStack_420,"mMsg/1.1");
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_404);
      DAT_14028e48 = (*pcVar2)(iStack_404,uStack_420,&DAT_14026b18);
      if (param_4 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        DAT_14028e48 = (*pcVar2)(local_424,uStack_420,auStack_414);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_41c);
        DAT_14028e48 = (*pcVar2)(iStack_41c,uStack_420,&DAT_14026b18);
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_424);
      DAT_14028e48 = (*pcVar2)(local_424,*param_6);
      uVar3 = DAT_14028e48 >> 8;
      *param_7 = *param_7 - uVar5;
      *param_5 = *param_5 + (uVar5 - 1);
      return CONCAT31((int3)uVar3,1);
    }
  }
LAB_140144c3:
  return uVar3 & 0xffffff00;
}



/* ==== FUN_140144d0 @ 140144d0 ==== 
 * signature: bool __cdecl FUN_140144d0(undefined4 param_1, short * param_2, int * param_3, undefined4 * param_4, uint * param_5)
 * body: 140144d0-14014794
 */

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FUN_140144d0(undefined4 param_1,short *param_2,int *param_3,undefined4 *param_4,uint *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  bool local_c5;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int aiStack_b8 [3];
  short local_ac [22];
  int local_80 [32];
  
  local_c5 = false;
  if (*param_2 != 0) {
    local_ac[0] = 0x6a;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,local_80);
    DAT_14028e48 = (*pcVar1)(local_80[0],param_1,param_2,local_ac);
    if ((DAT_14028e48 == 0) && (local_ac[0] != 0)) {
      iStack_c0 = 0;
      aiStack_b8[1] = 0;
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,3,local_80);
      DAT_14028e48 = (*pcVar1)(local_80[0],0,0,&iStack_c0,local_ac);
      if ((DAT_14028e48 == 0) && (iStack_c0 != 0)) {
        FUN_14008990(local_80,s__s_u_14026be4);
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_c4);
        DAT_14028e48 = (*pcVar1)(iStack_c4,&iStack_bc,local_80);
        uVar2 = FUN_14012ae0(iStack_bc + iStack_c0,param_4,param_5);
        if ((char)uVar2 != '\0') {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&iStack_c4);
          DAT_14028e48 = (*pcVar1)(iStack_c4,*param_4,aiStack_b8);
          if (DAT_14028e48 == 0) {
            pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_c4);
            DAT_14028e48 = (*pcVar1)(iStack_c4,aiStack_b8[0],local_80);
            *param_3 = *param_3 + iStack_bc;
            *param_5 = *param_5 - iStack_bc;
            pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,3,aiStack_b8 + 2);
            DAT_14028e48 = (*pcVar1)(aiStack_b8[2],*param_3 + aiStack_b8[0],*param_5,aiStack_b8 + 1,
                                     local_ac);
            local_c5 = DAT_14028e48 == 0;
            if (local_c5) {
              *param_3 = *param_3 + iStack_c0;
              *param_5 = *param_5 - iStack_c0;
            }
            pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&iStack_c4);
            DAT_14028e48 = (*pcVar1)(iStack_c4,*param_4);
          }
        }
      }
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,local_80);
    DAT_14028e48 = (*pcVar1)(local_80[0],param_1,local_ac);
  }
  return local_c5;
}



/* ==== FUN_140147a0 @ 140147a0 ==== 
 * signature: undefined4 __cdecl FUN_140147a0(undefined4 param_1, undefined4 * param_2, undefined4 * param_3, int * param_4, undefined4 param_5, int param_6, short * param_7, short * param_8, uint param_9, int param_10, int param_11)
 * body: 140147a0-14014917
 */

uint __cdecl
FUN_140147a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
            undefined4 param_5,int param_6,short *param_7,short *param_8,uint param_9,int param_10,
            int param_11)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_c [3];
  
  local_c[1] = 0x400;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,2,local_c);
  DAT_14028e48 = (*pcVar2)(local_c[0],0x400,param_2);
  if (DAT_14028e48 != 0) {
    return DAT_14028e48 & 0xffffff00;
  }
  uVar3 = FUN_14013e30(param_1,param_6,param_7,param_9,param_4,param_2,(uint *)(local_c + 1));
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_14013ba0(param_1,param_5,param_10,param_4,param_2,(uint *)(local_c + 1));
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_14012c80(param_4,param_2,param_11,(uint *)(local_c + 1));
      if ((char)uVar3 != '\0') {
        if (*param_8 == 0) {
          uVar3 = FUN_14012b90(param_4,param_2,(uint *)(local_c + 1));
          cVar1 = (char)uVar3;
        }
        else {
          cVar1 = FUN_140144d0(param_1,param_8,param_4,param_2,(uint *)(local_c + 1));
        }
        if (cVar1 != '\0') {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,5,local_c);
          DAT_14028e48 = (*pcVar2)(local_c[0],*param_2,local_c + 2);
          uVar4 = DAT_14028e48 >> 8;
          *param_3 = local_c[2];
          return CONCAT31((int3)uVar4,1);
        }
      }
    }
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,3,local_c);
  DAT_14028e48 = (*pcVar2)(local_c[0],*param_2);
  uVar4 = DAT_14028e48 & 0xffffff00;
  *param_2 = 0;
  return uVar4;
}



/* ==== FUN_14014920 @ 14014920 ==== 
 * signature: undefined4 __cdecl FUN_14014920(int param_1, int param_2, int * param_3, int * param_4, int * param_5)
 * body: 14014920-14014b22
 */

undefined4 __cdecl FUN_14014920(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  char *pcVar1;
  code *pcVar2;
  int local_c;
  int local_8;
  int iStack_4;
  
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1f,&local_8);
  DAT_14028e48 = (*pcVar2)(local_8,&local_c,param_1,s_Content_Length__14026b6c);
  if (local_c == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_8);
    DAT_14028e48 = (*pcVar2)(local_8,&local_c,param_1,&DAT_1402637c);
    if (local_c == 0) {
      *param_4 = param_2;
      *param_3 = param_1;
      *param_5 = param_2;
    }
    else {
      *param_4 = (param_2 - (local_c + 4)) + param_1;
      *param_3 = local_c + 4;
      param_2 = *param_4;
      *param_5 = param_2;
      if ((0 < *param_4) && (param_2 = *param_3, *(char *)param_2 == '\0')) {
        *param_3 = param_2 + 1;
        *param_4 = *param_4 + -1;
        return CONCAT31((int3)((uint)(param_2 + 1) >> 8),1);
      }
    }
  }
  else {
    *param_5 = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,6,&local_8);
    DAT_14028e48 = (*pcVar2)(local_8,&iStack_4,local_c,0x3a);
    if (iStack_4 != 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1e,&local_8);
      DAT_14028e48 = (*pcVar2)(local_8,param_5,iStack_4 + 1);
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_8);
    DAT_14028e48 = (*pcVar2)(local_8,&local_c,param_1,&DAT_1402637c);
    if (local_c == 0) {
      *param_4 = param_2;
      *param_3 = param_1;
      *param_5 = param_2;
      return CONCAT31((int3)((uint)param_2 >> 8),1);
    }
    pcVar1 = (char *)(local_c + 4);
    param_2 = (param_2 - (int)pcVar1) + param_1;
    *param_4 = param_2;
    *param_3 = (int)pcVar1;
    if ((0 < *param_4) && (*pcVar1 == '\0')) {
      *param_3 = local_c + 5;
      *param_4 = *param_4 + -1;
      return CONCAT31((int3)((uint)(local_c + 5) >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}



/* ==== FUN_14014b30 @ 14014b30 ==== 
 * signature: undefined4 __cdecl FUN_14014b30(int * param_1, undefined4 param_2)
 * body: 14014b30-14014cea
 */

undefined4 __cdecl FUN_14014b30(int *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int local_64;
  undefined1 *puStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [12];
  undefined1 local_44 [64];
  undefined1 uStack_4;
  
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_64);
  DAT_14028e48 = (*pcVar2)(local_64,local_44,param_2,0x3f);
  uStack_4 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_5c);
  DAT_14028e48 = (*pcVar2)(iStack_5c,&iStack_54,local_44,&DAT_14026bf4,4);
  if (iStack_54 != 0) {
    uVar1 = DAT_14028e48 >> 8;
    *param_1 = 0;
    return CONCAT31((int3)uVar1,1);
  }
  puStack_60 = local_44;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,6,&local_64);
  DAT_14028e48 = (*pcVar2)(local_64,&puStack_60,local_44,0x20);
  if (puStack_60 != (undefined1 *)0x0) {
    puStack_60 = puStack_60 + 1;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,6,&local_64);
    DAT_14028e48 = (*pcVar2)(local_64,&iStack_58,puStack_60,0x20);
    if (iStack_58 != 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_64);
      DAT_14028e48 = (*pcVar2)(local_64,auStack_50,puStack_60,iStack_58 - (int)puStack_60);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1e,&iStack_5c);
      DAT_14028e48 = (*pcVar2)(iStack_5c,param_1,auStack_50);
      if (*param_1 == 200) {
        return CONCAT31((int3)(DAT_14028e48 >> 8),1);
      }
    }
  }
  return DAT_14028e48 & 0xffffff00;
}



/* ==== FUN_14014cf0 @ 14014cf0 ==== 
 * signature: int __cdecl FUN_14014cf0(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 14014cf0-14014ec1
 */

int __cdecl FUN_14014cf0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int local_d4;
  int iStack_d0;
  undefined2 local_cc;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined2 uStack_c0;
  undefined4 uStack_be;
  undefined4 uStack_ba;
  undefined4 uStack_b6;
  undefined4 uStack_b2;
  undefined2 local_ac;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined2 local_80 [7];
  int iStack_72;
  undefined1 auStack_54 [84];
  
  if (param_2 == 0) {
    return 0x10000;
  }
  local_cc = 0x17;
  local_ac = 0x69;
  local_ca = param_3;
  local_c6 = 0;
  local_a6 = 0;
  local_a2 = 0;
  local_aa = 0;
  local_9e = 0;
  if (param_4 == 0) {
    local_80[0] = 0;
  }
  else {
    FUN_14008ed0(0,local_80,param_4);
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_d4);
  iVar2 = (*pcVar1)(local_d4,param_2,s_parent_14026368,0,&local_ac);
  DAT_14028e48 = iVar2;
  if (iVar2 == 0) {
    uStack_ba = 0;
    uStack_be = local_aa;
    uStack_b6 = 0;
    uStack_b2 = 0;
    uStack_c0 = 0x69;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x16,&local_d4);
    puVar8 = auStack_54;
    puVar6 = local_80;
    uVar7 = 0x40000000;
    puVar5 = &local_cc;
    puVar4 = &uStack_c0;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(local_d4,uVar3,puVar4,puVar5,puVar6,uVar7,puVar8);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_d0);
    puVar8 = auStack_54;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(iStack_d0,uVar3,puVar8);
    if ((param_4 != 0) && (iStack_72 != 0)) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_d4);
      DAT_14028e48 = (*pcVar1)(local_d4,iStack_72);
    }
    iVar2 = 0;
  }
  return iVar2;
}



/* ==== FUN_14014ed0 @ 14014ed0 ==== 
 * signature: int __cdecl FUN_14014ed0(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * body: 14014ed0-14015029
 */

int __cdecl FUN_14014ed0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int local_a8;
  int iStack_a4;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined2 uStack_94;
  undefined4 uStack_92;
  undefined4 uStack_8e;
  undefined4 uStack_8a;
  undefined4 uStack_86;
  undefined2 local_80;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined1 auStack_54 [84];
  
  if (param_2 == 0) {
    return 0x10000;
  }
  local_9e = param_3;
  local_9a = 0;
  local_7a = 0;
  local_76 = 0;
  local_7e = 0;
  local_72 = 0;
  local_a0 = 0x17;
  local_80 = 0x69;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,5,&local_a8);
  iVar2 = (*pcVar1)(local_a8,param_2,s_parent_14026368,0,&local_80);
  DAT_14028e48 = iVar2;
  if (iVar2 == 0) {
    uStack_8e = 0;
    uStack_8a = 0;
    uStack_92 = local_7e;
    uStack_86 = 0;
    uStack_94 = 0x69;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x16,&local_a8);
    puVar7 = auStack_54;
    uVar6 = 0x40000000;
    puVar5 = &local_a0;
    puVar4 = &uStack_94;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(local_a8,uVar3,puVar4,puVar5,param_4,uVar6,puVar7);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x17,&iStack_a4);
    puVar7 = auStack_54;
    uVar3 = FUN_14008a80(param_1);
    DAT_14028e48 = (*pcVar1)(iStack_a4,uVar3,puVar7);
    iVar2 = 0;
  }
  return iVar2;
}



/* ==== FUN_14015030 @ 14015030 ==== 
 * signature: undefined4 __cdecl FUN_14015030(char param_1, int param_2)
 * body: 14015030-1401504e
 */

undefined4 __cdecl FUN_14015030(char param_1,int param_2)

{
  char *pcVar1;
  uint3 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pcVar1 = (char *)(param_2 + iVar3);
    uVar2 = (uint3)((uint)param_2 >> 8);
    if (*pcVar1 == '\0') {
      return (uint)uVar2 << 8;
    }
    iVar3 = iVar3 + 1;
  } while (*pcVar1 != param_1);
  return CONCAT31(uVar2,1);
}



/* ==== FUN_14015050 @ 14015050 ==== 
 * signature: undefined4 __cdecl FUN_14015050(undefined4 * param_1, char * param_2, int param_3, int param_4)
 * body: 14015050-140150b3
 */

uint __cdecl FUN_14015050(undefined4 *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      return in_EAX & 0xffffff00;
    }
    in_EAX = FUN_14015030(param_2[iVar2],param_3);
    if ((char)in_EAX != '\0') break;
    if (param_4 == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      iVar2 = iVar2 + -1;
    }
    cVar1 = param_2[iVar2];
  }
  if (param_4 == 0) {
    *param_1 = param_2 + iVar2;
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
  *param_1 = param_2 + iVar2 + 1;
  return CONCAT31((int3)((uint)(param_2 + iVar2 + 1) >> 8),1);
}



/* ==== FUN_140150c0 @ 140150c0 ==== 
 * signature: undefined __cdecl FUN_140150c0(undefined4 * param_1, char * param_2)
 * body: 140150c0-140150f3
 */

void __cdecl FUN_140150c0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar1 = *param_2;
  while ((cVar1 != '\0' && (uVar2 = FUN_14015030(param_2[iVar3],0x14026bfc), (char)uVar2 != '\0')))
  {
    iVar3 = iVar3 + 1;
    cVar1 = param_2[iVar3];
  }
  *param_1 = param_2 + iVar3;
  return;
}



/* ==== FUN_14015100 @ 14015100 ==== 
 * signature: undefined4 __cdecl FUN_14015100(char * param_1, undefined4 * param_2, undefined4 param_3)
 * body: 14015100-14015665
 */

undefined4 __cdecl FUN_14015100(char *param_1,undefined4 *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char *local_240;
  char *local_23c;
  char *local_238;
  short local_234;
  char *local_232;
  short local_22e;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  short asStack_214 [2];
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int local_200 [64];
  int aiStack_100 [64];
  
  iVar4 = 0;
  local_234 = 0;
  local_238 = (char *)0x0;
  FUN_140150c0(&local_240,param_1);
  FUN_14015050(&local_23c,local_240,0x14026c04,0);
  local_232 = local_240;
  local_22e = (short)local_23c - (short)local_240;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,local_200);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(local_200[0],param_3,&local_238);
  local_240 = local_23c + 1;
  FUN_14015050(&local_23c,local_240,0x14026c04,0);
  local_232 = local_240;
  local_22e = (short)local_23c - (short)local_240;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,aiStack_100);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(aiStack_100[0],param_3,&local_238);
  local_240 = local_23c + 1;
  FUN_14015050(&local_23c,local_240,0x14026228,0);
  FUN_14015050((undefined4 *)asStack_214,local_23c,0x14026b7c,1);
  local_22e = (short)local_23c - asStack_214[0];
  local_232 = local_240;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_228);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_228,param_3,&local_238);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_224);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_224,&iStack_22c,local_240,"mMsg/1.1",8);
  local_240 = local_23c;
  local_22e = 0;
  local_232 = (char *)0x0;
  bVar5 = iStack_22c == 0;
  local_234 = 0;
  local_238 = (char *)0x0;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_220);
  DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_220,param_3,&local_238);
  if ((*local_240 == '\r') && (local_240[1] == '\n')) {
    local_240 = local_240 + 2;
    cVar2 = *local_240;
    while (((cVar2 != '\0' && (*local_240 != '\r')) && (local_240[1] != '\n'))) {
      FUN_14015050(&local_23c,local_240,0x140265e0,0);
      local_238 = local_240;
      pcVar1 = local_23c + 1;
      local_234 = (short)local_23c - (short)local_240;
      local_23c = pcVar1;
      FUN_140150c0(&local_240,pcVar1);
      FUN_14015050(&local_23c,local_240,0x14026228,0);
      local_232 = local_240;
      local_22e = (short)local_23c - (short)local_240;
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_228);
      DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_228,param_3,&local_238);
      if (bVar5) {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_224);
        DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_224,&iStack_22c,local_238,&DAT_14026bf0,3);
        if (iStack_22c == 0) {
          iStack_21c = 0;
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&iStack_220);
          DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_220,local_200,local_232,(int)local_22e);
          *(undefined1 *)((int)local_200 + (int)local_22e) = 0;
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1e,&iStack_210);
          DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_210,&iStack_21c,local_200);
          if (DAT_14028e48 == (undefined4 *)0x0) {
            iVar4 = iStack_21c;
          }
        }
      }
      else {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_20c);
        DAT_14028e48 = (undefined4 *)
                       (*pcVar3)(iStack_20c,&iStack_22c,local_238,s_Content_Length__14026b6c,0xf);
        if (iStack_22c == 0) {
          iStack_218 = 0;
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&iStack_208);
          DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_208,aiStack_100,local_232,(int)local_22e);
          *(undefined1 *)((int)aiStack_100 + (int)local_22e) = 0;
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1e,&iStack_204);
          DAT_14028e48 = (undefined4 *)(*pcVar3)(iStack_204,&iStack_218,aiStack_100);
          if (DAT_14028e48 == (undefined4 *)0x0) {
            iVar4 = iStack_218;
          }
        }
      }
      local_240 = local_23c + 2;
      cVar2 = *local_240;
    }
  }
  local_240 = local_240 + 2;
  *param_2 = local_240 + (iVar4 - (int)param_1);
  if (0 < iVar4) {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,local_200);
    DAT_14028e48 = (undefined4 *)(*pcVar3)(local_200[0],param_3,4,&local_238);
    local_22e = (short)iVar4;
    local_232 = local_240;
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,aiStack_100);
    param_2 = (undefined4 *)(*pcVar3)(aiStack_100[0],param_3,4,&local_238);
    DAT_14028e48 = param_2;
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}



/* ==== FUN_14015670 @ 14015670 ==== 
 * signature: undefined4 __cdecl FUN_14015670(undefined4 param_1, undefined4 param_2, uint * param_3)
 * body: 14015670-140157aa
 */

uint __cdecl FUN_14015670(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  code *pcVar1;
  uint uVar2;
  int local_20;
  int iStack_1c;
  uint uStack_18;
  undefined4 local_14;
  int iStack_10;
  int aiStack_c [3];
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_20);
  DAT_14028e48 = (*pcVar1)(local_20,&local_14,param_2);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_1c);
  uVar2 = 1;
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1,&uStack_18);
  if (uStack_18 != 0) {
    do {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_20);
      DAT_14028e48 = (*pcVar1)(local_20,param_1,uVar2,aiStack_c);
      if (aiStack_c[0] != 0) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,5,&iStack_1c);
        DAT_14028e48 = (*pcVar1)(iStack_1c,&iStack_10,aiStack_c[0],param_2,local_14);
        if (iStack_10 == 0) {
          *param_3 = uVar2;
          return CONCAT31((int3)((uint)param_3 >> 8),1);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= uStack_18);
  }
  return DAT_14028e48 & 0xffffff00;
}



/* ==== FUN_140157b0 @ 140157b0 ==== 
 * signature: undefined4 __cdecl FUN_140157b0(int param_1, uint param_2, undefined4 param_3, uint * param_4, undefined4 param_5)
 * body: 140157b0-14015c59
 */

undefined4 __cdecl
FUN_140157b0(int param_1,uint param_2,undefined4 param_3,uint *param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcStack_28;
  undefined1 local_24 [6];
  char *pcStack_1e;
  short sStack_1a;
  undefined4 local_18;
  undefined2 uStack_14;
  uint uStack_12;
  uint local_c;
  uint uStack_8;
  int iStack_4;
  
  *param_4 = 0;
  param_4[1] = 0xaaaa5555;
  uVar2 = FUN_14015670(param_3,s_SNDR__14026bc4,&local_c);
  if ((char)uVar2 != '\0') {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
    DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,local_c,local_24)
    ;
    pcStack_1e[sStack_1a] = '\0';
    FUN_14012590((int)pcStack_1e);
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,(int *)&pcStack_28);
    DAT_14028e48 = (*pcVar3)(pcStack_28,param_5,pcStack_1e);
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,7,&iStack_4);
    DAT_14028e48 = (*pcVar3)(iStack_4,param_1,0x2f,pcStack_1e,&uStack_8);
    if (uStack_8 != 0) goto LAB_140158cd;
  }
  uStack_8 = param_2;
LAB_140158cd:
  param_4[2] = uStack_8;
  uVar2 = FUN_14015670(param_3,&DAT_14026bdc,&local_c);
  if ((char)uVar2 != '\0') {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
    DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,local_c,local_24)
    ;
    if ((DAT_14028e48 == 0) && (sStack_1a != 0)) {
      iVar5 = 0;
      *param_4 = 0xe0000000;
      if (0 < sStack_1a) {
        do {
          cVar1 = pcStack_1e[iVar5];
          if (DAT_14026bd8 == cVar1) {
            *param_4 = 0xe0000000;
            break;
          }
          if (cVar1 == DAT_14026bd4) {
            *param_4 = *param_4 & 0x7fffffff;
          }
          else if (DAT_14026bd0 == cVar1) {
            *param_4 = *param_4 & 0xbfffffff;
          }
          else if (DAT_14026bcc == cVar1) {
            *param_4 = *param_4 & 0xdfffffff;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < sStack_1a);
      }
    }
  }
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
  DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,1,local_24);
  if (pcStack_1e != (char *)0x0) {
    pcStack_1e[sStack_1a] = '\0';
    if ((*pcStack_1e < '1') || ('8' < *pcStack_1e)) {
      pcStack_1e = pcStack_1e + 2;
      FUN_14012590((int)pcStack_1e);
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,2,(int *)&pcStack_28);
      DAT_14028e48 = (*pcVar3)(pcStack_28,param_1,pcStack_1e,&local_18);
      param_4[3] = CONCAT22(uStack_14,local_18._2_2_);
      param_4[4] = uStack_12;
    }
    else {
      pcStack_28 = (char *)0x0;
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_18);
      DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),&pcStack_28,pcStack_1e,
                               &DAT_140265e0);
      if (pcStack_28 == (char *)0x0) {
        uVar4 = _atol(pcStack_1e);
        param_4[3] = uVar4;
        param_4[4] = 0;
      }
      else {
        *pcStack_28 = '\0';
        pcStack_28 = pcStack_28 + 1;
        uVar4 = _atol(pcStack_1e);
        param_4[3] = uVar4;
        uVar4 = _atol(pcStack_28);
        param_4[4] = uVar4;
      }
    }
  }
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
  DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,2,local_24);
  if (pcStack_1e != (char *)0x0) {
    pcStack_1e[sStack_1a] = '\0';
    FUN_14012590((int)pcStack_1e);
    if (*pcStack_1e == '<') {
      *(undefined4 *)((int)param_4 + 0x1a) = 5;
      *(undefined2 *)(param_4 + 5) = 100;
      FUN_14012430(&PTR_s_<currentScene>_14026a90,(undefined4 *)((int)param_4 + 0x16),pcStack_1e);
    }
    else {
      *(undefined2 *)(param_4 + 5) = 0x6a;
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&local_18);
      DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_4 + 5,pcStack_1e)
      ;
      *(undefined2 *)(param_4 + 5) = 0x76;
    }
  }
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_18);
  DAT_14028e48 = (*pcVar3)(CONCAT22(local_18._2_2_,(undefined2)local_18),param_3,4,local_24);
  if (pcStack_1e == (char *)0x0) {
    *(undefined2 *)((int)param_4 + 0x26) = 0;
    return 0;
  }
  local_18._0_2_ = 0;
  local_18._2_2_ = 0;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,4,(int *)&pcStack_28);
  puVar7 = &local_18;
  iVar5 = (int)param_4 + 0x26;
  pcVar6 = pcStack_1e;
  uVar2 = FUN_14008a80(param_1);
  DAT_14028e48 = (*pcVar3)(pcStack_28,uVar2,iVar5,pcVar6,puVar7);
  return 0;
}



/* ==== FUN_14015c60 @ 14015c60 ==== 
 * signature: undefined __cdecl FUN_14015c60(char * param_1)
 * body: 14015c60-14015ce1
 */

void __cdecl FUN_14015c60(char *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  int local_8;
  int local_4;
  
  if (*param_1 == '\"') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_4);
    DAT_14028e48 = (*pcVar2)(local_4,&local_8,param_1);
    sVar4 = 0;
    iVar1 = local_8 + -1;
    if (0 < iVar1) {
      do {
        iVar3 = (int)sVar4;
        sVar4 = sVar4 + 1;
        param_1[iVar3] = (param_1 + iVar3)[1];
      } while (sVar4 < iVar1);
    }
    if (param_1[iVar1] == '\"') {
      iVar1 = local_8 + -2;
    }
    local_8 = iVar1;
    param_1[local_8] = '\0';
  }
  return;
}



/* ==== FUN_14015cf0 @ 14015cf0 ==== 
 * signature: int __cdecl FUN_14015cf0(char * param_1)
 * body: 14015cf0-14015d38
 */

int __cdecl FUN_14015cf0(char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  
  if (param_1 == (char *)0x0) {
    return 1;
  }
  iVar2 = 1;
  ppuVar3 = &PTR_s_New_Blank_Window_14026c8c;
  do {
    uVar1 = FUN_14016eb0(param_1,*ppuVar3);
    if (uVar1 == 0) {
      return iVar2;
    }
    ppuVar3 = ppuVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (ppuVar3 < (undefined **)((int)&PTR_s_Topmost_Frame_14026c98 + 1));
  return -1;
}



/* ==== OpenURL @ 14015d40 ==== 
 * signature: undefined __cdecl OpenURL(int param_1)
 * body: 14015d40-14015f59
 */

void __cdecl OpenURL(int param_1)

{
                    /* 0x15d40  2  OpenURL */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0x48;
    *(undefined2 *)(param_1 + 0xa6) = 2;
    *(undefined2 *)(param_1 + 0xa4) = 0;
    FUN_140088b0(param_1,0x14026ce0);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_14015f60);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_14015fa0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_14016040);
      goto LAB_14015e0f;
    }
LAB_14015e2c:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_14016920);
      goto LAB_14015e49;
    }
LAB_14015e66:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_140161c0);
      goto LAB_14015e83;
    }
LAB_14015ea0:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_14016320);
      goto LAB_14015ebd;
    }
LAB_14015eda:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_14016760);
      goto LAB_14015ef7;
    }
LAB_14015f14:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_14015f4e;
    FUN_14008e40(param_1,1,0,0x25,FUN_140167a0);
  }
  else {
LAB_14015e0f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_14016140);
      goto LAB_14015e2c;
    }
LAB_14015e49:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_14016a40);
      goto LAB_14015e66;
    }
LAB_14015e83:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_14016270);
      goto LAB_14015ea0;
    }
LAB_14015ebd:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_14016720);
      goto LAB_14015eda;
    }
LAB_14015ef7:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_14016c80);
      goto LAB_14015f14;
    }
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,0x2e,FUN_14016860);
  }
LAB_14015f4e:
  FUN_14008e70(param_1);
  return;
}



/* ==== FUN_14015f60 @ 14015f60 ==== 
 * signature: undefined4 __cdecl FUN_14015f60(undefined2 * param_1)
 * body: 14015f60-14015f91
 */

undefined4 __cdecl FUN_14015f60(undefined2 *param_1)

{
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0x1b] = 0x66;
  return 0;
}



/* ==== FUN_14015fa0 @ 14015fa0 ==== 
 * signature: undefined4 __cdecl FUN_14015fa0(undefined4 * param_1, undefined4 * param_2)
 * body: 14015fa0-1401603e
 */

undefined4 __cdecl FUN_14015fa0(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 10) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  param_1[0xf] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0x66;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0xffffffff;
  FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x36),(int)param_2 + 0x36);
  return 0;
}



/* ==== FUN_14016040 @ 14016040 ==== 
 * signature: undefined4 __cdecl FUN_14016040(undefined4 * param_1, undefined4 * param_2)
 * body: 14016040-14016134
 */

undefined4 __cdecl FUN_14016040(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,(int)param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,(int)param_1 + 0x36);
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0x36) = 0x66;
  param_1[0x11] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,(int)param_1 + 10,(int)param_2 + 10);
  FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x36),(int)param_2 + 0x36);
  return 0;
}



/* ==== FUN_14016140 @ 14016140 ==== 
 * signature: undefined4 __cdecl FUN_14016140(int param_1)
 * body: 14016140-140161bb
 */

undefined4 __cdecl FUN_14016140(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,param_1,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_1 + 0x36);
  return 0;
}



/* ==== FUN_140161c0 @ 140161c0 ==== 
 * signature: undefined4 __cdecl FUN_140161c0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 140161c0-1401626d
 */

undefined4 __cdecl FUN_140161c0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36,&local_10);
  *param_4 = *param_4 + local_10;
  return 0;
}



/* ==== FUN_14016270 @ 14016270 ==== 
 * signature: undefined4 __cdecl FUN_14016270(int param_1, int param_2)
 * body: 14016270-1401631f
 */

undefined4 __cdecl FUN_14016270(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_12;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_12 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,&local_12,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36);
  return 0;
}



/* ==== FUN_14016320 @ 14016320 ==== 
 * signature: undefined4 __cdecl FUN_14016320(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 14016320-1401671c
 */

undefined4 __cdecl FUN_14016320(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_56;
  int local_54;
  int iStack_50;
  int iStack_4c;
  undefined2 local_48;
  short local_46;
  undefined2 local_44;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  int local_36;
  int iStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  int iStack_26;
  
  local_48 = 0x14;
  local_42 = 0xffffffff;
  local_44 = 0x66;
  local_46 = 0;
  local_3e = 0;
  local_3a = 0;
  local_36 = 0;
  if (0 < param_4) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,&local_56,1);
    if (*(int *)(param_1 + 0x44) != 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_54);
      DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (local_56 == 2) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
      DAT_14028e48 = (*pcVar1)(local_54,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_50);
      DAT_14028e48 = (*pcVar1)(iStack_50,param_1 + 10);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4c);
      DAT_14028e48 = (*pcVar1)(iStack_4c,param_1 + 0x36);
      return 0;
    }
    if (local_56 == 1) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
      DAT_14028e48 = (*pcVar1)(local_54,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_50);
      DAT_14028e48 = (*pcVar1)(iStack_50,param_1 + 10);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4c);
      DAT_14028e48 = (*pcVar1)(iStack_4c,&local_44);
      uStack_2a = 0;
      iStack_26 = 0;
      uStack_2c = 100;
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_30);
      DAT_14028e48 = (*pcVar1)(iStack_30,&uStack_2c);
      if (iStack_26 == 2) {
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
        DAT_14028e48 = (*pcVar1)(local_54,&local_44);
        FUN_14008b20(0,(undefined2 *)(param_1 + 0x36),(int)&local_44);
      }
      else {
        FUN_14008b20(0,(undefined2 *)(param_1 + 0x36),(int)&local_44);
        if (local_36 != 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_54);
          DAT_14028e48 = (*pcVar1)(local_54,local_36);
          local_36 = 0;
          local_3e = 0;
          local_3a = 0;
        }
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
        DAT_14028e48 = (*pcVar1)(local_54,&local_44);
      }
      if (local_36 != 0) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_54);
        DAT_14028e48 = (*pcVar1)(local_54,local_36);
      }
      return 0;
    }
    return 0x10000;
  }
  if (param_4 != 0) {
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
  DAT_14028e48 = (*pcVar1)(local_54,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_50);
  DAT_14028e48 = (*pcVar1)(iStack_50,&local_48);
  if (local_46 == 1) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,param_1 + 10);
    return 0;
  }
  uStack_2c = 0;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
  DAT_14028e48 = (*pcVar1)(local_54,&uStack_2c);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_50);
  DAT_14028e48 = (*pcVar1)(iStack_50,param_1,&uStack_2c);
  return 0;
}



/* ==== FUN_14016720 @ 14016720 ==== 
 * signature: undefined4 __cdecl FUN_14016720(int param_1)
 * body: 14016720-14016752
 */

undefined4 __cdecl FUN_14016720(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,1,param_1);
  return 0;
}



/* ==== FUN_14016760 @ 14016760 ==== 
 * signature: undefined4 __cdecl FUN_14016760(int param_1)
 * body: 14016760-14016792
 */

undefined4 __cdecl FUN_14016760(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,2,param_1);
  return 0;
}



/* ==== FUN_140167a0 @ 140167a0 ==== 
 * signature: undefined4 __cdecl FUN_140167a0(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 140167a0-14016856
 */

undefined4 __cdecl FUN_140167a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_2,param_3,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 0x36);
  return 0;
}



/* ==== FUN_14016860 @ 14016860 ==== 
 * signature: undefined4 __cdecl FUN_14016860(undefined4 param_1)
 * body: 14016860-14016919
 */

undefined4 __cdecl FUN_14016860(undefined4 param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,s_events_140260f8,0x17,0xd);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,&DAT_14026584,0x66,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,s_targetframe_14026ce8,0x66,6);
  return 0;
}



/* ==== FUN_14016920 @ 14016920 ==== 
 * signature: undefined4 __cdecl FUN_14016920(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 14016920-14016a3a
 */

undefined4 __cdecl FUN_14016920(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140091b0(param_4,param_3,param_1,(undefined4 *)0x0,(undefined4 *)0x0);
    return uVar2;
  }
  uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026584);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_targetframe_14026ce8);
    if ((char)uVar1 == '\0') {
      return 0x10000;
    }
    if (*param_4 == 0x66) {
      FUN_14008b20(0,param_4,(int)param_1 + 0x36);
      return 0;
    }
    if (*param_4 == 0x6a) {
      *param_4 = 0x66;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[8] = 0;
      param_4[1] = -1;
      param_4[2] = -1;
      FUN_14008b20(0,param_4,(int)param_1 + 0x36);
      return 0;
    }
    return 0x10000;
  }
  if (*param_4 == 0x66) {
    FUN_14008b20(0,param_4,(int)param_1 + 10);
    return 0;
  }
  if (*param_4 == 0x6a) {
    *param_4 = 0x66;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[1] = -1;
    param_4[2] = -1;
    FUN_14008b20(0,param_4,(int)param_1 + 10);
    return 0;
  }
  return 0x10000;
}



/* ==== FUN_14016a40 @ 14016a40 ==== 
 * signature: int __cdecl FUN_14016a40(int param_1, uint * param_2, undefined4 param_3, undefined4 param_4)
 * body: 14016a40-14016c76
 */

int __cdecl FUN_14016a40(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int local_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  iVar3 = 0x10000;
  uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026584);
  if ((char)uVar1 != '\0') {
    local_e = 0;
    local_a = 0;
    local_6 = 0;
    local_12 = 0xffffffff;
    local_14 = 0x66;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
    iVar3 = (*pcVar2)(local_18,param_1,param_4,&local_14);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
      DAT_14028e48 = (*pcVar2)(local_18,param_1,param_1 + 10);
      FUN_14008b20(0,(undefined2 *)(param_1 + 10),(int)&local_14);
      if (local_6 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,local_6);
        local_6 = 0;
        local_e = 0;
        local_a = 0;
      }
    }
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_targetframe_14026ce8);
  if ((char)uVar1 != '\0') {
    local_e = 0;
    local_a = 0;
    local_6 = 0;
    local_12 = 0xffffffff;
    local_14 = 0x66;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
    iVar3 = (*pcVar2)(local_18,param_1,param_4,&local_14);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x44) != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,*(undefined4 *)(param_1 + 0x44));
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      FUN_14008b20(0,(undefined2 *)(param_1 + 0x36),(int)&local_14);
      if (local_6 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,local_6);
      }
    }
  }
  return iVar3;
}



/* ==== FUN_14016c80 @ 14016c80 ==== 
 * signature: undefined4 __cdecl FUN_14016c80(int param_1, int param_2)
 * body: 14016c80-14016ea8
 */

undefined4 __cdecl FUN_14016c80(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int local_20c;
  int local_208;
  int iStack_204;
  int local_200 [128];
  
  if (((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
      (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) || (*(short *)(param_1 + 10) != 0x66)) {
    return 0x10000;
  }
  iVar1 = FUN_14015cf0(*(char **)(param_1 + 0x44));
  local_208 = 1;
  local_20c = 0;
  if (iVar1 == -1) {
    puVar4 = *(undefined **)(param_1 + 0x44);
  }
  else {
    puVar4 = (&PTR_DAT_14026ca0)[iVar1];
  }
  if (PTR_s__parent_14026cd0 != (undefined *)0x0) {
    ppuVar3 = &PTR_s__parent_14026cd0;
    do {
      pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x1d,local_200);
      DAT_14028e48 = (*pcVar2)(local_200[0],&local_208,*ppuVar3,puVar4);
      if (local_208 == 0) {
        iStack_204 = 0;
        pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,7,local_200);
        DAT_14028e48 = (*pcVar2)(local_200[0],&iStack_204,*(undefined4 *)(param_1 + 0x18),0x2e);
        if ((iStack_204 != 0) && (PTR_DAT_14026cb8 != (undefined *)0x0)) {
          ppuVar3 = &PTR_DAT_14026cb8;
          goto LAB_14016d9e;
        }
        break;
      }
      ppuVar3 = ppuVar3 + 1;
    } while (*ppuVar3 != (undefined *)0x0);
  }
  goto LAB_14016dee;
  while (ppuVar3 = ppuVar3 + 1, *ppuVar3 != (undefined *)0x0) {
LAB_14016d9e:
    pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x1d,local_200);
    DAT_14028e48 = (*pcVar2)(local_200[0],&local_208,*ppuVar3,iStack_204);
    if (local_208 == 0) {
      local_20c = 1;
      break;
    }
  }
LAB_14016dee:
  if (local_20c == 0) {
    pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0x12],1,0,local_200);
    DAT_14028e48 = (*pcVar2)(local_200[0],param_1,*(undefined4 *)(param_1 + 0x18),puVar4);
    return 0;
  }
  FUN_14008990(local_200,s_Unable_to_open_url___s__into_fra_14026d00);
  pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_20c);
  DAT_14028e48 = (*pcVar2)(local_20c,param_1,2,local_200);
  return 0;
}



/* ==== FUN_14016eb0 @ 14016eb0 ==== 
 * signature: uint __cdecl FUN_14016eb0(char * param_1, char * param_2)
 * body: 14016eb0-14016f01
 */

uint __cdecl FUN_14016eb0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = _toupper((int)cVar1);
    cVar1 = (char)iVar3;
    iVar3 = _toupper((int)*param_2);
    cVar2 = (char)iVar3;
    if ((cVar1 == '\0') || (cVar2 == '\0')) break;
    param_2 = param_2 + 1;
  } while (cVar2 == cVar1);
  if (cVar1 < cVar2) {
    return 0xffffffff;
  }
  return (uint)(cVar2 < cVar1);
}



/* ==== PostUrlText @ 14016f10 ==== 
 * signature: undefined __cdecl PostUrlText(int param_1)
 * body: 14016f10-14017141
 */

void __cdecl PostUrlText(int param_1)

{
                    /* 0x16f10  3  PostUrlText */
  if (*(short *)(param_1 + 0xb2) == 0) {
    *(undefined2 *)(param_1 + 0xa6) = 1;
    *(undefined4 *)(param_1 + 0xae) = 1;
    *(undefined2 *)(param_1 + 0xa4) = 1;
    *(undefined4 *)(param_1 + 0xaa) = 0xa0;
    *(undefined2 *)(param_1 + 0xbc) = 1;
    FUN_140088b0(param_1,0x14026d30);
  }
  if (*(short *)(param_1 + 0xb2) == 1) {
    FUN_14008e00(param_1,(undefined4 *)s__MComponent_14026038,1,0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,7,FUN_14017150);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,0,8,FUN_140171d0);
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x22,FUN_140172c0);
      goto LAB_14016fdb;
    }
LAB_14016ff8:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x16,FUN_14017880);
      goto LAB_14017015;
    }
LAB_14017032:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x11,FUN_14017480);
      goto LAB_1401704f;
    }
LAB_1401706c:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x12,FUN_140175e0);
      goto LAB_14017089;
    }
LAB_140170a6:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xe,FUN_140176f0);
      goto LAB_140170c3;
    }
LAB_140170e0:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x25,FUN_14017730);
      goto LAB_140170fd;
    }
  }
  else {
LAB_14016fdb:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,9,FUN_140173c0);
      goto LAB_14016ff8;
    }
LAB_14017015:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x17,FUN_14017a60);
      goto LAB_14017032;
    }
LAB_1401704f:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x13,FUN_14017530);
      goto LAB_1401706c;
    }
LAB_14017089:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0xd,FUN_140176b0);
      goto LAB_140170a6;
    }
LAB_140170c3:
    if (*(short *)(param_1 + 0xb2) == 2) {
      FUN_14008e40(param_1,1,0,0x19,FUN_14017d40);
      goto LAB_140170e0;
    }
LAB_140170fd:
    if (*(short *)(param_1 + 0xb2) != 2) goto LAB_14017136;
    FUN_14008e40(param_1,1,0,0x2e,FUN_140177c0);
  }
  if (*(short *)(param_1 + 0xb2) == 2) {
    FUN_14008e40(param_1,1,1,0,FUN_14018280);
  }
LAB_14017136:
  FUN_14008e70(param_1);
  return;
}



/* ==== FUN_14017150 @ 14017150 ==== 
 * signature: undefined4 __cdecl FUN_14017150(undefined2 * param_1)
 * body: 14017150-140171cc
 */

undefined4 __cdecl FUN_14017150(undefined2 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0x17;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0x1b] = 0;
  param_1[0x43] = 0x66;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x31] = 0x66;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  param_1[0x3a] = 0x66;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 1) = 0x12e;
  *(undefined4 *)(param_1 + 0x41) = 0;
  uVar1 = FUN_14008a80((int)param_1);
  *(undefined4 *)(param_1 + 0x4e) = uVar1;
  return 0;
}



/* ==== FUN_140171d0 @ 140171d0 ==== 
 * signature: undefined4 __cdecl FUN_140171d0(undefined4 * param_1, undefined4 * param_2)
 * body: 140171d0-140172b8
 */

undefined4 __cdecl FUN_140171d0(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_8;
  int iStack_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,(int)param_1 + 0x36,(int)param_2 + 0x36);
  *(undefined2 *)((int)param_1 + 10) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,(int)param_1 + 10,(int)param_2 + 10);
  param_1[0x22] = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0x86) = 0x66;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar2 = FUN_14008a80((int)param_1);
  param_1[0x27] = uVar2;
  return 0;
}



/* ==== FUN_140172c0 @ 140172c0 ==== 
 * signature: undefined4 __cdecl FUN_140172c0(undefined4 * param_1, undefined4 * param_2)
 * body: 140172c0-140173bd
 */

undefined4 __cdecl FUN_140172c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  code *pcVar2;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  puVar1 = (undefined2 *)((int)param_1 + 0x36);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_10);
  DAT_14028e48 = (*pcVar2)(local_10,param_1,puVar1);
  *puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_c);
  DAT_14028e48 = (*pcVar2)(iStack_c,puVar1,(int)param_2 + 0x36);
  puVar1 = (undefined2 *)((int)param_1 + 10);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar2)(iStack_8,param_1,puVar1);
  *puVar1 = 0;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&iStack_4);
  DAT_14028e48 = (*pcVar2)(iStack_4,puVar1,(int)param_2 + 10);
  return 0;
}



/* ==== FUN_140173c0 @ 140173c0 ==== 
 * signature: undefined4 __cdecl FUN_140173c0(int param_1)
 * body: 140173c0-14017476
 */

undefined4 __cdecl FUN_140173c0(int param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,param_1 + 0x36);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,param_1 + 10);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,param_1 + 0x86);
  FUN_14018100(param_1);
  return 0;
}



/* ==== FUN_14017480 @ 14017480 ==== 
 * signature: undefined4 __cdecl FUN_14017480(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 14017480-1401752d
 */

undefined4 __cdecl FUN_14017480(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x36,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10,&local_10);
  *param_4 = *param_4 + local_10;
  return 0;
}



/* ==== FUN_14017530 @ 14017530 ==== 
 * signature: undefined4 __cdecl FUN_14017530(int param_1, int param_2)
 * body: 14017530-140175df
 */

undefined4 __cdecl FUN_14017530(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_12;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_12 = 1;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_10);
  DAT_14028e48 = (*pcVar1)(local_10,&local_12,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x36);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10);
  return 0;
}



/* ==== FUN_140175e0 @ 140175e0 ==== 
 * signature: undefined4 __cdecl FUN_140175e0(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 140175e0-140176a7
 */

undefined4 __cdecl FUN_140175e0(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_e;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if (param_4 == 1) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_c);
    DAT_14028e48 = (*pcVar1)(local_c,&local_e,1);
    if (local_e == 1) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_c);
      DAT_14028e48 = (*pcVar1)(local_c,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_8);
      DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x36);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10);
      return 0;
    }
  }
  return 0x10000;
}



/* ==== FUN_140176b0 @ 140176b0 ==== 
 * signature: undefined4 __cdecl FUN_140176b0(int param_1)
 * body: 140176b0-140176e2
 */

undefined4 __cdecl FUN_140176b0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,1,param_1);
  return 0;
}



/* ==== FUN_140176f0 @ 140176f0 ==== 
 * signature: undefined4 __cdecl FUN_140176f0(int param_1)
 * body: 140176f0-14017722
 */

undefined4 __cdecl FUN_140176f0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_14008ab0(param_1,0,0x21,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,2,param_1);
  return 0;
}



/* ==== FUN_14017730 @ 14017730 ==== 
 * signature: undefined4 __cdecl FUN_14017730(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 14017730-140177b6
 */

undefined4 __cdecl FUN_14017730(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,param_2,param_3,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 4),1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_2,param_3,param_1 + 10);
  return 0;
}



/* ==== FUN_140177c0 @ 140177c0 ==== 
 * signature: undefined4 __cdecl FUN_140177c0(undefined4 param_1)
 * body: 140177c0-14017879
 */

undefined4 __cdecl FUN_140177c0(undefined4 param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,s_events_140260f8,0x17,0xd);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1,&DAT_14026584,0x66,6);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x2c,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1,&DAT_14026570,0x14,2);
  return 0;
}



/* ==== FUN_14017880 @ 14017880 ==== 
 * signature: undefined4 __cdecl FUN_14017880(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 14017880-14017a5a
 */

undefined4 __cdecl FUN_14017880(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  int local_4;
  
  uVar2 = FUN_14008910(param_2,(uint *)s_events_140260f8);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_14008910(param_2,(uint *)&DAT_14026584);
    if ((char)uVar2 != '\0') {
      if (*param_4 == 0x66) {
        FUN_14008b20(0,param_4,(int)param_1 + 0x36);
        return 0;
      }
      if (*param_4 != 0x6a) {
        return 0x10000;
      }
      *param_4 = 0x66;
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[8] = 0;
      param_4[1] = -1;
      param_4[2] = -1;
      FUN_14008b20(0,param_4,(int)param_1 + 0x36);
      return 0;
    }
    uVar2 = FUN_14008910(param_2,(uint *)s_response_14026d3c);
    if ((char)uVar2 != '\0') {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&local_4);
      DAT_14028e48 = (*pcVar3)(local_4,param_4,*(undefined4 *)((int)param_1 + 0x82));
      return DAT_14028e48;
    }
    uVar2 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
    if ((char)uVar2 != '\0') {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,2,&local_4);
      DAT_14028e48 = (*pcVar3)(local_4,param_4,param_1[0x25]);
      return DAT_14028e48;
    }
  }
  else {
    if ((param_3 == (short *)0x0) || (*param_3 != 1)) {
      return 0x10000;
    }
    sVar1 = *param_4;
    if ((sVar1 == 0x17) || (sVar1 == 0x6a)) {
      if (sVar1 == 0x6a) {
        *param_4 = 0x17;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
      }
      if (((*(uint *)(param_3 + 1) & 0xff000000) == 0x80000000) &&
         ((*(uint *)(param_3 + 1) & 0xffffff) == 1)) {
        *(undefined4 *)param_4 = *param_1;
        *(undefined4 *)(param_4 + 2) = param_1[1];
        param_4[4] = *(short *)(param_1 + 2);
        return 0;
      }
    }
  }
  return 0x10000;
}



/* ==== FUN_14017a60 @ 14017a60 ==== 
 * signature: int __cdecl FUN_14017a60(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 14017a60-14017d3c
 */

int __cdecl FUN_14017a60(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int local_1c;
  undefined2 local_18;
  undefined4 local_16;
  undefined4 local_12;
  undefined4 local_e;
  int local_a;
  int local_4;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026584);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026570);
      if ((((char)uVar1 != '\0') && (*param_4 == 0x14)) && (param_4[1] != 0)) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x22,&local_1c);
        DAT_14028e48 = (*pcVar2)(local_1c,param_1,s_nProcessSrv_140262e0,0xffffffff,0,&local_4);
        if (DAT_14028e48 == 0) {
          pcVar2 = (code *)FUN_14008ab0(local_4,1,4,&local_1c);
          DAT_14028e48 = (*pcVar2)(local_1c,param_1);
        }
        FUN_14014cf0(param_1,*(int *)(param_1 + 0x9c),0x8ff,0);
        return 0;
      }
      iVar3 = 0x10000;
    }
    else {
      local_12 = 0;
      local_e = 0;
      local_a = 0;
      local_16 = 0xffffffff;
      local_18 = 0x66;
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_1c);
      iVar3 = (*pcVar2)(local_1c,param_1,param_4,&local_18);
      DAT_14028e48 = iVar3;
      if (iVar3 == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_1c);
        DAT_14028e48 = (*pcVar2)(local_1c,param_1,(undefined2 *)(param_1 + 0x36));
        FUN_14008b20(0,(undefined2 *)(param_1 + 0x36),(int)&local_18);
        if (local_a != 0) {
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_1c);
          DAT_14028e48 = (*pcVar2)(local_1c,local_a);
        }
        return 0;
      }
    }
  }
  else {
    local_12 = 0;
    local_e = 0;
    local_a = 0;
    local_16 = 0xffffffff;
    local_18 = 0x66;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_1c);
    iVar3 = (*pcVar2)(local_1c,param_1,param_4,&local_18);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_1c);
      DAT_14028e48 = (*pcVar2)(local_1c,param_1,(undefined2 *)(param_1 + 0x86));
      FUN_14008b20(0,(undefined2 *)(param_1 + 0x86),(int)&local_18);
      if (local_a != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_1c);
        DAT_14028e48 = (*pcVar2)(local_1c,local_a);
      }
      return 0;
    }
  }
  return iVar3;
}



/* ==== FUN_14017d40 @ 14017d40 ==== 
 * signature: undefined4 __cdecl FUN_14017d40(int param_1, int param_2)
 * body: 14017d40-140180ff
 */

undefined4 __cdecl FUN_14017d40(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_648;
  undefined4 local_644;
  int local_640;
  int local_63c;
  undefined4 local_638;
  undefined1 auStack_632 [70];
  undefined2 uStack_5ec;
  undefined2 uStack_5a2;
  undefined2 *puStack_232;
  int iStack_22c;
  undefined2 uStack_228;
  undefined2 uStack_226;
  undefined4 uStack_218;
  int iStack_214;
  undefined4 uStack_210;
  char local_200 [256];
  undefined1 local_100 [256];
  
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
     (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) {
    return 0x10000;
  }
  puVar5 = &local_638;
  for (iVar4 = 0x10d; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  FUN_14018100(param_1);
  cVar1 = FUN_140181b0(param_1,(short *)(param_2 + 0x26));
  if (cVar1 == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_No_address_specified_14026d50);
    return 0;
  }
  FUN_14012750(*(int *)(param_1 + 0x70),0,(int)local_100);
  FUN_14012750(*(int *)(param_1 + 0x70),1,(int)local_200);
  if (local_200[0] == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Host_not_specified_14026770);
    return 0;
  }
  local_644 = 0;
  local_640 = 0;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[4],1,0x22,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,param_1,s_nProcessSrv_140262e0,0xffffffff,0,&local_63c);
  if (DAT_14028e48 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Cannot_locate_net_service_140266fc);
    return 0;
  }
  uStack_5ec = 0x40;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,auStack_632,local_200);
  uStack_218 = 0;
  uVar3 = FUN_14013780(param_1,&uStack_218,&local_644,&local_640,*(int *)(param_1 + 0x70),3,
                       *(int *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x82),
                       *(undefined4 *)(param_1 + 0x7e));
  if ((char)uVar3 == '\0') {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Error_forming_HTTP_message_14026754);
    return 0;
  }
  uStack_210 = local_644;
  iStack_214 = local_640;
  pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[2],1,0,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,0x12,&puStack_232);
  if (DAT_14028e48 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_648);
    DAT_14028e48 = (*pcVar2)(local_648,param_1,1,s_Out_of_memory__14026358);
    return 0;
  }
  *puStack_232 = 0x69;
  *(undefined4 *)(puStack_232 + 3) = 0;
  *(undefined4 *)(puStack_232 + 5) = 0;
  *(undefined4 *)(puStack_232 + 1) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(puStack_232 + 7) = 0;
  uStack_228 = 1;
  iStack_22c = param_1;
  uStack_226 = 0;
  uStack_5a2 = 1;
  pcVar2 = (code *)FUN_14008ab0(local_63c,1,2,&local_648);
  DAT_14028e48 = (*pcVar2)(local_648,&local_638);
  return 0;
}



/* ==== FUN_14018100 @ 14018100 ==== 
 * signature: undefined4 __cdecl FUN_14018100(int param_1)
 * body: 14018100-140181a3
 */

undefined4 __cdecl FUN_14018100(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x82) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x82));
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0;
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  return 0;
}



/* ==== FUN_140181b0 @ 140181b0 ==== 
 * signature: char __cdecl FUN_140181b0(int param_1, short * param_2)
 * body: 140181b0-1401827f
 */

char __cdecl FUN_140181b0(int param_1,short *param_2)

{
  code *pcVar1;
  short *psVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,param_1,param_1 + 0x36,param_1 + 0x62);
  }
  if (*(int *)(param_1 + 0x7a) == 0) {
    psVar2 = (short *)(param_1 + 10);
    if (*psVar2 == 0x6e) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_4);
      psVar2 = param_2;
    }
    else {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_4);
    }
    DAT_14028e48 = (*pcVar1)(local_4,param_1,psVar2,param_1 + 0x74);
  }
  return '\x01' - (*(int *)(param_1 + 0x70) == 0);
}



/* ==== FUN_14018280 @ 14018280 ==== 
 * signature: undefined __cdecl FUN_14018280(int param_1, undefined4 param_2, undefined4 * param_3)
 * body: 14018280-1401838c
 */

void __cdecl FUN_14018280(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  int local_c;
  undefined2 uStack_8;
  int iStack_6;
  
  piVar1 = (int *)(param_1 + 0x98);
  *piVar1 = 0;
  if (*(int *)(param_1 + 0x82) != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_c);
    DAT_14028e48 = (*pcVar2)(local_c,*(undefined4 *)(param_1 + 0x82));
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0;
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0x17,&local_c);
  DAT_14028e48 = (*pcVar2)(local_c,param_1 + 0x74,param_2,*param_3);
  FUN_14014b30(piVar1,param_2);
  iStack_6 = *piVar1;
  uStack_8 = 1;
  if ((iStack_6 != 0) && (iStack_6 != 200)) {
    FUN_14014ed0(param_1,*(int *)(param_1 + 0x9c),0x8fe,&uStack_8);
    return;
  }
  FUN_14014ed0(param_1,*(int *)(param_1 + 0x9c),0x8fd,&uStack_8);
  return;
}



/* ==== USER32.DLL::SetWindowLongA @ 1401838e ==== 
 * signature: LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
 * body: 1401838e-14018393
 * thunk to: USER32.DLL::SetWindowLongA
 */

LONG SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1401838e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}



/* ==== USER32.DLL::GetWindowLongA @ 14018394 ==== 
 * signature: LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
 * body: 14018394-14018399
 * thunk to: USER32.DLL::GetWindowLongA
 */

LONG GetWindowLongA(HWND hWnd,int nIndex)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14018394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetWindowLongA(hWnd,nIndex);
  return LVar1;
}



/* ==== USER32.DLL::CreateWindowExA @ 1401839a ==== 
 * signature: HWND __stdcall CreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam)
 * body: 1401839a-1401839f
 * thunk to: USER32.DLL::CreateWindowExA
 */

HWND CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,
                    int Y,int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,
                    LPVOID lpParam)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1401839a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateWindowExA(dwExStyle,lpClassName,lpWindowName,dwStyle,X,Y,nWidth,nHeight,hWndParent,
                           hMenu,hInstance,lpParam);
  return pHVar1;
}



/* ==== USER32.DLL::RegisterClassA @ 140183a0 ==== 
 * signature: ATOM __stdcall RegisterClassA(WNDCLASSA * lpWndClass)
 * body: 140183a0-140183a5
 * thunk to: USER32.DLL::RegisterClassA
 */

ATOM RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140183a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}



/* ==== USER32.DLL::DestroyWindow @ 140183a6 ==== 
 * signature: BOOL __stdcall DestroyWindow(HWND hWnd)
 * body: 140183a6-140183ab
 * thunk to: USER32.DLL::DestroyWindow
 */

BOOL DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140183a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}



/* ==== USER32.DLL::DefWindowProcA @ 140183ac ==== 
 * signature: LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
 * body: 140183ac-140183b1
 * thunk to: USER32.DLL::DefWindowProcA
 */

LRESULT DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140183ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DefWindowProcA(hWnd,Msg,wParam,lParam);
  return LVar1;
}



/* ==== __break @ 140183b2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b2-140183b2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183b3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b3-140183b3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183b4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b4-140183b4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183b5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b5-140183b5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183b6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b6-140183b6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183b7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b7-140183b7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183b8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b8-140183b8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183b9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183b9-140183b9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183ba-140183ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183bb-140183bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183bc-140183bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183bd-140183bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183be-140183be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140183bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183bf-140183bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140183c0 @ 140183c0 ==== 
 * signature: int __cdecl FUN_140183c0(int * param_1)
 * body: 140183c0-14018427
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_140183c0(int *param_1)

{
  UINT uMode;
  int iVar1;
  
  _DAT_14026d68 = 1;
  uMode = SetErrorMode(0x8000);
  iVar1 = FUN_14018430();
  if (iVar1 == 0) {
    iVar1 = FUN_140184a0();
    if (iVar1 != 0) {
      FUN_14018660();
      SetErrorMode(uMode);
      return iVar1;
    }
    if (param_1 != (int *)0x0) {
      iVar1 = FUN_14018550();
      *param_1 = iVar1;
    }
    if (DAT_14026d74 == 1) {
      FUN_14018c0f();
    }
    iVar1 = 0;
  }
  SetErrorMode(uMode);
  return iVar1;
}



/* ==== FUN_14018430 @ 14018430 ==== 
 * signature: undefined4 __stdcall FUN_14018430(void)
 * body: 14018430-1401849e
 */

undefined4 FUN_14018430(void)

{
  if (DAT_14026d70 == (HMODULE)0x0) {
    DAT_14026d70 = LoadLibraryA(s_QTIM32_DLL_14026d90);
    if (DAT_14026d70 == (HMODULE)0x0) {
      PTR_FUN_14026d6c = FUN_140188fc;
      DAT_14026d70 = (HMODULE)0x0;
      return 1;
    }
    PTR_FUN_14026d6c = GetProcAddress(DAT_14026d70,s__EntryPoint_14026d84);
    if ((FARPROC)PTR_FUN_14026d6c == (FARPROC)0x0) {
      PTR_FUN_14026d6c = FUN_140188fc;
      DAT_14026d70 = (HMODULE)0x0;
      return 2;
    }
  }
  DAT_14026d74 = DAT_14026d74 + 1;
  return 0;
}



/* ==== FUN_140184a0 @ 140184a0 ==== 
 * signature: undefined4 __stdcall FUN_140184a0(void)
 * body: 140184a0-14018540
 */

undefined4 FUN_140184a0(void)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (DAT_14026d7c == (HMODULE)0x0) {
    DAT_14026d7c = LoadLibraryA(s_CMGR32_DLL_14026dac);
    if (DAT_14026d7c == (HMODULE)0x0) {
      PTR_FUN_14026d78 = FUN_1401871c;
      DAT_14026d7c = (HMODULE)0x0;
      return 1;
    }
    PTR_FUN_14026d78 = GetProcAddress(DAT_14026d7c,s__EntryPoint_14026d84);
    pFVar1 = GetProcAddress(DAT_14026d7c,s__CMgrInitialize_14026d9c);
    if ((PTR_FUN_14026d78 != (undefined *)0x0) && (pFVar1 != (FARPROC)0x0)) {
      iVar2 = (*pFVar1)();
      if (iVar2 == 0) goto LAB_14018537;
    }
    PTR_FUN_14026d78 = FUN_1401871c;
    FreeLibrary(DAT_14026d7c);
    DAT_14026d7c = (HMODULE)0x0;
    return 2;
  }
LAB_14018537:
  DAT_14026d80 = DAT_14026d80 + 1;
  return 0;
}



/* ==== FUN_14018550 @ 14018550 ==== 
 * signature: int __stdcall FUN_14018550(void)
 * body: 14018550-14018659
 */

int FUN_14018550(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  DWORD DVar4;
  int iVar5;
  int local_914;
  int iStack_910;
  undefined4 local_90c;
  undefined1 auStack_908 [4];
  CHAR local_904 [260];
  undefined1 auStack_800 [2048];
  
  local_914 = 0;
  hModule = LoadLibraryA(s_version_dll_14026df8);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_GetFileVersionInfoSizeA_14026de0);
    pFVar2 = GetProcAddress(hModule,s_GetFileVersionInfoA_14026dcc);
    pFVar3 = GetProcAddress(hModule,s_VerQueryValueA_14026dbc);
    DVar4 = GetModuleFileNameA(DAT_14026d70,local_904,0x104);
    if ((((DVar4 != 0) && (pFVar1 != (FARPROC)0x0)) && (pFVar2 != (FARPROC)0x0)) &&
       (pFVar3 != (FARPROC)0x0)) {
      iVar5 = (*pFVar1)(local_904,&local_90c);
      if (iVar5 != 0) {
        iVar5 = (*pFVar2)(local_904,local_90c,iVar5,auStack_800);
        if (iVar5 != 0) {
          iVar5 = (*pFVar3)(auStack_800,&DAT_14026db8,&iStack_910,auStack_908);
          if (iVar5 != 0) {
            local_914 = (*(uint *)(iStack_910 + 0x14) & 0xffff) +
                        ((*(uint *)(iStack_910 + 0x10) >> 0x10) * 0x10 +
                         (*(uint *)(iStack_910 + 0x14) >> 0x10) +
                        (*(uint *)(iStack_910 + 0x10) & 0xffff) * 10) * 0x100;
          }
        }
      }
    }
    FreeLibrary(hModule);
  }
  return local_914;
}



/* ==== FUN_14018660 @ 14018660 ==== 
 * signature: undefined __stdcall FUN_14018660(void)
 * body: 14018660-140186bc
 */

void FUN_14018660(void)

{
  _OSVERSIONINFOA local_94;
  
  if ((0 < DAT_14026d74) && (DAT_14026d74 = DAT_14026d74 + -1, DAT_14026d74 == 0)) {
    FUN_14018c1c();
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      FreeLibrary(DAT_14026d70);
    }
    DAT_14026d70 = (HMODULE)0x0;
    PTR_FUN_14026d6c = FUN_140188fc;
  }
  return;
}



/* ==== FUN_140186c0 @ 140186c0 ==== 
 * signature: undefined __stdcall FUN_140186c0(void)
 * body: 140186c0-14018708
 */

void FUN_140186c0(void)

{
  FARPROC pFVar1;
  
  if ((0 < DAT_14026d80) && (DAT_14026d80 = DAT_14026d80 + -1, DAT_14026d80 == 0)) {
    pFVar1 = GetProcAddress(DAT_14026d7c,s__CMgrTerminate_14026e04);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)();
    }
    FreeLibrary(DAT_14026d7c);
    DAT_14026d7c = (HMODULE)0x0;
    PTR_FUN_14026d78 = FUN_1401871c;
  }
  return;
}



/* ==== FUN_14018710 @ 14018710 ==== 
 * signature: undefined __stdcall FUN_14018710(void)
 * body: 14018710-14018719
 */

void FUN_14018710(void)

{
  FUN_140186c0();
  FUN_14018660();
  return;
}



/* ==== FUN_1401871c @ 1401871c ==== 
 * signature: undefined4 __stdcall FUN_1401871c(void)
 * body: 1401871c-14018749
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1401871c(void)

{
  undefined4 uVar1;
  
  if (DAT_14026d68 == 0) {
    FUN_140183c0((int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1401873e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_14026d78)();
    return uVar1;
  }
  return 0x80008001;
}



/* ==== FUN_1401874a @ 1401874a ==== 
 * signature: undefined __stdcall FUN_1401874a(void)
 * body: 1401874a-1401875a
 */

void FUN_1401874a(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_1401875b @ 1401875b ==== 
 * signature: undefined __stdcall FUN_1401875b(void)
 * body: 1401875b-1401876c
 */

void FUN_1401875b(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_1401876d @ 1401876d ==== 
 * signature: undefined __stdcall FUN_1401876d(void)
 * body: 1401876d-1401877e
 */

void FUN_1401876d(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_1401877f @ 1401877f ==== 
 * signature: undefined __stdcall FUN_1401877f(void)
 * body: 1401877f-14018790
 */

void FUN_1401877f(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_14018791 @ 14018791 ==== 
 * signature: undefined __stdcall FUN_14018791(void)
 * body: 14018791-140187a2
 */

void FUN_14018791(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140187a3 @ 140187a3 ==== 
 * signature: undefined __stdcall FUN_140187a3(void)
 * body: 140187a3-140187b4
 */

void FUN_140187a3(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140187b5 @ 140187b5 ==== 
 * signature: undefined __stdcall FUN_140187b5(void)
 * body: 140187b5-140187c6
 */

void FUN_140187b5(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140187c7 @ 140187c7 ==== 
 * signature: undefined __stdcall FUN_140187c7(void)
 * body: 140187c7-140187d8
 */

void FUN_140187c7(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140187d9 @ 140187d9 ==== 
 * signature: undefined __stdcall FUN_140187d9(void)
 * body: 140187d9-140187ea
 */

void FUN_140187d9(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140187eb @ 140187eb ==== 
 * signature: undefined __stdcall FUN_140187eb(void)
 * body: 140187eb-140187fc
 */

void FUN_140187eb(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140187fd @ 140187fd ==== 
 * signature: undefined __stdcall FUN_140187fd(void)
 * body: 140187fd-1401880e
 */

void FUN_140187fd(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_1401880f @ 1401880f ==== 
 * signature: undefined __stdcall FUN_1401880f(void)
 * body: 1401880f-14018820
 */

void FUN_1401880f(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_14018821 @ 14018821 ==== 
 * signature: undefined __stdcall FUN_14018821(void)
 * body: 14018821-14018832
 */

void FUN_14018821(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_14018833 @ 14018833 ==== 
 * signature: undefined __stdcall FUN_14018833(void)
 * body: 14018833-14018844
 */

void FUN_14018833(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_14018845 @ 14018845 ==== 
 * signature: undefined __stdcall FUN_14018845(void)
 * body: 14018845-14018856
 */

void FUN_14018845(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_14018857 @ 14018857 ==== 
 * signature: undefined __stdcall FUN_14018857(void)
 * body: 14018857-14018868
 */

void FUN_14018857(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_14018869 @ 14018869 ==== 
 * signature: undefined __stdcall FUN_14018869(void)
 * body: 14018869-1401887a
 */

void FUN_14018869(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_1401887b @ 1401887b ==== 
 * signature: undefined __stdcall FUN_1401887b(void)
 * body: 1401887b-1401888c
 */

void FUN_1401887b(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_1401888d @ 1401888d ==== 
 * signature: undefined __stdcall FUN_1401888d(void)
 * body: 1401888d-1401889e
 */

void FUN_1401888d(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_1401889f @ 1401889f ==== 
 * signature: undefined __stdcall FUN_1401889f(void)
 * body: 1401889f-140188b0
 */

void FUN_1401889f(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140188b1 @ 140188b1 ==== 
 * signature: undefined __stdcall FUN_140188b1(void)
 * body: 140188b1-140188c2
 */

void FUN_140188b1(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140188c3 @ 140188c3 ==== 
 * signature: undefined __stdcall FUN_140188c3(void)
 * body: 140188c3-140188d4
 */

void FUN_140188c3(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140188d5 @ 140188d5 ==== 
 * signature: undefined __stdcall FUN_140188d5(void)
 * body: 140188d5-140188e6
 */

void FUN_140188d5(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140188e7 @ 140188e7 ==== 
 * signature: undefined __stdcall FUN_140188e7(void)
 * body: 140188e7-140188f8
 */

void FUN_140188e7(void)

{
  (*(code *)PTR_FUN_14026d78)();
  return;
}



/* ==== FUN_140188f9 @ 140188f9 ==== 
 * signature: undefined __stdcall FUN_140188f9(void)
 * body: 140188f9-140188fa
 */

void FUN_140188f9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140188fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140188fb-140188fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140188fc @ 140188fc ==== 
 * signature: undefined6 __stdcall FUN_140188fc(void)
 * body: 140188fc-14018928
 */

/* WARNING: Unable to track spacebase fully for stack */

undefined6 FUN_140188fc(void)

{
  undefined4 in_EAX;
  undefined6 uVar1;
  
  if (DAT_14026d68 == 0) {
    FUN_140183c0((int *)0x0);
                    /* WARNING: Could not recover jumptable at 0x1401891a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_FUN_14026d6c)();
    return uVar1;
  }
  return CONCAT24(0x8000,CONCAT22((short)((uint)in_EAX >> 0x10),0x8001));
}



/* ==== FUN_1401892a @ 1401892a ==== 
 * signature: undefined __stdcall FUN_1401892a(void)
 * body: 1401892a-14018936
 */

void FUN_1401892a(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018937 @ 14018937 ==== 
 * signature: undefined __stdcall FUN_14018937(void)
 * body: 14018937-14018943
 */

void FUN_14018937(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018944 @ 14018944 ==== 
 * signature: undefined __stdcall FUN_14018944(void)
 * body: 14018944-14018950
 */

void FUN_14018944(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018951 @ 14018951 ==== 
 * signature: undefined __stdcall FUN_14018951(void)
 * body: 14018951-1401895d
 */

void FUN_14018951(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_1401895e @ 1401895e ==== 
 * signature: undefined __stdcall FUN_1401895e(void)
 * body: 1401895e-1401896a
 */

void FUN_1401895e(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_1401896b @ 1401896b ==== 
 * signature: undefined __stdcall FUN_1401896b(void)
 * body: 1401896b-14018977
 */

void FUN_1401896b(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018978 @ 14018978 ==== 
 * signature: undefined __stdcall FUN_14018978(void)
 * body: 14018978-14018984
 */

void FUN_14018978(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018985 @ 14018985 ==== 
 * signature: undefined __stdcall FUN_14018985(void)
 * body: 14018985-14018991
 */

void FUN_14018985(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018992 @ 14018992 ==== 
 * signature: undefined __stdcall FUN_14018992(void)
 * body: 14018992-1401899e
 */

void FUN_14018992(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_1401899f @ 1401899f ==== 
 * signature: undefined __stdcall FUN_1401899f(void)
 * body: 1401899f-140189ab
 */

void FUN_1401899f(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_140189ac @ 140189ac ==== 
 * signature: undefined __stdcall FUN_140189ac(void)
 * body: 140189ac-140189b8
 */

void FUN_140189ac(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_140189b9 @ 140189b9 ==== 
 * signature: undefined __stdcall FUN_140189b9(void)
 * body: 140189b9-140189c5
 */

void FUN_140189b9(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_140189c6 @ 140189c6 ==== 
 * signature: undefined __stdcall FUN_140189c6(void)
 * body: 140189c6-140189d2
 */

void FUN_140189c6(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_140189d3 @ 140189d3 ==== 
 * signature: undefined __stdcall FUN_140189d3(void)
 * body: 140189d3-140189df
 */

void FUN_140189d3(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_140189e0 @ 140189e0 ==== 
 * signature: undefined __stdcall FUN_140189e0(void)
 * body: 140189e0-140189ec
 */

void FUN_140189e0(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_140189ed @ 140189ed ==== 
 * signature: undefined __stdcall FUN_140189ed(void)
 * body: 140189ed-140189f9
 */

void FUN_140189ed(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_140189fa @ 140189fa ==== 
 * signature: undefined __stdcall FUN_140189fa(void)
 * body: 140189fa-14018a06
 */

void FUN_140189fa(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a07 @ 14018a07 ==== 
 * signature: undefined __stdcall FUN_14018a07(void)
 * body: 14018a07-14018a13
 */

void FUN_14018a07(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a14 @ 14018a14 ==== 
 * signature: undefined __stdcall FUN_14018a14(void)
 * body: 14018a14-14018a20
 */

void FUN_14018a14(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a21 @ 14018a21 ==== 
 * signature: undefined __stdcall FUN_14018a21(void)
 * body: 14018a21-14018a2d
 */

void FUN_14018a21(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a2e @ 14018a2e ==== 
 * signature: undefined __stdcall FUN_14018a2e(void)
 * body: 14018a2e-14018a3a
 */

void FUN_14018a2e(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a3b @ 14018a3b ==== 
 * signature: undefined __stdcall FUN_14018a3b(void)
 * body: 14018a3b-14018a47
 */

void FUN_14018a3b(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a48 @ 14018a48 ==== 
 * signature: undefined __stdcall FUN_14018a48(void)
 * body: 14018a48-14018a54
 */

void FUN_14018a48(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a55 @ 14018a55 ==== 
 * signature: undefined __stdcall FUN_14018a55(void)
 * body: 14018a55-14018a61
 */

void FUN_14018a55(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a62 @ 14018a62 ==== 
 * signature: undefined __stdcall FUN_14018a62(void)
 * body: 14018a62-14018a6e
 */

void FUN_14018a62(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a6f @ 14018a6f ==== 
 * signature: undefined __stdcall FUN_14018a6f(void)
 * body: 14018a6f-14018a7b
 */

void FUN_14018a6f(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a7c @ 14018a7c ==== 
 * signature: undefined __stdcall FUN_14018a7c(void)
 * body: 14018a7c-14018a88
 */

void FUN_14018a7c(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a89 @ 14018a89 ==== 
 * signature: undefined __stdcall FUN_14018a89(void)
 * body: 14018a89-14018a95
 */

void FUN_14018a89(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018a96 @ 14018a96 ==== 
 * signature: undefined __stdcall FUN_14018a96(void)
 * body: 14018a96-14018aa2
 */

void FUN_14018a96(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018aa3 @ 14018aa3 ==== 
 * signature: undefined __stdcall FUN_14018aa3(void)
 * body: 14018aa3-14018aaf
 */

void FUN_14018aa3(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018ab0 @ 14018ab0 ==== 
 * signature: undefined __stdcall FUN_14018ab0(void)
 * body: 14018ab0-14018abc
 */

void FUN_14018ab0(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018abd @ 14018abd ==== 
 * signature: undefined __stdcall FUN_14018abd(void)
 * body: 14018abd-14018ac9
 */

void FUN_14018abd(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018aca @ 14018aca ==== 
 * signature: undefined __stdcall FUN_14018aca(void)
 * body: 14018aca-14018ad6
 */

void FUN_14018aca(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018ad7 @ 14018ad7 ==== 
 * signature: undefined __stdcall FUN_14018ad7(void)
 * body: 14018ad7-14018ae3
 */

void FUN_14018ad7(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018ae4 @ 14018ae4 ==== 
 * signature: undefined __stdcall FUN_14018ae4(void)
 * body: 14018ae4-14018af0
 */

void FUN_14018ae4(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018af1 @ 14018af1 ==== 
 * signature: undefined __stdcall FUN_14018af1(void)
 * body: 14018af1-14018afd
 */

void FUN_14018af1(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018afe @ 14018afe ==== 
 * signature: undefined __stdcall FUN_14018afe(void)
 * body: 14018afe-14018b0a
 */

void FUN_14018afe(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b0b @ 14018b0b ==== 
 * signature: undefined __stdcall FUN_14018b0b(void)
 * body: 14018b0b-14018b17
 */

void FUN_14018b0b(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b18 @ 14018b18 ==== 
 * signature: undefined __stdcall FUN_14018b18(void)
 * body: 14018b18-14018b24
 */

void FUN_14018b18(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b25 @ 14018b25 ==== 
 * signature: undefined __stdcall FUN_14018b25(void)
 * body: 14018b25-14018b31
 */

void FUN_14018b25(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b32 @ 14018b32 ==== 
 * signature: undefined __stdcall FUN_14018b32(void)
 * body: 14018b32-14018b3e
 */

void FUN_14018b32(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b3f @ 14018b3f ==== 
 * signature: undefined __stdcall FUN_14018b3f(void)
 * body: 14018b3f-14018b4b
 */

void FUN_14018b3f(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b4c @ 14018b4c ==== 
 * signature: undefined __stdcall FUN_14018b4c(void)
 * body: 14018b4c-14018b58
 */

void FUN_14018b4c(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b59 @ 14018b59 ==== 
 * signature: undefined __stdcall FUN_14018b59(void)
 * body: 14018b59-14018b65
 */

void FUN_14018b59(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b66 @ 14018b66 ==== 
 * signature: undefined __stdcall FUN_14018b66(void)
 * body: 14018b66-14018b72
 */

void FUN_14018b66(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b73 @ 14018b73 ==== 
 * signature: undefined __stdcall FUN_14018b73(void)
 * body: 14018b73-14018b7f
 */

void FUN_14018b73(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b80 @ 14018b80 ==== 
 * signature: undefined __stdcall FUN_14018b80(void)
 * body: 14018b80-14018b8c
 */

void FUN_14018b80(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b8d @ 14018b8d ==== 
 * signature: undefined __stdcall FUN_14018b8d(void)
 * body: 14018b8d-14018b99
 */

void FUN_14018b8d(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018b9a @ 14018b9a ==== 
 * signature: undefined __stdcall FUN_14018b9a(void)
 * body: 14018b9a-14018ba6
 */

void FUN_14018b9a(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018ba7 @ 14018ba7 ==== 
 * signature: undefined __stdcall FUN_14018ba7(void)
 * body: 14018ba7-14018bb3
 */

void FUN_14018ba7(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018bb4 @ 14018bb4 ==== 
 * signature: undefined __stdcall FUN_14018bb4(void)
 * body: 14018bb4-14018bc0
 */

void FUN_14018bb4(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018bc1 @ 14018bc1 ==== 
 * signature: undefined __stdcall FUN_14018bc1(void)
 * body: 14018bc1-14018bcd
 */

void FUN_14018bc1(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018bce @ 14018bce ==== 
 * signature: undefined __stdcall FUN_14018bce(void)
 * body: 14018bce-14018bda
 */

void FUN_14018bce(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018bdb @ 14018bdb ==== 
 * signature: undefined __stdcall FUN_14018bdb(void)
 * body: 14018bdb-14018be7
 */

void FUN_14018bdb(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018be8 @ 14018be8 ==== 
 * signature: undefined __stdcall FUN_14018be8(void)
 * body: 14018be8-14018bf4
 */

void FUN_14018be8(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018bf5 @ 14018bf5 ==== 
 * signature: undefined __stdcall FUN_14018bf5(void)
 * body: 14018bf5-14018c01
 */

void FUN_14018bf5(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c02 @ 14018c02 ==== 
 * signature: undefined __stdcall FUN_14018c02(void)
 * body: 14018c02-14018c0e
 */

void FUN_14018c02(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c0f @ 14018c0f ==== 
 * signature: undefined __stdcall FUN_14018c0f(void)
 * body: 14018c0f-14018c1b
 */

void FUN_14018c0f(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c1c @ 14018c1c ==== 
 * signature: undefined __stdcall FUN_14018c1c(void)
 * body: 14018c1c-14018c28
 */

void FUN_14018c1c(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c29 @ 14018c29 ==== 
 * signature: undefined __stdcall FUN_14018c29(void)
 * body: 14018c29-14018c35
 */

void FUN_14018c29(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c36 @ 14018c36 ==== 
 * signature: undefined __stdcall FUN_14018c36(void)
 * body: 14018c36-14018c42
 */

void FUN_14018c36(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c43 @ 14018c43 ==== 
 * signature: undefined __stdcall FUN_14018c43(void)
 * body: 14018c43-14018c4f
 */

void FUN_14018c43(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c50 @ 14018c50 ==== 
 * signature: undefined __stdcall FUN_14018c50(void)
 * body: 14018c50-14018c5c
 */

void FUN_14018c50(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c5d @ 14018c5d ==== 
 * signature: undefined __stdcall FUN_14018c5d(void)
 * body: 14018c5d-14018c69
 */

void FUN_14018c5d(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c6a @ 14018c6a ==== 
 * signature: undefined __stdcall FUN_14018c6a(void)
 * body: 14018c6a-14018c76
 */

void FUN_14018c6a(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c77 @ 14018c77 ==== 
 * signature: undefined __stdcall FUN_14018c77(void)
 * body: 14018c77-14018c83
 */

void FUN_14018c77(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c84 @ 14018c84 ==== 
 * signature: undefined __stdcall FUN_14018c84(void)
 * body: 14018c84-14018c90
 */

void FUN_14018c84(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c91 @ 14018c91 ==== 
 * signature: undefined __stdcall FUN_14018c91(void)
 * body: 14018c91-14018c9d
 */

void FUN_14018c91(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018c9e @ 14018c9e ==== 
 * signature: undefined __stdcall FUN_14018c9e(void)
 * body: 14018c9e-14018caa
 */

void FUN_14018c9e(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018cab @ 14018cab ==== 
 * signature: undefined __stdcall FUN_14018cab(void)
 * body: 14018cab-14018cb7
 */

void FUN_14018cab(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018cb8 @ 14018cb8 ==== 
 * signature: undefined __stdcall FUN_14018cb8(void)
 * body: 14018cb8-14018cc4
 */

void FUN_14018cb8(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018cc5 @ 14018cc5 ==== 
 * signature: undefined __stdcall FUN_14018cc5(void)
 * body: 14018cc5-14018cd1
 */

void FUN_14018cc5(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018cd2 @ 14018cd2 ==== 
 * signature: undefined __stdcall FUN_14018cd2(void)
 * body: 14018cd2-14018cde
 */

void FUN_14018cd2(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018cdf @ 14018cdf ==== 
 * signature: undefined __stdcall FUN_14018cdf(void)
 * body: 14018cdf-14018ceb
 */

void FUN_14018cdf(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018cec @ 14018cec ==== 
 * signature: undefined __stdcall FUN_14018cec(void)
 * body: 14018cec-14018cf8
 */

void FUN_14018cec(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018cf9 @ 14018cf9 ==== 
 * signature: undefined __stdcall FUN_14018cf9(void)
 * body: 14018cf9-14018d05
 */

void FUN_14018cf9(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d06 @ 14018d06 ==== 
 * signature: undefined __stdcall FUN_14018d06(void)
 * body: 14018d06-14018d12
 */

void FUN_14018d06(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d13 @ 14018d13 ==== 
 * signature: undefined __stdcall FUN_14018d13(void)
 * body: 14018d13-14018d1f
 */

void FUN_14018d13(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d20 @ 14018d20 ==== 
 * signature: undefined __stdcall FUN_14018d20(void)
 * body: 14018d20-14018d2c
 */

void FUN_14018d20(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d2d @ 14018d2d ==== 
 * signature: undefined __stdcall FUN_14018d2d(void)
 * body: 14018d2d-14018d39
 */

void FUN_14018d2d(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d3a @ 14018d3a ==== 
 * signature: undefined __stdcall FUN_14018d3a(void)
 * body: 14018d3a-14018d46
 */

void FUN_14018d3a(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d47 @ 14018d47 ==== 
 * signature: undefined __stdcall FUN_14018d47(void)
 * body: 14018d47-14018d53
 */

void FUN_14018d47(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d54 @ 14018d54 ==== 
 * signature: undefined __stdcall FUN_14018d54(void)
 * body: 14018d54-14018d60
 */

void FUN_14018d54(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d61 @ 14018d61 ==== 
 * signature: undefined __stdcall FUN_14018d61(void)
 * body: 14018d61-14018d6d
 */

void FUN_14018d61(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d6e @ 14018d6e ==== 
 * signature: undefined __stdcall FUN_14018d6e(void)
 * body: 14018d6e-14018d7a
 */

void FUN_14018d6e(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d7b @ 14018d7b ==== 
 * signature: undefined __stdcall FUN_14018d7b(void)
 * body: 14018d7b-14018d87
 */

void FUN_14018d7b(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d88 @ 14018d88 ==== 
 * signature: undefined __stdcall FUN_14018d88(void)
 * body: 14018d88-14018d94
 */

void FUN_14018d88(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018d95 @ 14018d95 ==== 
 * signature: undefined __stdcall FUN_14018d95(void)
 * body: 14018d95-14018da1
 */

void FUN_14018d95(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018da2 @ 14018da2 ==== 
 * signature: undefined __stdcall FUN_14018da2(void)
 * body: 14018da2-14018dae
 */

void FUN_14018da2(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018daf @ 14018daf ==== 
 * signature: undefined __stdcall FUN_14018daf(void)
 * body: 14018daf-14018dbb
 */

void FUN_14018daf(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018dbc @ 14018dbc ==== 
 * signature: undefined __stdcall FUN_14018dbc(void)
 * body: 14018dbc-14018dc8
 */

void FUN_14018dbc(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018dc9 @ 14018dc9 ==== 
 * signature: undefined __stdcall FUN_14018dc9(void)
 * body: 14018dc9-14018dd5
 */

void FUN_14018dc9(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018dd6 @ 14018dd6 ==== 
 * signature: undefined __stdcall FUN_14018dd6(void)
 * body: 14018dd6-14018de2
 */

void FUN_14018dd6(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018de3 @ 14018de3 ==== 
 * signature: undefined __stdcall FUN_14018de3(void)
 * body: 14018de3-14018def
 */

void FUN_14018de3(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018df0 @ 14018df0 ==== 
 * signature: undefined __stdcall FUN_14018df0(void)
 * body: 14018df0-14018dfc
 */

void FUN_14018df0(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018dfd @ 14018dfd ==== 
 * signature: undefined __stdcall FUN_14018dfd(void)
 * body: 14018dfd-14018e09
 */

void FUN_14018dfd(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018e0a @ 14018e0a ==== 
 * signature: undefined __stdcall FUN_14018e0a(void)
 * body: 14018e0a-14018e16
 */

void FUN_14018e0a(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018e17 @ 14018e17 ==== 
 * signature: undefined __stdcall FUN_14018e17(void)
 * body: 14018e17-14018e23
 */

void FUN_14018e17(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018e24 @ 14018e24 ==== 
 * signature: undefined __stdcall FUN_14018e24(void)
 * body: 14018e24-14018e30
 */

void FUN_14018e24(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018e31 @ 14018e31 ==== 
 * signature: undefined __stdcall FUN_14018e31(void)
 * body: 14018e31-14018e3d
 */

void FUN_14018e31(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018e3e @ 14018e3e ==== 
 * signature: undefined __stdcall FUN_14018e3e(void)
 * body: 14018e3e-14018e4a
 */

void FUN_14018e3e(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018e4b @ 14018e4b ==== 
 * signature: undefined __stdcall FUN_14018e4b(void)
 * body: 14018e4b-14018e57
 */

void FUN_14018e4b(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== FUN_14018e58 @ 14018e58 ==== 
 * signature: undefined __stdcall FUN_14018e58(void)
 * body: 14018e58-14018e64
 */

void FUN_14018e58(void)

{
  (*(code *)PTR_FUN_14026d6c)();
  return;
}



/* ==== __break @ 14018e65 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e65-14018e65
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e66 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e66-14018e66
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e67 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e67-14018e67
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e68 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e68-14018e68
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e69 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e69-14018e69
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e6a-14018e6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e6b-14018e6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e6c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e6c-14018e6c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e6d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e6d-14018e6d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e6e-14018e6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14018e6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14018e6f-14018e6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FID_conflict:_memcpy @ 14018e70 ==== 
 * signature: void * __cdecl FID_conflict:_memcpy(void * _Dst, void * _Src, size_t _Size)
 * body: 14018e70-14018ea6;14018eb8-14018eca;14018ecc-14018ed8;14018ee8-14018f0c
 * note: Library Function - Multiple Matches With Different Base Names  _memcpy  _memmove  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    _memcpy
    _memmove
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl FID_conflict__memcpy(void *_Dst,void *_Src,size_t _Size)

{
  uint uVar1;
  int in_EDX;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  if ((_Src < _Dst) && (_Dst < (void *)((int)_Src + _Size))) {
    puVar3 = (undefined4 *)((int)_Src + _Size);
    puVar5 = (undefined4 *)((int)_Dst + _Size);
    if (((uint)puVar5 & 3) == 0) {
      uVar1 = _Size >> 2;
      while( true ) {
        puVar5 = puVar5 + -1;
        puVar3 = puVar3 + -1;
        if (uVar1 == 0) break;
        uVar1 = uVar1 - 1;
        *puVar5 = *puVar3;
      }
      switch(_Size & 3) {
      case 1:
switchD_14018f39_caseD_1:
        *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar3 + 3);
        return _Dst;
      case 2:
switchD_14018f39_caseD_2:
        *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar3 + 2);
        return _Dst;
      case 3:
switchD_14018f39_caseD_3:
        *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar3 + 2);
        *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar3 + 1);
        return _Dst;
      }
    }
    else {
      puVar4 = (undefined1 *)((int)puVar3 + -1);
      puVar6 = (undefined1 *)((int)puVar5 + -1);
      if (_Size < 0xd) {
        for (; _Size != 0; _Size = _Size - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + -1;
          puVar6 = puVar6 + -1;
        }
        return _Dst;
      }
      uVar2 = -in_EDX & 3;
      uVar1 = _Size - uVar2;
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar6 = puVar6 + -1;
      }
      puVar3 = (undefined4 *)(puVar4 + -3);
      puVar5 = (undefined4 *)(puVar6 + -3);
      for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + -1;
        puVar5 = puVar5 + -1;
      }
      switch(uVar1 & 3) {
      case 1:
        goto switchD_14018f39_caseD_1;
      case 2:
        goto switchD_14018f39_caseD_2;
      case 3:
        goto switchD_14018f39_caseD_3;
      }
    }
    return _Dst;
  }
  puVar3 = _Dst;
  if (((uint)_Dst & 3) == 0) {
    for (uVar1 = _Size >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *(undefined4 *)_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar3 = puVar3 + 1;
    }
    switch(_Size & 3) {
    case 1:
switchD_14018ea0_caseD_1:
      *(undefined1 *)puVar3 = *(undefined1 *)_Src;
      return _Dst;
    case 2:
switchD_14018ea0_caseD_2:
      *(undefined2 *)puVar3 = *(undefined2 *)_Src;
      return _Dst;
    case 3:
switchD_14018ea0_caseD_3:
      *(undefined2 *)puVar3 = *(undefined2 *)_Src;
      *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)_Src + 2);
      return _Dst;
    }
  }
  else {
    puVar4 = _Dst;
    if (_Size < 0xd) {
      for (; _Size != 0; _Size = _Size - 1) {
        *puVar4 = *(undefined1 *)_Src;
        _Src = (undefined1 *)((int)_Src + 1);
        puVar4 = puVar4 + 1;
      }
      return _Dst;
    }
    uVar2 = -(int)_Dst & 3;
    uVar1 = _Size - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)_Src;
      _Src = (undefined4 *)((int)_Src + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *(undefined4 *)_Src;
      _Src = (undefined4 *)((int)_Src + 4);
      puVar3 = puVar3 + 1;
    }
    switch(uVar1 & 3) {
    case 1:
      goto switchD_14018ea0_caseD_1;
    case 2:
      goto switchD_14018ea0_caseD_2;
    case 3:
      goto switchD_14018ea0_caseD_3;
    }
  }
  return _Dst;
}



/* ==== FUN_14018ed9 @ 14018ed9 ==== 
 * signature: undefined4 __stdcall FUN_14018ed9(void)
 * body: 14018ed9-14018ee6
 */

undefined4 FUN_14018ed9(void)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  *unaff_EDI = *unaff_ESI;
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_14018f0d @ 14018f0d ==== 
 * signature: undefined4 __fastcall FUN_14018f0d(int param_1)
 * body: 14018f0d-14018f18
 */

undefined4 __fastcall FUN_14018f0d(int param_1)

{
  int unaff_EBP;
  undefined1 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *unaff_EDI = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_14018f19 @ 14018f19 ==== 
 * signature: undefined4 __fastcall FUN_14018f19(uint param_1, int param_2)
 * body: 14018f19-14018f3f;14018f50-14018f65;14018f78-14018f85
 */

/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_14018f19(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int unaff_EDI;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  puVar3 = (undefined4 *)(unaff_ESI + param_1);
  puVar5 = (undefined4 *)(unaff_EDI + param_1);
  if (((uint)puVar5 & 3) == 0) {
    uVar1 = param_1 >> 2;
    while( true ) {
      puVar5 = puVar5 + -1;
      puVar3 = puVar3 + -1;
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      *puVar5 = *puVar3;
    }
    switch(param_1 & 3) {
    case 0:
switchD_14018f39_caseD_0:
      return *(undefined4 *)(unaff_EBP + 8);
    case 2:
switchD_14018f39_caseD_2:
      *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar3 + 2);
      return *(undefined4 *)(unaff_EBP + 8);
    case 3:
switchD_14018f39_caseD_3:
      *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return *(undefined4 *)(unaff_EBP + 8);
    }
  }
  else {
    puVar4 = (undefined1 *)((int)puVar3 + -1);
    puVar6 = (undefined1 *)((int)puVar5 + -1);
    if (param_1 < 0xd) {
      for (; param_1 != 0; param_1 = param_1 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar6 = puVar6 + -1;
      }
      return *(undefined4 *)(unaff_EBP + 8);
    }
    uVar2 = -param_2 & 3;
    uVar1 = param_1 - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + -1;
      puVar6 = puVar6 + -1;
    }
    puVar3 = (undefined4 *)(puVar4 + -3);
    puVar5 = (undefined4 *)(puVar6 + -3);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
    switch(uVar1 & 3) {
    case 0:
      goto switchD_14018f39_caseD_0;
    case 2:
      goto switchD_14018f39_caseD_2;
    case 3:
      goto switchD_14018f39_caseD_3;
    }
  }
  *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar3 + 3);
  goto switchD_14018f39_caseD_0;
}



/* ==== FUN_14018f66 @ 14018f66 ==== 
 * signature: undefined4 __stdcall FUN_14018f66(void)
 * body: 14018f66-14018f77
 */

undefined4 FUN_14018f66(void)

{
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined2 *)(unaff_EDI + 2) = *(undefined2 *)(unaff_ESI + 2);
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== FUN_14018f86 @ 14018f86 ==== 
 * signature: undefined4 __fastcall FUN_14018f86(uint param_1, int param_2)
 * body: 14018f86-14018fb2;14018fb4-14018fbd
 */

/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_14018f86(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  puVar3 = (undefined1 *)(unaff_ESI + -1);
  puVar5 = (undefined1 *)(unaff_EDI + -1);
  if (0xc < param_1) {
    uVar2 = -param_2 & 3;
    uVar1 = param_1 - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)(puVar3 + -3);
    puVar6 = (undefined4 *)(puVar5 + -3);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    switch(uVar1 & 3) {
    case 1:
      *(undefined1 *)((int)puVar6 + 3) = *(undefined1 *)((int)puVar4 + 3);
      break;
    case 2:
      *(undefined2 *)((int)puVar6 + 2) = *(undefined2 *)((int)puVar4 + 2);
      return *(undefined4 *)(unaff_EBP + 8);
    case 3:
      *(undefined2 *)((int)puVar6 + 2) = *(undefined2 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar6 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return *(undefined4 *)(unaff_EBP + 8);
    }
    return *(undefined4 *)(unaff_EBP + 8);
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  return *(undefined4 *)(unaff_EBP + 8);
}



/* ==== __fpmath @ 14018fc0 ==== 
 * signature: void __cdecl __fpmath(int param_1)
 * body: 14018fc0-14018fd6
 * note: Library Function - Single Match  __fpmath  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 1998 Release */

void __cdecl __fpmath(int param_1)

{
  FUN_14018ff0();
  _DAT_14026e2c = FUN_14019540();
  __setdefaultprecision();
  return;
}



/* ==== FUN_14018fe0 @ 14018fe0 ==== 
 * signature: undefined __stdcall FUN_14018fe0(void)
 * body: 14018fe0-14018fe0
 */

void FUN_14018fe0(void)

{
  return;
}



/* ==== FUN_14018ff0 @ 14018ff0 ==== 
 * signature: undefined __stdcall FUN_14018ff0(void)
 * body: 14018ff0-14019027
 */

void FUN_14018ff0(void)

{
  PTR_FUN_14026e5c = FUN_14019700;
  PTR_FUN_14026e60 = FUN_14019780;
  PTR_FUN_14026e64 = FUN_14019690;
  PTR_FUN_14026e68 = FUN_14019760;
  PTR_FUN_14026e58 = FUN_14019b20;
  PTR_FUN_14026e6c = FUN_14019b20;
  return;
}



/* ==== FUN_14019030 @ 14019030 ==== 
 * signature: undefined4 __cdecl FUN_14019030(undefined4 param_1)
 * body: 14019030-1401903f
 */

undefined4 __cdecl FUN_14019030(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_14026e28;
  DAT_14026e28 = param_1;
  return uVar1;
}



/* ==== _atol @ 14019040 ==== 
 * signature: long __cdecl _atol(char * _Str)
 * body: 14019040-140190e3
 * note: Library Function - Single Match  _atol  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 1998 Release */

long __cdecl _atol(char *_Str)

{
  uint uVar1;
  uint uVar2;
  uint _C;
  int iVar3;
  byte *pbVar4;
  
  while( true ) {
    if (DAT_1402707c < 2) {
      uVar1 = *(ushort *)(PTR_DAT_14026e70 + (uint)(byte)*_Str * 2) & 8;
    }
    else {
      uVar1 = __isctype((uint)(byte)*_Str,8);
    }
    if (uVar1 == 0) break;
    _Str = _Str + 1;
  }
  uVar1 = (uint)(byte)*_Str;
  pbVar4 = (byte *)(_Str + 1);
  if ((uVar1 == 0x2d) || (_C = uVar1, uVar1 == 0x2b)) {
    _C = (uint)*pbVar4;
    pbVar4 = (byte *)(_Str + 2);
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_1402707c < 2) {
      uVar2 = *(ushort *)(PTR_DAT_14026e70 + _C * 2) & 4;
    }
    else {
      uVar2 = __isctype(_C,4);
    }
    if (uVar2 == 0) break;
    iVar3 = (_C - 0x30) + iVar3 * 10;
    _C = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  if (uVar1 == 0x2d) {
    return -iVar3;
  }
  return iVar3;
}



/* ==== FUN_140190f0 @ 140190f0 ==== 
 * signature: undefined __cdecl FUN_140190f0(char * param_1)
 * body: 140190f0-140190fd
 */

void __cdecl FUN_140190f0(char *param_1)

{
  _atol(param_1);
  return;
}



/* ==== __break @ 140190fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140190fe-140190fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140190ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140190ff-140190ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14019100 @ 14019100 ==== 
 * signature: int __cdecl FUN_14019100(int param_1)
 * body: 14019100-14019107
 */

int __cdecl FUN_14019100(int param_1)

{
  return param_1 + -0x20;
}



/* ==== __break @ 14019108 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019108-14019108
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019109 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019109-14019109
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401910a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910a-1401910a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401910b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910b-1401910b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401910c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910c-1401910c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401910d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910d-1401910d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401910e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910e-1401910e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401910f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401910f-1401910f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== _toupper @ 14019110 ==== 
 * signature: int __cdecl _toupper(int _C)
 * body: 14019110-1401917d
 * note: Library Function - Single Match  _toupper  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _toupper
   
   Library: Visual Studio 1998 Release */

int __cdecl _toupper(int _C)

{
  bool bVar1;
  
  if (DAT_140272c0 == 0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      return _C + -0x20;
    }
  }
  else {
    bVar1 = DAT_14029f80 == 0;
    if (bVar1) {
      DAT_14029f84 = DAT_14029f84 + 1;
    }
    else {
      __lock(0x13);
    }
    _C = __toupper_lk(_C);
    if (!bVar1) {
      FUN_1401a650(0x13);
      return _C;
    }
    DAT_14029f84 = DAT_14029f84 + -1;
  }
  return _C;
}



/* ==== __toupper_lk @ 14019180 ==== 
 * signature: uint __cdecl __toupper_lk(uint param_1)
 * body: 14019180-14019264
 * note: Library Function - Single Match  __toupper_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __toupper_lk
   
   Library: Visual Studio 1998 Release */

uint __cdecl __toupper_lk(uint param_1)

{
  uint uVar1;
  int iVar2;
  WCHAR local_8 [2];
  byte local_4;
  byte local_3;
  undefined1 local_2;
  
  if (DAT_140272c0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
    return param_1;
  }
  if ((int)param_1 < 0x100) {
    if (DAT_1402707c < 2) {
      uVar1 = *(ushort *)(PTR_DAT_14026e70 + param_1 * 2) & 2;
    }
    else {
      uVar1 = __isctype(param_1,2);
    }
    if (uVar1 == 0) {
      return param_1;
    }
  }
  local_4 = (byte)(param_1 >> 8);
  if ((PTR_DAT_14026e70[(uint)local_4 * 2 + 1] & 0x80) == 0) {
    iVar2 = 1;
    local_3 = 0;
    local_4 = (byte)param_1;
  }
  else {
    iVar2 = 2;
    local_2 = 0;
    local_3 = (byte)param_1;
  }
  iVar2 = FUN_1401a9c0(DAT_140272c0,0x200,(char *)&local_4,iVar2,local_8,3,0);
  if (iVar2 == 0) {
    return param_1;
  }
  if (iVar2 == 1) {
    return (uint)(byte)local_8[0];
  }
  return (uint)(ushort)local_8[0];
}



/* ==== FUN_14019270 @ 14019270 ==== 
 * signature: undefined4 __stdcall FUN_14019270(undefined4 param_1, int param_2)
 * body: 14019270-140193bc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14019270(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  int unaff_retaddr;
  
  if (param_2 == 1) {
    DAT_140272e0 = GetVersion();
    if (DAT_14026e50 == 0) {
      if (((char)DAT_140272e0 == '\x03') && ((DAT_140272e0 & 0x80000000) != 0)) {
        FUN_1401bc60(2);
      }
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        pFVar1 = GetProcAddress(hModule,"IsTNT");
        if (pFVar1 != (FARPROC)0x0) {
          FUN_1401bc60(1);
        }
      }
    }
    FUN_1401afa0();
    _DAT_140272ec = DAT_140272e0 >> 8 & 0xff;
    _DAT_140272e8 = DAT_140272e0 & 0xff;
    DAT_14026e3c = DAT_14026e3c + 1;
    DAT_140272e0 = DAT_140272e0 >> 0x10;
    _DAT_140272e4 = _DAT_140272e8 * 0x100 + _DAT_140272ec;
    iVar2 = __mtinit();
    if (iVar2 == 0) {
      FUN_1401afc0();
      return 0;
    }
    DAT_14029f88 = GetCommandLineA();
    DAT_14026e40 = FUN_1401ba90();
    if ((DAT_14029f88 != (LPSTR)0x0) && (DAT_14026e40 != (LPSTR)0x0)) {
      FUN_1401afd0();
      ___initmbctable();
      __setargv();
      FUN_1401b210();
      __cinit(unaff_retaddr);
      return 1;
    }
    FUN_1401afc0();
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 3) {
      __freeptd((_ptiddata)0x0);
    }
    return 1;
  }
  if (0 < DAT_14026e3c) {
    DAT_14026e3c = DAT_14026e3c + -1;
    if (DAT_14027318 == 0) {
      FUN_1401ac90();
    }
    __ioterm();
    __mtterm();
    FUN_1401afc0();
    return 1;
  }
  return 0;
}



/* ==== entry @ 140193c0 ==== 
 * signature: int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
 * body: 140193c0-14019489
 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_2 == 1) {
    DAT_14026e3c = DAT_14026e3c + 1;
  }
  else if (param_2 == 0) {
    if (DAT_14026e3c < 1) {
      return 0;
    }
    DAT_14026e3c = DAT_14026e3c + -1;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_14029f8c != (code *)0x0) {
      iVar2 = (*DAT_14029f8c)(param_1,param_2,param_3);
    }
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_14019270(param_1,param_2);
      goto LAB_14019435;
    }
LAB_14019443:
    if (iVar1 != 0) goto LAB_14019456;
  }
  else {
LAB_14019435:
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = FUN_14008e90(param_1,param_2);
      goto LAB_14019443;
    }
  }
  if (param_2 == 1) {
    __mtterm();
    FUN_1401afc0();
  }
LAB_14019456:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_14019270(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_14029f8c != (code *)0x0)) {
      iVar1 = (*DAT_14029f8c)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}



/* ==== __amsg_exit @ 14019490 ==== 
 * signature: void __cdecl __amsg_exit(int param_1)
 * body: 14019490-140194c3
 * note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 140194c4-140194c7
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_14026e4c == 1) || ((DAT_14026e4c == 0 && (DAT_14026e50 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_1401bcb0(param_1);
  (*(code *)PTR___exit_14026e48)(0xff);
  return;
}



/* ==== __setdefaultprecision @ 140194d0 ==== 
 * signature: undefined __stdcall __setdefaultprecision(void)
 * body: 140194d0-140194e2
 * note: Library Function - Single Match  __setdefaultprecision  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 1998 Release */

void __setdefaultprecision(void)

{
  __controlfp(0x10000,0x30000);
  return;
}



/* ==== __ms_p5_test_fdiv @ 140194f0 ==== 
 * signature: undefined1 __stdcall __ms_p5_test_fdiv(void)
 * body: 140194f0-1401953e
 * note: Library Function - Single Match  __ms_p5_test_fdiv  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ms_p5_test_fdiv
   
   Library: Visual Studio 1998 Release */

undefined1 __ms_p5_test_fdiv(void)

{
  return 0;
}



/* ==== FUN_14019540 @ 14019540 ==== 
 * signature: undefined4 __stdcall FUN_14019540(void)
 * body: 14019540-14019686
 */

undefined4 FUN_14019540(void)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  int iVar4;
  FARPROC pFVar5;
  uint uVar6;
  int iVar7;
  undefined3 extraout_var_00;
  undefined4 unaff_EBX;
  code *unaff_EBP;
  uint unaff_EDI;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_14 [4];
  FARPROC local_10;
  undefined1 auStack_c [8];
  undefined4 local_4;
  
  local_4 = 0;
  uVar1 = __ms_p5_test_fdiv();
  if (CONCAT31(extraout_var,uVar1) != 0) {
    return 1;
  }
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule == (HMODULE)0x0) {
    return 0;
  }
  local_10 = GetProcAddress(hModule,"GetProcessAffinityMask");
  if (local_10 == (FARPROC)0x0) {
    return 0;
  }
  pFVar2 = GetProcAddress(hModule,"GetCurrentProcess");
  if (pFVar2 == (FARPROC)0x0) {
    return 0;
  }
  iVar3 = (*pFVar2)();
  puVar8 = auStack_c;
  puVar9 = auStack_14;
  iVar4 = (*local_10)(iVar3,puVar8);
  if (iVar4 == 0) {
    return 0;
  }
  if (unaff_EDI == 1) {
    return 0;
  }
  pFVar2 = GetProcAddress(hModule,"SetThreadAffinityMask");
  if (pFVar2 == (FARPROC)0x0) {
    return 0;
  }
  pFVar5 = GetProcAddress(hModule,"GetCurrentThread");
  if (pFVar5 == (FARPROC)0x0) {
    return 0;
  }
  iVar4 = 0;
  do {
    uVar6 = 1 << ((byte)iVar4 & 0x1f);
    if ((unaff_EDI & uVar6) != 0) {
      iVar7 = (*pFVar5)(uVar6);
      (*pFVar2)(iVar7);
      uVar1 = __ms_p5_test_fdiv();
      if (CONCAT31(extraout_var_00,uVar1) != 0) {
        local_10 = (FARPROC)0x1;
        break;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  iVar4 = (*pFVar5)(unaff_EBX);
  iVar4 = (*pFVar2)(iVar4);
  if (iVar4 == 0) {
    iVar3 = (*unaff_EBP)(iVar3,&stack0xffffffe4,&stack0xffffffd8);
    if (iVar3 == 0) {
      puVar9 = puVar8;
    }
    iVar3 = (*pFVar5)(puVar9);
    (*pFVar2)(iVar3);
  }
  return unaff_EBX;
}



/* ==== FUN_14019690 @ 14019690 ==== 
 * signature: undefined __cdecl FUN_14019690(char * param_1)
 * body: 14019690-140196f4
 */

void __cdecl FUN_14019690(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  
  iVar2 = _tolower((int)*param_1);
  if (iVar2 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1402707c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_14026e70 + *param_1 * 2) & 4;
      }
      else {
        uVar3 = __isctype((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar4 = *param_1;
  *param_1 = DAT_14027080;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar4;
    bVar5 = cVar4 != '\0';
    cVar4 = cVar1;
  } while (bVar5);
  return;
}



/* ==== FUN_14019700 @ 14019700 ==== 
 * signature: undefined __cdecl FUN_14019700(char * param_1)
 * body: 14019700-14019758
 */

void __cdecl FUN_14019700(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (*param_1 != DAT_14027080))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  pcVar2 = param_1 + 1;
  if (*param_1 != '\0') {
    cVar1 = *pcVar2;
    while (((cVar1 != '\0' && (*pcVar2 != 'e')) && (*pcVar2 != 'E'))) {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    pcVar3 = pcVar2 + -1;
    cVar1 = *pcVar3;
    while (cVar1 == '0') {
      pcVar3 = pcVar3 + -1;
      cVar1 = *pcVar3;
    }
    if (*pcVar3 == DAT_14027080) {
      pcVar3 = pcVar3 + -1;
    }
    do {
      cVar1 = *pcVar2;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}



/* ==== FUN_14019760 @ 14019760 ==== 
 * signature: bool __cdecl FUN_14019760(double * param_1)
 * body: 14019760-14019776
 */

bool __cdecl FUN_14019760(double *param_1)

{
  return 0.0 <= *param_1;
}



/* ==== FUN_14019780 @ 14019780 ==== 
 * signature: undefined __cdecl FUN_14019780(int param_1, float * param_2, char * param_3)
 * body: 14019780-140197cb
 */

void __cdecl FUN_14019780(int param_1,float *param_2,char *param_3)

{
  _CRT_FLOAT local_c;
  _CRT_FLOAT local_8;
  float local_4;
  
  if (param_1 != 0) {
    FID_conflict___atodbl(&local_8,param_3);
    *param_2 = local_8.f;
    param_2[1] = local_4;
    return;
  }
  FID_conflict___atodbl(&local_c,param_3);
  *param_2 = local_c.f;
  return;
}



/* ==== __cftoe @ 140197d0 ==== 
 * signature: errno_t __cdecl __cftoe(double * _Value, char * _Buf, size_t _SizeInBytes, int _Dec, int _Caps)
 * body: 140197d0-14019846
 * note: Library Function - Single Match  __cftoe  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __cftoe
   
   Library: Visual Studio 1998 Release */

errno_t __cdecl __cftoe(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec,int _Caps)

{
  STRFLT unaff_EDI;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*_Value,&local_28,local_18,(size_t)unaff_EDI);
  __fptostr(_Buf + (uint)(0 < (int)_SizeInBytes) + (uint)(local_28.sign == 0x2d),_SizeInBytes + 1,
            (int)&local_28,unaff_EDI);
  __cftoe2(_Buf,_SizeInBytes,_Dec,&local_28.sign,'\0');
  return (errno_t)_Buf;
}



/* ==== __cftoe2 @ 14019850 ==== 
 * signature: undefined1 * __cdecl __cftoe2(undefined1 * param_1, int param_2, int param_3, int * param_4, char param_5)
 * body: 14019850-14019932
 * note: Library Function - Single Match  __cftoe2  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __cftoe2
   
   Library: Visual Studio 1998 Release */

undefined1 * __cdecl __cftoe2(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_5 != '\0') {
    __shift(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    puVar1 = param_1 + 1;
    *param_1 = 0x2d;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar2;
    *puVar2 = DAT_14027080;
  }
  puVar4 = (undefined4 *)(puVar2 + param_2 + (uint)(param_5 == '\0'));
  *puVar4 = 0x30302b65;
  *(undefined2 *)(puVar4 + 1) = 0x30;
  if (param_3 != 0) {
    *(undefined1 *)puVar4 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar3 = param_4[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      *(undefined1 *)((int)puVar4 + 1) = 0x2d;
    }
    if (99 < iVar3) {
      *(char *)((int)puVar4 + 2) = *(char *)((int)puVar4 + 2) + (char)(iVar3 / 100);
      iVar3 = iVar3 % 100;
    }
    if (9 < iVar3) {
      *(char *)((int)puVar4 + 3) = *(char *)((int)puVar4 + 3) + (char)(iVar3 / 10);
      iVar3 = iVar3 % 10;
    }
    *(char *)(puVar4 + 1) = *(char *)(puVar4 + 1) + (char)iVar3;
  }
  return param_1;
}



/* ==== __cftof @ 14019940 ==== 
 * signature: errno_t __cdecl __cftof(double * _Value, char * _Buf, size_t _SizeInBytes, int _Dec)
 * body: 14019940-140199a7
 * note: Library Function - Single Match  __cftof  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __cftof
   
   Library: Visual Studio 1998 Release */

errno_t __cdecl __cftof(double *_Value,char *_Buf,size_t _SizeInBytes,int _Dec)

{
  STRFLT unaff_EDI;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*_Value,&local_28,local_18,(size_t)unaff_EDI);
  __fptostr(_Buf + (local_28.sign == 0x2d),local_28.decpt + _SizeInBytes,(int)&local_28,unaff_EDI);
  __cftof2(_Buf,_SizeInBytes,&local_28.sign,'\0');
  return (errno_t)_Buf;
}



/* ==== __cftof2 @ 140199b0 ==== 
 * signature: char * __cdecl __cftof2(char * param_1, uint param_2, int * param_3, char param_4)
 * body: 140199b0-14019a6d
 * note: Library Function - Single Match  __cftof2  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __cftof2
   
   Library: Visual Studio 1998 Release */

char * __cdecl __cftof2(char *param_1,uint param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar2 = *param_3, param_2 == iVar1 - 1U)) {
    param_1[(iVar1 - 1U) + (uint)(iVar2 == 0x2d)] = '0';
    (param_1 + (iVar1 - 1U) + (uint)(iVar2 == 0x2d))[1] = '\0';
  }
  pcVar6 = param_1;
  if (*param_3 == 0x2d) {
    pcVar6 = param_1 + 1;
    *param_1 = '-';
  }
  if (param_3[1] < 1) {
    pcVar5 = pcVar6 + 1;
    __shift(pcVar6,1);
    *pcVar6 = '0';
  }
  else {
    pcVar5 = pcVar6 + param_3[1];
  }
  if (0 < (int)param_2) {
    __shift(pcVar5,1);
    *pcVar5 = DAT_14027080;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if (param_4 == '\0') {
        uVar4 = -iVar1;
        if ((int)param_2 <= -iVar1) {
          uVar4 = param_2;
        }
      }
      else {
        uVar4 = -iVar1;
      }
      __shift(pcVar5 + 1,uVar4);
      uVar3 = uVar4 >> 2;
      pcVar6 = pcVar5 + 1;
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        builtin_strncpy(pcVar6,"0000",4);
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = '0';
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  return param_1;
}



/* ==== __cftog @ 14019a70 ==== 
 * signature: undefined __cdecl __cftog(double * param_1, char * param_2, size_t param_3, int param_4)
 * body: 14019a70-14019b1a
 * note: Library Function - Single Match  __cftog  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __cftog
   
   Library: Visual Studio 1998 Release */

void __cdecl __cftog(double *param_1,char *param_2,size_t param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  STRFLT unaff_EBP;
  char *pcVar3;
  _strflt local_28;
  char local_18 [24];
  
  __fltout2((_CRT_DOUBLE)*param_1,&local_28,local_18,(size_t)unaff_EBP);
  iVar2 = local_28.decpt + -1;
  __fptostr(param_2 + (local_28.sign == 0x2d),param_3,(int)&local_28,unaff_EBP);
  local_28.decpt = local_28.decpt + -1;
  if ((-5 < local_28.decpt) && (local_28.decpt < (int)param_3)) {
    pcVar1 = param_2 + (local_28.sign == 0x2d);
    if (iVar2 < local_28.decpt) {
      do {
        pcVar3 = pcVar1;
        pcVar1 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    __cftof2(param_2,param_3,&local_28.sign,'\x01');
    return;
  }
  __cftoe2(param_2,param_3,param_4,&local_28.sign,'\x01');
  return;
}



/* ==== FUN_14019b20 @ 14019b20 ==== 
 * signature: undefined __cdecl FUN_14019b20(double * param_1, char * param_2, int param_3, size_t param_4, int param_5)
 * body: 14019b20-14019b84
 */

void __cdecl FUN_14019b20(double *param_1,char *param_2,int param_3,size_t param_4,int param_5)

{
  int unaff_retaddr;
  
  if ((param_3 != 0x65) && (param_3 != 0x45)) {
    if (param_3 == 0x66) {
      __cftof(param_1,param_2,param_4,unaff_retaddr);
      return;
    }
    __cftog(param_1,param_2,param_4,param_5);
    return;
  }
  __cftoe(param_1,param_2,param_4,param_5,unaff_retaddr);
  return;
}



/* ==== __shift @ 14019b90 ==== 
 * signature: undefined __cdecl __shift(char * param_1, int param_2)
 * body: 14019b90-14019bba
 * note: Library Function - Single Match  __shift  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __shift
   
   Library: Visual Studio 1998 Release */

void __cdecl __shift(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FID_conflict__memcpy(param_1 + param_2,param_1,~uVar2);
  }
  return;
}



/* ==== __isctype @ 14019bc0 ==== 
 * signature: int __cdecl __isctype(int _C, int _Type)
 * body: 14019bc0-14019c50
 * note: Library Function - Single Match  __isctype  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __isctype
   
   Library: Visual Studio 1998 Release */

int __cdecl __isctype(int _C,int _Type)

{
  LPCSTR _LpSrcStr;
  BOOL BVar1;
  byte bVar2;
  BOOL unaff_EBX;
  undefined4 local_6;
  undefined1 local_2;
  
  if (_C + 1U < 0x101) {
    return (uint)*(ushort *)(PTR_DAT_14026e70 + _C * 2) & _Type;
  }
  bVar2 = (byte)((uint)_C >> 8);
  if ((PTR_DAT_14026e70[(uint)bVar2 * 2 + 1] & 0x80) == 0) {
    _LpSrcStr = (LPCSTR)0x1;
    local_6._0_3_ = CONCAT12((char)_C,(undefined2)local_6);
    local_6 = (uint)(uint3)local_6;
  }
  else {
    _LpSrcStr = (LPCSTR)0x2;
    local_6._0_3_ = CONCAT12(bVar2,(undefined2)local_6);
    local_2 = 0;
    local_6 = CONCAT13((char)_C,(uint3)local_6);
  }
  BVar1 = ___crtGetStringTypeA
                    ((_locale_t)0x1,(int)&local_6 + 2,_LpSrcStr,(int)&local_6,(LPWORD)0x0,0,
                     unaff_EBX);
  if (BVar1 == 0) {
    return 0;
  }
  return local_6 & 0xffff & _Type;
}



/* ==== FUN_14019c60 @ 14019c60 ==== 
 * signature: char * __cdecl FUN_14019c60(int param_1, byte * param_2)
 * body: 14019c60-14019f22
 */

char * __cdecl FUN_14019c60(int param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  size_t sVar11;
  undefined4 *puVar12;
  undefined **ppuVar13;
  bool bVar14;
  int local_8c;
  int local_88;
  byte local_84 [132];
  
  if ((param_1 < 0) || (5 < param_1)) {
    return (char *)0x0;
  }
  __lock(0x13);
  DAT_14029f80 = DAT_14029f80 + 1;
  while (DAT_14029f84 != 0) {
    Sleep(1);
  }
  if (param_1 != 0) {
    if (param_2 == (byte *)0x0) {
      pcVar4 = (&DAT_14027094)[param_1 * 3];
    }
    else {
      pcVar4 = (char *)FUN_14019f30(param_1,param_2);
    }
    goto LAB_14019ef9;
  }
  bVar3 = true;
  local_8c = 0;
  if (param_2 != (byte *)0x0) {
    if (((*param_2 == 0x4c) && (param_2[1] == 0x43)) && (param_2[2] == 0x5f)) {
      do {
        pcVar4 = _strpbrk((char *)param_2,"=;");
        if (((pcVar4 == (char *)0x0) || (sVar11 = (int)pcVar4 - (int)param_2, sVar11 == 0)) ||
           (*pcVar4 == ';')) {
          FUN_1401a650(0x13);
          DAT_14029f80 = DAT_14029f80 + -1;
          return (char *)0x0;
        }
        local_88 = 1;
        ppuVar13 = &PTR_s_LC_COLLATE_1402709c;
        do {
          iVar5 = _strncmp(*ppuVar13,(char *)param_2,sVar11);
          if (iVar5 == 0) {
            uVar8 = 0xffffffff;
            pcVar6 = *ppuVar13;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            if (~uVar8 - 1 == sVar11) break;
          }
          ppuVar13 = ppuVar13 + 3;
          local_88 = local_88 + 1;
        } while (ppuVar13 < (undefined **)((int)&PTR_s_LC_TIME_140270cc + 1));
        pcVar4 = pcVar4 + 1;
        sVar11 = _strcspn(pcVar4,";");
        if ((sVar11 == 0) && (*pcVar4 != ';')) {
          FUN_1401a650(0x13);
          DAT_14029f80 = DAT_14029f80 + -1;
          return (char *)0x0;
        }
        if (local_88 < 6) {
          _strncpy((char *)local_84,pcVar4,sVar11);
          local_84[sVar11] = 0;
          iVar5 = FUN_14019f30(local_88,local_84);
          if (iVar5 != 0) {
            local_8c = local_8c + 1;
          }
        }
      } while ((pcVar4[sVar11] != '\0') && (param_2 = (byte *)(pcVar4 + sVar11 + 1), *param_2 != 0))
      ;
      if (local_8c == 0) {
        pcVar4 = (char *)0x0;
        goto LAB_14019ef9;
      }
    }
    else {
      pcVar6 = FUN_1401a1a0(param_2,(char *)local_84,(undefined4 *)0x0,(uint *)0x0);
      pcVar4 = (char *)0x0;
      if (pcVar6 == (char *)0x0) goto LAB_14019ef9;
      iVar5 = 0;
      puVar12 = &DAT_14027094;
      do {
        if ((LPVOID *)puVar12 != &DAT_14027094) {
          pbVar9 = local_84;
          pbVar10 = (byte *)*puVar12;
          do {
            bVar2 = *pbVar9;
            bVar14 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_14019e93:
              iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_14019e98;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar14 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_14019e93;
            pbVar9 = pbVar9 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar7 = 0;
LAB_14019e98:
          if ((iVar7 == 0) || (iVar7 = FUN_14019f30(iVar5,local_84), iVar7 != 0)) {
            local_8c = local_8c + 1;
          }
          else {
            bVar3 = false;
          }
        }
        puVar12 = puVar12 + 3;
        iVar5 = iVar5 + 1;
      } while (puVar12 < (undefined4 *)((int)&PTR_DAT_140270d0 + 1));
      if (bVar3) {
        pcVar4 = FUN_1401a0b0();
        FUN_1401dd10(DAT_14027094);
        DAT_14027094 = (LPVOID)0x0;
        goto LAB_14019ef9;
      }
      if (local_8c == 0) {
        pcVar4 = (char *)0x0;
        goto LAB_14019ef9;
      }
    }
  }
  pcVar4 = FUN_1401a0b0();
LAB_14019ef9:
  FUN_1401a650(0x13);
  DAT_14029f80 = DAT_14029f80 + -1;
  return pcVar4;
}



/* ==== __break @ 14019f23 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f23-14019f23
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f24 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f24-14019f24
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f25 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f25-14019f25
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f26 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f26-14019f26
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f27 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f27-14019f27
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f28 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f28-14019f28
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f29 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f29-14019f29
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2a-14019f2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f2b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2b-14019f2b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f2c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2c-14019f2c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2d-14019f2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f2e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2e-14019f2e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14019f2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14019f2f-14019f2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14019f30 @ 14019f30 ==== 
 * signature: undefined4 __cdecl FUN_14019f30(int param_1, byte * param_2)
 * body: 14019f30-1401a0aa
 */

undefined4 __cdecl FUN_14019f30(int param_1,byte *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint local_a0;
  undefined2 local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  undefined2 local_88;
  char local_84 [132];
  
  pcVar3 = FUN_1401a1a0(param_2,local_84,&local_a0,&local_98);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar3 = local_84;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_1401def0(~uVar5);
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  puVar2 = (undefined1 *)(&DAT_14027094)[param_1 * 3];
  local_94 = *(undefined4 *)(&DAT_140272b8 + param_1 * 4);
  iVar4 = param_1 * 6;
  local_8c = *(uint *)(&DAT_14027660 + iVar4);
  local_88 = *(undefined2 *)(&DAT_14027664 + iVar4);
  local_90 = DAT_140272d0;
  uVar5 = 0xffffffff;
  pcVar7 = local_84;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = pcVar3;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  (&DAT_14027094)[param_1 * 3] = pcVar3;
  *(uint *)(&DAT_140272b8 + param_1 * 4) = local_a0 & 0xffff;
  *(uint *)(&DAT_14027660 + iVar4) = local_a0;
  *(undefined2 *)(&DAT_14027664 + iVar4) = local_9c;
  if (param_1 == 2) {
    DAT_140272d0 = local_98;
  }
  iVar4 = (*(code *)(&PTR_FUN_14027098)[param_1 * 3])();
  if (iVar4 != 0) {
    (&DAT_14027094)[param_1 * 3] = puVar2;
    FUN_1401dd10(pcVar3);
    *(undefined4 *)(&DAT_140272b8 + param_1 * 4) = local_94;
    DAT_140272d0 = local_90;
    return 0;
  }
  if (puVar2 != &DAT_14027088) {
    FUN_1401dd10(puVar2);
  }
  return (&DAT_14027094)[param_1 * 3];
}



/* ==== __break @ 1401a0ab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0ab-1401a0ab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a0ac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0ac-1401a0ac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a0ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0ad-1401a0ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a0ae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0ae-1401a0ae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a0af ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0af-1401a0af
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401a0b0 @ 1401a0b0 ==== 
 * signature: char * __stdcall FUN_1401a0b0(void)
 * body: 1401a0b0-1401a19f
 */

char * FUN_1401a0b0(void)

{
  undefined **ppuVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  
  bVar4 = true;
  if (DAT_14027094 == (char *)0x0) {
    DAT_14027094 = (char *)FUN_1401def0(0x351);
  }
  *DAT_14027094 = '\0';
  ppuVar9 = &PTR_DAT_140270a0;
  do {
    FUN_1401a380(DAT_14027094,3);
    if ((undefined **)((int)&PTR_s_LC_TIME_140270cc + 3) < ppuVar9) {
      if (bVar4) {
        FUN_1401dd10(DAT_14027094);
        DAT_14027094 = (char *)0x0;
        return PTR_DAT_140270ac;
      }
      return DAT_14027094;
    }
    uVar6 = 0xffffffff;
    pcVar10 = ";";
    do {
      pcVar13 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = DAT_14027094;
    do {
      pcVar12 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar12 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar2 != '\0');
    pcVar10 = pcVar13 + -uVar6;
    pcVar13 = pcVar12 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar13 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar13 = pcVar13 + 1;
    }
    ppuVar1 = ppuVar9 + 3;
    pbVar5 = *ppuVar9;
    pbVar11 = *ppuVar1;
    do {
      bVar3 = *pbVar5;
      bVar14 = bVar3 < *pbVar11;
      if (bVar3 != *pbVar11) {
LAB_1401a163:
        iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_1401a168;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar5[1];
      bVar14 = bVar3 < pbVar11[1];
      if (bVar3 != pbVar11[1]) goto LAB_1401a163;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar3 != 0);
    iVar7 = 0;
LAB_1401a168:
    ppuVar9 = ppuVar1;
    if (iVar7 != 0) {
      bVar4 = false;
    }
  } while( true );
}



/* ==== FUN_1401a1a0 @ 1401a1a0 ==== 
 * signature: char * __cdecl FUN_1401a1a0(byte * param_1, char * param_2, undefined4 * param_3, uint * param_4)
 * body: 1401a1a0-1401a369
 */

char * __cdecl FUN_1401a1a0(byte *param_1,char *param_2,undefined4 *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  char local_88 [136];
  
  if (param_1 == (byte *)0x0) {
    return (char *)0x0;
  }
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    *param_2 = 'C';
    param_2[1] = '\0';
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
      return param_2;
    }
  }
  else {
    pbVar3 = &DAT_14027170;
    pbVar5 = param_1;
    do {
      bVar2 = *pbVar3;
      bVar10 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_1401a232:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_1401a237;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar10 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_1401a232;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1401a237:
    if (iVar4 != 0) {
      pbVar3 = &DAT_140270e8;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar3;
        bVar10 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) {
LAB_1401a266:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_1401a26b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar10 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_1401a266;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_1401a26b:
      if (iVar4 != 0) {
        iVar4 = FUN_1401a3d0(local_88,(char *)param_1);
        if (iVar4 != 0) {
          return (char *)0x0;
        }
        iVar4 = FUN_1401df70(local_88,&DAT_140270d8,(LCTYPE)local_88);
        if (iVar4 == 0) {
          return (char *)0x0;
        }
        DAT_140270e0 = (uint)DAT_140270dc;
        FUN_1401a4d0(&DAT_14027170,local_88);
        if (*param_1 == 0) {
          param_1 = &DAT_14027170;
        }
        uVar6 = 0xffffffff;
        do {
          pbVar5 = param_1;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar5 = param_1 + 1;
          bVar2 = *param_1;
          param_1 = pbVar5;
        } while (bVar2 != 0);
        uVar6 = ~uVar6;
        pbVar5 = pbVar5 + -uVar6;
        pbVar3 = &DAT_140270e8;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar3 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar3 = pbVar3 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar3 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pbVar3 = pbVar3 + 1;
        }
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = DAT_140270d8;
      *(ushort *)(param_3 + 1) = DAT_140270dc;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = DAT_140270e0;
    }
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_14027170;
    do {
      pcVar9 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar9 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      param_2 = param_2 + 1;
    }
    param_2 = &DAT_14027170;
  }
  return param_2;
}



/* ==== __break @ 1401a36a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36a-1401a36a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a36b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36b-1401a36b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a36c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36c-1401a36c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a36d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36d-1401a36d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a36e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36e-1401a36e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a36f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a36f-1401a36f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401a370 @ 1401a370 ==== 
 * signature: undefined4 __stdcall FUN_1401a370(void)
 * body: 1401a370-1401a372
 */

undefined4 FUN_1401a370(void)

{
  return 0;
}



/* ==== FUN_1401a380 @ 1401a380 ==== 
 * signature: undefined __cdecl FUN_1401a380(char * param_1, int param_2)
 * body: 1401a380-1401a3cd
 */

void __cdecl FUN_1401a380(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar5 = 0;
  puVar6 = (undefined4 *)&stack0x0000000c;
  if (0 < param_2) {
    do {
      pcVar7 = (char *)*puVar6;
      puVar6 = puVar6 + 1;
      uVar2 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      iVar3 = -1;
      pcVar7 = param_1;
      do {
        pcVar8 = pcVar7;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      pcVar7 = pcVar9 + -uVar2;
      pcVar9 = pcVar8 + -1;
      for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
    } while (iVar5 < param_2);
  }
  return;
}



/* ==== __break @ 1401a3ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a3ce-1401a3ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a3cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a3cf-1401a3cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401a3d0 @ 1401a3d0 ==== 
 * signature: undefined4 __cdecl FUN_1401a3d0(char * param_1, char * param_2)
 * body: 1401a3d0-1401a4c4
 */

undefined4 __cdecl FUN_1401a3d0(char *param_1,char *param_2)

{
  char cVar1;
  size_t _Count;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar2 = param_1;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  if (*param_2 == '\0') {
    return 0;
  }
  if ((*param_2 != '.') || (param_2[1] == '\0')) {
    iVar3 = 0;
    do {
      _Count = _strcspn(param_2,"_.,");
      if (_Count == 0) {
        return 0xffffffff;
      }
      cVar1 = param_2[_Count];
      if (((iVar3 != 0) || (0x3f < (int)_Count)) || (pcVar2 = param_1, cVar1 == '.')) {
        if (((iVar3 == 1) && ((int)_Count < 0x40)) && (cVar1 != '_')) {
          pcVar2 = param_1 + 0x40;
        }
        else {
          if ((iVar3 != 2) || ((cVar1 != '\0' && (cVar1 != ',')))) {
            return 0xffffffff;
          }
          pcVar2 = param_1 + 0x80;
        }
      }
      _strncpy(pcVar2,param_2,_Count);
      if ((cVar1 == ',') || (cVar1 == '\0')) {
        return 0;
      }
      param_2 = param_2 + _Count + 1;
      iVar3 = iVar3 + 1;
    } while( true );
  }
  uVar4 = 0xffffffff;
  pcVar2 = param_2 + 1;
  do {
    pcVar6 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar6 + -uVar4;
  pcVar6 = param_1 + 0x80;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return 0;
}



/* ==== __break @ 1401a4c5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4c5-1401a4c5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4c6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4c6-1401a4c6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4c7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4c7-1401a4c7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4c8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4c8-1401a4c8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4c9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4c9-1401a4c9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4ca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4ca-1401a4ca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4cb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4cb-1401a4cb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4cc-1401a4cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4cd-1401a4cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4ce-1401a4ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a4cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a4cf-1401a4cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401a4d0 @ 1401a4d0 ==== 
 * signature: undefined __cdecl FUN_1401a4d0(char * param_1, char * param_2)
 * body: 1401a4d0-1401a537
 */

void __cdecl FUN_1401a4d0(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (param_2[0x40] != '\0') {
    FUN_1401a380(param_1,2);
  }
  if (param_2[0x80] != '\0') {
    FUN_1401a380(param_1,2);
  }
  return;
}



/* ==== __break @ 1401a538 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a538-1401a538
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a539 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a539-1401a539
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a53a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a53a-1401a53a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a53b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a53b-1401a53b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a53c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a53c-1401a53c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a53d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a53d-1401a53d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a53e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a53e-1401a53e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a53f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a53f-1401a53f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __mtinitlocks @ 1401a540 ==== 
 * signature: int __cdecl __mtinitlocks(void)
 * body: 1401a540-1401a569
 * note: Library Function - Single Match  __mtinitlocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinitlocks
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinitlocks(void)

{
  int extraout_EAX;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402723c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402722c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402721c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_140271fc);
  return extraout_EAX;
}



/* ==== __mtdeletelocks @ 1401a570 ==== 
 * signature: void __cdecl __mtdeletelocks(void)
 * body: 1401a570-1401a5d3
 * note: Library Function - Single Match  __mtdeletelocks  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtdeletelocks
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtdeletelocks(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  iVar1 = 0;
  do {
    lpCriticalSection = (LPCRITICAL_SECTION)(&DAT_140271f8)[iVar1];
    if ((((lpCriticalSection != (LPCRITICAL_SECTION)0x0) && (iVar1 != 0x11)) && (iVar1 != 0xd)) &&
       ((iVar1 != 9 && (iVar1 != 1)))) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_1401dd10((LPVOID)(&DAT_140271f8)[iVar1]);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402721c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402722c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1402723c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_140271fc);
  return;
}



/* ==== __lock @ 1401a5e0 ==== 
 * signature: void __cdecl __lock(int _File)
 * body: 1401a5e0-1401a647
 * note: Library Function - Single Match  __lock  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock
   
   Library: Visual Studio 1998 Release */

void __cdecl __lock(int _File)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_140271f8 + _File;
  if (*piVar1 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1401def0(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    __lock(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1401dd10(lpCriticalSection);
    }
    FUN_1401a650(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



/* ==== FUN_1401a650 @ 1401a650 ==== 
 * signature: undefined __cdecl FUN_1401a650(int param_1)
 * body: 1401a650-1401a666
 */

void __cdecl FUN_1401a650(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_140271f8)[param_1]);
  return;
}



/* ==== FID_conflict:__lock_file @ 1401a670 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 1401a670-1401a6a5
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)0x14027e7f < _File) && (_File < (FILE *)0x140280e1)) {
    __lock(((int)(_File + -0xa013f4) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* ==== FID_conflict:__lock_file2 @ 1401a6b0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
 * body: 1401a6b0-1401a6d7
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file2  __unlock_file2  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file2
    __unlock_file2
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ==== FID_conflict:__lock_file @ 1401a6e0 ==== 
 * signature: void __cdecl FID_conflict:__lock_file(FILE * _File)
 * body: 1401a6e0-1401a715
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file  __unlock_file  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file
    __unlock_file
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file(FILE *_File)

{
  if (((FILE *)0x14027e7f < _File) && (_File < (FILE *)0x140280e1)) {
    FUN_1401a650(((int)(_File + -0xa013f4) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}



/* ==== FID_conflict:__lock_file2 @ 1401a720 ==== 
 * signature: void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
 * body: 1401a720-1401a747
 * note: Library Function - Multiple Matches With Different Base Names  __lock_file2  __unlock_file2  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __lock_file2
    __unlock_file2
   
   Library: Visual Studio 1998 Release */

void __cdecl FID_conflict___lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    FUN_1401a650(_Index + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}



/* ==== FUN_1401a750 @ 1401a750 ==== 
 * signature: undefined __cdecl FUN_1401a750(LPCSTR param_1)
 * body: 1401a750-1401a768
 */

void __cdecl FUN_1401a750(LPCSTR param_1)

{
  FatalAppExitA(0,param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}



/* ==== __break @ 1401a769 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a769-1401a769
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a76a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a76a-1401a76a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a76b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a76b-1401a76b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a76c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a76c-1401a76c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a76d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a76d-1401a76d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a76e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a76e-1401a76e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401a76f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a76f-1401a76f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== ___crtLCMapStringW @ 1401a770 ==== 
 * signature: int __cdecl ___crtLCMapStringW(LPCWSTR _LocaleName, DWORD _DWMapFlag, LPCWSTR _LpSrcStr, int _CchSrc, LPWSTR _LpDestStr, int _CchDest)
 * body: 1401a770-1401a97b
 * note: Library Function - Single Match  ___crtLCMapStringW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtLCMapStringW
   
   Library: Visual Studio 1998 Release */

int __cdecl
___crtLCMapStringW(LPCWSTR _LocaleName,DWORD _DWMapFlag,LPCWSTR _LpSrcStr,int _CchSrc,
                  LPWSTR _LpDestStr,int _CchDest)

{
  int iVar1;
  SIZE_T cbMultiByte;
  LPCSTR lpMultiByteStr;
  SIZE_T cchDest;
  char *lpDestStr;
  UINT in_stack_0000001c;
  
  if (DAT_140272d4 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_140272d4 = 2;
    }
    else {
      DAT_140272d4 = 1;
    }
  }
  iVar1 = DAT_140272d4;
  if (0 < _CchSrc) {
    _CchSrc = wcsncnt(_LpSrcStr,_CchSrc);
    iVar1 = DAT_140272d4;
  }
  DAT_140272d4 = iVar1;
  if (iVar1 == 1) {
    iVar1 = LCMapStringW((LCID)_LocaleName,_DWMapFlag,_LpSrcStr,_CchSrc,_LpDestStr,_CchDest);
    return iVar1;
  }
  if (iVar1 == 2) {
    lpDestStr = (char *)0x0;
    if (in_stack_0000001c == 0) {
      in_stack_0000001c = DAT_140272d0;
    }
    cbMultiByte = WideCharToMultiByte(in_stack_0000001c,0x220,_LpSrcStr,_CchSrc,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte == 0) {
      return 0;
    }
    lpMultiByteStr = (LPCSTR)FUN_1401def0(cbMultiByte);
    if (lpMultiByteStr == (LPCSTR)0x0) {
      return 0;
    }
    iVar1 = WideCharToMultiByte(in_stack_0000001c,0x220,_LpSrcStr,_CchSrc,lpMultiByteStr,cbMultiByte
                                ,(LPCSTR)0x0,(LPBOOL)0x0);
    if ((((iVar1 != 0) &&
         (cchDest = LCMapStringA((LCID)_LocaleName,_DWMapFlag,lpMultiByteStr,cbMultiByte,(LPSTR)0x0,
                                 0), cchDest != 0)) &&
        (lpDestStr = (char *)FUN_1401def0(cchDest), lpDestStr != (char *)0x0)) &&
       (iVar1 = LCMapStringA((LCID)_LocaleName,_DWMapFlag,lpMultiByteStr,cbMultiByte,lpDestStr,
                             cchDest), iVar1 != 0)) {
      if ((_DWMapFlag & 0x400) != 0) {
        if (_CchDest != 0) {
          if ((int)cchDest <= _CchDest) {
            _CchDest = cchDest;
          }
          _strncpy((char *)_LpDestStr,lpDestStr,_CchDest);
        }
LAB_1401a963:
        FUN_1401dd10(lpMultiByteStr);
        FUN_1401dd10(lpDestStr);
        return cchDest;
      }
      if (_CchDest == 0) {
        cchDest = MultiByteToWideChar(in_stack_0000001c,1,lpDestStr,cchDest,(LPWSTR)0x0,0);
      }
      else {
        cchDest = MultiByteToWideChar(in_stack_0000001c,1,lpDestStr,cchDest,_LpDestStr,_CchDest);
      }
      if (cchDest != 0) goto LAB_1401a963;
    }
    FUN_1401dd10(lpMultiByteStr);
    FUN_1401dd10(lpDestStr);
    iVar1 = 0;
  }
  return iVar1;
}



/* ==== wcsncnt @ 1401a980 ==== 
 * signature: int __cdecl wcsncnt(short * param_1, int param_2)
 * body: 1401a980-1401a9b2
 * note: Library Function - Single Match  _wcsncnt  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _wcsncnt
   
   Library: Visual Studio 1998 Release */

int __cdecl wcsncnt(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*psVar2 == 0) goto LAB_1401a9a9;
    psVar2 = psVar2 + 1;
  }
  if (*psVar2 == 0) {
LAB_1401a9a9:
    param_2 = (int)psVar2 - (int)param_1 >> 1;
  }
  return param_2;
}



/* ==== FUN_1401a9c0 @ 1401a9c0 ==== 
 * signature: int __cdecl FUN_1401a9c0(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7)
 * body: 1401a9c0-1401abea
 */

int __cdecl
FUN_1401a9c0(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPCWSTR lpWideCharStr;
  int iVar2;
  LPCWSTR lpDestStr;
  
  if (DAT_140272d8 == 0) {
    iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_140272d8 = 1;
    }
    else {
      DAT_140272d8 = 2;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1401abf0(param_3,param_4);
  }
  if (DAT_140272d8 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_140272d8 != 1) {
    return DAT_140272d8;
  }
  lpDestStr = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_140272d0;
  }
  iVar1 = MultiByteToWideChar(param_7,9,param_3,param_4,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_1401def0(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      lpDestStr = (LPCWSTR)FUN_1401def0(iVar2 * 2);
      if ((lpDestStr == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,lpDestStr,iVar2), iVar1 == 0))
      goto LAB_1401ab3b;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,lpDestStr,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,lpDestStr,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0
                                    ,(LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_1401abd2;
      if (param_6 < iVar2) goto LAB_1401ab3b;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_1401abd2:
      FUN_1401dd10(lpWideCharStr);
      FUN_1401dd10(lpDestStr);
      return iVar2;
    }
  }
LAB_1401ab3b:
  FUN_1401dd10(lpWideCharStr);
  FUN_1401dd10(lpDestStr);
  return 0;
}



/* ==== FUN_1401abf0 @ 1401abf0 ==== 
 * signature: int __cdecl FUN_1401abf0(char * param_1, int param_2)
 * body: 1401abf0-1401ac1b
 */

int __cdecl FUN_1401abf0(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_1401ac15;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_1401ac15:
    param_2 = (int)pcVar2 - (int)param_1;
  }
  return param_2;
}



/* ==== __cinit @ 1401ac20 ==== 
 * signature: int __cdecl __cinit(int param_1)
 * body: 1401ac20-1401ac4f
 * note: Library Function - Single Match  __cinit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 1998 Release */

int __cdecl __cinit(int param_1)

{
  int iVar1;
  
  if (PTR___fpmath_14026e30 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_14026e30)();
  }
  __initterm((undefined4 *)&DAT_14026008,(undefined4 *)&DAT_14026010);
  iVar1 = __initterm((undefined4 *)&DAT_14026000,(undefined4 *)&DAT_14026004);
  return iVar1;
}



/* ==== FUN_1401ac50 @ 1401ac50 ==== 
 * signature: undefined __cdecl FUN_1401ac50(UINT param_1)
 * body: 1401ac50-1401ac61
 */

void __cdecl FUN_1401ac50(UINT param_1)

{
  FUN_1401acb0(param_1,0,0);
  return;
}



/* ==== __exit @ 1401ac70 ==== 
 * signature: noreturn void __cdecl __exit(int _Code)
 * body: 1401ac70-1401ac81
 * note: Library Function - Single Match  __exit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 1998 Release */

void __cdecl __exit(int _Code)

{
  FUN_1401acb0(_Code,1,0);
  return;
}



/* ==== FUN_1401ac90 @ 1401ac90 ==== 
 * signature: undefined __stdcall FUN_1401ac90(void)
 * body: 1401ac90-1401ac9e
 */

void FUN_1401ac90(void)

{
  FUN_1401acb0(0,0,1);
  return;
}



/* ==== FUN_1401aca0 @ 1401aca0 ==== 
 * signature: undefined __stdcall FUN_1401aca0(void)
 * body: 1401aca0-1401acae
 */

void FUN_1401aca0(void)

{
  FUN_1401acb0(0,1,1);
  return;
}



/* ==== __break @ 1401acaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401acaf-1401acaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401acb0 @ 1401acb0 ==== 
 * signature: undefined __cdecl FUN_1401acb0(UINT param_1, int param_2, int param_3)
 * body: 1401acb0-1401ad5c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1401ad5d-1401ad60
 */

void __cdecl FUN_1401acb0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1401ad70();
  if (DAT_1402731c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_14027318 = 1;
  DAT_14027314 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_14029f7c != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_14029f78 + -4), DAT_14029f7c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_14029f7c <= puVar1);
    }
    __initterm((undefined4 *)&DAT_14026014,(undefined4 *)&DAT_1402601c);
  }
  __initterm((undefined4 *)&DAT_14026020,(undefined4 *)&DAT_14026024);
  if (param_3 != 0) {
    FUN_1401ad80();
    return;
  }
  DAT_1402731c = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ==== FUN_1401ad70 @ 1401ad70 ==== 
 * signature: undefined __stdcall FUN_1401ad70(void)
 * body: 1401ad70-1401ad7a
 */

void FUN_1401ad70(void)

{
  __lock(0xd);
  return;
}



/* ==== FUN_1401ad80 @ 1401ad80 ==== 
 * signature: undefined __stdcall FUN_1401ad80(void)
 * body: 1401ad80-1401ad8a
 */

void FUN_1401ad80(void)

{
  FUN_1401a650(0xd);
  return;
}



/* ==== __initterm @ 1401ad90 ==== 
 * signature: undefined __cdecl __initterm(undefined4 * param_1, undefined4 * param_2)
 * body: 1401ad90-1401adaf
 * note: Library Function - Single Match  __initterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



/* ==== __mtinit @ 1401adb0 ==== 
 * signature: int __cdecl __mtinit(void)
 * body: 1401adb0-1401ae0f
 * note: Library Function - Single Match  __mtinit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 1998 Release */

int __cdecl __mtinit(void)

{
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_ESI;
  
  __mtinitlocks();
  DAT_14027320 = TlsAlloc();
  if (DAT_14027320 == 0xffffffff) {
    return 0;
  }
  _Ptd = FUN_1401e520(1,0x74);
  if (_Ptd != (_ptiddata)0x0) {
    BVar1 = TlsSetValue(DAT_14027320,_Ptd);
    if (BVar1 != 0) {
      __initptd(_Ptd,unaff_ESI);
      DVar2 = GetCurrentThreadId();
      _Ptd->_tid = DVar2;
      _Ptd->_thandle = 0xffffffff;
      return 1;
    }
  }
  return 0;
}



/* ==== __mtterm @ 1401ae10 ==== 
 * signature: void __cdecl __mtterm(void)
 * body: 1401ae10-1401ae30
 * note: Library Function - Single Match  __mtterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __mtterm(void)

{
  __mtdeletelocks();
  if (DAT_14027320 != 0xffffffff) {
    TlsFree(DAT_14027320);
    DAT_14027320 = 0xffffffff;
  }
  return;
}



/* ==== __initptd @ 1401ae40 ==== 
 * signature: void __cdecl __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
 * body: 1401ae40-1401ae52
 * note: Library Function - Single Match  __initptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __initptd(_ptiddata _Ptd,pthreadlocinfo _Locale)

{
  *(undefined4 **)(_Ptd->_con_ch_buf + 4) = &DAT_14028108;
  _Ptd->_holdrand = 1;
  return;
}



/* ==== __getptd @ 1401ae60 ==== 
 * signature: _ptiddata __cdecl __getptd(void)
 * body: 1401ae60-1401aece
 * note: Library Function - Single Match  __getptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __getptd
   
   Library: Visual Studio 1998 Release */

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata _Ptd;
  BOOL BVar1;
  DWORD DVar2;
  pthreadlocinfo unaff_EDI;
  
  dwErrCode = GetLastError();
  _Ptd = TlsGetValue(DAT_14027320);
  if (_Ptd == (_ptiddata)0x0) {
    _Ptd = FUN_1401e520(1,0x74);
    if (_Ptd != (_ptiddata)0x0) {
      BVar1 = TlsSetValue(DAT_14027320,_Ptd);
      if (BVar1 != 0) {
        __initptd(_Ptd,unaff_EDI);
        DVar2 = GetCurrentThreadId();
        _Ptd->_tid = DVar2;
        _Ptd->_thandle = 0xffffffff;
        goto LAB_1401aec3;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1401aec3:
  SetLastError(dwErrCode);
  return _Ptd;
}



/* ==== __freeptd @ 1401aed0 ==== 
 * signature: void __cdecl __freeptd(_ptiddata _Ptd)
 * body: 1401aed0-1401af70
 * note: Library Function - Single Match  __freeptd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freeptd
   
   Library: Visual Studio 1998 Release */

void __cdecl __freeptd(_ptiddata _Ptd)

{
  if (DAT_14027320 != 0xffffffff) {
    if ((_Ptd != (_ptiddata)0x0) || (_Ptd = TlsGetValue(DAT_14027320), _Ptd != (_ptiddata)0x0)) {
      if (_Ptd->_errmsg != (char *)0x0) {
        FUN_1401dd10(_Ptd->_errmsg);
      }
      if (_Ptd->_werrmsg != (wchar_t *)0x0) {
        FUN_1401dd10(_Ptd->_werrmsg);
      }
      if (_Ptd->_wnamebuf0 != (wchar_t *)0x0) {
        FUN_1401dd10(_Ptd->_wnamebuf0);
      }
      if (_Ptd->_wnamebuf1 != (wchar_t *)0x0) {
        FUN_1401dd10(_Ptd->_wnamebuf1);
      }
      if (_Ptd->_wasctimebuf != (wchar_t *)0x0) {
        FUN_1401dd10(_Ptd->_wasctimebuf);
      }
      if (_Ptd->_gmtimebuf != (LPVOID)0x0) {
        FUN_1401dd10(_Ptd->_gmtimebuf);
      }
      FUN_1401dd10(_Ptd);
    }
    TlsSetValue(DAT_14027320,(LPVOID)0x0);
    return;
  }
  return;
}



/* ==== KERNEL32.DLL::GetCurrentThreadId @ 1401af80 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 1401af80-1401af85
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1401af80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



/* ==== __break @ 1401af86 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af86-1401af86
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af87 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af87-1401af87
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af88 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af88-1401af88
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af89 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af89-1401af89
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af8a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8a-1401af8a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af8b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8b-1401af8b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af8c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8c-1401af8c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8d-1401af8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af8e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8e-1401af8e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af8f-1401af8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== KERNEL32.DLL::GetCurrentThread @ 1401af90 ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 1401af90-1401af95
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1401af90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}



/* ==== __break @ 1401af96 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af96-1401af96
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af97 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af97-1401af97
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af98 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af98-1401af98
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af99 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af99-1401af99
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af9a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af9a-1401af9a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af9b-1401af9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af9c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af9c-1401af9c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af9d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af9d-1401af9d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af9e-1401af9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401af9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401af9f-1401af9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401afa0 @ 1401afa0 ==== 
 * signature: undefined __stdcall FUN_1401afa0(void)
 * body: 1401afa0-1401afb4
 */

void FUN_1401afa0(void)

{
  DAT_14029f74 = HeapCreate(0,0x1000,0);
  return;
}



/* ==== FUN_1401afc0 @ 1401afc0 ==== 
 * signature: undefined __stdcall FUN_1401afc0(void)
 * body: 1401afc0-1401afcc
 */

void FUN_1401afc0(void)

{
  HeapDestroy(DAT_14029f74);
  return;
}



/* ==== FUN_1401afd0 @ 1401afd0 ==== 
 * signature: undefined __stdcall FUN_1401afd0(void)
 * body: 1401afd0-1401b1a9
 */

void FUN_1401afd0(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  HANDLE hFile;
  byte *pbVar3;
  UINT UVar4;
  UINT UVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  UINT *pUVar10;
  int iVar11;
  _STARTUPINFOA local_44;
  
  puVar1 = (undefined4 *)FUN_1401def0(0x480);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_14029f70 = 0x20;
  DAT_14029e70 = puVar1;
  if (puVar1 < puVar1 + 0x120) {
    do {
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar6 = puVar1 + 9;
      *puVar1 = 0xffffffff;
      *(undefined1 *)((int)puVar1 + 5) = 10;
      puVar1[2] = 0;
      puVar1 = puVar6;
    } while (puVar6 < DAT_14029e70 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UVar4 = *(UINT *)local_44.lpReserved2;
    pUVar10 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar3 = (byte *)((int)pUVar10 + UVar4);
    if (0x7ff < (int)UVar4) {
      UVar4 = 0x800;
    }
    UVar5 = UVar4;
    if ((int)DAT_14029f70 < (int)UVar4) {
      piVar7 = &DAT_14029e74;
      do {
        puVar1 = (undefined4 *)FUN_1401def0(0x480);
        UVar5 = DAT_14029f70;
        if (puVar1 == (undefined4 *)0x0) break;
        *piVar7 = (int)puVar1;
        DAT_14029f70 = DAT_14029f70 + 0x20;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(undefined1 *)(puVar1 + 1) = 0;
            puVar6 = puVar1 + 9;
            *puVar1 = 0xffffffff;
            *(undefined1 *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar6;
          } while (puVar6 < (undefined4 *)(*piVar7 + 0x480));
        }
        piVar7 = piVar7 + 1;
        UVar5 = UVar4;
      } while ((int)DAT_14029f70 < (int)UVar4);
    }
    uVar8 = 0;
    if (0 < (int)UVar5) {
      do {
        if (((*(HANDLE *)pbVar3 != (HANDLE)0xffffffff) && ((*pUVar10 & 1) != 0)) &&
           (DVar2 = GetFileType(*(HANDLE *)pbVar3), DVar2 != 0)) {
          puVar1 = (undefined4 *)
                   ((uVar8 & 0x1f) * 0x24 +
                   *(int *)((int)&DAT_14029e70 + ((int)(uVar8 & 0xffffffe7) >> 3)));
          *puVar1 = *(undefined4 *)pbVar3;
          *(byte *)(puVar1 + 1) = (byte)*pUVar10;
        }
        uVar8 = uVar8 + 1;
        pUVar10 = (UINT *)((int)pUVar10 + 1);
        pbVar3 = pbVar3 + 4;
      } while ((int)uVar8 < (int)UVar5);
    }
  }
  iVar9 = 0;
  iVar11 = 0;
  do {
    piVar7 = (int *)((int)DAT_14029e70 + iVar9);
    if (*piVar7 == -1) {
      DVar2 = 0xfffffff6;
      *(undefined1 *)(piVar7 + 1) = 0x81;
      if (iVar9 != 0) {
        DVar2 = (iVar11 == 1) - 0xc;
      }
      hFile = GetStdHandle(DVar2);
      if ((hFile == (HANDLE)0xffffffff) || (DVar2 = GetFileType(hFile), DVar2 == 0)) {
        *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
      }
      else {
        *piVar7 = (int)hFile;
        if ((DVar2 & 0xff) == 2) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x40;
        }
        else if ((DVar2 & 0xff) == 3) {
          *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 8;
        }
      }
    }
    else {
      *(byte *)(piVar7 + 1) = *(byte *)(piVar7 + 1) | 0x80;
    }
    iVar9 = iVar9 + 0x24;
    iVar11 = iVar11 + 1;
  } while (iVar9 < 0x6c);
  SetHandleCount(DAT_14029f70);
  return;
}



/* ==== __ioterm @ 1401b1b0 ==== 
 * signature: void __cdecl __ioterm(void)
 * body: 1401b1b0-1401b204
 * note: Library Function - Single Match  __ioterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ioterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __ioterm(void)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = &DAT_14029e70;
  do {
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if (uVar1 < uVar1 + 0x480) {
        do {
          if (*(int *)(uVar1 + 8) != 0) {
            DeleteCriticalSection((LPCRITICAL_SECTION)(uVar1 + 0xc));
          }
          uVar1 = uVar1 + 0x24;
        } while (uVar1 < *puVar2 + 0x480);
      }
      FUN_1401dd10((LPVOID)*puVar2);
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_14029f70);
  return;
}



/* ==== FUN_1401b210 @ 1401b210 ==== 
 * signature: undefined __stdcall FUN_1401b210(void)
 * body: 1401b210-1401b2eb
 */

void FUN_1401b210(void)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar6 = 0;
  cVar1 = *DAT_14026e40;
  pcVar7 = DAT_14026e40;
  while (cVar1 != '\0') {
    if (*pcVar7 != '=') {
      iVar6 = iVar6 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + ~uVar3;
    cVar1 = *pcVar7;
  }
  piVar2 = (int *)FUN_1401def0(iVar6 * 4 + 4);
  DAT_140272fc = piVar2;
  if (piVar2 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_14026e40;
  pcVar7 = DAT_14026e40;
  do {
    if (cVar1 == '\0') {
      FUN_1401dd10(DAT_14026e40);
      *piVar2 = 0;
      return;
    }
    uVar3 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (*pcVar7 != '=') {
      iVar6 = FUN_1401def0(~uVar3);
      *piVar2 = iVar6;
      if (iVar6 == 0) {
        __amsg_exit(9);
      }
      uVar4 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar8 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar9 = (char *)*piVar2;
      piVar2 = piVar2 + 1;
      pcVar8 = pcVar8 + -uVar4;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    pcVar7 = pcVar7 + ~uVar3;
    cVar1 = *pcVar7;
  } while( true );
}



/* ==== __setargv @ 1401b2f0 ==== 
 * signature: int __cdecl __setargv(void)
 * body: 1401b2f0-1401b38a
 * note: Library Function - Single Match  __setargv  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setargv
   
   Library: Visual Studio 1998 Release */

int __cdecl __setargv(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_14028870,0x104);
  _DAT_1402730c = &DAT_14028870;
  pbVar2 = &DAT_14028870;
  if (*DAT_14029f88 != 0) {
    pbVar2 = DAT_14029f88;
  }
  FUN_1401b390(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (undefined4 *)FUN_1401def0(local_8 * 4 + local_4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1401b390(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_140272f4 = puVar1;
  _DAT_140272f0 = local_8 + -1;
  return local_8 + -1;
}



/* ==== FUN_1401b390 @ 1401b390 ==== 
 * signature: undefined __cdecl FUN_1401b390(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * body: 1401b390-1401b55f
 */

void __cdecl FUN_1401b390(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    pbVar4 = param_1 + 1;
    bVar1 = *pbVar4;
    while ((bVar1 != 0x22 && (*pbVar4 != 0))) {
      if (((*(byte *)((int)&DAT_14027350 + *pbVar4 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *param_3 = bVar1;
        param_3 = param_3 + 1;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = pbVar4 + 1;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_14027350 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1401b400;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1401b400:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar3 = false;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar5 = 0;
      bVar1 = *pbVar4;
      while (bVar1 == 0x5c) {
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar1 = *pbVar4;
      }
      if (*pbVar4 == 0x22) {
        pbVar6 = pbVar4;
        if ((uVar5 & 1) == 0) {
          if ((!bVar3) || (pbVar6 = pbVar4 + 1, *pbVar6 != 0x22)) {
            bVar2 = false;
            pbVar6 = pbVar4;
          }
          bVar3 = !bVar3;
        }
        uVar5 = uVar5 >> 1;
        pbVar4 = pbVar6;
      }
      while (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar3 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar2) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_14027350 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_5 = *param_5 + 1;
          goto LAB_1401b52f;
        }
        pbVar6 = param_3;
        if ((*(byte *)((int)&DAT_14027350 + bVar1 + 1) & 4) != 0) {
          *param_3 = bVar1;
          pbVar4 = pbVar4 + 1;
          pbVar6 = param_3 + 1;
          *param_5 = *param_5 + 1;
        }
        bVar1 = *pbVar4;
        param_3 = pbVar6 + 1;
        pbVar4 = pbVar4 + 1;
        *pbVar6 = bVar1;
        *param_5 = *param_5 + 1;
      }
      else {
LAB_1401b52f:
        pbVar4 = pbVar4 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ==== __setmbcp @ 1401b560 ==== 
 * signature: int __cdecl __setmbcp(int _CodePage)
 * body: 1401b560-1401b782
 * note: Library Function - Single Match  __setmbcp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 1998 Release */

int __cdecl __setmbcp(int _CodePage)

{
  byte *pbVar1;
  byte bVar2;
  UINT CodePage;
  UINT *pUVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  BYTE *pBVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int local_18;
  _cpinfo local_14;
  
  __lock(0x19);
  CodePage = getSystemCP(_CodePage);
  if (DAT_14027454 == CodePage) {
    FUN_1401a650(0x19);
    return 0;
  }
  if (CodePage == 0) {
    setSBCS();
    FUN_1401a650(0x19);
    return 0;
  }
  local_18 = 0;
  pUVar3 = &DAT_14027478;
  do {
    if (*pUVar3 == CodePage) {
      uVar5 = 0;
      puVar10 = &DAT_14027350;
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      *(undefined1 *)puVar10 = 0;
      do {
        pbVar9 = &DAT_14027488 + (local_18 * 6 + uVar5) * 8;
        bVar2 = *pbVar9;
        while ((bVar2 != 0 && (pbVar9[1] != 0))) {
          uVar7 = (uint)*pbVar9;
          if (uVar7 <= pbVar9[1]) {
            bVar2 = (&DAT_14027470)[uVar5];
            do {
              pbVar1 = (byte *)((int)&DAT_14027350 + uVar7 + 1);
              *pbVar1 = *pbVar1 | bVar2;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= pbVar9[1]);
          }
          pbVar9 = pbVar9 + 2;
          bVar2 = *pbVar9;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
      DAT_14027454 = CodePage;
      DAT_14027458 = _CPtoLCID(CodePage);
      DAT_14027464 = *(undefined4 *)(&DAT_14027480 + local_18 * 0x30);
      DAT_14027460 = *(undefined4 *)(&DAT_1402747c + local_18 * 0x30);
      DAT_14027468 = *(undefined4 *)(local_18 * 0x30 + 0x14027484);
      FUN_1401a650(0x19);
      return 0;
    }
    pUVar3 = pUVar3 + 0xc;
    local_18 = local_18 + 1;
  } while (pUVar3 < &DAT_14027568);
  BVar4 = GetCPInfo(CodePage,&local_14);
  if (BVar4 == 1) {
    puVar10 = &DAT_14027350;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)puVar10 = 0;
    if (local_14.MaxCharSize < 2) {
      DAT_14027458 = 0;
      DAT_14027454 = 0;
    }
    else {
      pBVar8 = local_14.LeadByte;
      while ((local_14.LeadByte[0] != 0 && (pBVar8[1] != 0))) {
        uVar5 = (uint)*pBVar8;
        if (uVar5 <= pBVar8[1]) {
          do {
            pbVar9 = (byte *)((int)&DAT_14027350 + uVar5 + 1);
            *pbVar9 = *pbVar9 | 4;
            uVar5 = uVar5 + 1;
          } while (uVar5 <= pBVar8[1]);
        }
        pBVar8 = pBVar8 + 2;
        local_14.LeadByte[0] = *pBVar8;
      }
      uVar5 = 1;
      do {
        pbVar9 = (byte *)((int)&DAT_14027350 + uVar5 + 1);
        *pbVar9 = *pbVar9 | 8;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xff);
      DAT_14027454 = CodePage;
      DAT_14027458 = _CPtoLCID(CodePage);
    }
    DAT_14027460 = 0;
    DAT_14027464 = 0;
    DAT_14027468 = 0;
    FUN_1401a650(0x19);
    return 0;
  }
  if (DAT_1402746c == 0) {
    FUN_1401a650(0x19);
    return -1;
  }
  setSBCS();
  FUN_1401a650(0x19);
  return 0;
}



/* ==== getSystemCP @ 1401b790 ==== 
 * signature: int __cdecl getSystemCP(int param_1)
 * body: 1401b790-1401b7dc
 * note: Library Function - Single Match  _getSystemCP  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _getSystemCP
   
   Library: Visual Studio 1998 Release */

int __cdecl getSystemCP(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1402746c = 1;
                    /* WARNING: Could not recover jumptable at 0x1401b7ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1402746c = 1;
                    /* WARNING: Could not recover jumptable at 0x1401b7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_140272d0;
  }
  DAT_1402746c = (uint)bVar2;
  return param_1;
}



/* ==== _CPtoLCID @ 1401b7e0 ==== 
 * signature: undefined4 __cdecl _CPtoLCID(undefined4 param_1)
 * body: 1401b7e0-1401b817
 * note: Library Function - Single Match  _CPtoLCID  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _CPtoLCID
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl _CPtoLCID(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



/* ==== setSBCS @ 1401b840 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 1401b840-1401b86b
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 1998 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_14027350;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_14027460 = 0;
  DAT_14027454 = 0;
  DAT_14027458 = 0;
  DAT_14027464 = 0;
  DAT_14027468 = 0;
  return;
}



/* ==== FUN_1401b870 @ 1401b870 ==== 
 * signature: undefined4 __stdcall FUN_1401b870(void)
 * body: 1401b870-1401b875
 */

undefined4 FUN_1401b870(void)

{
  return DAT_14027454;
}



/* ==== __break @ 1401b876 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b876-1401b876
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b877 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b877-1401b877
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b878 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b878-1401b878
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b879 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b879-1401b879
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b87a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87a-1401b87a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b87b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87b-1401b87b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b87c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87c-1401b87c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b87d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87d-1401b87d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b87e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87e-1401b87e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401b87f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87f-1401b87f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== ___initmbctable @ 1401b880 ==== 
 * signature: undefined __stdcall ___initmbctable(void)
 * body: 1401b880-1401b88a
 * note: Library Function - Single Match  ___initmbctable  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 1998 Release */

void ___initmbctable(void)

{
  __setmbcp(-3);
  return;
}



/* ==== ___crtGetEnvironmentStringsW @ 1401b890 ==== 
 * signature: LPVOID __cdecl ___crtGetEnvironmentStringsW(void)
 * body: 1401b890-1401ba8c
 * note: Library Function - Single Match  ___crtGetEnvironmentStringsW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtGetEnvironmentStringsW
   
   Library: Visual Studio 1998 Release */

LPVOID __cdecl ___crtGetEnvironmentStringsW(void)

{
  char cVar1;
  WCHAR WVar2;
  LPWSTR in_EAX;
  LPWSTR pWVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  WCHAR *pWVar7;
  uint uVar9;
  LPWCH pWVar10;
  LPWSTR pWVar11;
  LPWSTR pWVar12;
  undefined4 *puVar13;
  LPWSTR pWVar14;
  int local_4;
  WCHAR *pWVar8;
  
  local_4 = 0;
  pWVar3 = (LPWSTR)0x0;
  if (DAT_14027568 == 0) {
    in_EAX = GetEnvironmentStringsW();
    if (in_EAX == (LPWCH)0x0) {
      in_EAX = (LPWSTR)GetEnvironmentStrings();
      if (in_EAX == (LPWSTR)0x0) {
        return (LPVOID)0x0;
      }
      DAT_14027568 = 2;
      pWVar3 = in_EAX;
    }
    else {
      DAT_14027568 = 1;
      pWVar3 = in_EAX;
    }
  }
  if (DAT_14027568 == 1) {
    if ((pWVar3 == (LPWSTR)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
      return (LPVOID)0x0;
    }
    WVar2 = *pWVar3;
    pWVar7 = pWVar3;
    while (WVar2 != L'\0') {
      do {
        pWVar8 = pWVar7;
        pWVar7 = pWVar8 + 1;
      } while (*pWVar7 != L'\0');
      pWVar7 = pWVar8 + 2;
      WVar2 = *pWVar7;
    }
    uVar9 = (int)pWVar7 + (2 - (int)pWVar3);
    puVar4 = (undefined4 *)FUN_1401def0(uVar9);
    if (puVar4 != (undefined4 *)0x0) {
      pWVar10 = pWVar3;
      puVar13 = puVar4;
      for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar13 = *(undefined4 *)pWVar10;
        pWVar10 = pWVar10 + 2;
        puVar13 = puVar13 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(char *)puVar13 = (char)*pWVar10;
        pWVar10 = (LPWCH)((int)pWVar10 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      FreeEnvironmentStringsW(pWVar3);
      return puVar4;
    }
    FreeEnvironmentStringsW(pWVar3);
    return (LPVOID)0x0;
  }
  if (DAT_14027568 == 2) {
    if ((pWVar3 == (LPWSTR)0x0) && (pWVar3 = (LPWSTR)GetEnvironmentStrings(), pWVar3 == (LPWSTR)0x0)
       ) {
      return (LPVOID)0x0;
    }
    cVar1 = (char)*pWVar3;
    pWVar11 = pWVar3;
    while (cVar1 != '\0') {
      iVar5 = MultiByteToWideChar(DAT_140272d0,1,(LPCSTR)pWVar11,-1,(LPWSTR)0x0,0);
      if (iVar5 == 0) {
        return (LPVOID)0x0;
      }
      uVar9 = 0xffffffff;
      local_4 = local_4 + iVar5;
      pWVar12 = pWVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        WVar2 = *pWVar12;
        pWVar12 = (LPWSTR)((int)pWVar12 + 1);
      } while ((char)WVar2 != '\0');
      pWVar11 = (LPWSTR)((int)pWVar11 + ~uVar9);
      cVar1 = (char)*pWVar11;
    }
    in_EAX = (LPWSTR)FUN_1401def0((local_4 + 1) * 2);
    if (in_EAX == (LPWSTR)0x0) {
      FreeEnvironmentStringsA((LPCH)pWVar3);
      return (LPVOID)0x0;
    }
    cVar1 = (char)*pWVar3;
    pWVar11 = in_EAX;
    pWVar12 = pWVar3;
    while (cVar1 != '\0') {
      iVar5 = MultiByteToWideChar(DAT_140272d0,1,(LPCSTR)pWVar12,-1,pWVar11,
                                  (local_4 + 1) - ((int)pWVar11 - (int)in_EAX >> 1));
      if (iVar5 == 0) {
        FUN_1401dd10(in_EAX);
        FreeEnvironmentStringsA((LPCH)pWVar3);
        return (LPVOID)0x0;
      }
      uVar9 = 0xffffffff;
      pWVar14 = pWVar12;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        WVar2 = *pWVar14;
        pWVar14 = (LPWSTR)((int)pWVar14 + 1);
      } while ((char)WVar2 != '\0');
      pWVar12 = (LPWSTR)((int)pWVar12 + ~uVar9);
      iVar5 = FUN_1401e700(pWVar11);
      pWVar11 = pWVar11 + iVar5 + 1;
      cVar1 = (char)*pWVar12;
    }
    *pWVar11 = L'\0';
    FreeEnvironmentStringsA((LPCH)pWVar3);
  }
  return in_EAX;
}



/* ==== FUN_1401ba90 @ 1401ba90 ==== 
 * signature: LPSTR __stdcall FUN_1401ba90(void)
 * body: 1401ba90-1401bc24
 */

LPSTR FUN_1401ba90(void)

{
  char cVar1;
  WCHAR WVar2;
  LPWCH pWVar3;
  SIZE_T cbMultiByte;
  LPSTR pCVar4;
  uint uVar5;
  LPWCH pWVar6;
  char *pcVar7;
  WCHAR *pWVar8;
  int iVar10;
  LPSTR pCVar11;
  LPWCH local_4;
  WCHAR *pWVar9;
  
  pWVar3 = local_4;
  if (DAT_1402756c == 0) {
    pWVar3 = GetEnvironmentStringsW();
    if (pWVar3 == (LPWCH)0x0) {
      local_4 = (LPWCH)GetEnvironmentStrings();
      if (local_4 == (LPWCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_1402756c = 2;
    }
    else {
      DAT_1402756c = 1;
    }
  }
  if (DAT_1402756c != 1) {
    if (DAT_1402756c != 2) {
      return (LPSTR)0x0;
    }
    if ((local_4 == (LPWCH)0x0) && (local_4 = (LPWCH)GetEnvironmentStrings(), local_4 == (LPWCH)0x0)
       ) {
      return (LPSTR)0x0;
    }
    cVar1 = (char)*local_4;
    pWVar3 = local_4;
    while (cVar1 != '\0') {
      do {
        pWVar6 = pWVar3;
        pWVar3 = (LPWCH)((int)pWVar6 + 1);
      } while (*(char *)pWVar3 != '\0');
      pWVar3 = pWVar6 + 1;
      cVar1 = (char)*pWVar3;
    }
    pcVar7 = (char *)((int)pWVar3 + (1 - (int)local_4));
    pCVar4 = (LPSTR)FUN_1401def0((SIZE_T)pcVar7);
    if (pCVar4 == (LPSTR)0x0) {
      FreeEnvironmentStringsA((LPCH)local_4);
      return (LPSTR)0x0;
    }
    pWVar3 = local_4;
    pCVar11 = pCVar4;
    for (uVar5 = (uint)pcVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pCVar11 = *(undefined4 *)pWVar3;
      pWVar3 = pWVar3 + 2;
      pCVar11 = pCVar11 + 4;
    }
    for (uVar5 = (uint)pcVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar11 = (CHAR)*pWVar3;
      pWVar3 = (LPWCH)((int)pWVar3 + 1);
      pCVar11 = pCVar11 + 1;
    }
    FreeEnvironmentStringsA((LPCH)local_4);
    return pCVar4;
  }
  if ((pWVar3 == (LPWCH)0x0) && (pWVar3 = GetEnvironmentStringsW(), pWVar3 == (LPWCH)0x0)) {
    return (LPSTR)0x0;
  }
  WVar2 = *pWVar3;
  pWVar8 = pWVar3;
  while (WVar2 != L'\0') {
    do {
      pWVar9 = pWVar8;
      pWVar8 = pWVar9 + 1;
    } while (*pWVar8 != L'\0');
    pWVar8 = pWVar9 + 2;
    WVar2 = *pWVar8;
  }
  iVar10 = ((int)pWVar8 - (int)pWVar3 >> 1) + 1;
  cbMultiByte = WideCharToMultiByte(0,0,pWVar3,iVar10,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((cbMultiByte != 0) && (pCVar4 = (LPSTR)FUN_1401def0(cbMultiByte), pCVar4 != (LPSTR)0x0)) {
    iVar10 = WideCharToMultiByte(0,0,pWVar3,iVar10,pCVar4,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar10 == 0) {
      FUN_1401dd10(pCVar4);
      pCVar4 = (LPSTR)0x0;
    }
    FreeEnvironmentStringsW(pWVar3);
    return pCVar4;
  }
  FreeEnvironmentStringsW(pWVar3);
  return (LPSTR)0x0;
}



/* ==== FUN_1401bc30 @ 1401bc30 ==== 
 * signature: undefined4 __cdecl FUN_1401bc30(int param_1)
 * body: 1401bc30-1401bc59
 */

undefined4 __cdecl FUN_1401bc30(int param_1)

{
  undefined4 uVar1;
  
  if (-1 < param_1) {
    if (param_1 < 3) {
      uVar1 = DAT_14026e4c;
      DAT_14026e4c = param_1;
      return uVar1;
    }
    if (param_1 == 3) {
      return DAT_14026e4c;
    }
  }
  return 0xffffffff;
}



/* ==== __break @ 1401bc5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5a-1401bc5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bc5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5b-1401bc5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bc5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5c-1401bc5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bc5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5d-1401bc5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bc5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5e-1401bc5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bc5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5f-1401bc5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401bc60 @ 1401bc60 ==== 
 * signature: undefined __cdecl FUN_1401bc60(undefined4 param_1)
 * body: 1401bc60-1401bc69
 */

void __cdecl FUN_1401bc60(undefined4 param_1)

{
  DAT_14026e50 = param_1;
  return;
}



/* ==== __FF_MSGBANNER @ 1401bc70 ==== 
 * signature: void __cdecl __FF_MSGBANNER(void)
 * body: 1401bc70-1401bcac
 * note: Library Function - Single Match  __FF_MSGBANNER  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 1998 Release */

void __cdecl __FF_MSGBANNER(void)

{
  if ((DAT_14026e4c == 1) || ((DAT_14026e4c == 0 && (DAT_14026e50 == 1)))) {
    FUN_1401bcb0(0xfc);
    if (DAT_140275f8 != (code *)0x0) {
      (*DAT_140275f8)();
    }
    FUN_1401bcb0(0xff);
  }
  return;
}



/* ==== FUN_1401bcb0 @ 1401bcb0 ==== 
 * signature: undefined __cdecl FUN_1401bcb0(int param_1)
 * body: 1401bcb0-1401be9c
 */

void __cdecl FUN_1401bcb0(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  DWORD local_1a8;
  char local_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  iVar4 = 0;
  piVar2 = &DAT_14027570;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar4 = iVar4 + 1;
  } while (piVar2 < &DAT_140275f8);
  if ((&DAT_14027570)[iVar4 * 2] == param_1) {
    if ((DAT_14026e4c == 1) || ((DAT_14026e4c == 0 && (DAT_14026e50 == 1)))) {
      hFile = *(HANDLE *)(DAT_14029e70 + 0x48);
      if (hFile == (HANDLE)0xffffffff) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar8 = *(char **)(iVar4 * 8 + 0x14027574);
      uVar6 = 0xffffffff;
      pcVar9 = pcVar8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar8,~uVar6 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar8 = "<program name unknown>";
        pCVar10 = local_104;
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar8;
        pCVar10[2] = pcVar8[2];
      }
      pcVar8 = local_104;
      uVar6 = 0xffffffff;
      pcVar9 = local_104;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar6) {
        uVar6 = 0xffffffff;
        pcVar8 = local_104;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = acStack_140 + ~uVar6;
        _strncpy(pcVar8,"...",3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar11 = local_1a4;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar6 = 0xffffffff;
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar8 = "\n\n";
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar5 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar8 = *(char **)(iVar4 * 8 + 0x14027574);
      do {
        pcVar9 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar4 = -1;
      pcVar8 = local_1a4;
      do {
        pcVar11 = pcVar8;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar9 + -uVar6;
      pcVar9 = pcVar11 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      ___crtMessageBoxA(local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



/* ==== FUN_1401bea0 @ 1401bea0 ==== 
 * signature: undefined4 __cdecl FUN_1401bea0(int param_1)
 * body: 1401bea0-1401becf
 */

undefined4 __cdecl FUN_1401bea0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_14027570;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_140275f8);
  if ((&DAT_14027570)[iVar1 * 2] == param_1) {
    return *(undefined4 *)(iVar1 * 8 + 0x14027574);
  }
  return 0;
}



/* ==== FUN_1401bed0 @ 1401bed0 ==== 
 * signature: undefined __stdcall FUN_1401bed0(void)
 * body: 1401bed0-1401bee5
 */

void FUN_1401bed0(void)

{
  ushort in_FPUStatusWord;
  
  __abstract_sw(in_FPUStatusWord);
  return;
}



/* ==== __break @ 1401bee6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bee6-1401bee6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bee7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bee7-1401bee7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bee8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bee8-1401bee8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bee9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bee9-1401bee9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401beea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beea-1401beea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401beeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beeb-1401beeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401beec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beec-1401beec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401beed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beed-1401beed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401beee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beee-1401beee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401beef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401beef-1401beef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __clearfp @ 1401bef0 ==== 
 * signature: uint __cdecl __clearfp(void)
 * body: 1401bef0-1401bf06
 * note: Library Function - Single Match  __clearfp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 1998 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  uVar1 = __abstract_sw(in_FPUStatusWord);
  return uVar1;
}



/* ==== __control87 @ 1401bf10 ==== 
 * signature: uint __cdecl __control87(uint _NewValue, uint _Mask)
 * body: 1401bf10-1401bf4e
 * note: Library Function - Single Match  __control87  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 1998 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  ushort in_FPUControlWord;
  
  uVar1 = __abstract_cw(in_FPUControlWord);
  __hw_cw();
  return ~_Mask & uVar1 | _Mask & _NewValue;
}



/* ==== __controlfp @ 1401bf50 ==== 
 * signature: uint __cdecl __controlfp(uint _NewValue, uint _Mask)
 * body: 1401bf50-1401bf67
 * note: Library Function - Single Match  __controlfp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 1998 Release */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}



/* ==== FUN_1401bf70 @ 1401bf70 ==== 
 * signature: uint * __stdcall FUN_1401bf70(void)
 * body: 1401bf70-1401bfa0
 */

uint * FUN_1401bf70(void)

{
  void *pvVar1;
  void **ppvVar2;
  uint *puVar3;
  
  ppvVar2 = FUN_1401ec60();
  pvVar1 = *ppvVar2;
  puVar3 = (uint *)__setdefaultprecision();
  if ((pvVar1 != (void *)0x0) && (puVar3 = *(uint **)((int)pvVar1 + 4), (*puVar3 & 0x10008) != 0)) {
    puVar3[8] = 0;
    puVar3[9] = 0xffff;
    puVar3 = puVar3 + 7;
  }
  return puVar3;
}



/* ==== __break @ 1401bfa1 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa1-1401bfa1
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfa2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa2-1401bfa2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfa3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa3-1401bfa3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfa4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa4-1401bfa4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfa5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa5-1401bfa5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfa6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa6-1401bfa6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfa7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa7-1401bfa7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfa8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa8-1401bfa8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfa9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfa9-1401bfa9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfaa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfaa-1401bfaa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfab-1401bfab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfac-1401bfac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfad-1401bfad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfae-1401bfae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401bfaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bfaf-1401bfaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __abstract_cw @ 1401bfb0 ==== 
 * signature: uint __cdecl __abstract_cw(ushort param_1)
 * body: 1401bfb0-1401c050
 * note: Library Function - Single Match  __abstract_cw  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __abstract_cw
   
   Library: Visual Studio 1998 Release */

uint __cdecl __abstract_cw(ushort param_1)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 == 0x400) {
    uVar1 = uVar1 | 0x100;
  }
  else if (uVar2 == 0x800) {
    uVar1 = uVar1 | 0x200;
  }
  else if (uVar2 == 0xc00) {
    uVar1 = uVar1 | 0x300;
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



/* ==== __hw_cw @ 1401c060 ==== 
 * signature: undefined __stdcall __hw_cw(void)
 * body: 1401c060-1401c0ec
 * note: Library Function - Single Match  __hw_cw  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __hw_cw
   
   Library: Visual Studio 1998 Release */

void __hw_cw(void)

{
  return;
}



/* ==== __abstract_sw @ 1401c0f0 ==== 
 * signature: uint __cdecl __abstract_sw(ushort param_1)
 * body: 1401c0f0-1401c12b
 * note: Library Function - Single Match  __abstract_sw  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __abstract_sw
   
   Library: Visual Studio 1998 Release */

uint __cdecl __abstract_sw(ushort param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  return uVar1;
}



/* ==== FUN_1401c130 @ 1401c130 ==== 
 * signature: undefined __stdcall FUN_1401c130(void)
 * body: 1401c130-1401c13a
 */

void FUN_1401c130(void)

{
  __amsg_exit(2);
  return;
}



/* ==== FUN_1401c140 @ 1401c140 ==== 
 * signature: int __cdecl FUN_1401c140(int param_1)
 * body: 1401c140-1401c147
 */

int __cdecl FUN_1401c140(int param_1)

{
  return param_1 + 0x20;
}



/* ==== __break @ 1401c148 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c148-1401c148
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c149 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c149-1401c149
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c14a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14a-1401c14a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c14b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14b-1401c14b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c14c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14c-1401c14c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c14d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14d-1401c14d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c14e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14e-1401c14e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c14f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14f-1401c14f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== _tolower @ 1401c150 ==== 
 * signature: int __cdecl _tolower(int _C)
 * body: 1401c150-1401c1bd
 * note: Library Function - Single Match  _tolower  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _tolower
   
   Library: Visual Studio 1998 Release */

int __cdecl _tolower(int _C)

{
  bool bVar1;
  
  if (DAT_140272c0 == 0) {
    if ((0x40 < _C) && (_C < 0x5b)) {
      return _C + 0x20;
    }
  }
  else {
    bVar1 = DAT_14029f80 == 0;
    if (bVar1) {
      DAT_14029f84 = DAT_14029f84 + 1;
    }
    else {
      __lock(0x13);
    }
    _C = __tolower_lk(_C);
    if (!bVar1) {
      FUN_1401a650(0x13);
      return _C;
    }
    DAT_14029f84 = DAT_14029f84 + -1;
  }
  return _C;
}



/* ==== __tolower_lk @ 1401c1c0 ==== 
 * signature: uint __cdecl __tolower_lk(uint param_1)
 * body: 1401c1c0-1401c2a4
 * note: Library Function - Single Match  __tolower_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __tolower_lk
   
   Library: Visual Studio 1998 Release */

uint __cdecl __tolower_lk(uint param_1)

{
  uint uVar1;
  int iVar2;
  WCHAR local_8 [2];
  byte local_4;
  byte local_3;
  undefined1 local_2;
  
  if (DAT_140272c0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
    return param_1;
  }
  if ((int)param_1 < 0x100) {
    if (DAT_1402707c < 2) {
      uVar1 = *(ushort *)(PTR_DAT_14026e70 + param_1 * 2) & 1;
    }
    else {
      uVar1 = __isctype(param_1,1);
    }
    if (uVar1 == 0) {
      return param_1;
    }
  }
  local_4 = (byte)(param_1 >> 8);
  if ((PTR_DAT_14026e70[(uint)local_4 * 2 + 1] & 0x80) == 0) {
    iVar2 = 1;
    local_3 = 0;
    local_4 = (byte)param_1;
  }
  else {
    iVar2 = 2;
    local_2 = 0;
    local_3 = (byte)param_1;
  }
  iVar2 = FUN_1401a9c0(DAT_140272c0,0x100,(char *)&local_4,iVar2,local_8,3,0);
  if (iVar2 == 0) {
    return param_1;
  }
  if (iVar2 == 1) {
    return (uint)(byte)local_8[0];
  }
  return (uint)(ushort)local_8[0];
}



/* ==== __ZeroTail @ 1401c2b0 ==== 
 * signature: undefined4 __cdecl __ZeroTail(int param_1, int param_2)
 * body: 1401c2b0-1401c313
 * note: Library Function - Single Match  __ZeroTail  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ZeroTail
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __ZeroTail(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar1 = (byte)(param_2 >> 0x1f);
  if ((*(uint *)(param_1 + iVar2 * 4) &
      ~(-1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) & 0x1f))) != 0) {
    return 0;
  }
  iVar2 = iVar2 + 1;
  if (iVar2 < 3) {
    piVar3 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar3 != 0) {
        return 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}



/* ==== __IncMan @ 1401c320 ==== 
 * signature: undefined __cdecl __IncMan(int param_1, int param_2)
 * body: 1401c320-1401c382
 * note: Library Function - Single Match  __IncMan  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __IncMan
   
   Library: Visual Studio 1998 Release */

void __cdecl __IncMan(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar1 = (byte)(param_2 >> 0x1f);
  puVar4 = (uint *)(param_1 + iVar2 * 4);
  iVar3 = ___addl(*puVar4,1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) &
                               0x1f),puVar4);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    puVar4 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar3 == 0) {
        return;
      }
      iVar3 = ___addl(*puVar4,1,puVar4);
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar2);
  }
  return;
}



/* ==== __RoundMan @ 1401c390 ==== 
 * signature: undefined4 __cdecl __RoundMan(int param_1, int param_2)
 * body: 1401c390-1401c43b
 * note: Library Function - Single Match  __RoundMan  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __RoundMan
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4;
  
  local_4 = 0;
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = 0x1f - ((((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2);
  puVar1 = (uint *)(param_1 + iVar3 * 4);
  if ((*puVar1 & 1 << (bVar2 & 0x1f)) != 0) {
    iVar4 = __ZeroTail(param_1,param_2 + 1);
    if (iVar4 == 0) {
      local_4 = __IncMan(param_1,param_2 + -1);
    }
  }
  iVar3 = iVar3 + 1;
  *puVar1 = *puVar1 & -1 << (bVar2 & 0x1f);
  if (iVar3 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar3 * 4);
    for (iVar4 = 3 - iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_4;
}



/* ==== __CopyMan @ 1401c440 ==== 
 * signature: undefined __cdecl __CopyMan(undefined4 * param_1, undefined4 * param_2)
 * body: 1401c440-1401c45c
 * note: Library Function - Single Match  __CopyMan  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __CopyMan
   
   Library: Visual Studio 1998 Release */

void __cdecl __CopyMan(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* ==== __FillZeroMan @ 1401c460 ==== 
 * signature: undefined __cdecl __FillZeroMan(undefined4 * param_1)
 * body: 1401c460-1401c46e
 * note: Library Function - Single Match  __FillZeroMan  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __FillZeroMan
   
   Library: Visual Studio 1998 Release */

void __cdecl __FillZeroMan(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* ==== __IsZeroMan @ 1401c470 ==== 
 * signature: undefined4 __cdecl __IsZeroMan(int * param_1)
 * body: 1401c470-1401c48c
 * note: Library Function - Single Match  __IsZeroMan  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __IsZeroMan
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __IsZeroMan(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}



/* ==== __ShrMan @ 1401c490 ==== 
 * signature: undefined __cdecl __ShrMan(uint * param_1, int param_2)
 * body: 1401c490-1401c53c
 * note: Library Function - Single Match  __ShrMan  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ShrMan
   
   Library: Visual Studio 1998 Release */

void __cdecl __ShrMan(uint *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = (((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2;
  iVar6 = 3;
  uVar4 = 0;
  puVar5 = param_1;
  do {
    uVar1 = *puVar5;
    uVar8 = uVar1 >> (bVar2 & 0x1f);
    *puVar5 = uVar8;
    uVar8 = uVar8 | uVar4;
    uVar4 = (uVar1 & ~(-1 << (bVar2 & 0x1f))) << (0x20 - bVar2 & 0x1f);
    iVar6 = iVar6 + -1;
    *puVar5 = uVar8;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  iVar6 = 2;
  puVar7 = param_1 + 2;
  puVar5 = param_1 + (2 - iVar3);
  do {
    if (iVar6 < iVar3) {
      *puVar7 = 0;
    }
    else {
      *puVar7 = *puVar5;
    }
    puVar5 = puVar5 + -1;
    puVar7 = puVar7 + -1;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return;
}



/* ==== __ld12cvt @ 1401c540 ==== 
 * signature: undefined4 __cdecl __ld12cvt(ushort * param_1, uint * param_2, int * param_3)
 * body: 1401c540-1401c70a
 * note: Library Function - Single Match  __ld12cvt  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ld12cvt
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __ld12cvt(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c [3];
  
  uVar1 = param_1[5];
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  local_14 = *(uint *)(param_1 + 1);
  local_18 = *(uint *)(param_1 + 3);
  local_10 = (uint)*param_1 << 0x10;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = __IsZeroMan((int *)&local_18);
    if (iVar2 == 0) {
      __FillZeroMan(&local_18);
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    __CopyMan(local_c,&local_18);
    iVar2 = __RoundMan((int)&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      iVar5 = 0;
      __FillZeroMan(&local_18);
      uVar3 = 2;
    }
    else if (iVar2 < iVar5) {
      if (iVar5 < *param_3) {
        iVar5 = iVar5 + param_3[5];
        local_18 = local_18 & 0x7fffffff;
        __ShrMan(&local_18,param_3[3]);
        uVar3 = 0;
      }
      else {
        __FillZeroMan(&local_18);
        local_18 = local_18 | 0x80000000;
        __ShrMan(&local_18,param_3[3]);
        iVar5 = param_3[5] + *param_3;
        uVar3 = 1;
      }
    }
    else {
      __CopyMan(&local_18,local_c);
      __ShrMan(&local_18,iVar2 - iVar5);
      __RoundMan((int)&local_18,param_3[2]);
      iVar5 = 0;
      __ShrMan(&local_18,param_3[3] + 1);
      uVar3 = 2;
    }
  }
  local_18 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) | ((uVar1 & 0x8000) == 0) - 1 & 0x80000000 |
             local_18;
  if (param_3[4] == 0x40) {
    param_2[1] = local_18;
    *param_2 = local_14;
    return uVar3;
  }
  if (param_3[4] == 0x20) {
    *param_2 = local_18;
  }
  return uVar3;
}



/* ==== FID_conflict:__ld12tod @ 1401c710 ==== 
 * signature: INTRNCVT_STATUS __cdecl FID_conflict:__ld12tod(_LDBL12 * _Ifp, _CRT_DOUBLE * _D)
 * body: 1401c710-1401c727
 * note: Library Function - Multiple Matches With Different Base Names  __ld12tod  __ld12tof  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 1998 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_D,(int *)&DAT_14027600);
  return IVar1;
}



/* ==== FID_conflict:__ld12tod @ 1401c730 ==== 
 * signature: INTRNCVT_STATUS __cdecl FID_conflict:__ld12tod(_LDBL12 * _Ifp, _CRT_DOUBLE * _D)
 * body: 1401c730-1401c747
 * note: Library Function - Multiple Matches With Different Base Names  __ld12tod  __ld12tof  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 1998 Release */

INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *_Ifp,_CRT_DOUBLE *_D)

{
  INTRNCVT_STATUS IVar1;
  
  IVar1 = __ld12cvt((ushort *)_Ifp,(uint *)_D,(int *)&DAT_14027618);
  return IVar1;
}



/* ==== FUN_1401c750 @ 1401c750 ==== 
 * signature: bool __cdecl FUN_1401c750(ushort * param_1, undefined4 * param_2)
 * body: 1401c750-1401c7d0
 */

bool __cdecl FUN_1401c750(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar1 = param_1[5];
  local_c = *(undefined4 *)(param_1 + 3);
  local_8 = *(undefined4 *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  local_4 = (uint)*param_1 << 0x10;
  iVar2 = __RoundMan((int)&local_c,0x40);
  if (iVar2 != 0) {
    local_c = 0x80000000;
    uVar3 = uVar3 + 1;
  }
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | uVar3;
  param_2[1] = local_c;
  *param_2 = local_8;
  return uVar3 == 0x7fff;
}



/* ==== __break @ 1401c7d1 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d1-1401c7d1
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7d2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d2-1401c7d2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7d3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d3-1401c7d3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7d4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d4-1401c7d4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7d5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d5-1401c7d5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7d6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d6-1401c7d6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7d7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d7-1401c7d7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7d8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d8-1401c7d8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7d9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7d9-1401c7d9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7da ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7da-1401c7da
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7db-1401c7db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7dc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7dc-1401c7dc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7dd-1401c7dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7de-1401c7de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c7df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c7df-1401c7df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FID_conflict:__atodbl @ 1401c7e0 ==== 
 * signature: int __cdecl FID_conflict:__atodbl(_CRT_FLOAT * _Result, char * _Str)
 * body: 1401c7e0-1401c814
 * note: Library Function - Multiple Matches With Different Base Names  __atodbl  __atoflt  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Library: Visual Studio 1998 Release */

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  char *local_10;
  _LDBL12 local_c;
  
  ___strgtold12(&local_c,&local_10,_Str,0,0,0,0);
  IVar1 = FID_conflict___ld12tod(&local_c,(_CRT_DOUBLE *)_Result);
  return IVar1;
}



/* ==== FUN_1401c820 @ 1401c820 ==== 
 * signature: undefined __cdecl FUN_1401c820(undefined4 * param_1, char * param_2)
 * body: 1401c820-1401c854
 */

void __cdecl FUN_1401c820(undefined4 *param_1,char *param_2)

{
  char *local_10;
  _LDBL12 local_c;
  
  ___strgtold12(&local_c,&local_10,param_2,1,0,0,0);
  FUN_1401c750((ushort *)&local_c,param_1);
  return;
}



/* ==== __break @ 1401c855 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c855-1401c855
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c856 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c856-1401c856
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c857 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c857-1401c857
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c858 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c858-1401c858
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c859 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c859-1401c859
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c85a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c85a-1401c85a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c85b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c85b-1401c85b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c85c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c85c-1401c85c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c85d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c85d-1401c85d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c85e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c85e-1401c85e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401c85f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c85f-1401c85f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FID_conflict:__atodbl @ 1401c860 ==== 
 * signature: int __cdecl FID_conflict:__atodbl(_CRT_FLOAT * _Result, char * _Str)
 * body: 1401c860-1401c894
 * note: Library Function - Multiple Matches With Different Base Names  __atodbl  __atoflt  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Library: Visual Studio 1998 Release */

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  char *local_10;
  _LDBL12 local_c;
  
  ___strgtold12(&local_c,&local_10,_Str,0,0,0,0);
  IVar1 = FID_conflict___ld12tod(&local_c,(_CRT_DOUBLE *)_Result);
  return IVar1;
}



/* ==== __fptostr @ 1401c8a0 ==== 
 * signature: errno_t __cdecl __fptostr(char * _Buf, size_t _SizeInBytes, int _Digits, STRFLT _PtFlt)
 * body: 1401c8a0-1401c920
 * note: Library Function - Single Match  __fptostr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fptostr
   
   Library: Visual Studio 1998 Release */

errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = _Buf + 1;
  pcVar5 = *(char **)(_Digits + 0xc);
  *_Buf = '0';
  sVar2 = _SizeInBytes;
  pcVar6 = pcVar7;
  if (0 < (int)_SizeInBytes) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\0') {
        *pcVar6 = '0';
      }
      else {
        pcVar5 = pcVar5 + 1;
        *pcVar6 = cVar1;
      }
      pcVar6 = pcVar6 + 1;
      _SizeInBytes = _SizeInBytes - 1;
      sVar2 = 0;
    } while (_SizeInBytes != 0);
  }
  *pcVar6 = '\0';
  if ((-1 < (int)sVar2) && ('4' < *pcVar5)) {
    pcVar6 = pcVar6 + -1;
    cVar1 = *pcVar6;
    while (cVar1 == '9') {
      *pcVar6 = '0';
      pcVar6 = pcVar6 + -1;
      cVar1 = *pcVar6;
    }
    *pcVar6 = *pcVar6 + '\x01';
  }
  if (*_Buf == '1') {
    *(int *)(_Digits + 4) = *(int *)(_Digits + 4) + 1;
    return sVar2;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)_Buf = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    _Buf = _Buf + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *_Buf = *pcVar7;
    pcVar7 = pcVar7 + 1;
    _Buf = _Buf + 1;
  }
  return uVar3;
}



/* ==== __fltout2 @ 1401c930 ==== 
 * signature: STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl, STRFLT _Flt, char * _ResultStr, size_t _SizeInBytes)
 * body: 1401c930-1401c9b0
 * note: Library Function - Single Match  __fltout2  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fltout2
   
   Library: Visual Studio 1998 Release */

STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint local_28;
  uint local_24;
  ushort local_20;
  short local_1c;
  char local_1a;
  char local_18 [24];
  
  ___dtold(&local_28,(uint *)&_Dbl);
  iVar2 = _I10_OUTPUT(local_28,local_24,local_20,0x11,0,&local_1c);
  _Flt->flag = iVar2;
  _Flt->sign = (int)local_1a;
  _Flt->decpt = (int)local_1c;
  uVar3 = 0xffffffff;
  pcVar5 = local_18;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = _ResultStr;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  _Flt->mantissa = _ResultStr;
  return _Flt;
}



/* ==== ___dtold @ 1401c9c0 ==== 
 * signature: undefined __cdecl ___dtold(uint * param_1, uint * param_2)
 * body: 1401c9c0-1401ca7b
 * note: Library Function - Single Match  ___dtold  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___dtold
   
   Library: Visual Studio 1998 Release */

void __cdecl ___dtold(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar5 = (uVar1 & 0x7ff0) >> 4;
  uVar4 = 0x80000000;
  uVar2 = param_2[1];
  uVar3 = *param_2;
  if (uVar5 == 0) {
    if (((uVar2 & 0xfffff) == 0) && (uVar3 == 0)) {
      *(undefined2 *)(param_1 + 2) = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    uVar5 = 0x3c01;
    uVar4 = 0;
  }
  else if (uVar5 == 0x7ff) {
    uVar5 = 0x7fff;
  }
  else {
    uVar5 = uVar5 + 0x3c00;
  }
  *param_1 = uVar3 << 0xb;
  param_1[1] = (uVar2 & 0xfffff) << 0xb | uVar3 >> 0x15 | uVar4;
  while (uVar4 == 0) {
    uVar5 = uVar5 - 1;
    uVar2 = *param_1;
    uVar3 = param_1[1];
    *param_1 = uVar2 * 2;
    param_1[1] = uVar2 >> 0x1f | uVar3 * 2;
    uVar4 = uVar3 * 2 & 0x80000000;
  }
  *(ushort *)(param_1 + 2) = uVar5 | uVar1 & 0x8000;
  return;
}



/* ==== ___crtGetStringTypeW @ 1401ca80 ==== 
 * signature: BOOL __cdecl ___crtGetStringTypeW(DWORD param_1, LPCWSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6)
 * body: 1401ca80-1401cc33
 * note: Library Function - Single Match  ___crtGetStringTypeW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtGetStringTypeW
   
   Library: Visual Studio 1998 Release */

BOOL __cdecl
___crtGetStringTypeW
          (DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  LPWORD pWVar1;
  BOOL in_EAX;
  BOOL BVar2;
  int cbMultiByte;
  LPCSTR lpMultiByteStr;
  int iVar3;
  LPWORD lpCharType;
  BOOL local_4;
  
  local_4 = in_EAX;
  if (DAT_14027630 == 0) {
    local_4 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (local_4 == 0) {
      local_4 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (local_4 == 0) {
        return 0;
      }
      DAT_14027630 = 2;
    }
    else {
      DAT_14027630 = 1;
    }
  }
  if (DAT_14027630 != 1) {
    if (DAT_14027630 == 2) {
      lpCharType = (LPWORD)0x0;
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_140272d0;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_1401e520(1,cbMultiByte);
      if (lpMultiByteStr == (LPCSTR)0x0) {
        return 0;
      }
      iVar3 = WideCharToMultiByte(param_5,0x220,param_2,param_3,lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar3 != 0) &&
         (lpCharType = (LPWORD)FUN_1401def0(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_140272c0;
        }
        pWVar1 = lpCharType + param_3;
        *pWVar1 = 0xffff;
        pWVar1[-1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,lpMultiByteStr,cbMultiByte,lpCharType);
        if ((pWVar1[-1] == 0xffff) || (*pWVar1 != 0xffff)) {
          local_4 = 0;
        }
        else {
          FID_conflict__memcpy(param_4,lpCharType,param_3 * 2);
        }
      }
      FUN_1401dd10(lpMultiByteStr);
      FUN_1401dd10(lpCharType);
    }
    return local_4;
  }
  BVar2 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar2;
}



/* ==== ___crtGetStringTypeA @ 1401cc40 ==== 
 * signature: BOOL __cdecl ___crtGetStringTypeA(_locale_t _Plocinfo, DWORD _DWInfoType, LPCSTR _LpSrcStr, int _CchSrc, LPWORD _LpCharType, int _Code_page, BOOL _BError)
 * body: 1401cc40-1401cd62
 * note: Library Function - Single Match  ___crtGetStringTypeA  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtGetStringTypeA
   
   Library: Visual Studio 1998 Release */

BOOL __cdecl
___crtGetStringTypeA
          (_locale_t _Plocinfo,DWORD _DWInfoType,LPCSTR _LpSrcStr,int _CchSrc,LPWORD _LpCharType,
          int _Code_page,BOOL _BError)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  iVar3 = DAT_14027634;
  if (DAT_14027634 == 0) {
    BVar1 = GetStringTypeA(0,1,"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeW(1,L"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
  }
  DAT_14027634 = iVar3;
  if (iVar3 != 2) {
    if (iVar3 == 1) {
      BVar1 = 0;
      lpWideCharStr = (LPCWSTR)0x0;
      if (_LpCharType == (LPWORD)0x0) {
        _LpCharType = DAT_140272d0;
      }
      iVar2 = MultiByteToWideChar((UINT)_LpCharType,9,(LPCSTR)_DWInfoType,(int)_LpSrcStr,(LPWSTR)0x0
                                  ,0);
      iVar3 = BVar1;
      if (((iVar2 != 0) && (lpWideCharStr = FUN_1401e520(2,iVar2), lpWideCharStr != (LPCWSTR)0x0))
         && (iVar2 = MultiByteToWideChar((UINT)_LpCharType,1,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                                         lpWideCharStr,iVar2), iVar2 != 0)) {
        iVar3 = GetStringTypeW((DWORD)_Plocinfo,lpWideCharStr,iVar2,(LPWORD)_CchSrc);
      }
      FUN_1401dd10(lpWideCharStr);
    }
    return iVar3;
  }
  if (_Code_page == 0) {
    _Code_page = DAT_140272c0;
  }
  BVar1 = GetStringTypeA(_Code_page,(DWORD)_Plocinfo,(LPCSTR)_DWInfoType,(int)_LpSrcStr,
                         (LPWORD)_CchSrc);
  return BVar1;
}



/* ==== FUN_1401cd70 @ 1401cd70 ==== 
 * signature: undefined4 __stdcall FUN_1401cd70(void)
 * body: 1401cd70-1401ce1b
 */

undefined4 FUN_1401cd70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_140272cc == 0) {
    PTR_PTR_1402825c = (undefined *)&PTR_DAT_140281b0;
    FUN_1401d1a0(DAT_14027638);
    FUN_1401dd10(DAT_14027638);
    DAT_14027638 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_1401e520(1,0xac);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = __get_lc_time((LCTYPE)puVar1);
  if (uVar2 != 0) {
    FUN_1401d1a0(puVar1);
    FUN_1401dd10(puVar1);
    return 1;
  }
  PTR_PTR_1402825c = (undefined *)puVar1;
  FUN_1401d1a0(DAT_14027638);
  FUN_1401dd10(DAT_14027638);
  DAT_14027638 = puVar1;
  return 0;
}



/* ==== __get_lc_time @ 1401ce20 ==== 
 * signature: uint __cdecl __get_lc_time(LCTYPE param_1)
 * body: 1401ce20-1401d193
 * note: Library Function - Single Match  __get_lc_time  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 1998 Release */

uint __cdecl __get_lc_time(LCTYPE param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  void *unaff_EBP;
  
  uVar43 = (uint)DAT_14027680;
  uVar40 = (uint)DAT_1402767e;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x31,param_1 + 4,unaff_EBP);
  uVar2 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x32,param_1 + 8,unaff_EBP);
  uVar3 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x33,param_1 + 0xc,unaff_EBP);
  uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x34,param_1 + 0x10,unaff_EBP);
  uVar5 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x35,param_1 + 0x14,unaff_EBP);
  uVar6 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x36,param_1 + 0x18,unaff_EBP);
  uVar7 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x37,param_1,unaff_EBP);
  uVar8 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x2a,param_1 + 0x20,unaff_EBP);
  uVar9 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x2b,param_1 + 0x24,unaff_EBP);
  uVar10 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x2c,param_1 + 0x28,unaff_EBP);
  uVar11 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x2d,param_1 + 0x2c,unaff_EBP);
  uVar12 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x2e,param_1 + 0x30,unaff_EBP);
  uVar13 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x2f,param_1 + 0x34,unaff_EBP);
  uVar14 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x30,param_1 + 0x1c,unaff_EBP);
  uVar15 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x44,param_1 + 0x38,unaff_EBP);
  uVar16 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x45,param_1 + 0x3c,unaff_EBP);
  uVar17 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x46,param_1 + 0x40,unaff_EBP);
  uVar18 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x47,param_1 + 0x44,unaff_EBP);
  uVar19 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x48,param_1 + 0x48,unaff_EBP);
  uVar20 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x49,param_1 + 0x4c,unaff_EBP);
  uVar21 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x4a,param_1 + 0x50,unaff_EBP);
  uVar22 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x4b,param_1 + 0x54,unaff_EBP);
  uVar23 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x4c,param_1 + 0x58,unaff_EBP);
  uVar24 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x4d,param_1 + 0x5c,unaff_EBP);
  uVar25 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x4e,param_1 + 0x60,unaff_EBP);
  uVar26 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x4f,param_1 + 100,unaff_EBP);
  uVar27 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x38,param_1 + 0x68,unaff_EBP);
  uVar28 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x39,param_1 + 0x6c,unaff_EBP);
  uVar29 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x3a,param_1 + 0x70,unaff_EBP);
  uVar30 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x3b,param_1 + 0x74,unaff_EBP);
  uVar31 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x3c,param_1 + 0x78,unaff_EBP);
  uVar32 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x3d,param_1 + 0x7c,unaff_EBP);
  uVar33 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x3e,param_1 + 0x80,unaff_EBP);
  uVar34 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x3f,param_1 + 0x84,unaff_EBP);
  uVar35 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)&DAT_00000040,param_1 + 0x88,unaff_EBP);
  uVar36 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x41,param_1 + 0x8c,unaff_EBP);
  uVar37 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x42,param_1 + 0x90,unaff_EBP);
  uVar38 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x43,param_1 + 0x94,unaff_EBP);
  uVar39 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x28,param_1 + 0x98,unaff_EBP);
  uVar40 = ___getlocaleinfo((_locale_t)0x1,uVar40,(LPCWSTR)0x29,param_1 + 0x9c,unaff_EBP);
  uVar41 = ___getlocaleinfo((_locale_t)0x1,uVar43,(LPCWSTR)0x1f,param_1 + 0xa0,unaff_EBP);
  uVar42 = ___getlocaleinfo((_locale_t)0x1,uVar43,(LPCWSTR)0x20,param_1 + 0xa4,unaff_EBP);
  uVar43 = storeTimeFmt(uVar43,param_1);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
         uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
         uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 |
         uVar42 | uVar43;
}



/* ==== FUN_1401d1a0 @ 1401d1a0 ==== 
 * signature: undefined __cdecl FUN_1401d1a0(undefined4 * param_1)
 * body: 1401d1a0-1401d3d2
 */

void __cdecl FUN_1401d1a0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_1401dd10((LPVOID)param_1[1]);
    FUN_1401dd10((LPVOID)param_1[2]);
    FUN_1401dd10((LPVOID)param_1[3]);
    FUN_1401dd10((LPVOID)param_1[4]);
    FUN_1401dd10((LPVOID)param_1[5]);
    FUN_1401dd10((LPVOID)param_1[6]);
    FUN_1401dd10((LPVOID)*param_1);
    FUN_1401dd10((LPVOID)param_1[8]);
    FUN_1401dd10((LPVOID)param_1[9]);
    FUN_1401dd10((LPVOID)param_1[10]);
    FUN_1401dd10((LPVOID)param_1[0xb]);
    FUN_1401dd10((LPVOID)param_1[0xc]);
    FUN_1401dd10((LPVOID)param_1[0xd]);
    FUN_1401dd10((LPVOID)param_1[7]);
    FUN_1401dd10((LPVOID)param_1[0xe]);
    FUN_1401dd10((LPVOID)param_1[0xf]);
    FUN_1401dd10((LPVOID)param_1[0x10]);
    FUN_1401dd10((LPVOID)param_1[0x11]);
    FUN_1401dd10((LPVOID)param_1[0x12]);
    FUN_1401dd10((LPVOID)param_1[0x13]);
    FUN_1401dd10((LPVOID)param_1[0x14]);
    FUN_1401dd10((LPVOID)param_1[0x15]);
    FUN_1401dd10((LPVOID)param_1[0x16]);
    FUN_1401dd10((LPVOID)param_1[0x17]);
    FUN_1401dd10((LPVOID)param_1[0x18]);
    FUN_1401dd10((LPVOID)param_1[0x19]);
    FUN_1401dd10((LPVOID)param_1[0x1a]);
    FUN_1401dd10((LPVOID)param_1[0x1b]);
    FUN_1401dd10((LPVOID)param_1[0x1c]);
    FUN_1401dd10((LPVOID)param_1[0x1d]);
    FUN_1401dd10((LPVOID)param_1[0x1e]);
    FUN_1401dd10((LPVOID)param_1[0x1f]);
    FUN_1401dd10((LPVOID)param_1[0x20]);
    FUN_1401dd10((LPVOID)param_1[0x21]);
    FUN_1401dd10((LPVOID)param_1[0x22]);
    FUN_1401dd10((LPVOID)param_1[0x23]);
    FUN_1401dd10((LPVOID)param_1[0x24]);
    FUN_1401dd10((LPVOID)param_1[0x25]);
    FUN_1401dd10((LPVOID)param_1[0x26]);
    FUN_1401dd10((LPVOID)param_1[0x27]);
    FUN_1401dd10((LPVOID)param_1[0x28]);
    FUN_1401dd10((LPVOID)param_1[0x29]);
    FUN_1401dd10((LPVOID)param_1[0x2a]);
  }
  return;
}



/* ==== storeTimeFmt @ 1401d3e0 ==== 
 * signature: uint __cdecl storeTimeFmt(int param_1, int param_2)
 * body: 1401d3e0-1401d4d2
 * note: Library Function - Single Match  _storeTimeFmt  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _storeTimeFmt
   
   Library: Visual Studio 1998 Release */

uint __cdecl storeTimeFmt(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  void *unaff_EDI;
  char *local_c;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  uVar2 = ___getlocaleinfo((_locale_t)0x0,param_1,(LPCWSTR)0x23,(LCTYPE)&local_4,unaff_EDI);
  uVar3 = ___getlocaleinfo((_locale_t)0x0,param_1,(LPCWSTR)0x25,(LCTYPE)&local_8,unaff_EDI);
  uVar4 = ___getlocaleinfo((_locale_t)0x1,param_1,(LPCWSTR)0x1e,(LCTYPE)&local_c,unaff_EDI);
  uVar4 = uVar2 | uVar3 | uVar4;
  if (uVar4 != 0) {
    return uVar4;
  }
  puVar5 = (undefined1 *)FUN_1401def0(0xd);
  *(undefined1 **)(param_2 + 0xa8) = puVar5;
  if (local_4 == 0) {
    *puVar5 = 0x68;
    pcVar7 = puVar5 + 1;
    if (local_8 == 0) goto LAB_1401d47b;
    *pcVar7 = 'h';
  }
  else {
    *puVar5 = 0x48;
    pcVar7 = puVar5 + 1;
    if (local_8 == 0) goto LAB_1401d47b;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar5 + 2;
LAB_1401d47b:
  cVar1 = *local_c;
  pcVar6 = local_c;
  while (cVar1 != '\0') {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar6;
  }
  *pcVar7 = 'm';
  pcVar6 = pcVar7 + 1;
  if (local_8 != 0) {
    *pcVar6 = 'm';
    pcVar6 = pcVar7 + 2;
  }
  cVar1 = *local_c;
  pcVar7 = local_c;
  while (cVar1 != '\0') {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar7;
  }
  *pcVar6 = 's';
  pcVar6[1] = 's';
  pcVar6[2] = '\0';
  FUN_1401dd10(local_c);
  return 0;
}



/* ==== ___init_numeric @ 1401d4e0 ==== 
 * signature: int __cdecl ___init_numeric(threadlocinfo * _LocInfo)
 * body: 1401d4e0-1401d6f5
 * note: Library Function - Single Match  ___init_numeric  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___init_numeric
   
   Library: Visual Studio 1998 Release */

int __cdecl ___init_numeric(threadlocinfo *_LocInfo)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_EDI;
  uint _Lc_type;
  
  _Lc_type = (uint)DAT_1402767a;
  if (DAT_140272c8 != 0) {
    iVar1 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xe,0x1402763c,unaff_EDI);
    iVar2 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0xf,0x14027640,unaff_EDI);
    iVar3 = ___getlocaleinfo((_locale_t)0x1,_Lc_type,(LPCWSTR)0x10,0x14027644,unaff_EDI);
    fix_grouping(DAT_14027644);
    if ((iVar1 != 0 || iVar2 != 0) || iVar3 != 0) {
      FUN_1401dd10(DAT_1402763c);
      FUN_1401dd10(DAT_14027640);
      FUN_1401dd10(DAT_14027644);
      DAT_1402763c = (LPVOID)0x0;
      DAT_14027640 = (LPVOID)0x0;
      DAT_14027644 = (char *)0x0;
      return -1;
    }
    if (*(undefined **)PTR_PTR_140282a0 != &DAT_14028268) {
      FUN_1401dd10(*(undefined **)PTR_PTR_140282a0);
      FUN_1401dd10(*(LPVOID *)(PTR_PTR_140282a0 + 4));
      FUN_1401dd10(*(LPVOID *)(PTR_PTR_140282a0 + 8));
    }
    *(LPVOID *)PTR_PTR_140282a0 = DAT_1402763c;
    *(LPVOID *)(PTR_PTR_140282a0 + 4) = DAT_14027640;
    *(char **)(PTR_PTR_140282a0 + 8) = DAT_14027644;
    _DAT_14027084 = 1;
    DAT_14027080 = **(undefined1 **)PTR_PTR_140282a0;
    return 0;
  }
  FUN_1401dd10(DAT_1402763c);
  FUN_1401dd10(DAT_14027640);
  FUN_1401dd10(DAT_14027644);
  DAT_1402763c = (LPVOID)0x0;
  DAT_14027640 = (LPVOID)0x0;
  DAT_14027644 = (char *)0x0;
  uVar4 = FUN_1401def0(2);
  *(undefined4 *)PTR_PTR_140282a0 = uVar4;
  if (*(undefined2 **)PTR_PTR_140282a0 == (undefined2 *)0x0) {
    return -1;
  }
  **(undefined2 **)PTR_PTR_140282a0 = 0x2e;
  uVar4 = FUN_1401def0(2);
  *(undefined4 *)(PTR_PTR_140282a0 + 4) = uVar4;
  if (*(undefined1 **)(PTR_PTR_140282a0 + 4) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_140282a0 + 4) = 0;
  uVar4 = FUN_1401def0(2);
  *(undefined4 *)(PTR_PTR_140282a0 + 8) = uVar4;
  if (*(undefined1 **)(PTR_PTR_140282a0 + 8) == (undefined1 *)0x0) {
    return -1;
  }
  **(undefined1 **)(PTR_PTR_140282a0 + 8) = 0;
  _DAT_14027084 = 1;
  DAT_14027080 = **(undefined1 **)PTR_PTR_140282a0;
  return 0;
}



/* ==== fix_grouping @ 1401d700 ==== 
 * signature: undefined __cdecl fix_grouping(char * param_1)
 * body: 1401d700-1401d746
 * note: Library Function - Single Match  _fix_grouping  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _fix_grouping
   
   Library: Visual Studio 1998 Release */

void __cdecl fix_grouping(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    while( true ) {
      while ((cVar2 = *param_1, '/' < cVar2 && (cVar2 < ':'))) {
        *param_1 = cVar2 + -0x30;
        param_1 = param_1 + 1;
        if (*param_1 == '\0') {
          return;
        }
      }
      pcVar3 = param_1;
      if (cVar2 != ';') break;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = *pcVar1;
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
      if (*param_1 == '\0') {
        return;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  } while( true );
}



/* ==== FUN_1401d750 @ 1401d750 ==== 
 * signature: undefined4 __stdcall FUN_1401d750(void)
 * body: 1401d750-1401d83e
 */

undefined4 FUN_1401d750(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_140272c4 == 0) {
    PTR_DAT_14028270 = *(undefined **)PTR_PTR_140282a0;
    PTR_DAT_14028274 = *(undefined **)(PTR_PTR_140282a0 + 4);
    PTR_DAT_14028278 = *(undefined **)(PTR_PTR_140282a0 + 8);
    PTR_PTR_140282a0 = (undefined *)&PTR_DAT_14028270;
    FUN_1401d9e0((int)DAT_14027648);
    FUN_1401dd10(DAT_14027648);
    DAT_14027648 = (undefined4 *)0x0;
    return 0;
  }
  puVar1 = FUN_1401e520(1,0x30);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  uVar2 = FUN_1401d840((int)puVar1);
  if (uVar2 != 0) {
    FUN_1401d9e0((int)puVar1);
    FUN_1401dd10(puVar1);
    return 1;
  }
  *puVar1 = *(undefined4 *)PTR_PTR_140282a0;
  puVar1[1] = *(undefined4 *)(PTR_PTR_140282a0 + 4);
  puVar1[2] = *(undefined4 *)(PTR_PTR_140282a0 + 8);
  PTR_PTR_140282a0 = (undefined *)puVar1;
  FUN_1401d9e0((int)DAT_14027648);
  FUN_1401dd10(DAT_14027648);
  DAT_14027648 = puVar1;
  return 0;
}



/* ==== FUN_1401d840 @ 1401d840 ==== 
 * signature: uint __cdecl FUN_1401d840(int param_1)
 * body: 1401d840-1401d98e
 */

uint __cdecl FUN_1401d840(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  void *unaff_EBP;
  
  uVar15 = (uint)DAT_14027674;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = ___getlocaleinfo((_locale_t)0x1,uVar15,(LPCWSTR)&DAT_00000015,param_1 + 0xc,unaff_EBP);
  uVar2 = ___getlocaleinfo((_locale_t)0x1,uVar15,(LPCWSTR)&DAT_00000014,param_1 + 0x10,unaff_EBP);
  uVar3 = ___getlocaleinfo((_locale_t)0x1,uVar15,(LPCWSTR)&DAT_00000016,param_1 + 0x14,unaff_EBP);
  uVar4 = ___getlocaleinfo((_locale_t)0x1,uVar15,(LPCWSTR)&DAT_00000017,param_1 + 0x18,unaff_EBP);
  uVar5 = ___getlocaleinfo((_locale_t)0x1,uVar15,(LPCWSTR)&DAT_00000018,param_1 + 0x1cU,unaff_EBP);
  FUN_1401d990(*(char **)(param_1 + 0x1cU));
  uVar6 = ___getlocaleinfo((_locale_t)0x1,uVar15,(LPCWSTR)&DAT_00000050,param_1 + 0x20,unaff_EBP);
  uVar7 = ___getlocaleinfo((_locale_t)0x1,uVar15,(LPCWSTR)&DAT_00000051,param_1 + 0x24,unaff_EBP);
  uVar8 = ___getlocaleinfo((_locale_t)0x0,uVar15,(LPCWSTR)&DAT_0000001a,param_1 + 0x28,unaff_EBP);
  uVar9 = ___getlocaleinfo((_locale_t)0x0,uVar15,(LPCWSTR)&DAT_00000019,param_1 + 0x29,unaff_EBP);
  uVar10 = ___getlocaleinfo((_locale_t)0x0,uVar15,(LPCWSTR)&DAT_00000054,param_1 + 0x2a,unaff_EBP);
  uVar11 = ___getlocaleinfo((_locale_t)0x0,uVar15,(LPCWSTR)&DAT_00000055,param_1 + 0x2b,unaff_EBP);
  uVar12 = ___getlocaleinfo((_locale_t)0x0,uVar15,(LPCWSTR)&DAT_00000056,param_1 + 0x2c,unaff_EBP);
  uVar13 = ___getlocaleinfo((_locale_t)0x0,uVar15,(LPCWSTR)&DAT_00000057,param_1 + 0x2d,unaff_EBP);
  uVar14 = ___getlocaleinfo((_locale_t)0x0,uVar15,(LPCWSTR)&DAT_00000052,param_1 + 0x2e,unaff_EBP);
  uVar15 = ___getlocaleinfo((_locale_t)0x0,uVar15,(LPCWSTR)&DAT_00000053,param_1 + 0x2f,unaff_EBP);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}



/* ==== FUN_1401d990 @ 1401d990 ==== 
 * signature: undefined __cdecl FUN_1401d990(char * param_1)
 * body: 1401d990-1401d9d2
 */

void __cdecl FUN_1401d990(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    while( true ) {
      while ((cVar2 = *param_1, '/' < cVar2 && (cVar2 < ':'))) {
        *param_1 = cVar2 + -0x30;
        param_1 = param_1 + 1;
        if (*param_1 == '\0') {
          return;
        }
      }
      pcVar3 = param_1;
      if (cVar2 != ';') break;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = *pcVar1;
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
      if (*param_1 == '\0') {
        return;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
  } while( true );
}



/* ==== FUN_1401d9e0 @ 1401d9e0 ==== 
 * signature: undefined __cdecl FUN_1401d9e0(int param_1)
 * body: 1401d9e0-1401da45
 */

void __cdecl FUN_1401d9e0(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_1402826c)) {
    FUN_1401dd10(*(undefined **)(param_1 + 0xc));
    FUN_1401dd10(*(LPVOID *)(param_1 + 0x10));
    FUN_1401dd10(*(LPVOID *)(param_1 + 0x14));
    FUN_1401dd10(*(LPVOID *)(param_1 + 0x18));
    FUN_1401dd10(*(LPVOID *)(param_1 + 0x1c));
    FUN_1401dd10(*(LPVOID *)(param_1 + 0x20));
    FUN_1401dd10(*(LPVOID *)(param_1 + 0x24));
  }
  return;
}



/* ==== ___init_ctype @ 1401da50 ==== 
 * signature: int __cdecl ___init_ctype(threadlocinfo * _LocInfo)
 * body: 1401da50-1401dcfb
 * note: Library Function - Single Match  ___init_ctype  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___init_ctype
   
   Library: Visual Studio 1998 Release */

int __cdecl ___init_ctype(threadlocinfo *_LocInfo)

{
  byte bVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  BOOL BVar5;
  uint uVar6;
  undefined1 *puVar7;
  LPCWSTR pWVar8;
  undefined2 *puVar9;
  BYTE *pBVar10;
  void *unaff_EBP;
  undefined1 *_DWInfoType;
  LPCWSTR local_18;
  _cpinfo local_14;
  
  _DWInfoType = (undefined1 *)0x0;
  local_18 = (LPCWSTR)0x0;
  if (DAT_140272c0 == 0) {
    PTR_DAT_14026e70 = &DAT_14026e7a;
    PTR_DAT_14026e74 = &DAT_14026e7a;
    FUN_1401dd10(DAT_1402764c);
    FUN_1401dd10(DAT_14027650);
    DAT_1402764c = (undefined2 *)0x0;
    DAT_14027650 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_140272d0 != 0) ||
     (iVar2 = ___getlocaleinfo((_locale_t)0x0,(uint)DAT_1402766c,(LPCWSTR)0xb,0x140272d0,unaff_EBP),
     puVar4 = (undefined2 *)local_14.MaxCharSize, puVar3 = (undefined2 *)local_14.MaxCharSize,
     iVar2 == 0)) {
    puVar3 = (undefined2 *)FUN_1401def0(0x202);
    puVar4 = (undefined2 *)FUN_1401def0(0x202);
    _DWInfoType = (undefined1 *)FUN_1401def0(0x101);
    local_18 = (LPCWSTR)FUN_1401def0(0x202);
    if ((puVar3 != (undefined2 *)0x0) &&
       (((puVar4 != (undefined2 *)0x0 && (_DWInfoType != (undefined1 *)0x0)) &&
        (local_18 != (LPCWSTR)0x0)))) {
      iVar2 = 0;
      puVar7 = _DWInfoType;
      do {
        *puVar7 = (char)iVar2;
        puVar7 = puVar7 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x100);
      BVar5 = GetCPInfo(DAT_140272d0,&local_14);
      if ((BVar5 != 0) && (local_14.MaxCharSize < (undefined2 *)0x3)) {
        DAT_1402707c = local_14.MaxCharSize & 0xffff;
        if (1 < DAT_1402707c) {
          pBVar10 = local_14.LeadByte;
          bVar1 = local_14.LeadByte[0];
          while ((bVar1 != 0 && (pBVar10[1] != 0))) {
            uVar6 = (uint)*pBVar10;
            if (uVar6 <= pBVar10[1]) {
              do {
                _DWInfoType[uVar6] = 0;
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 <= (int)(uint)pBVar10[1]);
            }
            pBVar10 = pBVar10 + 2;
            bVar1 = *pBVar10;
          }
        }
        BVar5 = ___crtGetStringTypeA
                          ((_locale_t)0x1,(DWORD)_DWInfoType,(LPCSTR)0x100,(int)(puVar3 + 1),
                           (LPWORD)0x0,0,(BOOL)unaff_EBP);
        if (BVar5 != 0) {
          *puVar3 = 0;
          iVar2 = 0;
          pWVar8 = local_18;
          do {
            *pWVar8 = (WCHAR)iVar2;
            pWVar8 = pWVar8 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x100);
          BVar5 = ___crtGetStringTypeW(1,local_18,0x100,puVar4 + 1,0,0);
          if (BVar5 != 0) {
            *puVar4 = 0;
            if (1 < (int)DAT_1402707c) {
              pBVar10 = local_14.LeadByte;
              while ((local_14.LeadByte[0] != 0 && (pBVar10[1] != 0))) {
                uVar6 = (uint)*pBVar10;
                if (uVar6 <= pBVar10[1]) {
                  puVar9 = puVar3 + uVar6 + 1;
                  do {
                    *puVar9 = 0x8000;
                    puVar9 = puVar9 + 1;
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 <= (int)(uint)pBVar10[1]);
                }
                pBVar10 = pBVar10 + 2;
                local_14.LeadByte[0] = *pBVar10;
              }
            }
            PTR_DAT_14026e70 = (undefined *)(puVar3 + 1);
            PTR_DAT_14026e74 = (undefined *)(puVar4 + 1);
            if (DAT_1402764c != (LPVOID)0x0) {
              FUN_1401dd10(DAT_1402764c);
            }
            DAT_1402764c = puVar3;
            if (DAT_14027650 != (LPVOID)0x0) {
              FUN_1401dd10(DAT_14027650);
            }
            DAT_14027650 = puVar4;
            FUN_1401dd10(_DWInfoType);
            FUN_1401dd10(local_18);
            return 0;
          }
        }
      }
    }
  }
  FUN_1401dd10(puVar3);
  FUN_1401dd10(puVar4);
  FUN_1401dd10(_DWInfoType);
  FUN_1401dd10(local_18);
  return 1;
}



/* ==== FUN_1401dd00 @ 1401dd00 ==== 
 * signature: undefined4 __stdcall FUN_1401dd00(void)
 * body: 1401dd00-1401dd02
 */

undefined4 FUN_1401dd00(void)

{
  return 0;
}



/* ==== FUN_1401dd10 @ 1401dd10 ==== 
 * signature: undefined __cdecl FUN_1401dd10(LPVOID param_1)
 * body: 1401dd10-1401dd27
 */

void __cdecl FUN_1401dd10(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_14029f74,0,param_1);
  }
  return;
}



/* ==== _strncpy @ 1401dd30 ==== 
 * signature: char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * body: 1401dd30-1401de2d
 * note: Library Function - Single Match  _strncpy  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1401dd6e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1401ddab;
        goto LAB_1401de19;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1401de15:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1401de19:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1401ddab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1401de15;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1401de15;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1401de15;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1401dd6e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1401ddab:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



/* ==== _strcspn @ 1401de30 ==== 
 * signature: size_t __cdecl _strcspn(char * _Str, char * _Control)
 * body: 1401de30-1401de6d
 * note: Library Function - Single Match  _strcspn  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strcspn
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



/* ==== _strncmp @ 1401de70 ==== 
 * signature: int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount)
 * body: 1401de70-1401dea7
 * note: Library Function - Single Match  _strncmp  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



/* ==== _strpbrk @ 1401deb0 ==== 
 * signature: char * __cdecl _strpbrk(char * _Str, char * _Control)
 * body: 1401deb0-1401dee9
 * note: Library Function - Single Match  _strpbrk  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strpbrk
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



/* ==== FUN_1401def0 @ 1401def0 ==== 
 * signature: undefined __cdecl FUN_1401def0(SIZE_T param_1)
 * body: 1401def0-1401df03
 */

void __cdecl FUN_1401def0(SIZE_T param_1)

{
  FUN_1401df10(param_1,DAT_140282a4);
  return;
}



/* ==== FUN_1401df10 @ 1401df10 ==== 
 * signature: int __cdecl FUN_1401df10(SIZE_T param_1, int param_2)
 * body: 1401df10-1401df4f
 */

int __cdecl FUN_1401df10(SIZE_T param_1,int param_2)

{
  int iVar1;
  
  if (0xffffffe0 < param_1) {
    return 0;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  while( true ) {
    iVar1 = FUN_1401df50(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2 == 0) break;
    iVar1 = __callnewh(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



/* ==== FUN_1401df50 @ 1401df50 ==== 
 * signature: undefined __cdecl FUN_1401df50(SIZE_T param_1)
 * body: 1401df50-1401df64
 */

void __cdecl FUN_1401df50(SIZE_T param_1)

{
  HeapAlloc(DAT_14029f74,0,param_1);
  return;
}



/* ==== FUN_1401df70 @ 1401df70 ==== 
 * signature: undefined4 __cdecl FUN_1401df70(char * param_1, undefined4 * param_2, LCTYPE param_3)
 * body: 1401df70-1401e26e
 */

undefined4 __cdecl FUN_1401df70(char *param_1,undefined4 *param_2,LCTYPE param_3)

{
  ushort extraout_AX;
  uint uVar2;
  undefined3 extraout_var;
  BOOL BVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  ushort local_8c;
  ushort uStack_8a;
  ushort local_88;
  int local_84;
  LCID local_80 [32];
  LCID LVar1;
  
  local_84 = 0;
  if ((param_2 == (undefined4 *)0x0) && (param_3 == 0)) {
    return 0;
  }
  local_8c = 0;
  uStack_8a = 0;
  local_88 = 0;
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) &&
     (local_8c = trans_lang_lang(param_1), local_8c == 0)) {
    return 0;
  }
  if (((param_1 != (char *)0xffffffc0) && (param_1[0x40] != '\0')) &&
     (uStack_8a = trans_ctry_ctry(param_1 + 0x40), uStack_8a == 0)) {
    return 0;
  }
  if (param_1 != (char *)0xffffff80) {
    pcVar5 = param_1 + 0x80;
    bVar8 = *pcVar5 == '\0';
    if (!bVar8) {
      iVar4 = 4;
      pcVar6 = pcVar5;
      pcVar7 = "ACP";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar4 = 4;
        pcVar6 = pcVar5;
        pcVar7 = "OCP";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar8 = *pcVar6 == *pcVar7;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar8);
        if (bVar8) {
          local_84 = 1;
        }
        else {
          local_88 = FUN_140190f0(pcVar5);
          if (local_88 == 0) {
            return 0;
          }
        }
      }
    }
  }
  if (local_8c == 0) {
    if (uStack_8a == 0) {
      LVar1 = GetUserDefaultLCID();
      extraout_AX = (ushort)LVar1;
      local_8c = extraout_AX;
      uStack_8a = extraout_AX;
      if (local_88 == 0) {
        local_80[0] = GetUserDefaultLCID();
      }
    }
    else {
      uVar2 = FUN_1401e330(uStack_8a);
      local_8c = (ushort)uVar2;
      uStack_8a = local_8c;
      if (local_88 == 0) {
        local_80[0] = uVar2 & 0xffff;
      }
    }
  }
  else if (uStack_8a == 0) {
    uStack_8a = local_8c;
    if (local_88 == 0) {
      local_80[0] = (LCID)local_8c;
    }
  }
  else {
    bVar8 = FUN_1401e3a0(&uStack_8a,&local_8c);
    if (CONCAT31(extraout_var,bVar8) == 0) {
      return 0;
    }
    if (local_88 == 0) {
      local_80[0] = (LCID)uStack_8a;
    }
  }
  if (local_88 == 0) {
    iVar4 = ___crtGetLocaleInfoW
                      (local_80[0],(-(uint)(local_84 == 0) & 0xff9) + 0xb,(LPWSTR)local_80,0x40,0);
    if (iVar4 == 0) {
      return 0;
    }
    local_88 = FUN_14020a30((wint_t *)local_80,(undefined4 *)0x0,10);
  }
  BVar3 = IsValidCodePage((uint)local_88);
  if (BVar3 == 0) {
    return 0;
  }
  BVar3 = IsValidLocale((uint)local_8c,1);
  if (BVar3 == 0) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = CONCAT22(uStack_8a,local_8c);
    *(ushort *)(param_2 + 1) = local_88;
  }
  if (param_3 != 0) {
    iVar4 = ___crtGetLocaleInfoA
                      ((_locale_t)(uint)local_8c,(LPCWSTR)&DAT_00001001,param_3,&DAT_00000040,0);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = ___crtGetLocaleInfoA
                      ((_locale_t)(uint)uStack_8a,(LPCWSTR)&DAT_00001002,param_3 + 0x40,
                       &DAT_00000040,0);
    if (iVar4 == 0) {
      return 0;
    }
    FUN_140206d0((uint)local_88,(char *)(param_3 + 0x80),10);
  }
  return 1;
}



/* ==== __break @ 1401e26f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e26f-1401e26f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== trans_lang_lang @ 1401e270 ==== 
 * signature: undefined2 __cdecl trans_lang_lang(char * param_1)
 * body: 1401e270-1401e2c4
 * note: Library Function - Single Match  _trans_lang_lang  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _trans_lang_lang
   
   Library: Visual Studio 1998 Release */

undefined2 __cdecl trans_lang_lang(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 99;
  iVar4 = 0;
  do {
    iVar1 = (iVar4 + iVar3) / 2;
    iVar2 = __strcmpi(param_1,*(char **)(iVar1 * 8 + 0x14027688));
    if (iVar2 == 0) {
      return *(undefined2 *)(iVar1 * 8 + 0x1402768c);
    }
    if (iVar2 < 0) {
      iVar3 = iVar1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
  } while (iVar1 - iVar3 != -1);
  return 0;
}



/* ==== trans_ctry_ctry @ 1401e2d0 ==== 
 * signature: undefined2 __cdecl trans_ctry_ctry(char * param_1)
 * body: 1401e2d0-1401e324
 * note: Library Function - Single Match  _trans_ctry_ctry  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _trans_ctry_ctry
   
   Library: Visual Studio 1998 Release */

undefined2 __cdecl trans_ctry_ctry(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x57;
  iVar4 = 0;
  do {
    iVar1 = (iVar4 + iVar3) / 2;
    iVar2 = __strcmpi(param_1,*(char **)(iVar1 * 8 + 0x140279a0));
    if (iVar2 == 0) {
      return *(undefined2 *)(iVar1 * 8 + 0x140279a4);
    }
    if (iVar2 < 0) {
      iVar3 = iVar1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
  } while (iVar1 - iVar3 != -1);
  return 0;
}



/* ==== FUN_1401e330 @ 1401e330 ==== 
 * signature: uint __cdecl FUN_1401e330(ushort param_1)
 * body: 1401e330-1401e371
 */

uint __cdecl FUN_1401e330(ushort param_1)

{
  uint in_EAX;
  
  if ((100 < param_1) && (in_EAX = FUN_1401e380(param_1), (short)in_EAX != 0)) {
    return in_EAX;
  }
  if ((ushort)((uint)param_1 % 100) < 0x5b) {
    return (uint)*(ushort *)(&DAT_14027c58 + ((uint)param_1 % 100) * 6);
  }
  return in_EAX & 0xffff0000;
}



/* ==== __break @ 1401e372 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e372-1401e372
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e373 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e373-1401e373
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e374 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e374-1401e374
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e375 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e375-1401e375
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e376 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e376-1401e376
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e377 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e377-1401e377
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e378 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e378-1401e378
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e379 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e379-1401e379
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e37a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37a-1401e37a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e37b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37b-1401e37b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e37c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37c-1401e37c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e37d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37d-1401e37d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e37e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37e-1401e37e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e37f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37f-1401e37f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401e380 @ 1401e380 ==== 
 * signature: undefined4 __cdecl FUN_1401e380(short param_1)
 * body: 1401e380-1401e398
 */

undefined4 __cdecl FUN_1401e380(short param_1)

{
  if (param_1 != 0x354) {
    return 0;
  }
  return 0xc04;
}



/* ==== __break @ 1401e399 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e399-1401e399
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e39a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e39a-1401e39a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e39b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e39b-1401e39b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e39c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e39c-1401e39c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e39d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e39d-1401e39d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e39e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e39e-1401e39e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e39f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e39f-1401e39f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401e3a0 @ 1401e3a0 ==== 
 * signature: bool __cdecl FUN_1401e3a0(ushort * param_1, ushort * param_2)
 * body: 1401e3a0-1401e42d
 */

bool __cdecl FUN_1401e3a0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  
  uVar2 = (uint)*param_1 % 100;
  if (0x5a < (ushort)uVar2) {
    return false;
  }
  uVar4 = 0;
  puVar3 = (ushort *)(&DAT_14027c58 + uVar2 * 6);
  do {
    uVar1 = *puVar3;
    if (uVar1 == 0) break;
    if (((uVar1 ^ *param_2) & 0x3ff) == 0) {
      if ((*param_2 & 0xfc00) == 0) {
        *param_2 = uVar1;
      }
      *param_1 = uVar1;
      return true;
    }
    puVar3 = puVar3 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  uVar1 = *(ushort *)(&DAT_14027c58 + uVar2 * 6);
  *param_1 = uVar1;
  return (bool)('\x01' - (uVar1 == 0));
}



/* ==== __break @ 1401e42e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e42e-1401e42e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e42f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e42f-1401e42f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401e430 @ 1401e430 ==== 
 * signature: undefined __stdcall FUN_1401e430(void)
 * body: 1401e430-1401e4f6
 */

void FUN_1401e430(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_14029e60 == 0) {
    DAT_14029e60 = 0x200;
  }
  else if (DAT_14029e60 < 0x14) {
    DAT_14029e60 = 0x14;
  }
  DAT_14028e54 = FUN_1401e520(DAT_14029e60,4);
  if (DAT_14028e54 == (LPVOID)0x0) {
    DAT_14029e60 = 0x14;
    DAT_14028e54 = FUN_1401e520(0x14,4);
    if (DAT_14028e54 == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_14027e80;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_14028e54 + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_14027e90;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_14029e70 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_14027ef0);
  return;
}



/* ==== __break @ 1401e4f7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4f7-1401e4f7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e4f8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4f8-1401e4f8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e4f9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4f9-1401e4f9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e4fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4fa-1401e4fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e4fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4fb-1401e4fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e4fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4fc-1401e4fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e4fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4fd-1401e4fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e4fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4fe-1401e4fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e4ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4ff-1401e4ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401e500 @ 1401e500 ==== 
 * signature: undefined __stdcall FUN_1401e500(void)
 * body: 1401e500-1401e513
 */

void FUN_1401e500(void)

{
  FUN_14020ee0();
  if (DAT_14027314 != '\0') {
    FUN_14020d50();
    return;
  }
  return;
}



/* ==== __break @ 1401e514 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e514-1401e514
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e515 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e515-1401e515
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e516 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e516-1401e516
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e517 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e517-1401e517
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e518 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e518-1401e518
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e519 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e519-1401e519
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e51a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51a-1401e51a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e51b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51b-1401e51b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e51c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51c-1401e51c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e51d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51d-1401e51d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e51e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51e-1401e51e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401e51f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51f-1401e51f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401e520 @ 1401e520 ==== 
 * signature: LPVOID __cdecl FUN_1401e520(int param_1, int param_2)
 * body: 1401e520-1401e571
 */

LPVOID __cdecl FUN_1401e520(int param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  uint dwBytes;
  
  dwBytes = param_2 * param_1;
  if (dwBytes == 0) {
    dwBytes = 1;
  }
  do {
    if (dwBytes < 0xffffffe1) {
      pvVar1 = HeapAlloc(DAT_14029f74,8,dwBytes);
    }
    else {
      pvVar1 = (LPVOID)0x0;
    }
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
    if (DAT_140282a4 == 0) {
      return (LPVOID)0x0;
    }
    iVar2 = __callnewh(dwBytes);
  } while (iVar2 != 0);
  return (LPVOID)0x0;
}



/* ==== __XcptFilter @ 1401e580 ==== 
 * signature: int __cdecl __XcptFilter(ulong _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr)
 * body: 1401e580-1401e6ce
 * note: Library Function - Single Match  __XcptFilter  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __XcptFilter
   
   Library: Visual Studio 1998 Release */

int __cdecl __XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  _ptiddata p_Var4;
  int *piVar5;
  LONG LVar6;
  int iVar7;
  int iVar8;
  
  p_Var4 = __getptd();
  piVar5 = (int *)xcptlookup(_ExceptionNum,*(int **)(p_Var4->_con_ch_buf + 4));
  if ((piVar5 == (int *)0x0) || (pcVar1 = (code *)piVar5[2], pcVar1 == (code *)0x0)) {
    LVar6 = UnhandledExceptionFilter(_ExceptionPtr);
    return LVar6;
  }
  if (pcVar1 == (code *)0x5) {
    piVar5[2] = 0;
    return 1;
  }
  if (pcVar1 == (code *)0x1) {
    return -1;
  }
  pvVar2 = p_Var4->_initaddr;
  p_Var4->_initaddr = _ExceptionPtr;
  if (piVar5[1] == 8) {
    if (DAT_14028180 < DAT_14028184 + DAT_14028180) {
      iVar7 = DAT_14028180 * 0xc;
      iVar8 = DAT_14028180;
      do {
        iVar7 = iVar7 + 0xc;
        iVar8 = iVar8 + 1;
        *(undefined4 *)(*(int *)(p_Var4->_con_ch_buf + 4) + -4 + iVar7) = 0;
      } while (iVar8 < DAT_14028184 + DAT_14028180);
    }
    pvVar3 = p_Var4->_initarg;
    iVar8 = *piVar5;
    if (iVar8 == -0x3fffff72) {
      p_Var4->_initarg = (void *)0x83;
    }
    else if (iVar8 == -0x3fffff70) {
      p_Var4->_initarg = (void *)0x81;
    }
    else if (iVar8 == -0x3fffff6f) {
      p_Var4->_initarg = (void *)0x84;
    }
    else if (iVar8 == -0x3fffff6d) {
      p_Var4->_initarg = (void *)0x85;
    }
    else if (iVar8 == -0x3fffff73) {
      p_Var4->_initarg = (void *)0x82;
    }
    else if (iVar8 == -0x3fffff71) {
      p_Var4->_initarg = (void *)0x86;
    }
    else if (iVar8 == -0x3fffff6e) {
      p_Var4->_initarg = (void *)0x8a;
    }
    (*pcVar1)(8,p_Var4->_initarg);
    p_Var4->_initarg = pvVar3;
  }
  else {
    piVar5[2] = 0;
    (*pcVar1)(piVar5[1]);
  }
  p_Var4->_initaddr = pvVar2;
  return -1;
}



/* ==== xcptlookup @ 1401e6d0 ==== 
 * signature: uint __cdecl xcptlookup(int param_1, int * param_2)
 * body: 1401e6d0-1401e6fe
 * note: Library Function - Single Match  _xcptlookup  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _xcptlookup
   
   Library: Visual Studio 1998 Release */

uint __cdecl xcptlookup(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  do {
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 3;
  } while (piVar1 < param_2 + DAT_1402818c * 3);
  return -(uint)(*piVar1 == param_1) & (uint)piVar1;
}



/* ==== FUN_1401e700 @ 1401e700 ==== 
 * signature: int __cdecl FUN_1401e700(short * param_1)
 * body: 1401e700-1401e717
 */

int __cdecl FUN_1401e700(short *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = param_1;
  do {
    psVar3 = psVar2 + 1;
    sVar1 = *psVar2;
    psVar2 = psVar3;
  } while (sVar1 != 0);
  return ((int)psVar3 - (int)param_1 >> 1) + -1;
}



/* ==== ___crtMessageBoxA @ 1401e720 ==== 
 * signature: int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
 * body: 1401e720-1401e7b1
 * note: Library Function - Single Match  ___crtMessageBoxA  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtMessageBoxA
   
   Library: Visual Studio 1998 Release */

int __cdecl ___crtMessageBoxA(LPCSTR _LpText,LPCSTR _LpCaption,UINT _UType)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_14028190 != (FARPROC)0x0) {
LAB_1401e76f:
    if (DAT_14028194 != (FARPROC)0x0) {
      iVar1 = (*DAT_14028194)();
    }
    if ((iVar1 != 0) && (DAT_14028198 != (FARPROC)0x0)) {
      iVar1 = (*DAT_14028198)(iVar1);
    }
    iVar1 = (*DAT_14028190)(iVar1,_LpText,_LpCaption,_UType);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_14028190 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_14028190 != (FARPROC)0x0) {
      DAT_14028194 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_14028198 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_1401e76f;
    }
  }
  return 0;
}



/* ==== _signal @ 1401e7c0 ==== 
 * signature: void __cdecl _signal(int param_1)
 * body: 1401e7c0-1401e96b
 * note: Library Function - Single Match  _signal  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _signal
   
   Library: Visual Studio 1998 Release */

void __cdecl _signal(int param_1)

{
  _ptiddata p_Var1;
  undefined4 *puVar2;
  BOOL BVar3;
  ulong *puVar4;
  DWORD DVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int in_stack_00000008;
  
  if ((in_stack_00000008 != 4) && (in_stack_00000008 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      __lock(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_140281ac == 0)) {
        BVar3 = SetConsoleCtrlHandler(FUN_1401e9a0,1);
        if (BVar3 != 1) {
          puVar4 = FUN_14021050();
          DVar5 = GetLastError();
          *puVar4 = DVar5;
          FUN_1401a650(1);
          goto LAB_1401e904;
        }
        DAT_140281ac = 1;
      }
      switch(param_1) {
      case 2:
        DAT_1402819c = in_stack_00000008;
        break;
      default:
        break;
      case 0xf:
        DAT_140281a8 = in_stack_00000008;
        break;
      case 0x15:
        DAT_140281a0 = in_stack_00000008;
        break;
      case 0x16:
        DAT_140281a4 = in_stack_00000008;
      }
      FUN_1401a650(1);
      return;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      p_Var1 = __getptd();
      if (*(undefined4 **)(p_Var1->_con_ch_buf + 4) == &DAT_14028108) {
        puVar2 = (undefined4 *)FUN_1401def0(DAT_14028188);
        *(undefined4 **)(p_Var1->_con_ch_buf + 4) = puVar2;
        uVar8 = DAT_14028188;
        if (puVar2 == (undefined4 *)0x0) goto LAB_1401e904;
        puVar9 = &DAT_14028108;
        for (uVar7 = DAT_14028188 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar2 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar2 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
      }
      uVar8 = siglookup(param_1,*(uint *)(p_Var1->_con_ch_buf + 4));
      if (uVar8 != 0) {
        if (*(int *)(uVar8 + 4) != param_1) {
          return;
        }
        do {
          *(int *)(uVar8 + 8) = in_stack_00000008;
          piVar6 = (int *)(uVar8 + 0x10);
          uVar8 = uVar8 + 0xc;
        } while (*piVar6 == param_1);
        return;
      }
    }
  }
LAB_1401e904:
  piVar6 = FUN_14021040();
  *piVar6 = 0x16;
  return;
}



/* ==== FUN_1401e9a0 @ 1401e9a0 ==== 
 * signature: undefined4 __stdcall FUN_1401e9a0(int param_1)
 * body: 1401e9a0-1401ea22
 */

undefined4 FUN_1401e9a0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  __lock(1);
  if (param_1 == 0) {
    puVar1 = &DAT_1402819c;
    uVar3 = 2;
    pcVar2 = DAT_1402819c;
  }
  else {
    puVar1 = &DAT_140281a0;
    uVar3 = 0x15;
    pcVar2 = DAT_140281a0;
  }
  if (pcVar2 == (code *)0x0) {
    FUN_1401a650(1);
    return 0;
  }
  if (pcVar2 != (code *)0x1) {
    *puVar1 = 0;
    FUN_1401a650(1);
    (*pcVar2)(uVar3);
    return 1;
  }
  FUN_1401a650(1);
  return 1;
}



/* ==== _raise @ 1401ea30 ==== 
 * signature: int __cdecl _raise(int _SigNum)
 * body: 1401ea30-1401eb0b;1401eb0f-1401ebd7
 * note: Library Function - Single Match  _raise  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1401eb0c-1401eb0e
 */

/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 1998 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  _ptiddata p_Var2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *local_c;
  _ptiddata local_8;
  void *local_4;
  
  bVar1 = false;
  switch(_SigNum) {
  case 2:
    local_c = &DAT_1402819c;
    pcVar6 = DAT_1402819c;
    break;
  default:
    return -1;
  case 4:
  case 8:
  case 0xb:
    p_Var2 = __getptd();
    uVar3 = siglookup(_SigNum,*(uint *)(p_Var2->_con_ch_buf + 4));
    pcVar6 = *(code **)(uVar3 + 8);
    local_c = (undefined4 *)(uVar3 + 8);
    goto LAB_1401eac8;
  case 0xf:
    local_c = &DAT_140281a8;
    pcVar6 = DAT_140281a8;
    break;
  case 0x15:
    local_c = &DAT_140281a0;
    pcVar6 = DAT_140281a0;
    break;
  case 0x16:
    local_c = &DAT_140281a4;
    pcVar6 = DAT_140281a4;
  }
  bVar1 = true;
  p_Var2 = local_8;
LAB_1401eac8:
  if (bVar1) {
    __lock(1);
  }
  if (pcVar6 == (code *)0x1) {
    if (bVar1) {
      FUN_1401a650(1);
    }
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_1401a650(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_8 = p_Var2->_initaddr;
    p_Var2->_initaddr = (void *)0x0;
    if (_SigNum == 8) {
      local_4 = p_Var2->_initarg;
      p_Var2->_initarg = (void *)0x8c;
      goto LAB_1401eb3f;
    }
  }
  else {
LAB_1401eb3f:
    if (_SigNum == 8) {
      if (DAT_14028180 < DAT_14028184 + DAT_14028180) {
        iVar4 = DAT_14028180 * 0xc;
        iVar5 = DAT_14028180;
        do {
          iVar4 = iVar4 + 0xc;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(*(int *)(p_Var2->_con_ch_buf + 4) + -4 + iVar4) = 0;
        } while (iVar5 < DAT_14028180 + DAT_14028184);
      }
      goto LAB_1401eb86;
    }
  }
  *local_c = 0;
LAB_1401eb86:
  if (bVar1) {
    FUN_1401a650(1);
  }
  if (_SigNum == 8) {
    (*pcVar6)(8,p_Var2->_initarg);
  }
  else {
    (*pcVar6)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var2->_initaddr = local_8;
  if (_SigNum == 8) {
    p_Var2->_initarg = local_4;
  }
  return 0;
}



/* ==== siglookup @ 1401ec10 ==== 
 * signature: uint __cdecl siglookup(int param_1, uint param_2)
 * body: 1401ec10-1401ec40
 * note: Library Function - Single Match  _siglookup  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 1998 Release */

uint __cdecl siglookup(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == param_1) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_2 + DAT_1402818c * 0xc);
  return -(uint)(*(int *)(uVar1 + 4) == param_1) & uVar1;
}



/* ==== FUN_1401ec50 @ 1401ec50 ==== 
 * signature: void * * __stdcall FUN_1401ec50(void)
 * body: 1401ec50-1401ec58
 */

void ** FUN_1401ec50(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_initarg;
}



/* ==== __break @ 1401ec59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec59-1401ec59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec5a-1401ec5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec5b-1401ec5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec5c-1401ec5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec5d-1401ec5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec5e-1401ec5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec5f-1401ec5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_1401ec60 @ 1401ec60 ==== 
 * signature: void * * __stdcall FUN_1401ec60(void)
 * body: 1401ec60-1401ec60
 */

void ** FUN_1401ec60(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_initaddr;
}



/* ==== FUN_1401ec65 @ 1401ec65 ==== 
 * signature: int __stdcall FUN_1401ec65(void)
 * body: 1401ec65-1401ec68
 */

int FUN_1401ec65(void)

{
  int in_EAX;
  
  return in_EAX + 0x54;
}



/* ==== __break @ 1401ec69 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec69-1401ec69
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6a-1401ec6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6b-1401ec6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec6c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6c-1401ec6c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec6d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6d-1401ec6d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6e-1401ec6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401ec6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401ec6f-1401ec6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== ___addl @ 1401ec70 ==== 
 * signature: undefined4 __cdecl ___addl(uint param_1, uint param_2, uint * param_3)
 * body: 1401ec70-1401ec92
 * note: Library Function - Single Match  ___addl  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___addl
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl ___addl(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



/* ==== ___add_12 @ 1401eca0 ==== 
 * signature: undefined __cdecl ___add_12(uint * param_1, uint * param_2)
 * body: 1401eca0-1401ed05
 * note: Library Function - Single Match  ___add_12  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 1998 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = ___addl(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = ___addl(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = ___addl(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  ___addl(param_1[2],param_2[2],param_1 + 2);
  return;
}



/* ==== ___shl_12 @ 1401ed10 ==== 
 * signature: undefined __cdecl ___shl_12(uint * param_1)
 * body: 1401ed10-1401ed4d
 * note: Library Function - Single Match  ___shl_12  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___shl_12
   
   Library: Visual Studio 1998 Release */

void __cdecl ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] * 2 | uVar2 >> 0x1f;
  return;
}



/* ==== ___shr_12 @ 1401ed50 ==== 
 * signature: undefined __cdecl ___shr_12(uint * param_1)
 * body: 1401ed50-1401ed85
 * note: Library Function - Single Match  ___shr_12  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___shr_12
   
   Library: Visual Studio 1998 Release */

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  param_1[2] = uVar1 >> 1;
  param_1[1] = uVar2 >> 1 | uVar1 << 0x1f;
  *param_1 = *param_1 >> 1 | uVar2 << 0x1f;
  return;
}



/* ==== ___mtold12 @ 1401ed90 ==== 
 * signature: undefined __cdecl ___mtold12(char * param_1, int param_2, uint * param_3)
 * body: 1401ed90-1401ee77
 * note: Library Function - Single Match  ___mtold12  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___mtold12
   
   Library: Visual Studio 1998 Release */

void __cdecl ___mtold12(char *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  uint local_c;
  uint local_8;
  uint local_4;
  
  sVar3 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_c = *param_3;
    local_8 = param_3[1];
    local_4 = param_3[2];
    ___shl_12(param_3);
    ___shl_12(param_3);
    ___add_12(param_3,&local_c);
    ___shl_12(param_3);
    local_c = (uint)*param_1;
    local_8 = 0;
    local_4 = 0;
    ___add_12(param_3,&local_c);
    param_1 = param_1 + 1;
  }
  uVar2 = param_3[2];
  while (uVar2 == 0) {
    sVar3 = sVar3 + -0x10;
    uVar2 = param_3[1] >> 0x10;
    param_3[2] = uVar2;
    param_3[1] = param_3[1] << 0x10 | *param_3 >> 0x10;
    *param_3 = *param_3 << 0x10;
  }
  bVar1 = *(byte *)((int)param_3 + 9);
  while ((bVar1 & 0x80) == 0) {
    sVar3 = sVar3 + -1;
    ___shl_12(param_3);
    bVar1 = *(byte *)((int)param_3 + 9);
  }
  *(short *)((int)param_3 + 10) = sVar3;
  return;
}



/* ==== ___strgtold12 @ 1401ee80 ==== 
 * signature: uint __cdecl ___strgtold12(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, int scale, int decpt, int implicit_E)
 * body: 1401ee80-1401f4a9
 * note: Library Function - Single Match  ___strgtold12  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___strgtold12
   
   Library: Visual Studio 1998 Release */

uint __cdecl
___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
             int implicit_E)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  byte bVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  ushort local_52;
  uint local_50;
  byte *local_4c;
  int local_48;
  uint local_40;
  int local_3c;
  undefined4 local_28 [5];
  char local_11;
  ushort local_c;
  undefined4 local_a;
  undefined4 local_6;
  ushort local_2;
  
  local_3c = 1;
  pcVar10 = (char *)local_28;
  iVar12 = 0;
  local_52 = 0;
  local_50 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  iVar7 = 0;
  bVar6 = false;
  local_48 = 0;
  local_40 = 0;
  local_4c = (byte *)str;
  for (; (((bVar8 = *str, bVar8 == 0x20 || (bVar8 == 9)) || (bVar8 == 10)) || (bVar8 == 0xd));
      str = str + 1) {
  }
  do {
    bVar8 = *str;
    pbVar11 = (byte *)(str + 1);
    switch(iVar7) {
    case 0:
      if (((char)bVar8 < '1') || ('9' < (char)bVar8)) {
        if (DAT_14027080 == bVar8) {
          iVar7 = 5;
        }
        else if (bVar8 == 0x2b) {
          local_52 = 0;
          iVar7 = 2;
        }
        else if (bVar8 == 0x2d) {
          local_52 = 0x8000;
          iVar7 = 2;
        }
        else {
          if (bVar8 != 0x30) goto switchD_1401f130_caseD_2c;
          iVar7 = 1;
        }
        break;
      }
      iVar7 = 3;
      goto LAB_1401f334;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 3;
        goto LAB_1401f334;
      }
      if (DAT_14027080 == bVar8) {
        iVar7 = 4;
      }
      else {
        switch(bVar8) {
        case 0x2b:
        case 0x2d:
          iVar7 = 0xb;
          pbVar11 = (byte *)str;
          break;
        default:
          goto switchD_1401f130_caseD_2c;
        case 0x30:
          iVar7 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          iVar7 = 6;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 3;
        goto LAB_1401f334;
      }
      if (DAT_14027080 == bVar8) {
        iVar7 = 5;
      }
      else if (bVar8 == 0x30) {
        iVar7 = 1;
      }
      else {
        iVar7 = 10;
        pbVar11 = local_4c;
      }
      break;
    case 3:
      bVar2 = true;
      while( true ) {
        if (DAT_1402707c < 2) {
          uVar13 = *(ushort *)(PTR_DAT_14026e70 + (uint)bVar8 * 2) & 4;
        }
        else {
          uVar13 = __isctype((uint)bVar8,4);
        }
        if (uVar13 == 0) break;
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar10 = bVar8 - 0x30;
          bVar8 = *pbVar11;
          pcVar10 = pcVar10 + 1;
          pbVar11 = pbVar11 + 1;
        }
        else {
          bVar8 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          local_48 = local_48 + 1;
        }
      }
      if (DAT_14027080 == bVar8) {
        iVar7 = 4;
      }
      else {
        switch(bVar8) {
        case 0x2b:
        case 0x2d:
          iVar7 = 0xb;
          pbVar11 = pbVar11 + -1;
          break;
        default:
          goto switchD_1401f130_caseD_2c;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          iVar7 = 6;
        }
      }
      break;
    case 4:
      bVar2 = true;
      bVar4 = true;
      if (local_50 == 0) {
        while (bVar8 == 0x30) {
          local_48 = local_48 + -1;
          bVar8 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        }
      }
      while( true ) {
        if (DAT_1402707c < 2) {
          uVar13 = *(ushort *)(PTR_DAT_14026e70 + (uint)bVar8 * 2) & 4;
        }
        else {
          uVar13 = __isctype((uint)bVar8,4);
        }
        if (uVar13 == 0) break;
        pcVar9 = pcVar10;
        if (local_50 < 0x19) {
          pcVar9 = pcVar10 + 1;
          local_50 = local_50 + 1;
          local_48 = local_48 + -1;
          *pcVar10 = bVar8 - 0x30;
        }
        bVar8 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pcVar10 = pcVar9;
      }
      switch(bVar8) {
      case 0x2b:
      case 0x2d:
        iVar7 = 0xb;
        pbVar11 = pbVar11 + -1;
        break;
      default:
        goto switchD_1401f130_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
        iVar7 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_1402707c < 2) {
        uVar13 = *(ushort *)(PTR_DAT_14026e70 + (uint)bVar8 * 2) & 4;
      }
      else {
        uVar13 = __isctype((uint)bVar8,4);
      }
      if (uVar13 != 0) {
        iVar7 = 4;
        goto LAB_1401f334;
      }
      iVar7 = 10;
      pbVar11 = local_4c;
      break;
    case 6:
      local_4c = (byte *)(str + -1);
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 9;
        goto LAB_1401f334;
      }
      if (bVar8 == 0x2b) {
        iVar7 = 7;
      }
      else if (bVar8 == 0x2d) {
        local_3c = -1;
        iVar7 = 7;
      }
      else if (bVar8 == 0x30) {
        iVar7 = 8;
      }
      else {
        iVar7 = 10;
        pbVar11 = local_4c;
      }
      break;
    case 7:
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 9;
        goto LAB_1401f334;
      }
      if (bVar8 == 0x30) {
        iVar7 = 8;
      }
      else {
        iVar7 = 10;
        pbVar11 = local_4c;
      }
      break;
    case 8:
      bVar3 = true;
      while (bVar8 == 0x30) {
        bVar8 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      }
      if (('0' < (char)bVar8) && ((char)bVar8 < ':')) {
        iVar7 = 9;
        goto LAB_1401f334;
      }
      goto switchD_1401f130_caseD_2c;
    case 9:
      bVar3 = true;
      iVar12 = 0;
      while( true ) {
        if (DAT_1402707c < 2) {
          uVar13 = *(ushort *)(PTR_DAT_14026e70 + (uint)bVar8 * 2) & 4;
        }
        else {
          uVar13 = __isctype((uint)bVar8,4);
        }
        if (uVar13 == 0) goto LAB_1401f2ba;
        iVar12 = (char)bVar8 + -0x30 + iVar12 * 10;
        if (0x1450 < iVar12) break;
        bVar8 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      }
      iVar12 = 0x1451;
LAB_1401f2ba:
      while( true ) {
        if (DAT_1402707c < 2) {
          uVar13 = *(ushort *)(PTR_DAT_14026e70 + (uint)bVar8 * 2) & 4;
        }
        else {
          uVar13 = __isctype((uint)bVar8,4);
        }
        if (uVar13 == 0) break;
        bVar8 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      }
switchD_1401f130_caseD_2c:
      iVar7 = 10;
LAB_1401f334:
      pbVar11 = pbVar11 + -1;
      break;
    case 0xb:
      if (implicit_E == 0) goto switchD_1401f130_caseD_2c;
      local_4c = (byte *)str;
      if (bVar8 == 0x2b) {
        iVar7 = 7;
      }
      else if (bVar8 == 0x2d) {
        local_3c = -1;
        iVar7 = 7;
      }
      else {
        iVar7 = 10;
        pbVar11 = (byte *)str;
      }
    }
    str = (char *)pbVar11;
  } while (iVar7 != 10);
  *p_end_ptr = (char *)pbVar11;
  if (bVar2) {
    if (0x18 < local_50) {
      if ('\x04' < local_11) {
        local_11 = local_11 + '\x01';
      }
      pcVar10 = pcVar10 + -1;
      local_48 = local_48 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) {
      local_c = 0;
      local_6 = 0;
      local_2 = 0;
      local_28[0] = 0;
      goto LAB_1401f432;
    }
    pcVar10 = pcVar10 + -1;
    cVar1 = *pcVar10;
    while (cVar1 == '\0') {
      pcVar10 = pcVar10 + -1;
      local_50 = local_50 - 1;
      local_48 = local_48 + 1;
      cVar1 = *pcVar10;
    }
    ___mtold12((char *)local_28,local_50,(uint *)&local_c);
    if (local_3c < 0) {
      iVar12 = -iVar12;
    }
    uVar13 = iVar12 + local_48;
    if (!bVar3) {
      uVar13 = uVar13 + scale;
    }
    if (!bVar4) {
      uVar13 = uVar13 - decpt;
    }
    if ((int)uVar13 < 0x1451) {
      if (-0x1451 < (int)uVar13) {
        ___multtenpow12((int *)&local_c,uVar13,mult12);
        local_28[0] = local_a;
        goto LAB_1401f432;
      }
      bVar6 = true;
    }
    else {
      bVar5 = true;
    }
  }
  local_6 = local_28[0];
  local_c = (ushort)local_28[0];
  local_2 = (ushort)local_28[0];
LAB_1401f432:
  if (bVar2) {
    if (bVar5) {
      local_2 = 0x7fff;
      local_6 = 0x80000000;
      local_c = 0;
      local_28[0] = 0;
      local_40 = 2;
    }
    else if (bVar6) {
      local_c = 0;
      local_6 = 0;
      local_2 = 0;
      local_28[0] = 0;
      local_40 = 1;
    }
  }
  else {
    local_c = 0;
    local_6 = 0;
    local_2 = 0;
    local_28[0] = 0;
    local_40 = 4;
  }
  *(undefined4 *)(pld12->ld12 + 2) = local_28[0];
  *(ushort *)pld12->ld12 = local_c;
  *(undefined4 *)(pld12->ld12 + 6) = local_6;
  *(ushort *)(pld12->ld12 + 10) = local_52 | local_2;
  return local_40;
}



/* ==== FUN_1401f4aa @ 1401f4aa ==== 
 * signature: undefined __fastcall FUN_1401f4aa(undefined4 param_1, int param_2)
 * body: 1401f4aa-1401f4ab
 */

void __fastcall FUN_1401f4aa(undefined4 param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 in_EAX;
  undefined2 uVar5;
  int unaff_ESI;
  int iVar4;
  
  uVar5 = (undefined2)param_2;
  uVar3 = in(uVar5);
  iVar4 = CONCAT31((int3)((uint)in_EAX >> 8),uVar3);
  out(uVar5,uVar3);
  piVar1 = (int *)(param_2 * 2 + -0x3febfe11);
  *piVar1 = *piVar1 + param_2;
  out(uVar5,iVar4);
  piVar1 = (int *)(unaff_ESI + iVar4);
  *piVar1 = *piVar1 + param_2;
  LOCK();
  iRam4c1401f0 = iRam4c1401f0 + param_2;
  UNLOCK();
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}



/* ==== FUN_1401f5d0 @ 1401f5d0 ==== 
 * signature: uint __cdecl FUN_1401f5d0(undefined4 * param_1, char * * param_2, char * param_3, int param_4)
 * body: 1401f5d0-1401f618
 */

uint __cdecl FUN_1401f5d0(undefined4 *param_1,char **param_2,char *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  _LDBL12 local_c;
  
  uVar2 = ___strgtold12(&local_c,param_2,param_3,param_4,0,0,0);
  bVar1 = FUN_1401c750((ushort *)&local_c,param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    uVar2 = uVar2 | 2;
  }
  return uVar2;
}



/* ==== __break @ 1401f619 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f619-1401f619
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401f61a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61a-1401f61a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401f61b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61b-1401f61b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401f61c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61c-1401f61c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401f61d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61d-1401f61d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401f61e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61e-1401f61e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1401f61f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401f61f-1401f61f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== $I10_OUTPUT @ 1401f620 ==== 
 * signature: undefined4 __cdecl $I10_OUTPUT(int param_1, uint param_2, ushort param_3, int param_4, byte param_5, short * param_6)
 * body: 1401f620-1401f9ba
 * note: Library Function - Single Match  _$I10_OUTPUT  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _$I10_OUTPUT
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl
_I10_OUTPUT(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  short sVar9;
  undefined2 local_28;
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined1 local_1e;
  char cStack_1d;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xcc;
  local_15 = 0xcc;
  local_14 = 0xcc;
  local_13 = 0xcc;
  local_12 = 0xcc;
  local_11 = 0xcc;
  local_10 = 0xcc;
  local_f = 0xcc;
  local_e = 0xfb;
  local_d = 0x3f;
  local_1c = 1;
  uVar2 = param_3 & 0x7fff;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if (((uVar2 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *(undefined1 *)(param_6 + 1) = 0x20;
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (uVar2 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 != 0x80000000) || (param_1 != 0)) && ((param_2 & 0x40000000) == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e53;
      param_6[4] = 0x4e41;
      *(undefined1 *)(param_6 + 5) = 0;
      *(undefined1 *)((int)param_6 + 3) = 6;
      return 0;
    }
    if ((((param_3 & 0x8000) != 0) && (param_2 == 0xc0000000)) && (param_1 == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e49;
      param_6[4] = 0x44;
      *(undefined1 *)((int)param_6 + 3) = 5;
      return 0;
    }
    if ((param_2 == 0x80000000) && (param_1 == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e49;
      param_6[4] = 0x46;
      *(undefined1 *)((int)param_6 + 3) = 5;
      return 0;
    }
    param_6[2] = 0x2331;
    param_6[3] = 0x4e51;
    param_6[4] = 0x4e41;
    *(undefined1 *)(param_6 + 5) = 0;
    *(undefined1 *)((int)param_6 + 3) = 6;
    return 0;
  }
  local_1e = (undefined1)uVar2;
  cStack_1d = (char)(uVar2 >> 8);
  sVar9 = (short)(((uint)(uVar2 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + (uint)uVar2 * 0x4d10 +
                  -0x134312f4 >> 0x10);
  local_28 = 0;
  uStack_22 = param_2;
  uStack_26 = param_1;
  ___multtenpow12((int *)&local_28,-(int)sVar9,1);
  if (0x3ffe < CONCAT11(cStack_1d,local_1e)) {
    sVar9 = sVar9 + 1;
    FUN_14021060((int *)&local_28,(int *)&local_18);
  }
  *param_6 = sVar9;
  if (((param_5 & 1) != 0) && (param_4 = param_4 + sVar9, param_4 < 1)) {
    *(undefined1 *)(param_6 + 1) = 0x20;
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (0x15 < param_4) {
    param_4 = 0x15;
  }
  iVar8 = 8;
  uVar2 = CONCAT11(cStack_1d,local_1e);
  local_1e = 0;
  cStack_1d = '\0';
  iVar4 = uVar2 - 0x3ffe;
  do {
    ___shl_12((uint *)&local_28);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (iVar4 < 0) {
    for (uVar5 = -iVar4 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      ___shr_12((uint *)&local_28);
    }
  }
  psVar1 = param_6 + 2;
  iVar8 = param_4 + 1;
  psVar7 = psVar1;
  psVar6 = psVar1;
  iVar4 = uStack_26;
  uVar5 = uStack_22;
  if (0 < iVar8) {
    do {
      uStack_22._2_2_ = (undefined2)(uVar5 >> 0x10);
      uStack_22._0_2_ = (undefined2)uVar5;
      uStack_26._2_2_ = (undefined2)((uint)iVar4 >> 0x10);
      uStack_26._0_2_ = (undefined2)iVar4;
      psVar6 = (short *)((int)psVar7 + 1);
      local_c = CONCAT22((undefined2)uStack_26,local_28);
      local_8 = CONCAT22((undefined2)uStack_22,uStack_26._2_2_);
      local_4 = CONCAT13(cStack_1d,CONCAT12(local_1e,uStack_22._2_2_));
      uStack_26 = iVar4;
      uStack_22 = uVar5;
      ___shl_12((uint *)&local_28);
      ___shl_12((uint *)&local_28);
      ___add_12((uint *)&local_28,&local_c);
      ___shl_12((uint *)&local_28);
      iVar8 = iVar8 + -1;
      *(char *)psVar7 = cStack_1d + '0';
      cStack_1d = '\0';
      psVar7 = psVar6;
      iVar4 = uStack_26;
      uVar5 = uStack_22;
    } while (iVar8 != 0);
  }
  psVar7 = psVar6 + -1;
  if (*(char *)((int)psVar6 + -1) < '5') {
    if (psVar7 < psVar1) {
LAB_1401f999:
      *param_6 = 0;
      *(char *)psVar1 = '0';
      *(undefined1 *)(param_6 + 1) = 0x20;
      *(undefined1 *)((int)param_6 + 3) = 1;
      *(undefined1 *)((int)param_6 + 5) = 0;
      return 1;
    }
    do {
      if ((char)*psVar7 != '0') break;
      psVar7 = (short *)((int)psVar7 + -1);
    } while (psVar1 <= psVar7);
    if (psVar7 < psVar1) goto LAB_1401f999;
    goto LAB_1401f96b;
  }
  if (psVar7 < psVar1) {
LAB_1401f965:
    *param_6 = *param_6 + 1;
    psVar7 = (short *)((int)psVar7 + 1);
  }
  else {
    do {
      if ((char)*psVar7 != '9') break;
      *(char *)psVar7 = '0';
      psVar7 = (short *)((int)psVar7 + -1);
    } while (psVar1 <= psVar7);
    if (psVar7 < psVar1) goto LAB_1401f965;
  }
  *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_1401f96b:
  cVar3 = ((char)psVar7 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar3;
  *(undefined1 *)(cVar3 + 4 + (int)param_6) = 0;
  return local_1c;
}



/* ==== FUN_1401f9c0 @ 1401f9c0 ==== 
 * signature: int __cdecl FUN_1401f9c0(byte * param_1, uint param_2, byte * param_3, int * param_4)
 * body: 1401f9c0-1401facc
 */

int __cdecl FUN_1401f9c0(byte *param_1,uint param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  uint local_8;
  uint local_4;
  
  uVar2 = param_2;
  bVar6 = DAT_14029f80 == 0;
  local_8 = param_2;
  if (bVar6) {
    DAT_14029f84 = DAT_14029f84 + 1;
  }
  else {
    __lock(0x13);
  }
  piVar3 = param_4;
  local_4 = (uint)!bVar6;
  pbVar4 = param_3;
  while ((local_8 != 0 && (bVar1 = *pbVar4, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar5;
      if (bVar1 == 0x23) {
        pbVar5 = pbVar4 + 2;
      }
      DAT_14028260 = (uint)(bVar1 == 0x23);
      FUN_1401fad0(*pbVar5,piVar3,(int *)&param_1,&local_8);
    }
    else {
      if (((PTR_DAT_14026e70[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < local_8)) {
        pbVar4 = pbVar4 + 1;
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        local_8 = local_8 - 1;
      }
      *param_1 = *pbVar4;
      param_1 = param_1 + 1;
      local_8 = local_8 - 1;
      pbVar5 = pbVar4;
    }
    pbVar4 = pbVar5 + 1;
  }
  if (local_4 == 0) {
    DAT_14029f84 = DAT_14029f84 + -1;
  }
  else {
    FUN_1401a650(0x13);
  }
  if (local_8 != 0) {
    *param_1 = 0;
    return uVar2 - local_8;
  }
  return 0;
}



/* ==== FUN_1401fad0 @ 1401fad0 ==== 
 * signature: undefined __cdecl FUN_1401fad0(undefined1 param_1, int * param_2, int * param_3, uint * param_4)
 * body: 1401fad0-1401ff7f
 */

void __cdecl FUN_1401fad0(undefined1 param_1,int *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = PTR_PTR_1402825c;
  switch(param_1) {
  case 0x25:
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    return;
  case 0x41:
    __store_str(*(char **)(PTR_PTR_1402825c + param_2[6] * 4 + 0x1c),param_3,(int *)param_4);
    return;
  case 0x42:
    __store_str(*(char **)(PTR_PTR_1402825c + param_2[4] * 4 + 0x68),param_3,(int *)param_4);
    return;
  case 0x48:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[2],2,param_3,param_4);
    return;
  case 0x49:
    DAT_14028264 = DAT_14028260;
    iVar4 = param_2[2] % 0xc;
    if (iVar4 == 0) {
      iVar4 = 0xc;
    }
    __store_num(iVar4,2,param_3,param_4);
    return;
  case 0x4d:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[1],2,param_3,param_4);
    return;
  case 0x53:
    DAT_14028264 = DAT_14028260;
    __store_num(*param_2,2,param_3,param_4);
    return;
  case 0x55:
    iVar4 = param_2[6];
    goto LAB_1401fc40;
  case 0x57:
    if (param_2[6] == 0) {
      iVar4 = 6;
    }
    else {
      iVar4 = param_2[6] + -1;
    }
LAB_1401fc40:
    DAT_14028264 = DAT_14028260;
    iVar1 = param_2[7];
    if (iVar1 < iVar4) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar1 / 7;
      if (iVar4 <= iVar1 % 7) {
        iVar3 = iVar3 + 1;
      }
    }
    __store_num(iVar3,2,param_3,param_4);
    return;
  case 0x58:
    DAT_14028260 = 0;
    FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa8),param_2,param_3,(int *)param_4);
    return;
  case 0x59:
    DAT_14028264 = DAT_14028260;
    __store_num(((param_2[5] / 100) * 4 + 0x4c) * 0x19 + param_2[5] % 100,4,param_3,param_4);
    return;
  case 0x5a:
  case 0x7a:
    FUN_14021390();
    __store_str((&PTR_DAT_140284ac)[-(uint)(param_2[8] == 0)],param_3,(int *)param_4);
    return;
  case 0x61:
    __store_str(*(char **)(PTR_PTR_1402825c + param_2[6] * 4),param_3,(int *)param_4);
    return;
  case 0x62:
    __store_str(*(char **)(PTR_PTR_1402825c + param_2[4] * 4 + 0x38),param_3,(int *)param_4);
    return;
  case 99:
    if (DAT_14028260 == 0) {
      FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa0),param_2,param_3,(int *)param_4);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_14020160(*(byte **)(puVar2 + 0xa8),param_2,param_3,(int *)param_4);
        return;
      }
    }
    else {
      DAT_14028260 = 0;
      FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa4),param_2,param_3,(int *)param_4);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_14020160(*(byte **)(puVar2 + 0xa8),param_2,param_3,(int *)param_4);
        return;
      }
    }
    break;
  case 100:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[3],2,param_3,param_4);
    return;
  case 0x6a:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[7] + 1,3,param_3,param_4);
    return;
  case 0x6d:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[4] + 1,2,param_3,param_4);
    return;
  case 0x70:
    if (param_2[2] < 0xc) {
      __store_str(*(char **)(PTR_PTR_1402825c + 0x98),param_3,(int *)param_4);
      return;
    }
    __store_str(*(char **)(PTR_PTR_1402825c + 0x9c),param_3,(int *)param_4);
    return;
  case 0x77:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[6],1,param_3,param_4);
    return;
  case 0x78:
    if (DAT_14028260 != 0) {
      DAT_14028260 = 0;
      FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa4),param_2,param_3,(int *)param_4);
      return;
    }
    FUN_14020160(*(byte **)(PTR_PTR_1402825c + 0xa0),param_2,param_3,(int *)param_4);
    return;
  case 0x79:
    DAT_14028264 = DAT_14028260;
    __store_num(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}



/* ==== __store_str @ 14020040 ==== 
 * signature: undefined __cdecl __store_str(char * param_1, int * param_2, int * param_3)
 * body: 14020040-14020069
 * note: Library Function - Single Match  __store_str  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __store_str
   
   Library: Visual Studio 1998 Release */

void __cdecl __store_str(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    iVar1 = *param_3 + -1;
    *param_3 = iVar1;
  }
  return;
}



/* ==== __store_num @ 14020070 ==== 
 * signature: undefined __cdecl __store_num(int param_1, uint param_2, int * param_3, uint * param_4)
 * body: 14020070-140200f7
 * note: Library Function - Single Match  __store_num  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __store_num
   
   Library: Visual Studio 1998 Release */

void __cdecl __store_num(int param_1,uint param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_14028264 != 0) {
    FUN_14020100(param_1,param_3,param_4);
    return;
  }
  if (param_2 < *param_4) {
    DAT_14028264 = 0;
    uVar1 = 0;
    uVar2 = param_2;
    while (uVar2 = uVar2 - 1, uVar2 != 0xffffffff) {
      *(char *)(*param_3 + uVar2) = (char)(param_1 % 10) + '0';
      param_1 = param_1 / 10;
      uVar1 = param_2;
    }
    *param_3 = *param_3 + uVar1;
    *param_4 = *param_4 - uVar1;
    return;
  }
  *param_4 = 0;
  return;
}



/* ==== FUN_14020100 @ 14020100 ==== 
 * signature: undefined __cdecl FUN_14020100(int param_1, int * param_2, uint * param_3)
 * body: 14020100-1402015d
 */

void __cdecl FUN_14020100(int param_1,int *param_2,uint *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = *param_3;
  pcVar2 = (char *)*param_2;
  do {
    pcVar4 = pcVar2;
    if (uVar3 < 2) break;
    pcVar4 = pcVar2 + 1;
    *pcVar2 = (char)(param_1 % 10) + '0';
    param_1 = param_1 / 10;
    uVar3 = *param_3 - 1;
    *param_3 = uVar3;
    pcVar2 = pcVar4;
  } while (0 < param_1);
  pcVar2 = (char *)*param_2;
  *param_2 = (int)pcVar4;
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar4 = *pcVar2;
    pcVar4 = pcVar4 + -1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 < pcVar4);
  return;
}



/* ==== FUN_14020160 @ 14020160 ==== 
 * signature: undefined __cdecl FUN_14020160(byte * param_1, undefined4 param_2, int * param_3, int * param_4)
 * body: 14020160-140203d0
 */

void __cdecl FUN_14020160(byte *param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  char local_9;
  
  bVar1 = *param_1;
  do {
    if ((bVar1 == 0) || (*param_4 == 0)) {
      return;
    }
    local_9 = '\0';
    DAT_14028264 = 0;
    uVar5 = 0;
    pbVar2 = param_1 + 1;
    do {
      pbVar6 = pbVar2;
      uVar4 = uVar5;
      uVar5 = uVar4 + 1;
      pbVar2 = pbVar6 + 1;
    } while (*pbVar6 == *param_1);
    switch(*param_1) {
    case 0x27:
      if ((uVar5 & 1) == 0) {
        pbVar6 = param_1 + uVar5;
      }
      else {
        pbVar6 = param_1 + uVar5;
        if (*pbVar6 == 0) {
          DAT_14028264 = 0;
          return;
        }
        do {
          if (*param_4 == 0) break;
          bVar1 = *pbVar6;
          if (bVar1 == 0x27) {
            pbVar6 = pbVar6 + 1;
            break;
          }
          if ((PTR_DAT_14026e70[(uint)bVar1 * 2 + 1] & 0x80) != 0) {
            pbVar6 = pbVar6 + 1;
            *(byte *)*param_3 = bVar1;
            *param_3 = *param_3 + 1;
            *param_4 = *param_4 + -1;
          }
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          *(byte *)*param_3 = bVar1;
          *param_3 = *param_3 + 1;
          *param_4 = *param_4 + -1;
        } while (*pbVar6 != 0);
      }
      goto LAB_140203c0;
    case 0x41:
    case 0x61:
      iVar3 = __strcmpi((char *)param_1,"am/pm");
      if (iVar3 == 0) {
        local_9 = 'p';
        pbVar6 = param_1 + 5;
      }
      else {
        iVar3 = __strcmpi((char *)param_1,"a/p");
        if (iVar3 == 0) {
          pbVar6 = param_1 + 3;
        }
        local_9 = 'p';
      }
      break;
    case 0x48:
      if (uVar5 == 1) {
        DAT_14028264 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'H';
      break;
    case 0x4d:
      switch(uVar4) {
      case 0:
        DAT_14028264 = 1;
      case 1:
        local_9 = 'm';
        break;
      case 2:
        local_9 = 'b';
        break;
      case 3:
        local_9 = 'B';
      }
      break;
    case 100:
      switch(uVar4) {
      case 0:
        DAT_14028264 = 1;
      case 1:
        local_9 = 'd';
        break;
      case 2:
        local_9 = 'a';
        break;
      case 3:
        local_9 = 'A';
      }
      break;
    case 0x68:
      if (uVar5 == 1) {
        DAT_14028264 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'I';
      break;
    case 0x6d:
      if (uVar5 == 1) {
        DAT_14028264 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'M';
      break;
    case 0x73:
      if (uVar5 == 1) {
        DAT_14028264 = 1;
      }
      else if (uVar5 != 2) break;
      local_9 = 'S';
      break;
    case 0x79:
      if (uVar5 == 2) {
        local_9 = 'y';
      }
      else if (uVar5 == 4) {
        local_9 = 'Y';
      }
    }
    if (local_9 == '\0') {
      if ((PTR_DAT_14026e70[(uint)*param_1 * 2 + 1] & 0x80) != 0) {
        *(byte *)*param_3 = *param_1;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 + -1;
        param_1 = param_1 + 1;
      }
      pbVar6 = param_1 + 1;
      *(byte *)*param_3 = *param_1;
      *param_3 = *param_3 + 1;
      *param_4 = *param_4 + -1;
    }
    else {
      FUN_1401fad0(local_9,param_2,param_3,(uint *)param_4);
    }
LAB_140203c0:
    bVar1 = *pbVar6;
    param_1 = pbVar6;
  } while( true );
}



/* ==== FUN_140203d1 @ 140203d1 ==== 
 * signature: undefined __stdcall FUN_140203d1(void)
 * body: 140203d1-140203d3
 */

void FUN_140203d1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== ___getlocaleinfo @ 14020480 ==== 
 * signature: int __cdecl ___getlocaleinfo(_locale_t _Locale, int _Lc_type, LPCWSTR _LocaleName, LCTYPE _FieldType, void * _Address)
 * body: 14020480-14020635
 * note: Library Function - Single Match  ___getlocaleinfo  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___getlocaleinfo
   
   Library: Visual Studio 1998 Release */

int __cdecl
___getlocaleinfo(_locale_t _Locale,int _Lc_type,LPCWSTR _LocaleName,LCTYPE _FieldType,void *_Address
                )

{
  bool bVar1;
  SIZE_T _Count;
  DWORD DVar2;
  LPSTR _LpLCData;
  byte *pbVar3;
  char *_Dest;
  int iVar4;
  uint uVar5;
  byte local_80 [128];
  
  if (_Locale != (_locale_t)0x1) {
    if (_Locale != (_locale_t)0x0) {
      return -1;
    }
    iVar4 = ___crtGetLocaleInfoW(_Lc_type,(LCTYPE)_LocaleName,(LPWSTR)&DAT_14028978,4,0);
    if (iVar4 != 0) {
      pbVar3 = &DAT_14028978;
      *(undefined1 *)_FieldType = 0;
      while( true ) {
        local_80[0] = *pbVar3;
        if (DAT_1402707c < 2) {
          uVar5 = *(ushort *)(PTR_DAT_14026e70 + (uint)local_80[0] * 2) & 4;
        }
        else {
          uVar5 = __isctype((uint)local_80[0],4);
        }
        if (uVar5 == 0) break;
        pbVar3 = pbVar3 + 2;
        *(byte *)_FieldType = local_80[0] + *(char *)_FieldType * '\n' + -0x30;
        if (&DAT_14028980 <= pbVar3) {
          return 0;
        }
      }
      return 0;
    }
    return -1;
  }
  pbVar3 = local_80;
  bVar1 = false;
  _Count = ___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,(LCTYPE)local_80,(LPSTR)0x80,0);
  if (_Count == 0) {
    DVar2 = GetLastError();
    if (((DVar2 != 0x7a) ||
        (_LpLCData = (LPSTR)___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,0,(LPSTR)0x0,0),
        _LpLCData == (LPSTR)0x0)) ||
       (pbVar3 = (byte *)FUN_1401def0((SIZE_T)_LpLCData), pbVar3 == (byte *)0x0)) goto LAB_14020557;
    bVar1 = true;
    _Count = ___crtGetLocaleInfoA((_locale_t)_Lc_type,_LocaleName,(LCTYPE)pbVar3,_LpLCData,0);
    if (_Count == 0) goto LAB_14020557;
  }
  _Dest = (char *)FUN_1401def0(_Count);
  *(char **)_FieldType = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,(char *)pbVar3,_Count);
    if (bVar1) {
      FUN_1401dd10(pbVar3);
    }
    return 0;
  }
LAB_14020557:
  if (bVar1) {
    FUN_1401dd10(pbVar3);
  }
  return -1;
}



/* ==== FUN_14020640 @ 14020640 ==== 
 * signature: undefined * __stdcall FUN_14020640(void)
 * body: 14020640-14020645
 */

undefined * FUN_14020640(void)

{
  return PTR_PTR_140282a0;
}



/* ==== __break @ 14020646 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020646-14020646
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020647 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020647-14020647
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020648 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020648-14020648
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020649 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020649-14020649
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402064a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064a-1402064a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402064b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064b-1402064b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402064c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064c-1402064c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402064d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064d-1402064d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402064e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064e-1402064e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402064f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064f-1402064f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14020650 @ 14020650 ==== 
 * signature: undefined4 __cdecl FUN_14020650(undefined4 param_1)
 * body: 14020650-14020677
 */

undefined4 __cdecl FUN_14020650(undefined4 param_1)

{
  undefined4 uVar1;
  
  __lock(9);
  uVar1 = DAT_14028980;
  DAT_14028980 = param_1;
  FUN_1401a650(9);
  return uVar1;
}



/* ==== __break @ 14020678 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020678-14020678
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020679 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020679-14020679
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402067a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067a-1402067a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402067b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067b-1402067b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402067c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067c-1402067c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402067d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067d-1402067d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402067e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067e-1402067e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402067f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402067f-1402067f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14020680 @ 14020680 ==== 
 * signature: undefined4 __stdcall FUN_14020680(void)
 * body: 14020680-14020685
 */

undefined4 FUN_14020680(void)

{
  return DAT_14028980;
}



/* ==== __break @ 14020686 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020686-14020686
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020687 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020687-14020687
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020688 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020688-14020688
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020689 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020689-14020689
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402068a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402068a-1402068a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402068b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402068b-1402068b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402068c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402068c-1402068c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402068d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402068d-1402068d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402068e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402068e-1402068e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402068f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402068f-1402068f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __callnewh @ 14020690 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 14020690-140206cd
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_14028980 != (code *)0x0) {
    iVar1 = (*DAT_14028980)(_Size);
    if (iVar1 != 0) {
      FUN_1401a650(9);
      return 1;
    }
  }
  FUN_1401a650(9);
  return 0;
}



/* ==== FUN_140206d0 @ 140206d0 ==== 
 * signature: char * __cdecl FUN_140206d0(uint param_1, char * param_2, uint param_3)
 * body: 140206d0-1402070b
 */

char * __cdecl FUN_140206d0(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_14020710(param_1,param_2,10,1);
    return param_2;
  }
  FUN_14020710(param_1,param_2,param_3,0);
  return param_2;
}



/* ==== __break @ 1402070c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402070c-1402070c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402070d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402070d-1402070d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402070e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402070e-1402070e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402070f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402070f-1402070f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14020710 @ 14020710 ==== 
 * signature: undefined __cdecl FUN_14020710(uint param_1, char * param_2, uint param_3, int param_4)
 * body: 14020710-1402076f
 */

void __cdecl FUN_14020710(uint param_1,char *param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar2 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_1 = -param_1;
    pcVar2 = param_2;
  }
  do {
    pcVar4 = pcVar2;
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / param_3;
    cVar3 = (char)(uVar1 % (ulonglong)param_3);
    if ((uint)(uVar1 % (ulonglong)param_3) < 10) {
      cVar3 = cVar3 + '0';
    }
    else {
      cVar3 = cVar3 + 'W';
    }
    *pcVar4 = cVar3;
    pcVar2 = pcVar4 + 1;
  } while (param_1 != 0);
  pcVar4[1] = '\0';
  do {
    cVar3 = *pcVar4;
    *pcVar4 = *param_2;
    pcVar4 = pcVar4 + -1;
    *param_2 = cVar3;
    param_2 = param_2 + 1;
  } while (param_2 < pcVar4);
  return;
}



/* ==== FUN_14020770 @ 14020770 ==== 
 * signature: char * __cdecl FUN_14020770(uint param_1, char * param_2, uint param_3)
 * body: 14020770-1402079e
 */

char * __cdecl FUN_14020770(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  FUN_14020710(param_1,param_2,param_3,iVar1);
  return param_2;
}



/* ==== __break @ 1402079f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402079f-1402079f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140207a0 @ 140207a0 ==== 
 * signature: char * __cdecl FUN_140207a0(uint param_1, char * param_2, uint param_3)
 * body: 140207a0-140207bd
 */

char * __cdecl FUN_140207a0(uint param_1,char *param_2,uint param_3)

{
  FUN_14020710(param_1,param_2,param_3,0);
  return param_2;
}



/* ==== __break @ 140207be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140207be-140207be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140207bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140207bf-140207bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== ___crtGetLocaleInfoW @ 140207c0 ==== 
 * signature: int __cdecl ___crtGetLocaleInfoW(LCID param_1, LCTYPE param_2, LPWSTR param_3, int param_4, UINT param_5)
 * body: 140207c0-140208ed
 * note: Library Function - Single Match  ___crtGetLocaleInfoW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtGetLocaleInfoW
   
   Library: Visual Studio 1998 Release */

int __cdecl
___crtGetLocaleInfoW(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  SIZE_T cchData;
  LPSTR lpLCData;
  
  iVar1 = DAT_140282a8;
  if (DAT_140282a8 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  DAT_140282a8 = iVar1;
  if (iVar1 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (iVar1 == 2) {
    if (param_5 == 0) {
      param_5 = DAT_140272d0;
    }
    cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
    if (cchData == 0) {
      return 0;
    }
    lpLCData = (LPSTR)FUN_1401def0(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
      }
      if (iVar1 != 0) {
        FUN_1401dd10(lpLCData);
        return iVar1;
      }
    }
    FUN_1401dd10(lpLCData);
    iVar1 = 0;
  }
  return iVar1;
}



/* ==== ___crtGetLocaleInfoA @ 140208f0 ==== 
 * signature: int __cdecl ___crtGetLocaleInfoA(_locale_t _Plocinfo, LPCWSTR _LocaleName, LCTYPE _LCType, LPSTR _LpLCData, int _CchData)
 * body: 140208f0-14020a2e
 * note: Library Function - Single Match  ___crtGetLocaleInfoA  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtGetLocaleInfoA
   
   Library: Visual Studio 1998 Release */

int __cdecl
___crtGetLocaleInfoA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,LCTYPE _LCType,LPSTR _LpLCData,int _CchData)

{
  int iVar1;
  LPWSTR lpLCData;
  
  iVar1 = DAT_140282ac;
  if (DAT_140282ac == 0) {
    iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
  }
  DAT_140282ac = iVar1;
  if (iVar1 == 2) {
    iVar1 = GetLocaleInfoA((LCID)_Plocinfo,(LCTYPE)_LocaleName,(LPSTR)_LCType,(int)_LpLCData);
    return iVar1;
  }
  if (iVar1 == 1) {
    if (_CchData == 0) {
      _CchData = DAT_140272d0;
    }
    iVar1 = GetLocaleInfoW((LCID)_Plocinfo,(LCTYPE)_LocaleName,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpLCData = (LPWSTR)FUN_1401def0(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW((LCID)_Plocinfo,(LCTYPE)_LocaleName,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (_LpLCData == (LPSTR)0x0) {
        iVar1 = WideCharToMultiByte(_CchData,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
        ;
      }
      else {
        iVar1 = WideCharToMultiByte(_CchData,0x220,lpLCData,-1,(LPSTR)_LCType,(int)_LpLCData,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
      }
      if (iVar1 != 0) {
        FUN_1401dd10(lpLCData);
        return iVar1;
      }
    }
    FUN_1401dd10(lpLCData);
    iVar1 = 0;
  }
  return iVar1;
}



/* ==== FUN_14020a30 @ 14020a30 ==== 
 * signature: undefined __cdecl FUN_14020a30(wint_t * param_1, undefined4 * param_2, uint param_3)
 * body: 14020a30-14020a49
 */

void __cdecl FUN_14020a30(wint_t *param_1,undefined4 *param_2,uint param_3)

{
  FUN_14020a50(param_1,param_2,param_3,0);
  return;
}



/* ==== __break @ 14020a4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020a4a-14020a4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020a4b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020a4b-14020a4b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020a4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020a4c-14020a4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020a4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020a4d-14020a4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020a4e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020a4e-14020a4e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020a4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020a4f-14020a4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14020a50 @ 14020a50 ==== 
 * signature: uint __cdecl FUN_14020a50(wint_t * param_1, undefined4 * param_2, uint param_3, uint param_4)
 * body: 14020a50-14020c55
 */

uint __cdecl FUN_14020a50(wint_t *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  wint_t *pwVar1;
  wint_t wVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  wint_t *pwVar8;
  uint uVar9;
  
  uVar7 = 0;
  wVar2 = *param_1;
  iVar3 = _iswctype(wVar2,8);
  pwVar1 = param_1;
  while (pwVar8 = pwVar1 + 1, iVar3 != 0) {
    wVar2 = *pwVar8;
    iVar3 = _iswctype(wVar2,8);
    pwVar1 = pwVar8;
  }
  if (wVar2 == 0x2d) {
    wVar2 = *pwVar8;
    param_4 = param_4 | 2;
    pwVar8 = pwVar1 + 2;
  }
  else if (wVar2 == 0x2b) {
    wVar2 = *pwVar8;
    pwVar8 = pwVar1 + 2;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (wVar2 == 0x30) {
      if ((*pwVar8 == 0x78) || (*pwVar8 == 0x58)) {
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  if (((param_3 == 0x10) && (wVar2 == 0x30)) && ((*pwVar8 == 0x78 || (*pwVar8 == 0x58)))) {
    wVar2 = pwVar8[1];
    pwVar8 = pwVar8 + 2;
  }
  uVar4 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    iVar3 = _iswctype(wVar2,4);
    if (iVar3 == 0) {
      iVar3 = _iswctype(wVar2,0x103);
      if (iVar3 == 0) {
LAB_14020bac:
        pwVar8 = pwVar8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            pwVar8 = param_1;
          }
          uVar7 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < uVar7)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < uVar7)))))))) {
          piVar5 = FUN_14021040();
          *piVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            if ((param_4 & 2) == 0) {
              uVar7 = 0x7fffffff;
            }
            else {
              uVar7 = 0x80000000;
            }
          }
          else {
            uVar7 = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = pwVar8;
        }
        if ((param_4 & 2) != 0) {
          uVar7 = -uVar7;
        }
        return uVar7;
      }
      wVar2 = FUN_14021af0(wVar2);
      uVar6 = wVar2 - 0x37;
    }
    else {
      uVar6 = wVar2 - 0x30;
    }
    if (param_3 <= uVar6) goto LAB_14020bac;
    uVar9 = param_4 | 8;
    if ((uVar7 < uVar4) || ((uVar4 == uVar7 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3)))))
    {
      uVar7 = uVar7 * param_3 + uVar6;
    }
    else {
      uVar9 = param_4 | 0xc;
    }
    wVar2 = *pwVar8;
    pwVar8 = pwVar8 + 1;
    param_4 = uVar9;
  } while( true );
}



/* ==== __break @ 14020c56 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c56-14020c56
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c57 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c57-14020c57
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c58 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c58-14020c58
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c59-14020c59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c5a-14020c5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c5b-14020c5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c5c-14020c5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c5d-14020c5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c5e-14020c5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c5f-14020c5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14020c60 @ 14020c60 ==== 
 * signature: undefined __cdecl FUN_14020c60(wint_t * param_1, undefined4 * param_2, uint param_3)
 * body: 14020c60-14020c79
 */

void __cdecl FUN_14020c60(wint_t *param_1,undefined4 *param_2,uint param_3)

{
  FUN_14020a50(param_1,param_2,param_3,1);
  return;
}



/* ==== __break @ 14020c7a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7a-14020c7a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c7b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7b-14020c7b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c7c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7c-14020c7c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7d-14020c7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7e-14020c7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020c7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020c7f-14020c7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __strcmpi @ 14020c80 ==== 
 * signature: int __cdecl __strcmpi(char * _Str1, char * _Str2)
 * body: 14020c80-14020d46
 * note: Library Function - Single Match  __strcmpi  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __strcmpi
   
   Library: Visual Studio 1998 Release */

int __cdecl __strcmpi(char *_Str1,char *_Str2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  if (DAT_140272c0 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_14020cce;
        bVar5 = *_Str2;
        _Str2 = _Str2 + 1;
        bVar4 = *_Str1;
        _Str1 = _Str1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_14020cce:
    uVar7 = (uint)cVar6;
  }
  else {
    bVar2 = 0 < DAT_14029f80;
    if (bVar2) {
      __lock(0x13);
    }
    else {
      DAT_14029f84 = DAT_14029f84 + 1;
    }
    uVar9 = (uint)bVar2;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_14020d27;
        cVar6 = *_Str2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),cVar6);
        _Str2 = _Str2 + 1;
        cVar1 = *_Str1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),cVar1);
        _Str1 = _Str1 + 1;
      } while (cVar6 == cVar1);
      uVar8 = __tolower_lk(uVar8);
      uVar7 = __tolower_lk(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_14020d27:
    if (uVar9 == 0) {
      DAT_14029f84 = DAT_14029f84 + -1;
    }
    else {
      FUN_1401a650(0x13);
    }
  }
  return uVar7;
}



/* ==== FUN_14020d50 @ 14020d50 ==== 
 * signature: int __stdcall FUN_14020d50(void)
 * body: 14020d50-14020de7
 */

int FUN_14020d50(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 3;
  __lock(2);
  if (3 < DAT_14029e60) {
    iVar4 = 0xc;
    do {
      _File = *(FILE **)(DAT_14028e54 + iVar4);
      if (_File != (FILE *)0x0) {
        if ((_File->_flag & 0x83) != 0) {
          iVar1 = _fclose(_File);
          if (iVar1 != -1) {
            iVar2 = iVar2 + 1;
          }
        }
        if (0x4f < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_14028e54 + iVar4) + 0x20));
          FUN_1401dd10(*(LPVOID *)(DAT_14028e54 + iVar4));
          *(undefined4 *)(DAT_14028e54 + iVar4) = 0;
        }
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_14029e60);
  }
  FUN_1401a650(2);
  return iVar2;
}



/* ==== FUN_14020df0 @ 14020df0 ==== 
 * signature: int __cdecl FUN_14020df0(FILE * param_1)
 * body: 14020df0-14020e28
 */

int __cdecl FUN_14020df0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 == (FILE *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  FID_conflict___lock_file(param_1);
  iVar1 = __fflush_lk(param_1);
  FID_conflict___lock_file(param_1);
  return iVar1;
}



/* ==== __break @ 14020e29 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e29-14020e29
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020e2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e2a-14020e2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020e2b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e2b-14020e2b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020e2c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e2c-14020e2c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020e2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e2d-14020e2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020e2e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e2e-14020e2e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020e2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020e2f-14020e2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __fflush_lk @ 14020e30 ==== 
 * signature: int __cdecl __fflush_lk(FILE * param_1)
 * body: 14020e30-14020e6b
 * note: Library Function - Single Match  __fflush_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fflush_lk
   
   Library: Visual Studio 1998 Release */

int __cdecl __fflush_lk(FILE *param_1)

{
  int iVar1;
  
  iVar1 = __flush(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1->_flag & 0x4000) != 0) {
    iVar1 = __commit(param_1->_file);
    return (iVar1 == 0) - 1;
  }
  return 0;
}



/* ==== __flush @ 14020e70 ==== 
 * signature: int __cdecl __flush(FILE * _File)
 * body: 14020e70-14020ed3
 * note: Library Function - Single Match  __flush  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 1998 Release */

int __cdecl __flush(FILE *_File)

{
  uint uVar1;
  uint _MaxCharCount;
  int iVar2;
  
  iVar2 = 0;
  if ((((byte)_File->_flag & 3) == 2) && ((_File->_flag & 0x108U) != 0)) {
    _MaxCharCount = (int)_File->_ptr - (int)_File->_base;
    if (0 < (int)_MaxCharCount) {
      uVar1 = __write(_File->_file,_File->_base,_MaxCharCount);
      if (uVar1 == _MaxCharCount) {
        if ((_File->_flag & 0x80U) != 0) {
          _File->_flag = _File->_flag & 0xfffffffd;
        }
      }
      else {
        _File->_flag = _File->_flag | 0x20;
        iVar2 = -1;
      }
    }
  }
  _File->_ptr = _File->_base;
  _File->_cnt = 0;
  return iVar2;
}



/* ==== FUN_14020ee0 @ 14020ee0 ==== 
 * signature: undefined __stdcall FUN_14020ee0(void)
 * body: 14020ee0-14020ee0
 */

void FUN_14020ee0(void)

{
  flsall(1);
  return;
}



/* ==== FUN_14020ee2 @ 14020ee2 ==== 
 * signature: undefined __stdcall FUN_14020ee2(void)
 * body: 14020ee2-14020eea
 */

void FUN_14020ee2(void)

{
  int unaff_retaddr;
  
  flsall(unaff_retaddr);
  return;
}



/* ==== __break @ 14020eeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020eeb-14020eeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020eec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020eec-14020eec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020eed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020eed-14020eed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020eee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020eee-14020eee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14020eef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020eef-14020eef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== flsall @ 14020ef0 ==== 
 * signature: int __cdecl flsall(int param_1)
 * body: 14020ef0-14020fba
 * note: Library Function - Single Match  _flsall  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _flsall
   
   Library: Visual Studio 1998 Release */

int __cdecl flsall(int param_1)

{
  void *_File;
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int _Index;
  int local_4;
  
  iVar3 = 0;
  _Index = 0;
  local_4 = 0;
  __lock(2);
  if (0 < DAT_14029e60) {
    iVar4 = 0;
    do {
      _File = *(void **)(DAT_14028e54 + iVar4);
      if ((_File != (void *)0x0) && ((*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
        FID_conflict___lock_file2(_Index,_File);
        pFVar1 = *(FILE **)(DAT_14028e54 + iVar4);
        if ((pFVar1->_flag & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = __fflush_lk(pFVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if (((param_1 == 0) && ((pFVar1->_flag & 2U) != 0)) &&
                  (iVar2 = __fflush_lk(pFVar1), iVar2 == -1)) {
            local_4 = -1;
          }
        }
        FID_conflict___lock_file2(_Index,*(void **)(DAT_14028e54 + iVar4));
      }
      iVar4 = iVar4 + 4;
      _Index = _Index + 1;
    } while (_Index < DAT_14029e60);
  }
  FUN_1401a650(2);
  if (param_1 != 1) {
    iVar3 = local_4;
  }
  return iVar3;
}



/* ==== __dosmaperr @ 14020fc0 ==== 
 * signature: void __cdecl __dosmaperr(ulong param_1)
 * body: 14020fc0-14021032
 * note: Library Function - Single Match  __dosmaperr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 1998 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = FUN_14021050();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_140282b0;
  do {
    if (*puVar1 == param_1) {
      piVar2 = FUN_14021040();
      *piVar2 = *(int *)(iVar3 * 8 + 0x140282b4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_14028418);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    piVar2 = FUN_14021040();
    *piVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    piVar2 = FUN_14021040();
    *piVar2 = 8;
    return;
  }
  piVar2 = FUN_14021040();
  *piVar2 = 0x16;
  return;
}



/* ==== FUN_14021040 @ 14021040 ==== 
 * signature: int * __stdcall FUN_14021040(void)
 * body: 14021040-14021048
 */

int * FUN_14021040(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}



/* ==== FUN_14021050 @ 14021050 ==== 
 * signature: ulong * __stdcall FUN_14021050(void)
 * body: 14021050-14021058
 */

ulong * FUN_14021050(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}



/* ==== FUN_14021060 @ 14021060 ==== 
 * signature: undefined __cdecl FUN_14021060(int * param_1, int * param_2)
 * body: 14021060-14021305
 */

void __cdecl FUN_14021060(int *param_1,int *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  ushort local_1a;
  undefined4 local_18;
  short local_14 [4];
  int local_c;
  int local_8;
  int local_4;
  
  local_18._0_1_ = 0;
  local_18._1_1_ = 0;
  local_18._2_2_ = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  uVar2 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar4 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar5 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  local_1a = uVar4 + uVar5;
  if (((0x7ffe < uVar4) || (0x7ffe < uVar5)) || (0xbffd < local_1a)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar2 == 0) & 0x80000000) - 0x8000;
    return;
  }
  if (local_1a < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if (((uVar4 == 0) && (local_1a = local_1a + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
     ((param_1[1] == 0 && (*param_1 == 0)))) {
    *(undefined2 *)((int)param_1 + 10) = 0;
    return;
  }
  if (((uVar5 == 0) && (local_1a = local_1a + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
     ((param_2[1] == 0 && (*param_2 == 0)))) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  local_8 = 0;
  local_c = 0;
  do {
    iVar6 = 8;
    iVar8 = local_c * 2;
    local_4 = 5 - local_c;
    if (0 < 5 - local_c) {
      puVar1 = (uint *)((int)&local_18 + local_8);
      do {
        iVar3 = ___addl(*puVar1,(uint)*(ushort *)(iVar6 + (int)param_2) *
                                (uint)*(ushort *)(iVar8 + (int)param_1),puVar1);
        if (iVar3 != 0) {
          *(short *)((int)local_14 + local_8) = *(short *)((int)local_14 + local_8) + 1;
        }
        iVar8 = iVar8 + 2;
        iVar6 = iVar6 + -2;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    local_8 = local_8 + 2;
    local_c = local_c + 1;
  } while (local_c < 5);
  local_1a = local_1a + 0xc002;
  if (0 < (short)local_1a) {
    do {
      if ((local_14[3] & 0x8000U) != 0) break;
      ___shl_12(&local_18);
      local_1a = local_1a - 1;
    } while (0 < (short)local_1a);
    if (0 < (short)local_1a) goto LAB_14021233;
  }
  local_1a = local_1a - 1;
  if ((short)local_1a < 0) {
    iVar8 = CONCAT22(local_18._2_2_,CONCAT11(local_18._1_1_,(byte)local_18));
    sVar7 = -local_1a;
    local_1a = 0;
    do {
      if (((byte)local_18 & 1) != 0) {
        iVar8 = iVar8 + 1;
      }
      ___shr_12(&local_18);
      sVar7 = sVar7 + -1;
    } while (sVar7 != 0);
  }
  else {
    iVar8 = CONCAT22(local_18._2_2_,CONCAT11(local_18._1_1_,(byte)local_18));
  }
  if (iVar8 != 0) {
    local_18._0_1_ = (byte)local_18 | 1;
  }
LAB_14021233:
  iVar6 = CONCAT22(local_14[2],local_14[1]);
  iVar8 = CONCAT22(local_14[0],local_18._2_2_);
  if (0x8000 < CONCAT11(local_18._1_1_,(byte)local_18)) {
    if (CONCAT22(local_14[0],local_18._2_2_) == -1) {
      iVar8 = 0;
      if (CONCAT22(local_14[2],local_14[1]) == -1) {
        if (local_14[3] == 0xffff) {
          local_14[3] = 0x8000;
          local_1a = local_1a + 1;
          iVar6 = 0;
          iVar8 = 0;
        }
        else {
          local_14[3] = local_14[3] + 1;
          iVar6 = 0;
          iVar8 = 0;
        }
      }
      else {
        iVar6 = CONCAT22(local_14[2],local_14[1]) + 1;
      }
    }
    else {
      iVar8 = CONCAT22(local_14[0],local_18._2_2_) + 1;
      iVar6 = CONCAT22(local_14[2],local_14[1]);
    }
  }
  local_14[0] = (short)((uint)iVar8 >> 0x10);
  local_18._2_2_ = (undefined2)iVar8;
  local_14[2] = (short)((uint)iVar6 >> 0x10);
  local_14[1] = (short)iVar6;
  if (local_1a < 0x7fff) {
    *(undefined2 *)param_1 = local_18._2_2_;
    *(uint *)((int)param_1 + 2) = CONCAT22(local_14[1],local_14[0]);
    *(uint *)((int)param_1 + 6) = CONCAT22(local_14[3],local_14[2]);
    *(ushort *)((int)param_1 + 10) = local_1a | uVar2;
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = (-(uint)(uVar2 == 0) & 0x80000000) - 0x8000;
  return;
}



/* ==== ___multtenpow12 @ 14021310 ==== 
 * signature: undefined __cdecl ___multtenpow12(int * param_1, uint param_2, int param_3)
 * body: 14021310-1402138a
 * note: Library Function - Single Match  ___multtenpow12  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___multtenpow12
   
   Library: Visual Studio 1998 Release */

void __cdecl ___multtenpow12(int *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  undefined *puVar4;
  uint uVar5;
  ushort local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  undefined4 local_4;
  
  puVar4 = &DAT_14028478;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      puVar4 = &DAT_140285d8;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      puVar4 = puVar4 + 0x54;
      uVar5 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar5;
      if (uVar2 != 0) {
        puVar1 = (ushort *)(puVar4 + uVar2 * 0xc);
        puVar3 = puVar1;
        if (0x7fff < *puVar1) {
          puVar3 = &local_c;
          local_c = (ushort)*(undefined4 *)puVar1;
          uStack_a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar1 >> 0x10);
          uStack_a._2_2_ = (undefined2)*(undefined4 *)(puVar1 + 2);
          uStack_6 = (undefined2)((uint)*(undefined4 *)(puVar1 + 2) >> 0x10);
          local_4 = *(undefined4 *)(puVar1 + 4);
          uStack_a = CONCAT22(uStack_a._2_2_,(undefined2)uStack_a) + -1;
        }
        FUN_14021060(param_1,(int *)puVar3);
      }
    }
  }
  return;
}



/* ==== FUN_14021390 @ 14021390 ==== 
 * signature: undefined __stdcall FUN_14021390(void)
 * body: 14021390-140213c1
 */

void FUN_14021390(void)

{
  if (DAT_140284d4 == 0) {
    __lock(0xb);
    if (DAT_140284d4 == 0) {
      FUN_140213f0();
      DAT_140284d4 = DAT_140284d4 + 1;
    }
    FUN_1401a650(0xb);
  }
  return;
}



/* ==== FUN_140213d0 @ 140213d0 ==== 
 * signature: undefined __stdcall FUN_140213d0(void)
 * body: 140213d0-140213e9
 */

void FUN_140213d0(void)

{
  __lock(0xb);
  FUN_140213f0();
  FUN_1401a650(0xb);
  return;
}



/* ==== __break @ 140213ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213ea-140213ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140213eb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213eb-140213eb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140213ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213ec-140213ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140213ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213ed-140213ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140213ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213ee-140213ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140213ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213ef-140213ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_140213f0 @ 140213f0 ==== 
 * signature: undefined __stdcall FUN_140213f0(void)
 * body: 140213f0-140216cc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140213f0(void)

{
  byte bVar1;
  byte bVar2;
  byte *_Source;
  DWORD DVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  __lock(0xc);
  DAT_14028988 = 0;
  DAT_140284c8 = 0xffffffff;
  DAT_140284b8 = 0xffffffff;
  _Source = (byte *)FID_conflict___getenv_lk("TZ");
  if (_Source == (byte *)0x0) {
    FUN_1401a650(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_14028990);
    if (DVar3 != 0) {
      DAT_14028418 = DAT_14028990 * 0x3c;
      DAT_14028988 = 1;
      if (DAT_140289d6 != 0) {
        DAT_14028418 = DAT_14028418 + DAT_140289e4 * 0x3c;
      }
      if ((DAT_14028a2a == 0) || (DAT_14028a38 == 0)) {
        DAT_1402841c = 0;
      }
      else {
        DAT_1402841c = 1;
        _DAT_14028420 = (DAT_14028a38 - DAT_140289e4) * 0x3c;
      }
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_140284a8,&DAT_14028994,0x40);
      FID_conflict__mbtowc((wchar_t *)PTR_DAT_140284ac,&DAT_140289e8,0x40);
      PTR_DAT_140284ac[0x3f] = 0;
      PTR_DAT_140284a8[0x3f] = PTR_DAT_140284ac[0x3f];
      return;
    }
  }
  else {
    if (*_Source != 0) {
      pbVar9 = _Source;
      pbVar8 = DAT_140284b0;
      if (DAT_140284b0 == (byte *)0x0) {
LAB_14021558:
        FUN_1401dd10(DAT_140284b0);
        uVar6 = 0xffffffff;
        pbVar9 = _Source;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar1 != 0);
        DAT_140284b0 = (byte *)FUN_1401def0(~uVar6);
        if (DAT_140284b0 == (byte *)0x0) {
          FUN_1401a650(0xc);
          return;
        }
        uVar6 = 0xffffffff;
        pbVar9 = _Source;
        do {
          pbVar8 = pbVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar9 + 1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar8;
        } while (bVar1 != 0);
        uVar6 = ~uVar6;
        pbVar9 = pbVar8 + -uVar6;
        pbVar8 = DAT_140284b0;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar8 = *(undefined4 *)pbVar9;
          pbVar9 = pbVar9 + 4;
          pbVar8 = pbVar8 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar8 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar8 = pbVar8 + 1;
        }
        FUN_1401a650(0xc);
        pbVar9 = _Source + 3;
        _strncpy(PTR_DAT_140284a8,(char *)_Source,3);
        PTR_DAT_140284a8[3] = 0;
        bVar1 = *pbVar9;
        if (bVar1 == 0x2d) {
          pbVar9 = _Source + 4;
        }
        lVar5 = _atol((char *)pbVar9);
        DAT_14028418 = lVar5 * 0xe10;
        for (; (bVar2 = *pbVar9, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
            pbVar9 = pbVar9 + 1) {
        }
        if (*pbVar9 == 0x3a) {
          pbVar9 = pbVar9 + 1;
          lVar5 = _atol((char *)pbVar9);
          DAT_14028418 = DAT_14028418 + lVar5 * 0x3c;
          bVar2 = *pbVar9;
          while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
            pbVar9 = pbVar9 + 1;
            bVar2 = *pbVar9;
          }
          if (*pbVar9 == 0x3a) {
            pbVar9 = pbVar9 + 1;
            lVar5 = _atol((char *)pbVar9);
            DAT_14028418 = DAT_14028418 + lVar5;
            bVar2 = *pbVar9;
            while (('/' < (char)bVar2 && ((char)*pbVar9 < ':'))) {
              pbVar9 = pbVar9 + 1;
              bVar2 = *pbVar9;
            }
          }
        }
        if (bVar1 == 0x2d) {
          DAT_14028418 = -DAT_14028418;
        }
        DAT_1402841c = (int)(char)*pbVar9;
        if (DAT_1402841c != 0) {
          _strncpy(PTR_DAT_140284ac,(char *)pbVar9,3);
          PTR_DAT_140284ac[3] = 0;
          return;
        }
        *PTR_DAT_140284ac = 0;
        return;
      }
      do {
        bVar1 = *pbVar9;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_1402154b:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_14021550;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar9[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_1402154b;
        pbVar9 = pbVar9 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_14021550:
      if (iVar4 != 0) goto LAB_14021558;
    }
    FUN_1401a650(0xc);
  }
  return;
}



/* ==== FUN_140216d0 @ 140216d0 ==== 
 * signature: undefined4 __cdecl FUN_140216d0(int * param_1)
 * body: 140216d0-140216f7
 */

undefined4 __cdecl FUN_140216d0(int *param_1)

{
  undefined4 uVar1;
  
  __lock(0xb);
  uVar1 = FUN_14021700(param_1);
  FUN_1401a650(0xb);
  return uVar1;
}



/* ==== __break @ 140216f8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216f8-140216f8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140216f9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216f9-140216f9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140216fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fa-140216fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140216fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fb-140216fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140216fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fc-140216fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140216fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fd-140216fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140216fe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fe-140216fe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140216ff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216ff-140216ff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14021700 @ 14021700 ==== 
 * signature: undefined4 __stdcall FUN_14021700(int * param_1)
 * body: 14021700-14021700
 */

undefined4 FUN_14021700(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  piVar1 = param_1;
  if (DAT_1402841c == 0) {
    return 0;
  }
  uVar6 = param_1[5];
  if ((DAT_140284b8 == uVar6) && (DAT_140284c8 == uVar6)) goto LAB_1402189d;
  if (DAT_14028988 == 0) {
    FUN_14021960(1,1,uVar6,4,1,0,0,2,0,0,0);
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
    param_1 = (int *)param_1[5];
    uVar7 = 2;
    uVar6 = 0;
    uVar5 = 5;
    uVar4 = 10;
LAB_14021891:
    uVar2 = 0;
    iVar3 = 1;
  }
  else {
    if (DAT_14028a28 != 0) {
      uVar10 = (uint)DAT_14028a2e;
      uVar5 = 0;
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar5 = (uint)DAT_14028a2c;
      uVar9 = (uint)DAT_14028a2e;
    }
    FUN_14021960(1,(uint)(DAT_14028a28 == 0),uVar6,(uint)DAT_14028a2a,uVar9,uVar5,uVar10,
                 (uint)DAT_14028a30,(uint)DAT_14028a32,(uint)DAT_14028a34,(uint)DAT_14028a36);
    if (DAT_140289d4 == 0) {
      uVar9 = (uint)DAT_140289e2;
      uVar10 = (uint)DAT_140289e0;
      uVar8 = (uint)DAT_140289de;
      uVar7 = (uint)DAT_140289dc;
      uVar6 = (uint)DAT_140289d8;
      uVar5 = (uint)DAT_140289da;
      param_1 = (int *)param_1[5];
      uVar4 = (uint)DAT_140289d6;
      goto LAB_14021891;
    }
    uVar9 = (uint)DAT_140289e2;
    uVar10 = (uint)DAT_140289e0;
    uVar8 = (uint)DAT_140289de;
    uVar7 = (uint)DAT_140289dc;
    uVar2 = (uint)DAT_140289da;
    param_1 = (int *)param_1[5];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = (uint)DAT_140289d6;
    iVar3 = 0;
  }
  FUN_14021960(0,iVar3,(uint)param_1,uVar4,uVar5,uVar6,uVar2,uVar7,uVar8,uVar10,uVar9);
LAB_1402189d:
  iVar3 = piVar1[7];
  if (DAT_140284bc < DAT_140284cc) {
    if ((iVar3 < DAT_140284bc) || (DAT_140284cc < iVar3)) {
      return 0;
    }
    if ((DAT_140284bc < iVar3) && (iVar3 < DAT_140284cc)) {
      return 1;
    }
  }
  else {
    if (iVar3 < DAT_140284cc) {
      return 1;
    }
    if (DAT_140284bc < iVar3) {
      return 1;
    }
    if ((DAT_140284cc < iVar3) && (iVar3 < DAT_140284bc)) {
      return 0;
    }
  }
  iVar3 = ((piVar1[2] * 0x3c + piVar1[1]) * 0x3c + *piVar1) * 1000;
  if (piVar1[7] == DAT_140284bc) {
    if (iVar3 < DAT_140284c0) {
      return 0;
    }
  }
  else if (DAT_140284d0 <= iVar3) {
    return 0;
  }
  return 1;
}



/* ==== FUN_14021707 @ 14021707 ==== 
 * signature: undefined4 __cdecl FUN_14021707(int * param_1)
 * body: 14021707-1402195a
 */

undefined4 __cdecl FUN_14021707(int *param_1)

{
  int *piVar1;
  uint uVar2;
  bool in_ZF;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  piVar1 = param_1;
  if (in_ZF) {
    return 0;
  }
  uVar6 = param_1[5];
  if ((DAT_140284b8 == uVar6) && (DAT_140284c8 == uVar6)) goto LAB_1402189d;
  if (DAT_14028988 == 0) {
    FUN_14021960(1,1,uVar6,4,1,0,0,2,0,0,0);
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
    param_1 = (int *)param_1[5];
    uVar7 = 2;
    uVar6 = 0;
    uVar5 = 5;
    uVar4 = 10;
LAB_14021891:
    uVar2 = 0;
    iVar3 = 1;
  }
  else {
    if (DAT_14028a28 != 0) {
      uVar10 = (uint)DAT_14028a2e;
      uVar5 = 0;
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar5 = (uint)DAT_14028a2c;
      uVar9 = (uint)DAT_14028a2e;
    }
    FUN_14021960(1,(uint)(DAT_14028a28 == 0),uVar6,(uint)DAT_14028a2a,uVar9,uVar5,uVar10,
                 (uint)DAT_14028a30,(uint)DAT_14028a32,(uint)DAT_14028a34,(uint)DAT_14028a36);
    if (DAT_140289d4 == 0) {
      uVar9 = (uint)DAT_140289e2;
      uVar10 = (uint)DAT_140289e0;
      uVar8 = (uint)DAT_140289de;
      uVar7 = (uint)DAT_140289dc;
      uVar6 = (uint)DAT_140289d8;
      uVar5 = (uint)DAT_140289da;
      param_1 = (int *)param_1[5];
      uVar4 = (uint)DAT_140289d6;
      goto LAB_14021891;
    }
    uVar9 = (uint)DAT_140289e2;
    uVar10 = (uint)DAT_140289e0;
    uVar8 = (uint)DAT_140289de;
    uVar7 = (uint)DAT_140289dc;
    uVar2 = (uint)DAT_140289da;
    param_1 = (int *)param_1[5];
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = (uint)DAT_140289d6;
    iVar3 = 0;
  }
  FUN_14021960(0,iVar3,(uint)param_1,uVar4,uVar5,uVar6,uVar2,uVar7,uVar8,uVar10,uVar9);
LAB_1402189d:
  iVar3 = piVar1[7];
  if (DAT_140284bc < DAT_140284cc) {
    if ((iVar3 < DAT_140284bc) || (DAT_140284cc < iVar3)) {
      return 0;
    }
    if ((DAT_140284bc < iVar3) && (iVar3 < DAT_140284cc)) {
      return 1;
    }
  }
  else {
    if (iVar3 < DAT_140284cc) {
      return 1;
    }
    if (DAT_140284bc < iVar3) {
      return 1;
    }
    if ((DAT_140284cc < iVar3) && (iVar3 < DAT_140284bc)) {
      return 0;
    }
  }
  iVar3 = ((piVar1[2] * 0x3c + piVar1[1]) * 0x3c + *piVar1) * 1000;
  if (piVar1[7] == DAT_140284bc) {
    if (iVar3 < DAT_140284c0) {
      return 0;
    }
  }
  else if (DAT_140284d0 <= iVar3) {
    return 0;
  }
  return 1;
}



/* ==== __break @ 1402195b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402195b-1402195b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402195c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402195c-1402195c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402195d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402195d-1402195d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402195e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402195e-1402195e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402195f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402195f-1402195f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14021960 @ 14021960 ==== 
 * signature: undefined __stdcall FUN_14021960(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
 * body: 14021960-14021960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021960(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar3 = *(int *)(&DAT_14028794 + param_4 * 4);
    }
    else {
      iVar3 = *(int *)(&DAT_140287cc + param_4 * 4);
    }
    iVar2 = (int)(((int)(param_3 - 1) >> 2) + param_3 * 0x16d + -0x63db + iVar3 + 1) % 7;
    iVar1 = param_5;
    if (iVar2 < param_6) {
      iVar1 = param_5 + -1;
    }
    iVar3 = iVar3 + 1 + (iVar1 * 7 - iVar2) + param_6;
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar1 = *(int *)(&DAT_14028798 + param_4 * 4);
      }
      else {
        iVar1 = *(int *)(&DAT_140287d0 + param_4 * 4);
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar3 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar3 = *(int *)(&DAT_14028794 + param_4 * 4);
    }
    else {
      iVar3 = *(int *)(&DAT_140287cc + param_4 * 4);
    }
    iVar3 = iVar3 + param_7;
  }
  if (param_1 != 1) {
    DAT_140284cc = iVar3;
    DAT_140284d0 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + _DAT_14028420 + param_10) * 1000;
    if (DAT_140284d0 < 0) {
      DAT_140284d0 = DAT_140284d0 + 86399999;
    }
    else if (86399999 < DAT_140284d0) {
      DAT_140284d0 = DAT_140284d0 + -86399999;
    }
    DAT_140284c8 = param_3;
    return;
  }
  DAT_140284bc = iVar3;
  DAT_140284b8 = param_3;
  DAT_140284c0 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000;
  return;
}



/* ==== FUN_14021964 @ 14021964 ==== 
 * signature: undefined __thiscall FUN_14021964(void * this, int param_1, int param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
 * body: 14021964-14021aea
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_14021964(void *this,int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 1) {
    if (((uint)this & 3) == 0) {
      iVar3 = *(int *)(&DAT_14028794 + param_4 * 4);
    }
    else {
      iVar3 = *(int *)(&DAT_140287cc + param_4 * 4);
    }
    iVar2 = (((int)this + -1 >> 2) + (int)this * 0x16d + -0x63db + iVar3 + 1) % 7;
    iVar1 = param_5;
    if (iVar2 < param_6) {
      iVar1 = param_5 + -1;
    }
    iVar3 = iVar3 + 1 + (iVar1 * 7 - iVar2) + param_6;
    if (param_5 == 5) {
      if (((uint)this & 3) == 0) {
        iVar1 = *(int *)(&DAT_14028798 + param_4 * 4);
      }
      else {
        iVar1 = *(int *)(&DAT_140287d0 + param_4 * 4);
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar3 + -7;
      }
    }
  }
  else {
    if (((uint)this & 3) == 0) {
      iVar3 = *(int *)(&DAT_14028794 + param_4 * 4);
    }
    else {
      iVar3 = *(int *)(&DAT_140287cc + param_4 * 4);
    }
    iVar3 = iVar3 + param_7;
  }
  if (param_1 != 1) {
    DAT_140284cc = iVar3;
    DAT_140284d0 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + _DAT_14028420 + param_10) * 1000;
    if (DAT_140284d0 < 0) {
      DAT_140284d0 = DAT_140284d0 + 86399999;
    }
    else if (86399999 < DAT_140284d0) {
      DAT_140284d0 = DAT_140284d0 + -86399999;
    }
    DAT_140284c8 = this;
    return;
  }
  DAT_140284bc = iVar3;
  DAT_140284b8 = this;
  DAT_140284c0 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000;
  return;
}



/* ==== __break @ 14021aeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aeb-14021aeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021aec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aec-14021aec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021aed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aed-14021aed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021aee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aee-14021aee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021aef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aef-14021aef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14021af0 @ 14021af0 ==== 
 * signature: wint_t __cdecl FUN_14021af0(wint_t param_1)
 * body: 14021af0-14021b64
 */

wint_t __cdecl FUN_14021af0(wint_t param_1)

{
  bool bVar1;
  
  if (DAT_140272c0 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    bVar1 = DAT_14029f80 == 0;
    if (bVar1) {
      DAT_14029f84 = DAT_14029f84 + 1;
    }
    else {
      __lock(0x13);
    }
    param_1 = FID_conflict__towupper(param_1);
    if (!bVar1) {
      FUN_1401a650(0x13);
      return param_1;
    }
    DAT_14029f84 = DAT_14029f84 + -1;
  }
  return param_1;
}



/* ==== __break @ 14021b65 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b65-14021b65
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b66 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b66-14021b66
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b67 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b67-14021b67
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b68 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b68-14021b68
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b69 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b69-14021b69
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b6a-14021b6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b6b-14021b6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b6c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b6c-14021b6c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b6d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b6d-14021b6d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b6e-14021b6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021b6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021b6f-14021b6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FID_conflict:_towupper @ 14021b70 ==== 
 * signature: wint_t __cdecl FID_conflict:_towupper(wint_t _C)
 * body: 14021b70-14021c0b
 * note: Library Function - Multiple Matches With Different Base Names  __towupper_lk  _towupper  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __towupper_lk
    _towupper
   
   Library: Visual Studio 1998 Release */

wint_t __cdecl FID_conflict__towupper(wint_t _C)

{
  int iVar1;
  undefined2 in_stack_00000006;
  WCHAR local_2;
  
  if (_C == 0xffff) {
    return 0xffff;
  }
  if (DAT_140272c0 == (LPCWSTR)0x0) {
    if ((0x60 < _C) && (_C < 0x7b)) {
      __C = (uint)(ushort)(_C - 0x20);
    }
    return _C;
  }
  if (_C < 0x100) {
    iVar1 = _iswctype(_C,2);
    if (iVar1 == 0) {
      return _C;
    }
  }
  iVar1 = ___crtLCMapStringW(DAT_140272c0,0x200,(LPCWSTR)&_C,1,&local_2,1);
  if (iVar1 == 0) {
    return _C;
  }
  return local_2;
}



/* ==== _iswctype @ 14021c10 ==== 
 * signature: int __cdecl _iswctype(wint_t _C, wctype_t _Type)
 * body: 14021c10-14021c82
 * note: Library Function - Single Match  _iswctype  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _iswctype
   
   Library: Visual Studio 1998 Release */

int __cdecl _iswctype(wint_t _C,wctype_t _Type)

{
  BOOL BVar1;
  undefined2 in_stack_00000006;
  ushort local_2;
  
  if (_C == 0xffff) {
    return 0;
  }
  if (_C < 0x100) {
    local_2 = *(ushort *)(PTR_DAT_14026e74 + (uint)_C * 2);
LAB_14021c6c:
    return (uint)(local_2 & _Type);
  }
  if (DAT_140272c0 != 0) {
    BVar1 = ___crtGetStringTypeW(1,(LPCWSTR)&_C,1,&local_2,0,0);
    if (BVar1 != 0) goto LAB_14021c6c;
  }
  return 0;
}



/* ==== FUN_14021c90 @ 14021c90 ==== 
 * signature: undefined __cdecl FUN_14021c90(wint_t param_1, wctype_t param_2)
 * body: 14021c90-14021ca2
 */

void __cdecl FUN_14021c90(wint_t param_1,wctype_t param_2)

{
  _iswctype(param_1,param_2);
  return;
}



/* ==== __break @ 14021ca3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca3-14021ca3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021ca4 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca4-14021ca4
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021ca5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca5-14021ca5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021ca6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca6-14021ca6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021ca7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca7-14021ca7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021ca8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca8-14021ca8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021ca9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021ca9-14021ca9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021caa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021caa-14021caa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021cab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021cab-14021cab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021cac ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021cac-14021cac
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021cad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021cad-14021cad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021cae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021cae-14021cae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14021caf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021caf-14021caf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== _fclose @ 14021cb0 ==== 
 * signature: int __cdecl _fclose(FILE * _File)
 * body: 14021cb0-14021cee
 * note: Library Function - Single Match  _fclose  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _fclose
   
   Library: Visual Studio 1998 Release */

int __cdecl _fclose(FILE *_File)

{
  int iVar1;
  
  if ((_File->_flag & 0x40) != 0) {
    _File->_flag = 0;
    return -1;
  }
  FID_conflict___lock_file(_File);
  iVar1 = __fclose_lk(_File);
  FID_conflict___lock_file(_File);
  return iVar1;
}



/* ==== __fclose_lk @ 14021cf0 ==== 
 * signature: int __cdecl __fclose_lk(FILE * param_1)
 * body: 14021cf0-14021d4e
 * note: Library Function - Single Match  __fclose_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 1998 Release */

int __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1->_flag & 0x83) != 0) {
    iVar2 = __flush(param_1);
    __freebuf(param_1);
    iVar1 = __close(param_1->_file);
    if (iVar1 < 0) {
      iVar2 = -1;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_1401dd10(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return iVar2;
}



/* ==== __commit @ 14021d50 ==== 
 * signature: int __cdecl __commit(int _FileHandle)
 * body: 14021d50-14021df1
 * note: Library Function - Single Match  __commit  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __commit
   
   Library: Visual Studio 1998 Release */

int __cdecl __commit(int _FileHandle)

{
  HANDLE hFile;
  BOOL BVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_14029f70 <= (uint)_FileHandle) {
LAB_14021dde:
    piVar3 = FUN_14021040();
    *piVar3 = 9;
    return -1;
  }
  piVar3 = (int *)((int)&DAT_14029e70 + ((int)(_FileHandle & 0xffffffe7U) >> 3));
  iVar5 = (_FileHandle & 0x1fU) * 0x24;
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) == 0) goto LAB_14021dde;
  __lock_fhandle(_FileHandle);
  if ((*(byte *)(*piVar3 + 4 + iVar5) & 1) != 0) {
    DVar4 = 0;
    hFile = (HANDLE)FUN_14022830(_FileHandle);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar4 = GetLastError();
    }
    iVar5 = 0;
    if (DVar4 == 0) goto LAB_14021dcf;
    puVar2 = FUN_14021050();
    *puVar2 = DVar4;
  }
  iVar5 = -1;
  piVar3 = FUN_14021040();
  *piVar3 = 9;
LAB_14021dcf:
  __unlock_fhandle(_FileHandle);
  return iVar5;
}



/* ==== __write @ 14021e00 ==== 
 * signature: int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
 * body: 14021e00-14021e77
 * note: Library Function - Single Match  __write  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __write
   
   Library: Visual Studio 1998 Release */

int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_14029f70) &&
     ((*(byte *)(*(int *)((int)&DAT_14029e70 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = FUN_14021e80(_FileHandle,_Buf,_MaxCharCount);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_14021040();
  *piVar2 = 9;
  puVar3 = FUN_14021050();
  *puVar3 = 0;
  return -1;
}



/* ==== FUN_14021e80 @ 14021e80 ==== 
 * signature: int __cdecl FUN_14021e80(uint param_1, char * param_2, uint param_3)
 * body: 14021e80-1402207a
 */

int __cdecl FUN_14021e80(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  BOOL BVar2;
  int *piVar3;
  ulong *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  ulong local_418;
  DWORD local_414;
  int *local_410;
  int local_40c;
  DWORD local_408;
  char local_404 [1028];
  
  iVar5 = 0;
  local_408 = 0;
  if (param_3 == 0) {
    return 0;
  }
  local_410 = (int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3));
  local_40c = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)(*local_410 + 4 + local_40c) & 0x20) != 0) {
    __lseek_lk(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)(local_40c + *local_410) + 1) & 0x80) == 0) {
    BVar2 = WriteFile(*(HANDLE *)(local_40c + *local_410),param_2,param_3,&local_414,
                      (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
LAB_14021fb4:
      local_418 = GetLastError();
    }
    else {
      local_418 = 0;
      local_408 = local_414;
    }
  }
  else {
    local_418 = 0;
    pcVar7 = param_2;
    do {
      if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
      pcVar6 = local_404;
      do {
        if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        if (cVar1 == '\n') {
          *pcVar6 = '\r';
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while ((int)pcVar6 - (int)local_404 < 0x400);
      BVar2 = WriteFile(*(HANDLE *)(*local_410 + local_40c),local_404,(int)pcVar6 - (int)local_404,
                        &local_414,(LPOVERLAPPED)0x0);
      if (BVar2 == 0) goto LAB_14021fb4;
      local_408 = local_408 + local_414;
    } while ((int)pcVar6 - (int)local_404 <= (int)local_414);
  }
  if (local_408 != 0) {
    return local_408 - iVar5;
  }
  if (local_418 == 0) {
    if (((*(byte *)(*local_410 + 4 + local_40c) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    piVar3 = FUN_14021040();
    *piVar3 = 0x1c;
    puVar4 = FUN_14021050();
    *puVar4 = 0;
    return -1;
  }
  if (local_418 != 5) {
    __dosmaperr(local_418);
    return -1;
  }
  piVar3 = FUN_14021040();
  *piVar3 = 9;
  puVar4 = FUN_14021050();
  *puVar4 = 5;
  return -1;
}



/* ==== FID_conflict:_mbtowc @ 14022080 ==== 
 * signature: int __cdecl FID_conflict:_mbtowc(wchar_t * _DstCh, char * _SrcCh, size_t _SrcSizeInBytes)
 * body: 14022080-140220da
 * note: Library Function - Multiple Matches With Different Base Names  _mbstowcs  _mbtowc  _wcstombs  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    _mbstowcs
    _mbtowc
    _wcstombs
   
   Library: Visual Studio 1998 Release */

int __cdecl FID_conflict__mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = DAT_14029f80 == 0;
  if (bVar2) {
    DAT_14029f84 = DAT_14029f84 + 1;
  }
  else {
    __lock(0x13);
  }
  uVar1 = FUN_140220e0((LPSTR)_DstCh,(LPCWSTR)_SrcCh,_SrcSizeInBytes);
  if (!bVar2) {
    FUN_1401a650(0x13);
    return uVar1;
  }
  DAT_14029f84 = DAT_14029f84 + -1;
  return uVar1;
}



/* ==== FUN_140220e0 @ 140220e0 ==== 
 * signature: uint __cdecl FUN_140220e0(LPSTR param_1, LPCWSTR param_2, uint param_3)
 * body: 140220e0-14022349
 */

uint __cdecl FUN_140220e0(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  DWORD DVar5;
  int iVar6;
  CHAR local_6 [2];
  BOOL local_4;
  
  uVar2 = 0;
  local_4 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    return uVar2;
  }
  if (param_1 == (LPSTR)0x0) {
    if (DAT_140272c0 == 0) {
      uVar2 = FUN_1401e700(param_2);
      return uVar2;
    }
    iVar3 = WideCharToMultiByte(DAT_140272d0,0x220,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_4);
    if ((iVar3 != 0) && (local_4 == 0)) {
      return iVar3 - 1;
    }
    piVar4 = FUN_14021040();
    *piVar4 = 0x2a;
    uVar2 = 0xffffffff;
  }
  else if (DAT_140272c0 == 0) {
    if (param_3 != 0) {
      while( true ) {
        if (0xff < (ushort)*param_2) {
          piVar4 = FUN_14021040();
          *piVar4 = 0x2a;
          return 0xffffffff;
        }
        param_1[uVar2] = (CHAR)*param_2;
        if (*param_2 == L'\0') break;
        uVar2 = uVar2 + 1;
        param_2 = param_2 + 1;
        if (param_3 <= uVar2) {
          return uVar2;
        }
      }
    }
  }
  else {
    if (DAT_1402707c != 1) {
      iVar3 = WideCharToMultiByte(DAT_140272d0,0x220,param_2,-1,param_1,param_3,(LPCSTR)0x0,&local_4
                                 );
      if (iVar3 == 0) {
        if ((local_4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
          uVar2 = 0;
          if (param_3 != 0) {
            do {
              iVar3 = WideCharToMultiByte(DAT_140272d0,0,param_2,1,local_6,DAT_1402707c,(LPCSTR)0x0,
                                          &local_4);
              if ((iVar3 == 0) || (local_4 != 0)) {
                piVar4 = FUN_14021040();
                *piVar4 = 0x2a;
                return 0xffffffff;
              }
              if (param_3 < uVar2 + iVar3) {
                return uVar2;
              }
              iVar6 = 0;
              if (0 < iVar3) {
                do {
                  cVar1 = local_6[iVar6];
                  param_1[uVar2] = cVar1;
                  if (cVar1 == '\0') {
                    return uVar2;
                  }
                  iVar6 = iVar6 + 1;
                  uVar2 = uVar2 + 1;
                } while (iVar6 < iVar3);
              }
              param_2 = param_2 + 1;
            } while (uVar2 < param_3);
          }
          return uVar2;
        }
      }
      else if (local_4 == 0) {
        return iVar3 - 1;
      }
      piVar4 = FUN_14021040();
      *piVar4 = 0x2a;
      return 0xffffffff;
    }
    if (param_3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = wcsncnt(param_2,param_3);
    }
    uVar2 = WideCharToMultiByte(DAT_140272d0,0x220,param_2,iVar3,param_1,iVar3,(LPCSTR)0x0,&local_4)
    ;
    if ((uVar2 == 0) || (local_4 != 0)) {
      piVar4 = FUN_14021040();
      *piVar4 = 0x2a;
      return 0xffffffff;
    }
    if (param_1[uVar2 - 1] == '\0') {
      return uVar2 - 1;
    }
  }
  return uVar2;
}



/* ==== wcsncnt @ 14022350 ==== 
 * signature: int __cdecl wcsncnt(short * param_1, int param_2)
 * body: 14022350-14022380
 * note: Library Function - Single Match  _wcsncnt  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _wcsncnt
   
   Library: Visual Studio 1998 Release */

int __cdecl wcsncnt(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = param_2;
  for (psVar2 = param_1; (iVar1 != 0 && (*psVar2 != 0)); psVar2 = psVar2 + 1) {
    iVar1 = iVar1 + -1;
  }
  if ((iVar1 != 0) && (*psVar2 == 0)) {
    param_2 = ((int)psVar2 - (int)param_1 >> 1) + 1;
  }
  return param_2;
}



/* ==== FUN_14022390 @ 14022390 ==== 
 * signature: char * __cdecl FUN_14022390(char * param_1)
 * body: 14022390-140223b7
 */

char * __cdecl FUN_14022390(char *param_1)

{
  char *pcVar1;
  
  __lock(0xc);
  pcVar1 = FID_conflict___getenv_lk(param_1);
  FUN_1401a650(0xc);
  return pcVar1;
}



/* ==== __break @ 140223b8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223b8-140223b8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140223b9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223b9-140223b9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140223ba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223ba-140223ba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140223bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223bb-140223bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140223bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223bc-140223bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140223bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223bd-140223bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140223be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223be-140223be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 140223bf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140223bf-140223bf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FID_conflict:__getenv_lk @ 140223c0 ==== 
 * signature: char * __cdecl FID_conflict:__getenv_lk(char * _VarName)
 * body: 140223c0-14022455
 * note: Library Function - Multiple Matches With Different Base Names  __getenv_lk  _getenv  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __getenv_lk
    _getenv
   
   Library: Visual Studio 1998 Release */

char * __cdecl FID_conflict___getenv_lk(char *_VarName)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  if (DAT_140272fc == (int *)0x0) {
    if ((DAT_14027304 != 0) && (iVar2 = ___wtomb_environ(), iVar2 != 0)) {
      return (char *)0x0;
    }
    if (DAT_140272fc == (int *)0x0) {
      return (char *)0x0;
    }
  }
  if (_VarName != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = _VarName;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    iVar2 = *DAT_140272fc;
    piVar5 = DAT_140272fc;
    while (iVar2 != 0) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)*piVar5;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (((uVar3 < ~uVar4 - 1) && (((uchar *)*piVar5)[uVar3] == '=')) &&
         (iVar2 = __mbsnbicoll((uchar *)*piVar5,(uchar *)_VarName,uVar3), iVar2 == 0)) {
        return (char *)(*piVar5 + 1 + uVar3);
      }
      piVar5 = piVar5 + 1;
      iVar2 = *piVar5;
    }
  }
  return (char *)0x0;
}



/* ==== __close @ 14022460 ==== 
 * signature: int __cdecl __close(int _FileHandle)
 * body: 14022460-140224cd
 * note: Library Function - Single Match  __close  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __close
   
   Library: Visual Studio 1998 Release */

int __cdecl __close(int _FileHandle)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (((uint)_FileHandle < DAT_14029f70) &&
     ((*(byte *)(*(int *)((int)&DAT_14029e70 + ((int)(_FileHandle & 0xffffffe7U) >> 3)) + 4 +
                (_FileHandle & 0x1fU) * 0x24) & 1) != 0)) {
    __lock_fhandle(_FileHandle);
    iVar1 = __close_lk(_FileHandle);
    __unlock_fhandle(_FileHandle);
    return iVar1;
  }
  piVar2 = FUN_14021040();
  *piVar2 = 9;
  puVar3 = FUN_14021050();
  *puVar3 = 0;
  return -1;
}



/* ==== __close_lk @ 140224d0 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 140224d0-14022558
 * note: Library Function - Single Match  __close_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  if ((param_1 == 1) || (param_1 == 2)) {
    iVar1 = FUN_14022830(2);
    iVar2 = FUN_14022830(1);
    if (iVar1 != iVar2) goto LAB_140224fa;
  }
  else {
LAB_140224fa:
    hObject = (HANDLE)FUN_14022830(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1402251a;
    }
  }
  DVar4 = 0;
LAB_1402251a:
  FUN_14022790(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}



/* ==== __freebuf @ 14022560 ==== 
 * signature: void __cdecl __freebuf(FILE * _File)
 * body: 14022560-14022598
 * note: Library Function - Single Match  __freebuf  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 1998 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_1401dd10(_File->_base);
    _File->_ptr = (char *)0x0;
    _File->_flag = _File->_flag & 0xfffffbf7;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



/* ==== __alloc_osfhnd @ 140225a0 ==== 
 * signature: int __cdecl __alloc_osfhnd(void)
 * body: 140225a0-140226dd
 * note: Library Function - Single Match  __alloc_osfhnd  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __alloc_osfhnd
   
   Library: Visual Studio 1998 Release */

int __cdecl __alloc_osfhnd(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int _Filehandle;
  int *piVar3;
  int iVar4;
  int local_4;
  
  _Filehandle = -1;
  iVar4 = 0;
  piVar3 = &DAT_14029e70;
  __lock(0x12);
  local_4 = 0;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_1401def0(0x480);
      if (puVar1 != (undefined4 *)0x0) {
        DAT_14029f70 = DAT_14029f70 + 0x20;
        (&DAT_14029e70)[local_4] = puVar1;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(undefined1 *)(puVar1 + 1) = 0;
            puVar2 = puVar1 + 9;
            *puVar1 = 0xffffffff;
            *(undefined1 *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar2;
          } while (puVar2 < (undefined4 *)((&DAT_14029e70)[local_4] + 0x480));
        }
        _Filehandle = local_4 << 5;
        __lock_fhandle(_Filehandle);
      }
      break;
    }
    if (puVar1 < puVar1 + 0x120) {
      do {
        if ((*(byte *)(puVar1 + 1) & 1) == 0) {
          if (puVar1[2] == 0) {
            __lock(0x11);
            if (puVar1[2] == 0) {
              InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
              puVar1[2] = puVar1[2] + 1;
            }
            FUN_1401a650(0x11);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            *puVar1 = 0xffffffff;
            _Filehandle = iVar4 + ((int)puVar1 - *piVar3) / 0x24;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
        }
        puVar1 = puVar1 + 9;
      } while (puVar1 < (undefined4 *)(*piVar3 + 0x480));
    }
    if (_Filehandle != -1) break;
    iVar4 = iVar4 + 0x20;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + 1;
  } while (piVar3 < &DAT_14029f70);
  FUN_1401a650(0x12);
  return _Filehandle;
}



/* ==== FUN_140226e0 @ 140226e0 ==== 
 * signature: undefined4 __cdecl FUN_140226e0(uint param_1, HANDLE param_2)
 * body: 140226e0-14022783
 */

undefined4 __cdecl FUN_140226e0(uint param_1,HANDLE param_2)

{
  int iVar1;
  int *piVar2;
  ulong *puVar3;
  
  if (param_1 < DAT_14029f70) {
    piVar2 = (int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar1 = (param_1 & 0x1f) * 0x24;
    if (*(int *)(*piVar2 + iVar1) == -1) {
      if (DAT_14026e50 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else if (param_1 == 1) {
          SetStdHandle(0xfffffff5,param_2);
        }
        else if (param_1 == 2) {
          SetStdHandle(0xfffffff4,param_2);
        }
      }
      *(HANDLE *)(*piVar2 + iVar1) = param_2;
      return 0;
    }
  }
  piVar2 = FUN_14021040();
  *piVar2 = 9;
  puVar3 = FUN_14021050();
  *puVar3 = 0;
  return 0xffffffff;
}



/* ==== __break @ 14022784 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022784-14022784
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022785 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022785-14022785
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022786 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022786-14022786
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022787 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022787-14022787
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022788 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022788-14022788
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022789 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022789-14022789
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402278a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278a-1402278a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402278b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278b-1402278b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402278c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278c-1402278c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402278d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278d-1402278d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402278e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278e-1402278e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402278f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278f-1402278f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== FUN_14022790 @ 14022790 ==== 
 * signature: undefined4 __cdecl FUN_14022790(uint param_1)
 * body: 14022790-14022820
 */

undefined4 __cdecl FUN_14022790(uint param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulong *puVar4;
  DWORD nStdHandle;
  
  if (param_1 < DAT_14029f70) {
    piVar3 = (int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar1 = (param_1 & 0x1f) * 0x24;
    piVar2 = (int *)(*piVar3 + iVar1);
    if (((*(byte *)(piVar2 + 1) & 1) != 0) && (*piVar2 != -1)) {
      if (DAT_14026e50 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_140227f5;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_140227f5:
      *(undefined4 *)(*piVar3 + iVar1) = 0xffffffff;
      return 0;
    }
  }
  piVar3 = FUN_14021040();
  *piVar3 = 9;
  puVar4 = FUN_14021050();
  *puVar4 = 0;
  return 0xffffffff;
}



/* ==== FUN_14022830 @ 14022830 ==== 
 * signature: undefined4 __cdecl FUN_14022830(uint param_1)
 * body: 14022830-14022879
 */

undefined4 __cdecl FUN_14022830(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_14029f70) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_14021040();
  *piVar2 = 9;
  puVar3 = FUN_14021050();
  *puVar3 = 0;
  return 0xffffffff;
}



/* ==== FUN_14022880 @ 14022880 ==== 
 * signature: uint __cdecl FUN_14022880(HANDLE param_1, uint param_2)
 * body: 14022880-14022933
 */

uint __cdecl FUN_14022880(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint _Filehandle;
  int *piVar2;
  ulong *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((param_2 & 8) != 0) {
    bVar4 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    bVar4 = bVar4 | 0x80;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    __dosmaperr(DVar1);
    return 0xffffffff;
  }
  if (DVar1 == 2) {
    bVar4 = bVar4 | 0x40;
  }
  else if (DVar1 == 3) {
    bVar4 = bVar4 | 8;
  }
  _Filehandle = __alloc_osfhnd();
  if (_Filehandle == 0xffffffff) {
    piVar2 = FUN_14021040();
    *piVar2 = 0x18;
    puVar3 = FUN_14021050();
    *puVar3 = 0;
    return 0xffffffff;
  }
  FUN_140226e0(_Filehandle,param_1);
  *(byte *)(*(int *)((int)&DAT_14029e70 + ((int)(_Filehandle & 0xffffffe7) >> 3)) + 4 +
           (_Filehandle & 0x1f) * 0x24) = bVar4 | 1;
  __unlock_fhandle(_Filehandle);
  return _Filehandle;
}



/* ==== __break @ 14022934 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022934-14022934
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022935 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022935-14022935
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022936 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022936-14022936
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022937 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022937-14022937
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022938 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022938-14022938
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022939 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022939-14022939
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402293a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402293a-1402293a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402293b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402293b-1402293b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402293c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402293c-1402293c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402293d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402293d-1402293d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402293e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402293e-1402293e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 1402293f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402293f-1402293f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __lock_fhandle @ 14022940 ==== 
 * signature: int __cdecl __lock_fhandle(int _Filehandle)
 * body: 14022940-140229a0
 * note: Library Function - Single Match  __lock_fhandle  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lock_fhandle
   
   Library: Visual Studio 1998 Release */

int __cdecl __lock_fhandle(int _Filehandle)

{
  int *piVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  
  piVar1 = (int *)((int)&DAT_14029e70 + ((int)(_Filehandle & 0xffffffe7U) >> 3));
  iVar2 = (_Filehandle & 0x1fU) * 0x24;
  iVar3 = *piVar1 + iVar2;
  if (*(int *)(iVar3 + 8) == 0) {
    __lock(0x11);
    if (*(int *)(iVar3 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xc));
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    }
    FUN_1401a650(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*piVar1 + iVar2 + 0xc));
  return extraout_EAX;
}



/* ==== __unlock_fhandle @ 140229b0 ==== 
 * signature: void __cdecl __unlock_fhandle(int _Filehandle)
 * body: 140229b0-140229d7
 * note: Library Function - Single Match  __unlock_fhandle  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __unlock_fhandle
   
   Library: Visual Studio 1998 Release */

void __cdecl __unlock_fhandle(int _Filehandle)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             (*(int *)((int)&DAT_14029e70 + ((int)(_Filehandle & 0xffffffe7U) >> 3)) +
              (_Filehandle & 0x1fU) * 0x24 + 0xc));
  return;
}



/* ==== FUN_140229e0 @ 140229e0 ==== 
 * signature: DWORD __cdecl FUN_140229e0(uint param_1, LONG param_2, DWORD param_3)
 * body: 140229e0-14022a57
 */

DWORD __cdecl FUN_140229e0(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_14029f70) &&
     ((*(byte *)(*(int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    __lock_fhandle(param_1);
    DVar1 = __lseek_lk(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
    return DVar1;
  }
  piVar2 = FUN_14021040();
  *piVar2 = 9;
  puVar3 = FUN_14021050();
  *puVar3 = 0;
  return 0xffffffff;
}



/* ==== __break @ 14022a58 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a58-14022a58
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022a59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a59-14022a59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022a5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a5a-14022a5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022a5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a5b-14022a5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022a5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a5c-14022a5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022a5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a5d-14022a5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022a5e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a5e-14022a5e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __break @ 14022a5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14022a5f-14022a5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ==== __lseek_lk @ 14022a60 ==== 
 * signature: DWORD __cdecl __lseek_lk(uint param_1, LONG param_2, DWORD param_3)
 * body: 14022a60-14022ae1
 * note: Library Function - Single Match  __lseek_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lseek_lk
   
   Library: Visual Studio 1998 Release */

DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)FUN_14022830(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_14021040();
    *piVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  uVar4 = 0;
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  if (uVar4 != 0) {
    __dosmaperr(uVar4);
    return 0xffffffff;
  }
  pbVar1 = (byte *)(*(int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                   (param_1 & 0x1f) * 0x24);
  *pbVar1 = *pbVar1 & 0xfd;
  return DVar3;
}



/* ==== __mbsnbicoll @ 14022af0 ==== 
 * signature: int __cdecl __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * body: 14022af0-14022b2a
 * note: Library Function - Single Match  __mbsnbicoll  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 1998 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_14022e40(DAT_14027458,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_14027454);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



/* ==== ___wtomb_environ @ 14022b30 ==== 
 * signature: int __cdecl ___wtomb_environ(void)
 * body: 14022b30-14022bb9
 * note: Library Function - Single Match  ___wtomb_environ  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___wtomb_environ
   
   Library: Visual Studio 1998 Release */

int __cdecl ___wtomb_environ(void)

{
  SIZE_T cbMultiByte;
  uchar *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_14027304;
  piVar2 = DAT_14027304;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    cbMultiByte = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (cbMultiByte == 0) {
      return -1;
    }
    lpMultiByteStr = (uchar *)FUN_1401def0(cbMultiByte);
    if (lpMultiByteStr == (uchar *)0x0) {
      return -1;
    }
    iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                (LPCSTR)0x0,(LPBOOL)0x0);
    if (iVar1 == 0) break;
    piVar2 = piVar2 + 1;
    FUN_14023160(lpMultiByteStr,0);
    iVar1 = *piVar2;
  }
  return -1;
}



/* ==== ___crtCompareStringW @ 14022bc0 ==== 
 * signature: int __cdecl ___crtCompareStringW(LPCWSTR _LocaleName, DWORD _DwCmpFlags, LPCWSTR _LpString1, int _CchCount1, LPCWSTR _LpString2, int _CchCount2)
 * body: 14022bc0-14022dfa
 * note: Library Function - Single Match  ___crtCompareStringW  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___crtCompareStringW
   
   Library: Visual Studio 1998 Release */

int __cdecl
___crtCompareStringW
          (LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCWSTR _LpString1,int _CchCount1,
          LPCWSTR _LpString2,int _CchCount2)

{
  int in_EAX;
  int iVar1;
  SIZE_T cbMultiByte;
  PCNZCH lpMultiByteStr;
  SIZE_T cbMultiByte_00;
  LPSTR lpMultiByteStr_00;
  UINT in_stack_0000001c;
  
  if (DAT_14028804 == 0) {
    in_EAX = CompareStringW(0,0,L"",1,L"",1);
    if (in_EAX == 0) {
      in_EAX = CompareStringA(0,0,"",1,"",1);
      if (in_EAX == 0) {
        return 0;
      }
      DAT_14028804 = 2;
    }
    else {
      DAT_14028804 = 1;
    }
  }
  if (0 < _CchCount1) {
    in_EAX = wcsncnt(_LpString1,_CchCount1);
    _CchCount1 = in_EAX;
  }
  if (0 < _CchCount2) {
    in_EAX = wcsncnt(_LpString2,_CchCount2);
    _CchCount2 = in_EAX;
  }
  if ((_CchCount1 == 0) || (_CchCount2 == 0)) {
    if (_CchCount2 == _CchCount1) {
      return 2;
    }
    in_EAX = 3;
    if (_CchCount1 - _CchCount2 < 0) {
      in_EAX = 1;
    }
  }
  else {
    if (DAT_14028804 == 1) {
      iVar1 = CompareStringW((LCID)_LocaleName,_DwCmpFlags,_LpString1,_CchCount1,_LpString2,
                             _CchCount2);
      return iVar1;
    }
    if (DAT_14028804 == 2) {
      lpMultiByteStr_00 = (LPSTR)0x0;
      if (in_stack_0000001c == 0) {
        in_stack_0000001c = DAT_140272d0;
      }
      cbMultiByte = WideCharToMultiByte(in_stack_0000001c,0x220,_LpString1,_CchCount1,(LPSTR)0x0,0,
                                        (LPCSTR)0x0,(LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = (PCNZCH)FUN_1401def0(cbMultiByte);
      if (lpMultiByteStr == (PCNZCH)0x0) {
        return 0;
      }
      iVar1 = WideCharToMultiByte(in_stack_0000001c,0x220,_LpString1,_CchCount1,lpMultiByteStr,
                                  cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((((iVar1 != 0) &&
           (cbMultiByte_00 =
                 WideCharToMultiByte(in_stack_0000001c,0x220,_LpString2,_CchCount2,(LPSTR)0x0,0,
                                     (LPCSTR)0x0,(LPBOOL)0x0), cbMultiByte_00 != 0)) &&
          (lpMultiByteStr_00 = (LPSTR)FUN_1401def0(cbMultiByte_00), lpMultiByteStr_00 != (LPSTR)0x0)
          ) && (iVar1 = WideCharToMultiByte(in_stack_0000001c,0x220,_LpString2,_CchCount2,
                                            lpMultiByteStr_00,cbMultiByte_00,(LPCSTR)0x0,(LPBOOL)0x0
                                           ), iVar1 != 0)) {
        iVar1 = CompareStringA((LCID)_LocaleName,_DwCmpFlags,lpMultiByteStr,cbMultiByte,
                               lpMultiByteStr_00,cbMultiByte_00);
        FUN_1401dd10(lpMultiByteStr);
        FUN_1401dd10(lpMultiByteStr_00);
        return iVar1;
      }
      FUN_1401dd10(lpMultiByteStr);
      FUN_1401dd10(lpMultiByteStr_00);
      return 0;
    }
  }
  return in_EAX;
}



/* ==== wcsncnt @ 14022e00 ==== 
 * signature: int __cdecl wcsncnt(short * param_1, int param_2)
 * body: 14022e00-14022e32
 * note: Library Function - Single Match  _wcsncnt  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _wcsncnt
   
   Library: Visual Studio 1998 Release */

int __cdecl wcsncnt(short *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*psVar2 == 0) goto LAB_14022e29;
    psVar2 = psVar2 + 1;
  }
  if (*psVar2 == 0) {
LAB_14022e29:
    param_2 = (int)psVar2 - (int)param_1 >> 1;
  }
  return param_2;
}



/* ==== FUN_14022e40 @ 14022e40 ==== 
 * signature: int __cdecl FUN_14022e40(LCID param_1, DWORD param_2, byte * param_3, int param_4, byte * param_5, int param_6, UINT param_7)
 * body: 14022e40-1402312c
 */

int __cdecl
FUN_14022e40(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
            UINT param_7)

{
  int in_EAX;
  int iVar1;
  BOOL BVar2;
  BYTE *pBVar3;
  PCNZWCH lpWideCharStr;
  int iVar4;
  LPWSTR local_20;
  int local_18;
  _cpinfo local_14;
  
  if (DAT_14028808 == 0) {
    in_EAX = CompareStringA(0,0,"",1,"",1);
    if (in_EAX == 0) {
      in_EAX = CompareStringW(0,0,L"",1,L"",1);
      if (in_EAX == 0) {
        return 0;
      }
      DAT_14028808 = 1;
    }
    else {
      DAT_14028808 = 2;
    }
  }
  local_18 = in_EAX;
  if (0 < param_4) {
    local_18 = FUN_14023130((char *)param_3,param_4);
    param_4 = local_18;
  }
  if (0 < param_6) {
    local_18 = FUN_14023130((char *)param_5,param_6);
    param_6 = local_18;
  }
  if (DAT_14028808 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
    return iVar1;
  }
  if (DAT_14028808 == 1) {
    local_18 = 0;
    local_20 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_140272d0;
    }
    if ((param_4 == 0) || (param_6 == 0)) {
      if (param_6 == param_4) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < param_4) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < param_4) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          pBVar3 = pBVar3 + 2;
          local_14.LeadByte[0] = *pBVar3;
        }
        return 2;
      }
      if (0 < param_6) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          pBVar3 = pBVar3 + 2;
          local_14.LeadByte[0] = *pBVar3;
        }
        return 2;
      }
    }
    local_14.MaxCharSize = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
    if (local_14.MaxCharSize == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_1401def0(local_14.MaxCharSize * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar1 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,lpWideCharStr,local_14.MaxCharSize
                               );
    if ((((iVar1 != 0) &&
         (iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar1 != 0))
        && (local_20 = (LPWSTR)FUN_1401def0(iVar1 * 2), local_20 != (LPWSTR)0x0)) &&
       (iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,local_20,iVar1), iVar4 != 0))
    {
      local_18 = CompareStringW(param_1,param_2,lpWideCharStr,local_14.MaxCharSize,local_20,iVar1);
    }
    FUN_1401dd10(lpWideCharStr);
    FUN_1401dd10(local_20);
  }
  return local_18;
}



/* ==== FUN_14023130 @ 14023130 ==== 
 * signature: int __cdecl FUN_14023130(char * param_1, int param_2)
 * body: 14023130-1402315b
 */

int __cdecl FUN_14023130(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_14023155;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_14023155:
    param_2 = (int)pcVar2 - (int)param_1;
  }
  return param_2;
}



/* ==== FUN_14023160 @ 14023160 ==== 
 * signature: undefined4 __cdecl FUN_14023160(uchar * param_1, int param_2)
 * body: 14023160-140233a9
 */

undefined4 __cdecl FUN_14023160(uchar *param_1,int param_2)

{
  uchar uVar1;
  int iVar2;
  int *piVar3;
  uchar *puVar4;
  int iVar5;
  int *piVar6;
  uchar *puVar7;
  uint uVar8;
  uint uVar9;
  uchar *puVar10;
  uchar *puVar11;
  bool bVar12;
  
  if (((param_1 == (uchar *)0x0) || (puVar4 = __mbschr(param_1,0x3d), puVar4 == (uchar *)0x0)) ||
     (param_1 == puVar4)) {
    return 0xffffffff;
  }
  bVar12 = puVar4[1] == '\0';
  if (DAT_14027300 == DAT_140272fc) {
    DAT_140272fc = copy_environ(DAT_140272fc);
  }
  if (DAT_140272fc == (int *)0x0) {
    if ((param_2 == 0) || (DAT_14027304 == (undefined4 *)0x0)) {
      if (bVar12) {
        return 0;
      }
      DAT_140272fc = (int *)FUN_1401def0(4);
      if (DAT_140272fc == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_140272fc = 0;
      if (DAT_14027304 == (undefined4 *)0x0) {
        DAT_14027304 = (undefined4 *)FUN_1401def0(4);
        if (DAT_14027304 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_14027304 = 0;
      }
    }
    else {
      iVar5 = ___wtomb_environ();
      if (iVar5 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar6 = DAT_140272fc;
  iVar5 = FUN_140233b0(param_1,(int)puVar4 - (int)param_1);
  if ((iVar5 < 0) || (*piVar6 == 0)) {
    if (bVar12) {
      return 0;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    piVar6 = FUN_14023480(piVar6,iVar5 * 4 + 8);
    if (piVar6 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar6[iVar5] = (int)param_1;
    (piVar6 + iVar5)[1] = 0;
  }
  else {
    if (!bVar12) {
      piVar6[iVar5] = (int)param_1;
      goto LAB_1402331d;
    }
    piVar3 = piVar6 + iVar5;
    FUN_1401dd10((LPVOID)*piVar3);
    iVar2 = *piVar3;
    while (iVar2 != 0) {
      iVar5 = iVar5 + 1;
      *piVar3 = piVar3[1];
      iVar2 = piVar3[1];
      piVar3 = piVar3 + 1;
    }
    piVar6 = FUN_14023480(piVar6,iVar5 << 2);
    if (piVar6 == (int *)0x0) goto LAB_1402331d;
  }
  DAT_140272fc = piVar6;
LAB_1402331d:
  if (param_2 != 0) {
    uVar8 = 0xffffffff;
    puVar7 = param_1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
    } while (uVar1 != '\0');
    puVar7 = (uchar *)FUN_1401def0(~uVar8 + 1);
    if (puVar7 != (uchar *)0x0) {
      uVar8 = 0xffffffff;
      puVar10 = param_1;
      do {
        puVar11 = puVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        puVar11 = puVar10 + 1;
        uVar1 = *puVar10;
        puVar10 = puVar11;
      } while (uVar1 != '\0');
      uVar8 = ~uVar8;
      puVar10 = puVar11 + -uVar8;
      puVar11 = puVar7;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)puVar11 = *(undefined4 *)puVar10;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar7[(int)puVar4 - (int)param_1] = '\0';
      SetEnvironmentVariableA
                ((LPCSTR)puVar7,
                 (LPCSTR)(-(uint)!bVar12 & (uint)(puVar7 + ((int)puVar4 - (int)param_1) + 1)));
      FUN_1401dd10(puVar7);
    }
  }
  return 0;
}



/* ==== FUN_140233b0 @ 140233b0 ==== 
 * signature: int __cdecl FUN_140233b0(uchar * param_1, size_t param_2)
 * body: 140233b0-1402340b
 */

int __cdecl FUN_140233b0(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_140272fc;
  piVar2 = DAT_140272fc;
  while( true ) {
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_140272fc >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*piVar2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  return (int)piVar2 - (int)DAT_140272fc >> 2;
}



/* ==== copy_environ @ 14023410 ==== 
 * signature: undefined4 * __cdecl copy_environ(int * param_1)
 * body: 14023410-1402347d
 * note: Library Function - Single Match  _copy_environ  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 1998 Release */

undefined4 * __cdecl copy_environ(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  
  puVar4 = (undefined4 *)0x0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar6 = param_1;
    while (iVar1 != 0) {
      piVar6 = piVar6 + 1;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar1 = *piVar6;
    }
    puVar4 = (undefined4 *)FUN_1401def0((int)puVar4 * 4 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    iVar1 = *param_1;
    puVar3 = puVar4;
    while (iVar1 != 0) {
      pcVar2 = (char *)*param_1;
      param_1 = param_1 + 1;
      uVar5 = FUN_140235b0(pcVar2);
      *puVar3 = uVar5;
      puVar3 = puVar3 + 1;
      iVar1 = *param_1;
    }
    *puVar3 = 0;
  }
  return puVar4;
}



/* ==== FUN_14023480 @ 14023480 ==== 
 * signature: LPVOID __cdecl FUN_14023480(LPVOID param_1, uint param_2)
 * body: 14023480-140234ee
 */

LPVOID __cdecl FUN_14023480(LPVOID param_1,uint param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar1 = (LPVOID)FUN_1401def0(param_2);
    return pvVar1;
  }
  if (param_2 != 0) {
    do {
      if (param_2 < 0xffffffe1) {
        pvVar1 = HeapReAlloc(DAT_14029f74,0,param_1,param_2);
      }
      else {
        pvVar1 = (LPVOID)0x0;
      }
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
      if (DAT_140282a4 == 0) {
        return (LPVOID)0x0;
      }
      iVar2 = __callnewh(param_2);
    } while (iVar2 != 0);
    return (LPVOID)0x0;
  }
  FUN_1401dd10(param_1);
  return (LPVOID)0x0;
}



/* ==== __mbschr @ 140234f0 ==== 
 * signature: uchar * __cdecl __mbschr(uchar * _Str, uint _Ch)
 * body: 140234f0-140235a4
 * note: Library Function - Single Match  __mbschr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbschr
   
   Library: Visual Studio 1998 Release */

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  uchar *puVar2;
  
  if (DAT_14027454 == 0) {
    puVar2 = (uchar *)_strchr((char *)_Str,_Ch);
    return puVar2;
  }
  __lock(0x19);
  bVar1 = *_Str;
  while (bVar1 != 0) {
    if ((*(byte *)((int)&DAT_14027350 + bVar1 + 1) & 4) == 0) {
      puVar2 = _Str;
      if ((ushort)bVar1 == _Ch) break;
    }
    else {
      if (_Str[1] == '\0') {
        FUN_1401a650(0x19);
        return (uchar *)0x0;
      }
      puVar2 = _Str + 1;
      if (CONCAT11(bVar1,_Str[1]) == _Ch) {
        FUN_1401a650(0x19);
        return _Str;
      }
    }
    _Str = puVar2 + 1;
    bVar1 = puVar2[1];
  }
  FUN_1401a650(0x19);
  return (uchar *)(-(uint)((ushort)bVar1 == _Ch) & (uint)_Str);
}



/* ==== FUN_140235b0 @ 140235b0 ==== 
 * signature: undefined __cdecl FUN_140235b0(char * param_1)
 * body: 140235b0-140235d5
 */

void __cdecl FUN_140235b0(char *param_1)

{
  size_t sVar1;
  char *_Dest;
  
  sVar1 = _strlen(param_1);
  _Dest = (char *)FUN_1401def0(sVar1 + 1);
  if (_Dest != (char *)0x0) {
    FID_conflict___mbscpy(_Dest,param_1);
  }
  return;
}



/* ==== FUN_140235e5 @ 140235e5 ==== 
 * signature: uint * __stdcall FUN_140235e5(uint * param_1, char param_2)
 * body: 140235e5-140235ef
 */

uint * FUN_140235e5(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



/* ==== _strchr @ 140235f0 ==== 
 * signature: char * __cdecl _strchr(char * _Str, int _Val)
 * body: 140235e0-140235e4;140235f0-140236ab
 * note: Library Function - Single Match  _strchr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strchr
   
   Library: Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



/* ==== _strlen @ 140236b0 ==== 
 * signature: size_t __cdecl _strlen(char * _Str)
 * body: 140236b0-1402372a
 * note: Library Function - Single Match  _strlen  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_140236d0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_14023703:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_140236d0:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_14023703;
}



/* ==== FID_conflict:__mbscpy @ 14023730 ==== 
 * signature: char * __cdecl FID_conflict:__mbscpy(char * _Dest, char * _Source)
 * body: 14023730-14023736
 * note: Library Function - Multiple Matches With Different Base Names  __mbscpy  _strcpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __mbscpy
    _strcpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl FID_conflict___mbscpy(char *_Dest,char *_Source)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)_Dest;
  while (((uint)_Source & 3) != 0) {
    bVar1 = (byte)*(uint *)_Source;
    uVar3 = (uint)bVar1;
    _Source = (char *)((int)_Source + 1);
    if (bVar1 == 0) goto LAB_14023818;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *(uint *)_Source;
    uVar3 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_14023818:
        *(byte *)puVar4 = (byte)uVar3;
        return _Dest;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return _Dest;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return _Dest;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return _Dest;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



/* ==== FUN_14023737 @ 14023737 ==== 
 * signature: uint * __cdecl FUN_14023737(uint * param_1, uint * param_2)
 * body: 14023737-1402381f
 */

uint * __cdecl FUN_14023737(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1402375c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1402378f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x140237ab;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1402375c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x140237ab;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x140237ab;
    }
  }
LAB_1402378f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x140237ab:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_14023818:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_14023818;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



/* ==== KERNEL32.DLL::FreeLibrary @ 14023820 ==== 
 * signature: BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * body: 14023820-14023825
 * thunk to: KERNEL32.DLL::FreeLibrary
 */

BOOL FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetProcAddress @ 14023826 ==== 
 * signature: FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
 * body: 14023826-1402382b
 * thunk to: KERNEL32.DLL::GetProcAddress
 */

FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}



/* ==== KERNEL32.DLL::LoadLibraryA @ 1402382c ==== 
 * signature: HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
 * body: 1402382c-14023831
 * thunk to: KERNEL32.DLL::LoadLibraryA
 */

HMODULE LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402382c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}



/* ==== KERNEL32.DLL::SetErrorMode @ 14023832 ==== 
 * signature: UINT __stdcall SetErrorMode(UINT uMode)
 * body: 14023832-14023837
 * thunk to: KERNEL32.DLL::SetErrorMode
 */

UINT SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}



/* ==== KERNEL32.DLL::GetModuleFileNameA @ 14023838 ==== 
 * signature: DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
 * body: 14023838-1402383d
 * thunk to: KERNEL32.DLL::GetModuleFileNameA
 */

DWORD GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}



/* ==== KERNEL32.DLL::GetVersionExA @ 1402383e ==== 
 * signature: BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)
 * body: 1402383e-14023843
 * thunk to: KERNEL32.DLL::GetVersionExA
 */

BOOL GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402383e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetCommandLineA @ 14023844 ==== 
 * signature: LPSTR __stdcall GetCommandLineA(void)
 * body: 14023844-14023849
 * thunk to: KERNEL32.DLL::GetCommandLineA
 */

LPSTR GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}



/* ==== KERNEL32.DLL::GetModuleHandleA @ 1402384a ==== 
 * signature: HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * body: 1402384a-1402384f
 * thunk to: KERNEL32.DLL::GetModuleHandleA
 */

HMODULE GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402384a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}



/* ==== KERNEL32.DLL::GetVersion @ 14023850 ==== 
 * signature: DWORD __stdcall GetVersion(void)
 * body: 14023850-14023855
 * thunk to: KERNEL32.DLL::GetVersion
 */

DWORD GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}



/* ==== KERNEL32.DLL::Sleep @ 14023856 ==== 
 * signature: void __stdcall Sleep(DWORD dwMilliseconds)
 * body: 14023856-1402385b
 * thunk to: KERNEL32.DLL::Sleep
 */

void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x14023856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}



/* ==== KERNEL32.DLL::InitializeCriticalSection @ 1402385c ==== 
 * signature: void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 1402385c-14023861
 * thunk to: KERNEL32.DLL::InitializeCriticalSection
 */

void InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x1402385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}



/* ==== KERNEL32.DLL::DeleteCriticalSection @ 14023862 ==== 
 * signature: void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 14023862-14023867
 * thunk to: KERNEL32.DLL::DeleteCriticalSection
 */

void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x14023862. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}



/* ==== KERNEL32.DLL::EnterCriticalSection @ 14023868 ==== 
 * signature: void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 14023868-1402386d
 * thunk to: KERNEL32.DLL::EnterCriticalSection
 */

void EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x14023868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}



/* ==== KERNEL32.DLL::LeaveCriticalSection @ 1402386e ==== 
 * signature: void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * body: 1402386e-14023873
 * thunk to: KERNEL32.DLL::LeaveCriticalSection
 */

void LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x1402386e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



/* ==== KERNEL32.DLL::ExitProcess @ 14023874 ==== 
 * signature: noreturn void __stdcall ExitProcess(UINT uExitCode)
 * body: 14023874-14023879
 * thunk to: KERNEL32.DLL::ExitProcess
 */

void ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x14023874. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}



/* ==== KERNEL32.DLL::FatalAppExitA @ 1402387a ==== 
 * signature: void __stdcall FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
 * body: 1402387a-1402387f
 * thunk to: KERNEL32.DLL::FatalAppExitA
 */

void FatalAppExitA(UINT uAction,LPCSTR lpMessageText)

{
                    /* WARNING: Could not recover jumptable at 0x1402387a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FatalAppExitA(uAction,lpMessageText);
  return;
}



/* ==== KERNEL32.DLL::MultiByteToWideChar @ 14023880 ==== 
 * signature: int __stdcall MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
 * body: 14023880-14023885
 * thunk to: KERNEL32.DLL::MultiByteToWideChar
 */

int MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                       LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}



/* ==== KERNEL32.DLL::LCMapStringA @ 14023886 ==== 
 * signature: int __stdcall LCMapStringA(LCID Locale, DWORD dwMapFlags, LPCSTR lpSrcStr, int cchSrc, LPSTR lpDestStr, int cchDest)
 * body: 14023886-1402388b
 * thunk to: KERNEL32.DLL::LCMapStringA
 */

int LCMapStringA(LCID Locale,DWORD dwMapFlags,LPCSTR lpSrcStr,int cchSrc,LPSTR lpDestStr,int cchDest
                )

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringA(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}



/* ==== KERNEL32.DLL::WideCharToMultiByte @ 1402388c ==== 
 * signature: int __stdcall WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)
 * body: 1402388c-14023891
 * thunk to: KERNEL32.DLL::WideCharToMultiByte
 */

int WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                       LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                       LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402388c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}



/* ==== KERNEL32.DLL::LCMapStringW @ 14023892 ==== 
 * signature: int __stdcall LCMapStringW(LCID Locale, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest)
 * body: 14023892-14023897
 * thunk to: KERNEL32.DLL::LCMapStringW
 */

int LCMapStringW(LCID Locale,DWORD dwMapFlags,LPCWSTR lpSrcStr,int cchSrc,LPWSTR lpDestStr,
                int cchDest)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCMapStringW(Locale,dwMapFlags,lpSrcStr,cchSrc,lpDestStr,cchDest);
  return iVar1;
}



/* ==== KERNEL32.DLL::TerminateProcess @ 14023898 ==== 
 * signature: BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
 * body: 14023898-1402389d
 * thunk to: KERNEL32.DLL::TerminateProcess
 */

BOOL TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetCurrentProcess @ 1402389e ==== 
 * signature: HANDLE __stdcall GetCurrentProcess(void)
 * body: 1402389e-140238a3
 * thunk to: KERNEL32.DLL::GetCurrentProcess
 */

HANDLE GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402389e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}



/* ==== KERNEL32.DLL::GetCurrentThreadId @ 140238a4 ==== 
 * signature: DWORD __stdcall GetCurrentThreadId(void)
 * body: 140238a4-140238a9
 * thunk to: KERNEL32.DLL::GetCurrentThreadId
 */

DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



/* ==== KERNEL32.DLL::TlsSetValue @ 140238aa ==== 
 * signature: BOOL __stdcall TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue)
 * body: 140238aa-140238af
 * thunk to: KERNEL32.DLL::TlsSetValue
 */

BOOL TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}



/* ==== KERNEL32.DLL::TlsAlloc @ 140238b0 ==== 
 * signature: DWORD __stdcall TlsAlloc(void)
 * body: 140238b0-140238b5
 * thunk to: KERNEL32.DLL::TlsAlloc
 */

DWORD TlsAlloc(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = TlsAlloc();
  return DVar1;
}



/* ==== KERNEL32.DLL::TlsFree @ 140238b6 ==== 
 * signature: BOOL __stdcall TlsFree(DWORD dwTlsIndex)
 * body: 140238b6-140238bb
 * thunk to: KERNEL32.DLL::TlsFree
 */

BOOL TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}



/* ==== KERNEL32.DLL::SetLastError @ 140238bc ==== 
 * signature: void __stdcall SetLastError(DWORD dwErrCode)
 * body: 140238bc-140238c1
 * thunk to: KERNEL32.DLL::SetLastError
 */

void SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x140238bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}



/* ==== KERNEL32.DLL::TlsGetValue @ 140238c2 ==== 
 * signature: LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
 * body: 140238c2-140238c7
 * thunk to: KERNEL32.DLL::TlsGetValue
 */

LPVOID TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}



/* ==== KERNEL32.DLL::GetLastError @ 140238c8 ==== 
 * signature: DWORD __stdcall GetLastError(void)
 * body: 140238c8-140238cd
 * thunk to: KERNEL32.DLL::GetLastError
 */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}



/* ==== KERNEL32.DLL::GetCurrentThread @ 140238ce ==== 
 * signature: HANDLE __stdcall GetCurrentThread(void)
 * body: 140238ce-140238d3
 * thunk to: KERNEL32.DLL::GetCurrentThread
 */

HANDLE GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}



/* ==== KERNEL32.DLL::HeapCreate @ 140238d4 ==== 
 * signature: HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize)
 * body: 140238d4-140238d9
 * thunk to: KERNEL32.DLL::HeapCreate
 */

HANDLE HeapCreate(DWORD flOptions,SIZE_T dwInitialSize,SIZE_T dwMaximumSize)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapCreate(flOptions,dwInitialSize,dwMaximumSize);
  return pvVar1;
}



/* ==== KERNEL32.DLL::HeapDestroy @ 140238da ==== 
 * signature: BOOL __stdcall HeapDestroy(HANDLE hHeap)
 * body: 140238da-140238df
 * thunk to: KERNEL32.DLL::HeapDestroy
 */

BOOL HeapDestroy(HANDLE hHeap)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapDestroy(hHeap);
  return BVar1;
}



/* ==== KERNEL32.DLL::SetHandleCount @ 140238e0 ==== 
 * signature: UINT __stdcall SetHandleCount(UINT uNumber)
 * body: 140238e0-140238e5
 * thunk to: KERNEL32.DLL::SetHandleCount
 */

UINT SetHandleCount(UINT uNumber)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetHandleCount(uNumber);
  return UVar1;
}



/* ==== KERNEL32.DLL::GetFileType @ 140238e6 ==== 
 * signature: DWORD __stdcall GetFileType(HANDLE hFile)
 * body: 140238e6-140238eb
 * thunk to: KERNEL32.DLL::GetFileType
 */

DWORD GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}



/* ==== KERNEL32.DLL::GetStdHandle @ 140238ec ==== 
 * signature: HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
 * body: 140238ec-140238f1
 * thunk to: KERNEL32.DLL::GetStdHandle
 */

HANDLE GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}



/* ==== KERNEL32.DLL::GetStartupInfoA @ 140238f2 ==== 
 * signature: void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
 * body: 140238f2-140238f7
 * thunk to: KERNEL32.DLL::GetStartupInfoA
 */

void GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x140238f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}



/* ==== KERNEL32.DLL::GetCPInfo @ 140238f8 ==== 
 * signature: BOOL __stdcall GetCPInfo(UINT CodePage, LPCPINFO lpCPInfo)
 * body: 140238f8-140238fd
 * thunk to: KERNEL32.DLL::GetCPInfo
 */

BOOL GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x140238f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCPInfo(CodePage,lpCPInfo);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetACP @ 140238fe ==== 
 * signature: undefined GetACP(void)
 * body: 140238fe-14023903
 * thunk to: KERNEL32.DLL::GetACP
 */

void GetACP(void)

{
                    /* WARNING: Could not recover jumptable at 0x140238fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetACP();
  return;
}



/* ==== KERNEL32.DLL::GetOEMCP @ 14023904 ==== 
 * signature: undefined GetOEMCP(void)
 * body: 14023904-14023909
 * thunk to: KERNEL32.DLL::GetOEMCP
 */

void GetOEMCP(void)

{
                    /* WARNING: Could not recover jumptable at 0x14023904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetOEMCP();
  return;
}



/* ==== KERNEL32.DLL::FreeEnvironmentStringsA @ 1402390a ==== 
 * signature: BOOL __stdcall FreeEnvironmentStringsA(LPCH param_1)
 * body: 1402390a-1402390f
 * thunk to: KERNEL32.DLL::FreeEnvironmentStringsA
 */

BOOL FreeEnvironmentStringsA(LPCH param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402390a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeEnvironmentStringsA(param_1);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetEnvironmentStrings @ 14023910 ==== 
 * signature: LPCH __stdcall GetEnvironmentStrings(void)
 * body: 14023910-14023915
 * thunk to: KERNEL32.DLL::GetEnvironmentStrings
 */

LPCH GetEnvironmentStrings(void)

{
  LPCH pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetEnvironmentStrings();
  return pCVar1;
}



/* ==== KERNEL32.DLL::FreeEnvironmentStringsW @ 14023916 ==== 
 * signature: BOOL __stdcall FreeEnvironmentStringsW(LPWCH param_1)
 * body: 14023916-1402391b
 * thunk to: KERNEL32.DLL::FreeEnvironmentStringsW
 */

BOOL FreeEnvironmentStringsW(LPWCH param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeEnvironmentStringsW(param_1);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetEnvironmentStringsW @ 1402391c ==== 
 * signature: LPWCH __stdcall GetEnvironmentStringsW(void)
 * body: 1402391c-14023921
 * thunk to: KERNEL32.DLL::GetEnvironmentStringsW
 */

LPWCH GetEnvironmentStringsW(void)

{
  LPWCH pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402391c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = GetEnvironmentStringsW();
  return pWVar1;
}



/* ==== KERNEL32.DLL::WriteFile @ 14023922 ==== 
 * signature: BOOL __stdcall WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped)
 * body: 14023922-14023927
 * thunk to: KERNEL32.DLL::WriteFile
 */

BOOL WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,
              LPDWORD lpNumberOfBytesWritten,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetStringTypeA @ 14023928 ==== 
 * signature: BOOL __stdcall GetStringTypeA(LCID Locale, DWORD dwInfoType, LPCSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
 * body: 14023928-1402392d
 * thunk to: KERNEL32.DLL::GetStringTypeA
 */

BOOL GetStringTypeA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeA(Locale,dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetStringTypeW @ 1402392e ==== 
 * signature: BOOL __stdcall GetStringTypeW(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
 * body: 1402392e-14023933
 * thunk to: KERNEL32.DLL::GetStringTypeW
 */

BOOL GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402392e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}



/* ==== KERNEL32.DLL::HeapFree @ 14023934 ==== 
 * signature: BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
 * body: 14023934-14023939
 * thunk to: KERNEL32.DLL::HeapFree
 */

BOOL HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}



/* ==== KERNEL32.DLL::HeapAlloc @ 1402393a ==== 
 * signature: LPVOID __stdcall HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
 * body: 1402393a-1402393f
 * thunk to: KERNEL32.DLL::HeapAlloc
 */

LPVOID HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402393a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}



/* ==== KERNEL32.DLL::IsValidLocale @ 14023940 ==== 
 * signature: BOOL __stdcall IsValidLocale(LCID Locale, DWORD dwFlags)
 * body: 14023940-14023945
 * thunk to: KERNEL32.DLL::IsValidLocale
 */

BOOL IsValidLocale(LCID Locale,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidLocale(Locale,dwFlags);
  return BVar1;
}



/* ==== KERNEL32.DLL::IsValidCodePage @ 14023946 ==== 
 * signature: BOOL __stdcall IsValidCodePage(UINT CodePage)
 * body: 14023946-1402394b
 * thunk to: KERNEL32.DLL::IsValidCodePage
 */

BOOL IsValidCodePage(UINT CodePage)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsValidCodePage(CodePage);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetUserDefaultLCID @ 1402394c ==== 
 * signature: LCID __stdcall GetUserDefaultLCID(void)
 * body: 1402394c-14023951
 * thunk to: KERNEL32.DLL::GetUserDefaultLCID
 */

LCID GetUserDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402394c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetUserDefaultLCID();
  return LVar1;
}



/* ==== KERNEL32.DLL::UnhandledExceptionFilter @ 14023952 ==== 
 * signature: LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo)
 * body: 14023952-14023957
 * thunk to: KERNEL32.DLL::UnhandledExceptionFilter
 */

LONG UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}



/* ==== KERNEL32.DLL::SetConsoleCtrlHandler @ 14023958 ==== 
 * signature: BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
 * body: 14023958-1402395d
 * thunk to: KERNEL32.DLL::SetConsoleCtrlHandler
 */

BOOL SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}



/* ==== KERNEL32.DLL::GetLocaleInfoA @ 1402395e ==== 
 * signature: int __stdcall GetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
 * body: 1402395e-14023963
 * thunk to: KERNEL32.DLL::GetLocaleInfoA
 */

int GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402395e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoA(Locale,LCType,lpLCData,cchData);
  return iVar1;
}



/* ==== KERNEL32.DLL::GetLocaleInfoW @ 14023964 ==== 
 * signature: int __stdcall GetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData)
 * body: 14023964-14023969
 * thunk to: KERNEL32.DLL::GetLocaleInfoW
 */

int GetLocaleInfoW(LCID Locale,LCTYPE LCType,LPWSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoW(Locale,LCType,lpLCData,cchData);
  return iVar1;
}



/* ==== KERNEL32.DLL::GetTimeZoneInformation @ 1402396a ==== 
 * signature: DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)
 * body: 1402396a-1402396f
 * thunk to: KERNEL32.DLL::GetTimeZoneInformation
 */

DWORD GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402396a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}



/* ==== KERNEL32.DLL::FlushFileBuffers @ 14023970 ==== 
 * signature: BOOL __stdcall FlushFileBuffers(HANDLE hFile)
 * body: 14023970-14023975
 * thunk to: KERNEL32.DLL::FlushFileBuffers
 */

BOOL FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}



/* ==== KERNEL32.DLL::CloseHandle @ 14023976 ==== 
 * signature: BOOL __stdcall CloseHandle(HANDLE hObject)
 * body: 14023976-1402397b
 * thunk to: KERNEL32.DLL::CloseHandle
 */

BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}



/* ==== KERNEL32.DLL::SetStdHandle @ 1402397c ==== 
 * signature: BOOL __stdcall SetStdHandle(DWORD nStdHandle, HANDLE hHandle)
 * body: 1402397c-14023981
 * thunk to: KERNEL32.DLL::SetStdHandle
 */

BOOL SetStdHandle(DWORD nStdHandle,HANDLE hHandle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402397c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetStdHandle(nStdHandle,hHandle);
  return BVar1;
}



/* ==== KERNEL32.DLL::SetFilePointer @ 14023982 ==== 
 * signature: DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
 * body: 14023982-14023987
 * thunk to: KERNEL32.DLL::SetFilePointer
 */

DWORD SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod
                    )

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}



/* ==== KERNEL32.DLL::CompareStringA @ 14023988 ==== 
 * signature: int __stdcall CompareStringA(LCID Locale, DWORD dwCmpFlags, PCNZCH lpString1, int cchCount1, PCNZCH lpString2, int cchCount2)
 * body: 14023988-1402398d
 * thunk to: KERNEL32.DLL::CompareStringA
 */

int CompareStringA(LCID Locale,DWORD dwCmpFlags,PCNZCH lpString1,int cchCount1,PCNZCH lpString2,
                  int cchCount2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringA(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}



/* ==== KERNEL32.DLL::CompareStringW @ 1402398e ==== 
 * signature: int __stdcall CompareStringW(LCID Locale, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2)
 * body: 1402398e-14023993
 * thunk to: KERNEL32.DLL::CompareStringW
 */

int CompareStringW(LCID Locale,DWORD dwCmpFlags,PCNZWCH lpString1,int cchCount1,PCNZWCH lpString2,
                  int cchCount2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402398e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = CompareStringW(Locale,dwCmpFlags,lpString1,cchCount1,lpString2,cchCount2);
  return iVar1;
}



/* ==== KERNEL32.DLL::SetEnvironmentVariableA @ 14023994 ==== 
 * signature: BOOL __stdcall SetEnvironmentVariableA(LPCSTR lpName, LPCSTR lpValue)
 * body: 14023994-14023999
 * thunk to: KERNEL32.DLL::SetEnvironmentVariableA
 */

BOOL SetEnvironmentVariableA(LPCSTR lpName,LPCSTR lpValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEnvironmentVariableA(lpName,lpValue);
  return BVar1;
}



/* ==== KERNEL32.DLL::HeapReAlloc @ 1402399a ==== 
 * signature: LPVOID __stdcall HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
 * body: 1402399a-1402399f
 * thunk to: KERNEL32.DLL::HeapReAlloc
 */

LPVOID HeapReAlloc(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1402399a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapReAlloc(hHeap,dwFlags,lpMem,dwBytes);
  return pvVar1;
}



/* ==== FUN_140239a0 @ 140239a0 ==== 
 * signature: undefined __stdcall FUN_140239a0(void)
 * body: 140239a0-140239ff
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_140239a0(void)

{
  char cVar1;
  char *in_EAX;
  
  cVar1 = (char)in_EAX;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
  *in_EAX = *in_EAX + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


