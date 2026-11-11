
/* ==== FUN_004980f0 @ 004980f0 ==== 
 * signature: float10 __cdecl FUN_004980f0(undefined4 param_1, undefined4 param_2, int param_3)
 * body: 004980f0-00498107
 */

float10 __cdecl FUN_004980f0(undefined4 param_1,undefined4 param_2,int param_3)

{
  double dVar1;
  
  dVar1 = _ldexp((double)CONCAT44(param_2,param_1),param_3);
  return (float10)dVar1;
}


