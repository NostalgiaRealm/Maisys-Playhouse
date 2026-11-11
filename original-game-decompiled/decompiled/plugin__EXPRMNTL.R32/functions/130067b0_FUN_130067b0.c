
/* ==== FUN_130067b0 @ 130067b0 ==== 
 * signature: undefined4 __cdecl FUN_130067b0(uint param_1)
 * body: 130067b0-130067f9
 */

undefined4 __cdecl FUN_130067b0(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_13009e50) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_13009d50 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_130066f0();
  *piVar2 = 9;
  puVar3 = FUN_13006700();
  *puVar3 = 0;
  return 0xffffffff;
}


