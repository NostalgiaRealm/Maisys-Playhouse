
/* ==== FUN_1201c230 @ 1201c230 ==== 
 * signature: undefined4 __cdecl FUN_1201c230(undefined4 * param_1, undefined4 * param_2)
 * body: 1201c230-1201c3f9
 */

undefined4 __cdecl FUN_1201c230(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  code *pcVar3;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x7d1;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 10) = 0x17;
  param_1[3] = 0x7d2;
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 1;
  *(undefined2 *)(param_1 + 5) = 0x17;
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  param_1[8] = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 1;
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_2 + 0x1e);
  uVar2 = *(undefined2 *)((int)param_2 + 0x22);
  *(undefined4 *)((int)param_1 + 0x26) = 0xc9;
  *(undefined4 *)((int)param_1 + 0x2a) = 5;
  *(undefined2 *)(param_1 + 9) = 100;
  *(undefined2 *)((int)param_1 + 0x22) = uVar2;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2f,&local_c);
  DAT_12039a9c = (*pcVar3)(local_c,param_1 + 9,param_2 + 9);
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_8);
  DAT_12039a9c = (*pcVar3)(iStack_8,(int)param_1 + 0x36,(int)param_2 + 0x36);
  *(undefined2 *)((int)param_1 + 0x62) = 0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_4);
  DAT_12039a9c = (*pcVar3)(iStack_4,(int)param_1 + 0x62,(int)param_2 + 0x62);
  *(undefined2 *)((int)param_1 + 0x8e) = 1;
  param_1[0x24] = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = *(undefined4 *)((int)param_2 + 0x8e);
  bVar1 = *(byte *)((int)param_1 + 0xba);
  *(undefined2 *)((int)param_1 + 0x92) = *(undefined2 *)((int)param_2 + 0x92);
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(byte *)((int)param_1 + 0xba) = bVar1 & 0xfe;
  *(byte *)((int)param_1 + 0xba) = bVar1 & 0xfc;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(byte *)((int)param_1 + 0xba) = bVar1 & 0xf4;
  *(undefined4 *)((int)param_1 + 0xb6) = 0xffffffff;
  *(byte *)((int)param_1 + 0xba) = bVar1 & 0xe4;
  return 0;
}


