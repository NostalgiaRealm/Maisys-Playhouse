
/* ==== FUN_004937f0 @ 004937f0 ==== 
 * signature: undefined4 __cdecl FUN_004937f0(int * param_1)
 * body: 004937f0-0049381b
 */

undefined4 __cdecl FUN_004937f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (piVar1[7] == 0)) {
    return 1;
  }
  return 0;
}


