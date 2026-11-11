
/* ==== FUN_11004b80 @ 11004b80 ==== 
 * signature: undefined __cdecl FUN_11004b80(undefined4 * param_1)
 * body: 11004b80-11004ba4
 */

void __cdecl FUN_11004b80(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x328;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[3] = 0;
  }
  return;
}


