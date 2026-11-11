
/* ==== FUN_00481460 @ 00481460 ==== 
 * signature: int __fastcall FUN_00481460(int * param_1)
 * body: 00481460-00481495
 */

int __fastcall FUN_00481460(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x14e);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_1 + 0x15a) & 2) != 0) {
      iVar2 = *param_1;
      cVar1 = (**(code **)(iVar2 + 0xf4))();
      if (cVar1 != '\0') {
        (**(code **)(iVar2 + 0x104))();
      }
    }
    iVar2 = *(int *)((int)param_1 + 0x14e);
  }
  return iVar2;
}


