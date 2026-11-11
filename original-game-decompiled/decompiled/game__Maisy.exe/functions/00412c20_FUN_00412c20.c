
/* ==== FUN_00412c20 @ 00412c20 ==== 
 * signature: undefined4 * __cdecl FUN_00412c20(int param_1)
 * body: 00412c20-00412c5c
 */

undefined4 * __cdecl FUN_00412c20(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0048ebf0(1,param_1 + 4);
  if ((puVar1 == (undefined4 *)0x0) && (DAT_004da3e0 != 0)) {
    FUN_004a3538();
  }
  DAT_004dc590 = DAT_004dc590 + 1;
  *puVar1 = &DAT_004d9b70;
  return puVar1 + 1;
}


