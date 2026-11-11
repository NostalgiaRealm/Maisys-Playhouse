
/* ==== FUN_12013460 @ 12013460 ==== 
 * signature: undefined __cdecl FUN_12013460(undefined4 * param_1, undefined4 * param_2)
 * body: 12013460-120135d9
 */

void __cdecl FUN_12013460(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  if (*(int *)((int)param_1 + 0x22) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x22));
    *(undefined4 *)((int)param_1 + 0x22) = 0;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
    *(undefined4 *)((int)param_1 + 0x1e) = 0;
  }
  *(undefined2 *)(param_1 + 5) = 0x66;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0xffffffff;
  FUN_120273e0(0,(undefined2 *)(param_1 + 5),(int)(param_2 + 5));
  if (param_1[0xd] != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1[0xd]);
    param_1[0xd] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  *(undefined2 *)((int)param_1 + 0x26) = 0x66;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0xffffffff;
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x26),(int)param_2 + 0x26);
  FUN_120273e0(0,(undefined2 *)(param_1 + 0xe),(int)(param_2 + 0xe));
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x4a),(int)param_2 + 0x4a);
  param_1[0x17] = param_2[0x17];
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 1;
  if (*(char *)(param_1 + 0x1b) != '\0') {
    FUN_12004800((int)param_1);
  }
  *(undefined4 *)((int)param_1 + 0x6e) = 0xffffffff;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  *(undefined1 *)((int)param_1 + 0x72) = 0;
  *(undefined1 *)((int)param_1 + 0x73) = 0;
  return;
}


