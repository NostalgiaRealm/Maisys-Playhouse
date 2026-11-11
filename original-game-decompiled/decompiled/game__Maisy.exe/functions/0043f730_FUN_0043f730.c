
/* ==== FUN_0043f730 @ 0043f730 ==== 
 * signature: undefined __cdecl FUN_0043f730(HLOCAL param_1, SIZE_T param_2)
 * body: 0043f730-0043f762
 */

void __cdecl FUN_0043f730(HLOCAL param_1,SIZE_T param_2)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalReAlloc(param_1,param_2,2);
  DAT_004da3e0 = (ushort)(pvVar1 == (HLOCAL)0x0);
  if (DAT_004da3e0 != 0) {
    DAT_004db9a0 = DAT_004db9a0 + 1;
    FUN_004a3538();
  }
  return;
}


