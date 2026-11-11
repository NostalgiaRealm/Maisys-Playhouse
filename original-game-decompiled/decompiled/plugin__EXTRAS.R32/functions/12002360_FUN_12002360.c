
/* ==== FUN_12002360 @ 12002360 ==== 
 * signature: undefined4 __cdecl FUN_12002360(undefined4 * param_1, undefined4 * param_2)
 * body: 12002360-12002458
 */

undefined4 __cdecl FUN_12002360(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  int local_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  uVar1 = *(undefined2 *)((int)param_2 + 0x12);
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
  *(uint *)((int)param_1 + 0x16) = *(uint *)((int)param_2 + 0x16) & 2;
  *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)((int)param_2 + 0x1a);
  *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)((int)param_2 + 0x1e);
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar2)(local_4,*(undefined4 *)((int)param_1 + 0x2e));
    *(undefined4 *)((int)param_1 + 0x2e) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
  }
  FUN_12027790(0,(undefined2 *)(param_1 + 8),0);
  FUN_120273e0(0,(undefined2 *)(param_1 + 8),(int)(param_2 + 8));
  *(undefined4 *)((int)param_1 + 0x32) = *(undefined4 *)((int)param_2 + 0x32);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)((int)param_2 + 0x36);
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  return 0;
}


