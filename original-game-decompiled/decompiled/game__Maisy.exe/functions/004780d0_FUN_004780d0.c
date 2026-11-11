
/* ==== FUN_004780d0 @ 004780d0 ==== 
 * signature: uint __cdecl FUN_004780d0(int param_1)
 * body: 004780d0-0047811c
 */

uint __cdecl FUN_004780d0(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 in_EAX;
  uint uVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1a);
  sVar1 = *(short *)*puVar2;
  if ((sVar1 != 2) && (sVar1 != 3)) {
    return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),sVar1) >> 8),1);
  }
  uVar3 = FUN_00416070(*(int **)(*(int *)(param_1 + 0x16) + 8),*(int **)((short *)*puVar2 + 1),
                       (char *)puVar2[1],(short *)puVar2[2],*(undefined4 *)((int)puVar2 + 0xe));
  *(ushort *)(puVar2 + 3) = -(ushort)((char)uVar3 == '\0');
  return uVar3 & 0xffffff00;
}


