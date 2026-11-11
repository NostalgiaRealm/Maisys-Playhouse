
/* ==== FUN_1201c400 @ 1201c400 ==== 
 * signature: undefined4 __cdecl FUN_1201c400(undefined4 * param_1, undefined4 * param_2)
 * body: 1201c400-1201c60c
 */

undefined4 __cdecl FUN_1201c400(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  code *pcVar4;
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
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_2 + 0x1e);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  puVar1 = param_1 + 9;
  pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_18);
  DAT_12039a9c = (*pcVar4)(local_18,0,puVar1);
  *(undefined2 *)puVar1 = 0;
  pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_14);
  DAT_12039a9c = (*pcVar4)(iStack_14,puVar1,param_2 + 9);
  puVar2 = (undefined2 *)((int)param_1 + 0x36);
  pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_10);
  DAT_12039a9c = (*pcVar4)(iStack_10,param_1,puVar2);
  *puVar2 = 0;
  pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_c);
  DAT_12039a9c = (*pcVar4)(iStack_c,puVar2,(int)param_2 + 0x36);
  puVar2 = (undefined2 *)((int)param_1 + 0x62);
  pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_8);
  DAT_12039a9c = (*pcVar4)(iStack_8,param_1,puVar2);
  *puVar2 = 0;
  pcVar4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_4);
  DAT_12039a9c = (*pcVar4)(iStack_4,puVar2,(int)param_2 + 0x62);
  *(undefined4 *)((int)param_1 + 0x8e) = *(undefined4 *)((int)param_2 + 0x8e);
  bVar3 = *(byte *)((int)param_1 + 0xba);
  *(undefined2 *)((int)param_1 + 0x92) = *(undefined2 *)((int)param_2 + 0x92);
  *(byte *)((int)param_1 + 0xba) = bVar3 & 0xfe;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((int)param_1 + 0xb6) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(byte *)((int)param_1 + 0xba) = bVar3 & 0xfc;
  *(byte *)((int)param_1 + 0xba) = bVar3 & 0xf4;
  *(byte *)((int)param_1 + 0xba) = bVar3 & 0xe4;
  return 0;
}


