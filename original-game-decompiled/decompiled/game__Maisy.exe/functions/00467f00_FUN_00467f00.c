
/* ==== FUN_00467f00 @ 00467f00 ==== 
 * signature: undefined4 __cdecl FUN_00467f00(undefined4 param_1, HGLOBAL param_2, SIZE_T * param_3)
 * body: 00467f00-00467f21
 */

undefined4 __cdecl FUN_00467f00(undefined4 param_1,HGLOBAL param_2,SIZE_T *param_3)

{
  SIZE_T SVar1;
  
  if (param_2 == (HGLOBAL)0x0) {
    return 0x20002;
  }
  SVar1 = GlobalSize(param_2);
  *param_3 = SVar1;
  return 0;
}


