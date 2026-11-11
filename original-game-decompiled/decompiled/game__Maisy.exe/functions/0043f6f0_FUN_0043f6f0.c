
/* ==== FUN_0043f6f0 @ 0043f6f0 ==== 
 * signature: HLOCAL __cdecl FUN_0043f6f0(SIZE_T param_1)
 * body: 0043f6f0-0043f716
 */

HLOCAL __cdecl FUN_0043f6f0(SIZE_T param_1)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalAlloc(2,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
    DAT_004db9a0 = DAT_004db9a0 + 1;
    FUN_004a3538();
  }
  return pvVar1;
}


