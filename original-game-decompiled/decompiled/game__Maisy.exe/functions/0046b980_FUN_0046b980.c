
/* ==== FUN_0046b980 @ 0046b980 ==== 
 * signature: undefined __fastcall FUN_0046b980(int * param_1)
 * body: 0046b980-0046b9f2
 */

void __fastcall FUN_0046b980(int *param_1)

{
  short sVar1;
  void *this;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(byte *)(param_1 + 10) & 0x20) == 0) &&
     (this = *(void **)((int)param_1 + 0x3a), this != (void *)0x0)) {
    iVar2 = FUN_0046ca10((int)param_1);
    uVar3 = FUN_00403760(this,iVar2);
    if ((char)uVar3 != '\0') {
      sVar1 = *(short *)((int)param_1 + 0x46);
      if ((((sVar1 != 4) && (sVar1 != 7)) && (sVar1 != 0)) && (sVar1 != 1)) {
        (**(code **)(*param_1 + 0x2f0))(0,1);
      }
      (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x228))();
      *(undefined2 *)((int)param_1 + 0x46) = 5;
      iVar2 = *param_1;
      (**(code **)(iVar2 + 0x140))(0);
      (**(code **)(iVar2 + 0x2d8))();
    }
  }
  return;
}


