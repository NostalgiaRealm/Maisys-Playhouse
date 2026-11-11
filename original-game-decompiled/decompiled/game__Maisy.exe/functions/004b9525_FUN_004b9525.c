
/* ==== FUN_004b9525 @ 004b9525 ==== 
 * signature: undefined __stdcall FUN_004b9525(undefined4 * param_1)
 * body: 004b9525-004b9593
 */

void FUN_004b9525(undefined4 *param_1)

{
  SHORT SVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  iVar2 = param_1[1];
  if (iVar2 == 0xe701) {
    iVar2 = 0x14;
  }
  else if (iVar2 == 0xe702) {
    iVar2 = 0x90;
  }
  else if (iVar2 == 0xe703) {
    iVar2 = 0x91;
  }
  else {
    if (iVar2 != 0xe706) {
      param_1[7] = 1;
      return;
    }
    iVar2 = 0x15;
    if (DAT_004e5204 != 0) {
      uVar3 = 0x8000;
    }
  }
  SVar1 = GetKeyState(iVar2);
  (**(code **)*param_1)((int)SVar1 & uVar3);
  return;
}


