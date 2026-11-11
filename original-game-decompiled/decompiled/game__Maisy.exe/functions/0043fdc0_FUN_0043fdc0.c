
/* ==== FUN_0043fdc0 @ 0043fdc0 ==== 
 * signature: undefined __fastcall FUN_0043fdc0(int * param_1)
 * body: 0043fdc0-0043fdfa
 */

void __fastcall FUN_0043fdc0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = FUN_00440230(param_1,1);
  if ((cVar1 == '\0') && (*(int *)((int)param_1 + 0x7e) != 0)) {
    FUN_004400a0(param_1);
    piVar2 = (int *)FUN_0041ed90((int)param_1);
    (**(code **)(*piVar2 + 0x78))(10,param_1,1);
    FUN_004401e0(param_1,1,'\x01');
  }
  return;
}


