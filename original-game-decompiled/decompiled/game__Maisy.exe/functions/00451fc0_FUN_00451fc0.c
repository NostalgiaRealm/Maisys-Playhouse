
/* ==== FUN_00451fc0 @ 00451fc0 ==== 
 * signature: undefined __cdecl FUN_00451fc0(int param_1, undefined4 * param_2)
 * body: 00451fc0-0045200c
 */

void __cdecl FUN_00451fc0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00490210(0x4000);
  if (puVar1 == (undefined4 *)0x0) {
    for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    return;
  }
  FUN_00452360(0x100,param_1,4,puVar1,(int)param_2);
  FUN_0048e750(puVar1);
  return;
}


