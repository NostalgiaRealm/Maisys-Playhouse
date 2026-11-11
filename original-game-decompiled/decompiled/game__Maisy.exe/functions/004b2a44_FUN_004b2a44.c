
/* ==== FUN_004b2a44 @ 004b2a44 ==== 
 * signature: undefined __thiscall FUN_004b2a44(void * this, undefined4 * param_1)
 * body: 004b2a44-004b2a87
 */

void __thiscall FUN_004b2a44(void *this,undefined4 *param_1)

{
  CWnd *pCVar1;
  int iVar2;
  undefined4 uVar3;
  
  pCVar1 = FUN_004b2920(this,0);
  if (pCVar1 != (CWnd *)0x0) {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0xec))(param_1[1] == 0xe151);
    if (iVar2 != 0) {
      uVar3 = 1;
      goto LAB_004b2a7d;
    }
  }
  uVar3 = 0;
LAB_004b2a7d:
  (**(code **)*param_1)(uVar3);
  return;
}


