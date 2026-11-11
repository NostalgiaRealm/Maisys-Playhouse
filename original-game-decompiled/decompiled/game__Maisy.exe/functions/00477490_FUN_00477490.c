
/* ==== FUN_00477490 @ 00477490 ==== 
 * signature: undefined4 __cdecl FUN_00477490(int param_1)
 * body: 00477490-004774d3
 */

undefined4 __cdecl FUN_00477490(int param_1)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  
  psVar1 = *(short **)(param_1 + 0x1a);
  sVar2 = *psVar1;
  uVar3 = CONCAT22((short)((uint)param_1 >> 0x10),sVar2);
  if (sVar2 == 0) {
    sVar2 = FUN_00477470();
    *(int *)(psVar1 + 3) = (int)sVar2;
    return CONCAT31((int3)(char)((ushort)sVar2 >> 8),1);
  }
  if (sVar2 == 1) {
    uVar3 = FUN_00477480();
    *(undefined4 *)(psVar1 + 3) = uVar3;
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


