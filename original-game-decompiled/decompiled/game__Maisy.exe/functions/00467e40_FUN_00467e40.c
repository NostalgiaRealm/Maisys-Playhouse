
/* ==== FUN_00467e40 @ 00467e40 ==== 
 * signature: undefined4 __cdecl FUN_00467e40(undefined4 param_1, HGLOBAL param_2)
 * body: 00467e40-00467e5e
 */

undefined4 __cdecl FUN_00467e40(undefined4 param_1,HGLOBAL param_2)

{
  if (param_2 == (HGLOBAL)0x0) {
    return 0x20003;
  }
  FUN_0043f7a0(param_2);
  return 0;
}


