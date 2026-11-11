
/* ==== FUN_00417c60 @ 00417c60 ==== 
 * signature: undefined __fastcall FUN_00417c60(int * param_1)
 * body: 00417c60-00417cf7
 */

void __fastcall FUN_00417c60(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int local_8;
  
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x15c))(0);
  if ((cVar2 != '\0') && (cVar2 = FUN_0040d6d0(param_1), cVar2 != '\0')) {
    return;
  }
  iVar3 = FUN_0040dd00(param_1);
  if (iVar3 == 0) {
    *(undefined4 *)((int)param_1 + 0x82) = 0;
    pcVar4 = (code *)FUN_0048b580(*(int *)((int)param_1 + 0x166),1,0,&local_8);
    DAT_004e34cc = (*pcVar4)(local_8,0);
    if (DAT_004e34cc != 0) goto LAB_00417cea;
  }
  iVar3 = FUN_0040dd00(param_1);
  if (iVar3 != 0) {
    (**(code **)(iVar1 + 0x19c))();
  }
  (**(code **)(iVar1 + 0x1cc))();
  (**(code **)(iVar1 + 0x160))(0,1);
LAB_00417cea:
  (**(code **)(iVar1 + 0x19c))();
  return;
}


