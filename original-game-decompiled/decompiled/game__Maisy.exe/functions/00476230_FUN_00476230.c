
/* ==== FUN_00476230 @ 00476230 ==== 
 * signature: undefined4 __cdecl FUN_00476230(int param_1)
 * body: 00476230-00476281
 */

undefined4 __cdecl FUN_00476230(int param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x1a);
  piVar2 = (int *)*piVar1;
  if ((*(byte *)((int)piVar2 + 0x1e) & 2) != 0) {
    uVar4 = (**(code **)(*piVar2 + 0x2d4))();
    *(undefined2 *)(piVar1 + 1) = uVar4;
    uVar5 = *(uint *)((int)piVar2 + 0x26) & 0x10000000;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),1U - (uVar5 == 0) ^ *(byte *)((int)piVar1 + 0x96)) &
            0xffffff01;
    bVar3 = (byte)uVar5 ^ *(byte *)((int)piVar1 + 0x96);
    param_1 = CONCAT31((int3)(uVar5 >> 8),bVar3);
    *(byte *)((int)piVar1 + 0x96) = bVar3;
    piVar1[0x26] = piVar2[3];
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


