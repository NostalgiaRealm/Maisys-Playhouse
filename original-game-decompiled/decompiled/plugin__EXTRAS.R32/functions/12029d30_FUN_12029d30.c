
/* ==== FUN_12029d30 @ 12029d30 ==== 
 * signature: undefined4 __cdecl FUN_12029d30(int * param_1)
 * body: 12029d30-12029d5b
 */

undefined4 __cdecl FUN_12029d30(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (piVar1[7] == 0)) {
    return 1;
  }
  return 0;
}


