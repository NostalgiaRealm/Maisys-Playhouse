
/* ==== FUN_1102c4c0 @ 1102c4c0 ==== 
 * signature: undefined4 __stdcall FUN_1102c4c0(int param_1)
 * body: 1102c4c0-1102c542
 */

undefined4 FUN_1102c4c0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  __lock(1);
  if (param_1 == 0) {
    puVar1 = &DAT_11036f24;
    uVar3 = 2;
    pcVar2 = DAT_11036f24;
  }
  else {
    puVar1 = &DAT_11036f28;
    uVar3 = 0x15;
    pcVar2 = DAT_11036f28;
  }
  if (pcVar2 == (code *)0x0) {
    FUN_1102b240(1);
    return 0;
  }
  if (pcVar2 != (code *)0x1) {
    *puVar1 = 0;
    FUN_1102b240(1);
    (*pcVar2)(uVar3);
    return 1;
  }
  FUN_1102b240(1);
  return 1;
}


