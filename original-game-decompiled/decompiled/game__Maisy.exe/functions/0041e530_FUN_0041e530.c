
/* ==== FUN_0041e530 @ 0041e530 ==== 
 * signature: undefined __fastcall FUN_0041e530(int * param_1)
 * body: 0041e530-0041e586
 */

void __fastcall FUN_0041e530(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (((*(byte *)((int)param_1 + 0x6a) & 0x20) == 0) && ((*(byte *)((int)param_1 + 0x6b) & 2) == 0))
  {
    iVar2 = FUN_0040da30();
    if (iVar2 != 0) {
      iVar2 = *param_1;
      cVar1 = (**(code **)(iVar2 + 0x1bc))();
      if (cVar1 != '\0') {
        (**(code **)(iVar2 + 0x1a8))(0);
        (**(code **)(iVar2 + 0x80))(0x7fffffff,100);
        (**(code **)(iVar2 + 0x160))(0,0);
        (**(code **)(iVar2 + 0x114))();
      }
    }
  }
  return;
}


