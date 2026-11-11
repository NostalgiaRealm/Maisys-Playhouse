
/* ==== FUN_004763b0 @ 004763b0 ==== 
 * signature: undefined4 __cdecl FUN_004763b0(int param_1)
 * body: 004763b0-00476417
 */

undefined4 __cdecl FUN_004763b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x1a);
  if ((*(byte *)(*piVar1 + 0x1e) & 4) != 0) {
    piVar3 = (int *)(**(code **)(*(int *)*piVar1 + 0x3c0))();
    iVar2 = *piVar3;
    (**(code **)(iVar2 + 0x298))(piVar1 + 1);
    (**(code **)(iVar2 + 0x2a0))(piVar1 + 3);
    (**(code **)(iVar2 + 0x2a8))(piVar1 + 5);
    (**(code **)(iVar2 + 0x314))(piVar1 + 8,piVar1 + 10);
    param_1 = (**(code **)(iVar2 + 0x290))(piVar1 + 7);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


