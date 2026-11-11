
/* ==== FUN_110043b0 @ 110043b0 ==== 
 * signature: undefined __cdecl FUN_110043b0(undefined4 * param_1)
 * body: 110043b0-110043ef
 */

void __cdecl FUN_110043b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x3c0;
    puVar1[3] = 0x12e;
    puVar1[4] = 0;
    *puVar1 = 0x3c0;
    puVar2 = FUN_11013ca0(param_1);
    puVar1[5] = puVar2;
  }
  return;
}


