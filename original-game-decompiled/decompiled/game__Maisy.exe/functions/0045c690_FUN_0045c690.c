
/* ==== FUN_0045c690 @ 0045c690 ==== 
 * signature: undefined __fastcall FUN_0045c690(int * param_1)
 * body: 0045c690-0045c700
 */

void __fastcall FUN_0045c690(int *param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  FUN_00410390(param_1);
  uVar1 = *(undefined4 *)((int)param_1 + 0x3e);
  local_10 = CONCAT22((short)param_1[0x11] - (short)param_1[0x10],
                      *(short *)((int)param_1 + 0x42) - *(short *)((int)param_1 + 0x3e));
  if (*(int *)((int)param_1 + 0x26) != DAT_004dc574) {
    FUN_00410870(param_1,local_10);
    FUN_00410850(param_1,uVar1);
  }
  FUN_004108a0((int)param_1);
  return;
}


