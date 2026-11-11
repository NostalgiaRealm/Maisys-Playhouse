
/* ==== FUN_004b8d88 @ 004b8d88 ==== 
 * signature: undefined4 __fastcall FUN_004b8d88(int param_1)
 * body: 004b8d88-004b8d98
 */

undefined4 __fastcall FUN_004b8d88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004b8d18(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x3c);
  }
  return uVar2;
}


