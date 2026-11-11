
/* ==== FUN_00478080 @ 00478080 ==== 
 * signature: undefined4 __cdecl FUN_00478080(int param_1)
 * body: 00478080-004780cc
 */

undefined4 __cdecl FUN_00478080(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 in_EAX;
  uint3 extraout_var;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1a);
  sVar1 = *(short *)*puVar2;
  if ((sVar1 != 3) && (sVar1 != 2)) {
    return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),sVar1) >> 8),1);
  }
  cVar3 = FUN_00415bd0(*(undefined4 *)(*(int *)(param_1 + 0x16) + 8),
                       *(uint **)((short *)*puVar2 + 1),(char *)puVar2[1],(short *)puVar2[2],
                       *(int *)((int)puVar2 + 0xe));
  *(ushort *)(puVar2 + 3) = -(ushort)(cVar3 == '\0');
  return (uint)extraout_var << 8;
}


