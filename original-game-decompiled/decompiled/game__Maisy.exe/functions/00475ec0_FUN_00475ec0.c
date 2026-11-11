
/* ==== FUN_00475ec0 @ 00475ec0 ==== 
 * signature: undefined4 __cdecl FUN_00475ec0(int param_1)
 * body: 00475ec0-00475f22
 */

undefined4 __cdecl FUN_00475ec0(int param_1)

{
  short sVar1;
  short *psVar2;
  void *this;
  undefined4 uVar3;
  
  psVar2 = *(short **)(param_1 + 0x1a);
  sVar1 = *psVar2;
  this = *(void **)(psVar2 + 1);
  if (sVar1 == 6) {
    uVar3 = FUN_00486d80(this,*(char **)(psVar2 + 5),*(int *)(psVar2 + 7));
    *(undefined1 *)(psVar2 + 9) = 1;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  if (sVar1 != 7) {
    if (sVar1 != 8) {
      return CONCAT31((int3)(char)((ushort)sVar1 >> 8),1);
    }
    uVar3 = FUN_00486d40(this,*(undefined4 *)(psVar2 + 7));
    *(undefined1 *)(psVar2 + 9) = 1;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar3 = FUN_00486d60(this,*(undefined4 *)(psVar2 + 5),*(undefined4 *)(psVar2 + 7));
  *(undefined1 *)(psVar2 + 9) = 1;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


