
/* ==== FUN_00468590 @ 00468590 ==== 
 * signature: undefined __fastcall FUN_00468590(int * param_1)
 * body: 00468590-00468606
 */

void __fastcall FUN_00468590(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 local_58 [21];
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x228))();
  if (*(int **)((int)param_1 + 0x3a) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x1e4))();
    if (cVar2 != '\0') {
      FUN_004142c0(local_58,0x5dc,0,*(undefined4 *)((int)param_1 + 0x3e),0);
      FUN_0046b770(*(void **)((int)param_1 + 0x3e),(int)local_58);
      FUN_004142c0(local_58,0x578,0,*(undefined4 *)((int)param_1 + 0x3e),0);
      FUN_0046b770(*(void **)((int)param_1 + 0x3e),(int)local_58);
    }
  }
  (**(code **)(iVar1 + 0x220))();
  return;
}


