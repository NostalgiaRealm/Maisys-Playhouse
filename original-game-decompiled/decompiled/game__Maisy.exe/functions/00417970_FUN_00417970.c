
/* ==== FUN_00417970 @ 00417970 ==== 
 * signature: uint __cdecl FUN_00417970(int param_1)
 * body: 00417970-0041798d
 */

uint __cdecl FUN_00417970(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0048b560(0,param_1);
  return -(uint)(*piVar1 == 0) & 0x10000;
}


