
/* ==== FUN_10015f96 @ 10015f96 ==== 
 * signature: undefined4 __fastcall FUN_10015f96(undefined4 param_1, int param_2)
 * body: 10015f96-10015f97
 */

undefined4 __fastcall FUN_10015f96(undefined4 param_1,int param_2)

{
  int *in_EAX;
  int *piVar1;
  int unaff_EBP;
  
  *in_EAX = *in_EAX + param_2;
  piVar1 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),0x5f);
  *piVar1 = *piVar1 + param_2;
  *piVar1 = *piVar1 + param_2;
  return *(undefined4 *)(unaff_EBP + 8);
}


