
/* ==== FUN_004157e0 @ 004157e0 ==== 
 * signature: undefined4 __cdecl FUN_004157e0(undefined4 param_1, int param_2, int param_3, int param_4)
 * body: 004157e0-00415810
 */

undefined4 __cdecl FUN_004157e0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)FUN_0048b560(0,param_2);
    uVar2 = FUN_0048c530((int *)*puVar1,param_3,param_4);
    return uVar2;
  }
  return 0x10000;
}


