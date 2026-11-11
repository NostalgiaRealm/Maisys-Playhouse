
/* ==== FUN_00475050 @ 00475050 ==== 
 * signature: undefined __fastcall FUN_00475050(int * param_1)
 * body: 00475050-00475083
 */

void __fastcall FUN_00475050(int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x15c))(0);
  if ((cVar2 != '\0') && (cVar2 = FUN_0040d6d0(param_1), cVar2 != '\0')) {
    return;
  }
  (**(code **)(iVar1 + 0x1cc))();
  (**(code **)(iVar1 + 0x160))(0,1);
  return;
}


