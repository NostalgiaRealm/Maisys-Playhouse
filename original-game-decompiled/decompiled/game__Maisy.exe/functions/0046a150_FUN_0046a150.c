
/* ==== FUN_0046a150 @ 0046a150 ==== 
 * signature: byte __fastcall FUN_0046a150(int * param_1)
 * body: 0046a150-0046a188
 */

byte __fastcall FUN_0046a150(int *param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  
  bVar3 = *(short *)((int)param_1 + 0x46) == 3;
  if ((bool)bVar3) {
    (**(code **)(*param_1 + 0x7c))();
  }
  for (piVar2 = (int *)FUN_00469fb0(param_1); piVar2 != (int *)0x0;
      piVar2 = *(int **)((int)piVar2 + 0x6a)) {
    bVar1 = (**(code **)(*piVar2 + 0x2d8))();
    bVar3 = bVar3 | bVar1;
  }
  return bVar3;
}


