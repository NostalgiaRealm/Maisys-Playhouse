
/* ==== FUN_004a2c19 @ 004a2c19 ==== 
 * signature: undefined4 __fastcall FUN_004a2c19(int * param_1)
 * body: 004a2c19-004a2c34
 */

undefined4 __fastcall FUN_004a2c19(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x5c))();
  if (param_1 != (int *)0x0) {
    (**(code **)(iVar1 + 4))(1);
  }
  return 1;
}


