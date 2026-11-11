
/* ==== FUN_11028a80 @ 11028a80 ==== 
 * signature: undefined __cdecl FUN_11028a80(undefined4 * param_1)
 * body: 11028a80-11028aae
 */

void __cdecl FUN_11028a80(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x1e);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x33e;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
  }
  return;
}


