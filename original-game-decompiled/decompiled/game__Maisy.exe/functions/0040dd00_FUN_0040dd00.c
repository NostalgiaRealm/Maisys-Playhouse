
/* ==== FUN_0040dd00 @ 0040dd00 ==== 
 * signature: undefined4 __fastcall FUN_0040dd00(void * param_1)
 * body: 0040dd00-0040dd69
 */

undefined4 __fastcall FUN_0040dd00(void *param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((*(byte *)((int)param_1 + 0x6a) & 0x10) != 0) || (*(int *)((int)param_1 + 0xb0) != 0)) {
    return *(undefined4 *)((int)param_1 + 0xb0);
  }
  sVar2 = FUN_0040d4e0(param_1,'\x01');
  if (sVar2 == -1) {
    return 0;
  }
  uVar5 = 1;
  uVar4 = 1;
  iVar1 = **(int **)(*(int *)(*(int *)((int)param_1 + 0x4e) + 4) + 0x48);
  sVar2 = FUN_0040d4e0(param_1,'\x01');
  piVar3 = (int *)(**(code **)(iVar1 + 0x118))(sVar2,uVar4,uVar5);
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar3 + 0xe8))();
    return uVar4;
  }
  return 0;
}


