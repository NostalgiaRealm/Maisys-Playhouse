
/* ==== FUN_0049fcd0 @ 0049fcd0 ==== 
 * signature: undefined4 __stdcall FUN_0049fcd0(int param_1)
 * body: 0049fcd0-0049fd52
 */

undefined4 FUN_0049fcd0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  __lock(1);
  if (param_1 == 0) {
    puVar1 = &DAT_004dfc2c;
    uVar3 = 2;
    pcVar2 = DAT_004dfc2c;
  }
  else {
    puVar1 = &DAT_004dfc30;
    uVar3 = 0x15;
    pcVar2 = DAT_004dfc30;
  }
  if (pcVar2 == (code *)0x0) {
    FUN_00493e20(1);
    return 0;
  }
  if (pcVar2 != (code *)0x1) {
    *puVar1 = 0;
    FUN_00493e20(1);
    (*pcVar2)(uVar3);
    return 1;
  }
  FUN_00493e20(1);
  return 1;
}


