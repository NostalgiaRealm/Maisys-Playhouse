
/* ==== FUN_0044bd20 @ 0044bd20 ==== 
 * signature: undefined __fastcall FUN_0044bd20(int * param_1)
 * body: 0044bd20-0044bd64
 */

void __fastcall FUN_0044bd20(int *param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)(**(code **)(*param_1 + 0x210))();
  uVar4 = (**(code **)(*piVar3 + 0x128))();
  cVar1 = -((uVar4 & 0x1000000) == 0);
  cVar2 = FUN_0044bd00(param_1,2);
  if (cVar2 != (char)(cVar1 + '\x01')) {
    if (cVar1 != -1) {
      FUN_0044bb70(param_1);
      return;
    }
    FUN_0044bbb0(param_1);
  }
  return;
}


