
/* ==== FUN_1200e9c0 @ 1200e9c0 ==== 
 * signature: undefined4 __cdecl FUN_1200e9c0(undefined4 * param_1, undefined4 * param_2)
 * body: 1200e9c0-1200eaf7
 */

undefined4 __cdecl FUN_1200e9c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int local_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  puVar1 = param_1 + 10;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[8] = 0;
  param_1[9] = 0;
  *puVar1 = 0;
  param_1[7] = 0xffffffff;
  *(undefined2 *)((int)param_1 + 0x1a) = 0x66;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_4);
  DAT_12039a9c = (*pcVar3)(local_4,puVar1,0xff);
  if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
    param_1[8] = 0xff;
    *(undefined1 *)*puVar1 = 0;
  }
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x1a),(int)param_2 + 0x1a);
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0x14;
  uVar2 = *(undefined4 *)((int)param_2 + 10);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 10) = uVar2;
  *(undefined2 *)((int)param_1 + 0xe) = 0x14;
  uVar2 = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined4 *)((int)param_1 + 0xe) = uVar2;
  *(undefined2 *)((int)param_1 + 0x12) = 0x14;
  uVar2 = *(undefined4 *)((int)param_2 + 0x12);
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined4 *)((int)param_1 + 0x12) = uVar2;
  *(undefined2 *)((int)param_1 + 0x16) = 0x14;
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)((int)param_2 + 0x16);
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,0,&local_4);
  DAT_12039a9c = (*pcVar3)(local_4,0x3c,param_1 + 0xb);
  FUN_1200fd60(param_1[0xb],param_2[0xb]);
  return 0;
}


