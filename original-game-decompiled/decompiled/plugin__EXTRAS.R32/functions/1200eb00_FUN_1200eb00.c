
/* ==== FUN_1200eb00 @ 1200eb00 ==== 
 * signature: undefined4 __cdecl FUN_1200eb00(undefined4 * param_1, undefined4 * param_2)
 * body: 1200eb00-1200eb96
 */

undefined4 __cdecl FUN_1200eb00(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 0x1a),(int)param_2 + 0x1a);
  *(undefined4 *)((int)param_1 + 10) = *(undefined4 *)((int)param_2 + 10);
  *(undefined4 *)((int)param_1 + 0xe) = *(undefined4 *)((int)param_2 + 0xe);
  *(undefined4 *)((int)param_1 + 0x12) = *(undefined4 *)((int)param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)((int)param_2 + 0x16);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,0,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,0x3c,param_1 + 0xb);
  FUN_1200fd60(param_1[0xb],param_2[0xb]);
  return 0;
}


