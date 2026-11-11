
/* ==== FUN_13003830 @ 13003830 ==== 
 * signature: undefined __cdecl FUN_13003830(undefined4 param_1, undefined4 param_2, short * param_3)
 * body: 13003830-1300388a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_13003830(undefined4 param_1,undefined4 param_2,short *param_3)

{
  code *pcVar1;
  int local_4;
  
  if (*param_3 == 0x6a) {
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 1;
  }
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x3c),1,0,&local_4);
  _DAT_13008d34 = (*pcVar1)(local_4,param_1,param_2,param_3);
  return;
}


