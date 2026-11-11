
/* ==== FUN_0047dbb0 @ 0047dbb0 ==== 
 * signature: undefined __fastcall FUN_0047dbb0(undefined4 * param_1)
 * body: 0047dbb0-0047dbd7
 */

void __fastcall FUN_0047dbb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_004a602d(puVar2);
    puVar2 = puVar1;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


