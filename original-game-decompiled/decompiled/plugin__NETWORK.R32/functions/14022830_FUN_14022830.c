
/* ==== FUN_14022830 @ 14022830 ==== 
 * signature: undefined4 __cdecl FUN_14022830(uint param_1)
 * body: 14022830-14022879
 */

undefined4 __cdecl FUN_14022830(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_14029f70) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_14021040();
  *piVar2 = 9;
  puVar3 = FUN_14021050();
  *puVar3 = 0;
  return 0xffffffff;
}


