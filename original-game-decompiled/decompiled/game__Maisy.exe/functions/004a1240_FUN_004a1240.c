
/* ==== FUN_004a1240 @ 004a1240 ==== 
 * signature: undefined4 __cdecl FUN_004a1240(uint param_1)
 * body: 004a1240-004a1289
 */

undefined4 __cdecl FUN_004a1240(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_004e6790) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_004e6690 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_0048f9d0();
  *piVar2 = 9;
  puVar3 = FUN_0048f9e0();
  *puVar3 = 0;
  return 0xffffffff;
}


