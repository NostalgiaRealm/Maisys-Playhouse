
/* ==== FUN_11031c30 @ 11031c30 ==== 
 * signature: undefined4 __cdecl FUN_11031c30(uint param_1)
 * body: 11031c30-11031c79
 */

undefined4 __cdecl FUN_11031c30(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_1103ab30) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_1103aa30 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_1102e850();
  *piVar2 = 9;
  puVar3 = FUN_1102e860();
  *puVar3 = 0;
  return 0xffffffff;
}


