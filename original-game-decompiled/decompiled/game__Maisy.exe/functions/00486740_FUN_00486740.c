
/* ==== FUN_00486740 @ 00486740 ==== 
 * signature: undefined4 __cdecl FUN_00486740(int param_1, undefined4 * param_2)
 * body: 00486740-0048677f
 */

undefined4 __cdecl FUN_00486740(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int local_c;
  int *local_8;
  
  pcVar1 = (code *)FUN_0048b580(param_1,0,2,&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,&local_8);
  uVar2 = FUN_00486cb0(local_8);
  *param_2 = uVar2;
  return 0;
}


