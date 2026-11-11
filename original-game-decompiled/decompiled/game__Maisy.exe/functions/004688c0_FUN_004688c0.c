
/* ==== FUN_004688c0 @ 004688c0 ==== 
 * signature: undefined __fastcall FUN_004688c0(int * param_1)
 * body: 004688c0-00468905
 */

void __fastcall FUN_004688c0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)((int)param_1 + 0x29) & 1) == 0) {
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x148))(1);
    *(undefined1 *)(param_1[0x12] + 0x26) = 1;
    uVar2 = FUN_00427e20(*(void **)((int)param_1 + 0x3a),(int *)param_1[0x12]);
    param_1[0x16] = uVar2;
    *(uint *)(param_1[0x12] + 0x22) = uVar2;
    *(undefined4 *)(param_1[0x12] + 0x1e) = *(undefined4 *)(param_1[0x12] + 0x22);
    (**(code **)(iVar1 + 0x240))(0);
  }
  return;
}


