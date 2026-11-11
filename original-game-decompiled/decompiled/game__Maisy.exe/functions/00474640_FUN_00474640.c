
/* ==== FUN_00474640 @ 00474640 ==== 
 * signature: undefined __fastcall FUN_00474640(int * param_1)
 * body: 00474640-004746a7
 */

void __fastcall FUN_00474640(int *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x7c))();
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x68))(5);
  if (cVar2 != '\0') {
    bVar3 = (**(code **)(iVar1 + 0x300))();
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        (**(code **)(**(int **)((int)param_1 + 0x5a) + 0x24c))(&local_14);
      }
      else {
        local_14 = 0x7fffffff;
      }
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      (**(code **)(iVar1 + 0x44))(5,FUN_00419630,&local_14);
    }
  }
  return;
}


