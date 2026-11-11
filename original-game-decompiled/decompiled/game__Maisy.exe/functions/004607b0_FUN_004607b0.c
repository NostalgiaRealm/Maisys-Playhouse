
/* ==== FUN_004607b0 @ 004607b0 ==== 
 * signature: undefined __fastcall FUN_004607b0(int * param_1)
 * body: 004607b0-00460800
 */

void __fastcall FUN_004607b0(int *param_1)

{
  int iVar1;
  short sVar2;
  
  iVar1 = *param_1;
  sVar2 = (**(code **)(iVar1 + 0x2d4))();
  if (((sVar2 == 3) && ((*(byte *)(param_1 + 0x27) & 2) != 0)) ||
     ((*(int *)((int)param_1 + 0x3a) != 0 &&
      (*(char *)(*(int *)((int)param_1 + 0x3a) + 0xa4) == '\0')))) {
    (**(code **)(iVar1 + 0x424))(0);
  }
  (**(code **)(iVar1 + 0x330))();
  FUN_0046cd70();
  return;
}


