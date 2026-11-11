
/* ==== FUN_120247b0 @ 120247b0 ==== 
 * signature: undefined4 __cdecl FUN_120247b0(undefined4 * param_1, undefined4 * param_2)
 * body: 120247b0-12024967
 */

undefined4 __cdecl FUN_120247b0(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined4 *)((int)param_1 + 0x62) = *(undefined4 *)((int)param_2 + 0x62);
  *(undefined4 *)((int)param_1 + 0x66) = *(undefined4 *)((int)param_2 + 0x66);
  *(undefined2 *)((int)param_1 + 0x6a) = *(undefined2 *)((int)param_2 + 0x6a);
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  *(undefined2 *)(param_1 + 0x1d) = *(undefined2 *)(param_2 + 0x1d);
  FUN_120278a0((short *)((int)param_1 + 10),(int)param_2 + 10);
  FUN_120278a0((short *)((int)param_1 + 0x12),(int)param_2 + 0x12);
  FUN_120278a0((short *)((int)param_1 + 0x1a),(int)param_2 + 0x1a);
  if (param_1[0xc] != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1[0xc]);
    param_1[0xc] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x42));
    *(undefined4 *)((int)param_1 + 0x42) = 0;
    *(undefined4 *)((int)param_1 + 0x3a) = 0;
    *(undefined4 *)((int)param_1 + 0x3e) = 0;
  }
  if (param_1[0x15] != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1[0x15]);
    param_1[0x15] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x22),(int)param_2 + 0x22);
  FUN_120273e0(0,(undefined2 *)(param_1 + 0xd),(int)(param_2 + 0xd));
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x46),(int)param_2 + 0x46);
  *(undefined4 *)((int)param_1 + 0x76) = *(undefined4 *)((int)param_2 + 0x76);
  *(undefined2 *)((int)param_1 + 0x7a) = *(undefined2 *)((int)param_2 + 0x7a);
  return 0;
}


