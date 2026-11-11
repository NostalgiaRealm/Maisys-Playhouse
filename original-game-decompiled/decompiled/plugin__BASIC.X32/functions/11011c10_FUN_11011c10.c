
/* ==== FUN_11011c10 @ 11011c10 ==== 
 * signature: undefined __cdecl FUN_11011c10(undefined4 * param_1)
 * body: 11011c10-11011c34
 */

void __cdecl FUN_11011c10(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x324;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[3] = 0;
  }
  return;
}


