
/* ==== FUN_120224b0 @ 120224b0 ==== 
 * signature: undefined4 __cdecl FUN_120224b0(undefined2 * param_1)
 * body: 120224b0-120224e9
 */

undefined4 __cdecl FUN_120224b0(undefined2 *param_1)

{
  int iVar1;
  
  *param_1 = 100;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[5] = 0x14;
  iVar1 = FUN_12023050(1);
  param_1[7] = (short)iVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return 0;
}


