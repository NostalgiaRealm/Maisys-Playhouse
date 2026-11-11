
/* ==== FUN_110250f0 @ 110250f0 ==== 
 * signature: undefined __cdecl FUN_110250f0(undefined4 * param_1)
 * body: 110250f0-1102510d
 */

void __cdecl FUN_110250f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0xe);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x321;
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  return;
}


