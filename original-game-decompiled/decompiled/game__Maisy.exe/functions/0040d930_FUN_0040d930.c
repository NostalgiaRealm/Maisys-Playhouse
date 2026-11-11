
/* ==== FUN_0040d930 @ 0040d930 ==== 
 * signature: undefined __fastcall FUN_0040d930(int * param_1)
 * body: 0040d930-0040d97c
 */

void __fastcall FUN_0040d930(int *param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  code *pcVar3;
  
  if ((*(byte *)((int)param_1 + 0x6b) & 2) == 0) {
    iVar2 = FUN_0040da30();
    if (iVar2 != 0) {
      iVar2 = *param_1;
      cVar1 = (**(code **)(iVar2 + 0x1bc))();
      if (cVar1 != '\0') {
        (**(code **)(iVar2 + 0x1a8))(0);
        (**(code **)(iVar2 + 0x160))(0,0);
        pcVar3 = FUN_0040d910;
        this = (void *)FUN_0040da30();
        FUN_00430720(this,pcVar3);
      }
    }
  }
  return;
}


