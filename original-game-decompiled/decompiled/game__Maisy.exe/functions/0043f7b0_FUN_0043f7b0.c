
/* ==== FUN_0043f7b0 @ 0043f7b0 ==== 
 * signature: undefined __cdecl FUN_0043f7b0(HGLOBAL param_1, SIZE_T param_2)
 * body: 0043f7b0-0043f7e2
 */

void __cdecl FUN_0043f7b0(HGLOBAL param_1,SIZE_T param_2)

{
  HGLOBAL pvVar1;
  
  pvVar1 = GlobalReAlloc(param_1,param_2,0x40);
  DAT_004da3e0 = (ushort)(pvVar1 == (HGLOBAL)0x0);
  if (DAT_004da3e0 != 0) {
    DAT_004db9a0 = DAT_004db9a0 + 1;
    FUN_004a3538();
  }
  return;
}


