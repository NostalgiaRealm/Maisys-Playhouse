
/* ==== FUN_12032f60 @ 12032f60 ==== 
 * signature: undefined4 __cdecl FUN_12032f60(uint param_1)
 * body: 12032f60-12032fa9
 */

undefined4 __cdecl FUN_12032f60(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  ulong *puVar3;
  
  if ((param_1 < DAT_1203abf0) &&
     (puVar1 = (undefined4 *)
               (*(int *)((int)&DAT_1203aaf0 + ((int)(param_1 & 0xffffffe7) >> 3)) +
               (param_1 & 0x1f) * 0x24), (*(byte *)(puVar1 + 1) & 1) != 0)) {
    return *puVar1;
  }
  piVar2 = FUN_1202efa0();
  *piVar2 = 9;
  puVar3 = FUN_1202efb0();
  *puVar3 = 0;
  return 0xffffffff;
}


