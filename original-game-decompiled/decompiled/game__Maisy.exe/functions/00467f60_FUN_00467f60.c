
/* ==== FUN_00467f60 @ 00467f60 ==== 
 * signature: undefined4 __cdecl FUN_00467f60(undefined4 param_1, HGLOBAL param_2)
 * body: 00467f60-00467f7c
 */

undefined4 __cdecl FUN_00467f60(undefined4 param_1,HGLOBAL param_2)

{
  if (param_2 == (HGLOBAL)0x0) {
    return 0x20002;
  }
  GlobalUnlock(param_2);
  return 0;
}


