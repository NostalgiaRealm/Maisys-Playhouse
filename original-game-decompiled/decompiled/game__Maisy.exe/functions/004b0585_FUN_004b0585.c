
/* ==== FUN_004b0585 @ 004b0585 ==== 
 * signature: undefined4 __fastcall FUN_004b0585(int * param_1)
 * body: 004b0585-004b05a9
 */

undefined4 __fastcall FUN_004b0585(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(iVar1 + 0x70))();
  FUN_004abc24((CString *)(param_1 + 8));
  (**(code **)(iVar1 + 0x60))(0);
  return 1;
}


