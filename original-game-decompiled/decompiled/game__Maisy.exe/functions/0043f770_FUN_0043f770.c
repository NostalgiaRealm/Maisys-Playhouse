
/* ==== FUN_0043f770 @ 0043f770 ==== 
 * signature: HGLOBAL __cdecl FUN_0043f770(SIZE_T param_1)
 * body: 0043f770-0043f796
 */

HGLOBAL __cdecl FUN_0043f770(SIZE_T param_1)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalAlloc(0x42,param_1);
  if (pvVar1 == (HGLOBAL)0x0) {
    DAT_004db9a0 = DAT_004db9a0 + 1;
    FUN_004a3538();
  }
  return pvVar1;
}


