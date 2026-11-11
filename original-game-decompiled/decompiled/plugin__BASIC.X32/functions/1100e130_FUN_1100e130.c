
/* ==== FUN_1100e130 @ 1100e130 ==== 
 * signature: undefined __cdecl FUN_1100e130(int param_1, undefined4 * param_2)
 * body: 1100e130-1100e17a
 */

void __cdecl FUN_1100e130(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_11029420(0x4000);
  if (puVar1 == (undefined4 *)0x0) {
    for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    return;
  }
  FUN_1100e500(0x100,param_1,4,puVar1,(int)param_2);
  FUN_11029180(puVar1);
  return;
}


