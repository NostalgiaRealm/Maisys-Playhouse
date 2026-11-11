
/* ==== FUN_004761c0 @ 004761c0 ==== 
 * signature: undefined4 __cdecl FUN_004761c0(int param_1)
 * body: 004761c0-0047622c
 */

undefined4 __cdecl FUN_004761c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x1a);
  if ((*(byte *)(*piVar1 + 0x1e) & 2) != 0) {
    iVar2 = (**(code **)(*(int *)*piVar1 + 0x128))();
    piVar1[1] = iVar2;
    uVar3 = (**(code **)(*(int *)*piVar1 + 0x28c))();
    *(undefined4 *)((int)piVar1 + 0xe) = uVar3;
    iVar2 = (**(code **)(*(int *)*piVar1 + 0x114))();
    piVar1[2] = iVar2;
    *(undefined4 *)((int)piVar1 + 0x12) = *(undefined4 *)(*piVar1 + 0x6a);
    *(undefined4 *)((int)piVar1 + 0x16) = *(undefined4 *)(*piVar1 + 0x66);
    uVar3 = FUN_00469fb0((int *)*piVar1);
    *(undefined4 *)((int)piVar1 + 0x1a) = uVar3;
    *(undefined4 *)((int)piVar1 + 0x1e) = *(undefined4 *)(*piVar1 + 0x62);
    param_1 = (**(code **)(*(int *)*piVar1 + 0x27c))();
    *(short *)(piVar1 + 3) = (short)param_1;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


