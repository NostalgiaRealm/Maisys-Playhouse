
/* ==== FUN_00440720 @ 00440720 ==== 
 * signature: undefined __fastcall FUN_00440720(int * param_1)
 * body: 00440720-00440760
 */

void __fastcall FUN_00440720(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = FUN_00440230(param_1,0x80);
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_0041ed90((int)param_1);
    (**(code **)(*piVar2 + 0x78))(0xb,param_1,1);
    return;
  }
  FUN_00440010(param_1);
  cVar1 = FUN_00440230(param_1,2);
  if (cVar1 == '\0') {
    FUN_0043ff10(param_1);
  }
  return;
}


