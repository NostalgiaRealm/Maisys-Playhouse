
/* ==== FUN_0042e9f0 @ 0042e9f0 ==== 
 * signature: undefined __fastcall FUN_0042e9f0(int * param_1)
 * body: 0042e9f0-0042ea67
 */

void __fastcall FUN_0042e9f0(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_00410ca0(DAT_004da390,0x16);
  piVar3 = (int *)FUN_00409590(*(int *)((int)param_1 + 0x42));
  cVar2 = (**(code **)(*piVar3 + 0x130))();
  if (cVar2 != '\0') {
    piVar3 = (int *)FUN_00409590(*(int *)((int)param_1 + 0x42));
    (**(code **)(*piVar3 + 300))();
  }
  *(undefined1 *)(param_1 + 0x1b) = 1;
  (**(code **)(**(int **)((int)param_1 + 0x3e) + 0x120))(1);
  piVar3 = (int *)FUN_00409590(*(int *)((int)param_1 + 0x42));
  iVar1 = *piVar3;
  uVar4 = (**(code **)(*param_1 + 0x210))(0,0);
  (**(code **)(iVar1 + 0x124))(0,0,0,uVar4);
  return;
}


