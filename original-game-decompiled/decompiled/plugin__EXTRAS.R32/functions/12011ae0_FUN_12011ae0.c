
/* ==== FUN_12011ae0 @ 12011ae0 ==== 
 * signature: undefined4 __cdecl FUN_12011ae0(undefined4 * param_1, undefined4 * param_2)
 * body: 12011ae0-12011cc5
 */

undefined4 __cdecl FUN_12011ae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)((int)param_2 + 0x2e);
  *(undefined4 *)((int)param_1 + 0x32) = *(undefined4 *)((int)param_2 + 0x32);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)((int)param_2 + 0x36);
  param_1[0xe] = param_2[0xe];
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0xf);
  puVar1 = (undefined2 *)((int)param_1 + 0x3e);
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_10);
  DAT_12039a9c = (*pcVar3)(local_10,0,puVar1);
  *puVar1 = 100;
  param_1[0x10] = 0xc9;
  param_1[0x11] = 5;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2f,&iStack_c);
  DAT_12039a9c = (*pcVar3)(iStack_c,puVar1,(int)param_2 + 0x3e);
  puVar2 = param_1 + 0x14;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_8);
  DAT_12039a9c = (*pcVar3)(iStack_8,param_1,puVar2);
  *(undefined2 *)puVar2 = 0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_4);
  DAT_12039a9c = (*pcVar3)(iStack_4,puVar2,param_2 + 0x14);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
  param_1[4] = param_2[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  if (param_1[9] != 0) {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_10);
    DAT_12039a9c = (*pcVar3)(local_10,param_1[9]);
    param_1[9] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *(undefined2 *)((int)param_1 + 0x16) = 0x66;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0xffffffff;
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x16),(int)param_2 + 0x16);
  param_1[10] = param_2[10];
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  return 0;
}


