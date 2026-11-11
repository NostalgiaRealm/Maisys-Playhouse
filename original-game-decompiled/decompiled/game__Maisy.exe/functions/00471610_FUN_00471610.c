
/* ==== FUN_00471610 @ 00471610 ==== 
 * signature: undefined4 __cdecl FUN_00471610(int param_1, undefined4 * param_2)
 * body: 00471610-00471639
 */

undefined4 __cdecl FUN_00471610(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_0048b560(0,param_1);
  uVar1 = *(undefined4 *)(*piVar2 + 0xb6);
  *param_2 = *(undefined4 *)(*piVar2 + 0xb2);
  param_2[1] = uVar1;
  return 0;
}


