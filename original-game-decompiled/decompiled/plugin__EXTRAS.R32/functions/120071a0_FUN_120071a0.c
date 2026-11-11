
/* ==== FUN_120071a0 @ 120071a0 ==== 
 * signature: undefined4 __cdecl FUN_120071a0(undefined4 * param_1, undefined4 * param_2)
 * body: 120071a0-12007268
 */

undefined4 __cdecl FUN_120071a0(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)param_2 + 0xe);
  if (*(int *)((int)param_1 + 0x1e) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)((int)param_1 + 0x1e));
    *(undefined4 *)((int)param_1 + 0x1e) = 0;
    *(undefined4 *)((int)param_1 + 0x16) = 0;
    *(undefined4 *)((int)param_1 + 0x1a) = 0;
  }
  FUN_12027790(0,(undefined2 *)(param_1 + 4),0);
  FUN_120273e0(0,(undefined2 *)(param_1 + 4),(int)(param_2 + 4));
  *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)((int)param_2 + 0x22);
  *(undefined2 *)((int)param_1 + 0x26) = *(undefined2 *)((int)param_2 + 0x26);
  param_1[10] = param_2[10];
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  *(undefined4 *)((int)param_1 + 0x2e) = *(undefined4 *)((int)param_2 + 0x2e);
  return 0;
}


