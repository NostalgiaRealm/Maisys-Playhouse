
/* ==== FUN_0040dc90 @ 0040dc90 ==== 
 * signature: char __fastcall FUN_0040dc90(void * param_1)
 * body: 0040dc90-0040dcfe
 */

char __fastcall FUN_0040dc90(void *param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((*(byte *)((int)param_1 + 0x6a) & 0x10) != 0) || (*(int *)((int)param_1 + 0xb0) != 0)) {
    return '\x01' - (*(int *)((int)param_1 + 0xb0) == 0);
  }
  sVar3 = FUN_0040d4e0(param_1,'\x01');
  if (sVar3 == -1) {
    return '\0';
  }
  uVar6 = 0;
  uVar5 = 1;
  iVar1 = **(int **)(*(int *)(*(int *)((int)param_1 + 0x4e) + 4) + 0x48);
  sVar3 = FUN_0040d4e0(param_1,'\x01');
  piVar4 = (int *)(**(code **)(iVar1 + 0x118))(sVar3,uVar5,uVar6);
  if (piVar4 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar4 + 0xf8))();
    return cVar2;
  }
  return '\0';
}


