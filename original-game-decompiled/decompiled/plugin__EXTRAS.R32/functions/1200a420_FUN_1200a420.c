
/* ==== FUN_1200a420 @ 1200a420 ==== 
 * signature: undefined4 __cdecl FUN_1200a420(undefined4 * param_1, undefined4 * param_2)
 * body: 1200a420-1200a62c
 */

undefined4 __cdecl FUN_1200a420(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int local_10;
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
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_2 + 0x1a);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x2a) = *(undefined4 *)((int)param_2 + 0x2a);
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)((int)param_2 + 0x2e);
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)((int)param_2 + 0x32);
  param_1[0xd] = param_2[0xd];
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined4 *)((int)param_1 + 0x3a) = *(undefined4 *)((int)param_2 + 0x3a);
  *(undefined4 *)((int)param_1 + 0x3e) = *(undefined4 *)((int)param_2 + 0x3e);
  *(undefined4 *)((int)param_1 + 0x42) = *(undefined4 *)((int)param_2 + 0x42);
  *(undefined2 *)((int)param_1 + 0x46) = *(undefined2 *)((int)param_2 + 0x46);
  puVar1 = param_1 + 0x12;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_10);
  DAT_12039a9c = (*pcVar3)(local_10,0,puVar1);
  *(undefined2 *)puVar1 = 100;
  *(undefined4 *)((int)param_1 + 0x4a) = 0xc9;
  *(undefined4 *)((int)param_1 + 0x4e) = 5;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x2f,&iStack_c);
  DAT_12039a9c = (*pcVar3)(iStack_c,puVar1,param_2 + 0x12);
  puVar2 = (undefined2 *)((int)param_1 + 0x5a);
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_8);
  DAT_12039a9c = (*pcVar3)(iStack_8,param_1,puVar2);
  *puVar2 = 0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x19,&iStack_4);
  DAT_12039a9c = (*pcVar3)(iStack_4,puVar2,(int)param_2 + 0x5a);
  *(undefined4 *)((int)param_1 + 0x86) = *(undefined4 *)((int)param_2 + 0x86);
  *(undefined2 *)((int)param_1 + 0x8a) = *(undefined2 *)((int)param_2 + 0x8a);
  if (*(char *)(param_1 + 0x27) != '\0') {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,3,&iStack_c);
    lVar4 = __ftol();
    DAT_12039a9c = (*pcVar3)(iStack_c,param_1,0,(int)lVar4);
  }
  return 0;
}


