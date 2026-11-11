
/* ==== FUN_150030d0 @ 150030d0 ==== 
 * signature: undefined4 __cdecl FUN_150030d0(uint param_1)
 * body: 150030d0-15003119
 */

undefined4 __cdecl FUN_150030d0(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_15006b50) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_15006a50 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_15003010();
  *piVar2 = 9;
  puVar3 = FUN_15003020();
  *puVar3 = 0;
  return 0xffffffff;
}


