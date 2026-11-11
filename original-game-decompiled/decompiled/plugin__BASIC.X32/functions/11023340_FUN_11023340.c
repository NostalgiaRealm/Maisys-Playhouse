
/* ==== FUN_11023340 @ 11023340 ==== 
 * signature: undefined __cdecl FUN_11023340(undefined4 * param_1)
 * body: 11023340-11023366
 */

void __cdecl FUN_11023340(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x326;
    *(undefined2 *)(puVar1 + 4) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    puVar1[3] = 0;
  }
  return;
}


