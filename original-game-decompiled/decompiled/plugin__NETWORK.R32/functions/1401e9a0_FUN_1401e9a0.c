
/* ==== FUN_1401e9a0 @ 1401e9a0 ==== 
 * signature: undefined4 __stdcall FUN_1401e9a0(int param_1)
 * body: 1401e9a0-1401ea22
 */

undefined4 FUN_1401e9a0(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  __lock(1);
  if (param_1 == 0) {
    puVar1 = &DAT_1402819c;
    uVar3 = 2;
    pcVar2 = DAT_1402819c;
  }
  else {
    puVar1 = &DAT_140281a0;
    uVar3 = 0x15;
    pcVar2 = DAT_140281a0;
  }
  if (pcVar2 == (code *)0x0) {
    FUN_1401a650(1);
    return 0;
  }
  if (pcVar2 != (code *)0x1) {
    *puVar1 = 0;
    FUN_1401a650(1);
    (*pcVar2)(uVar3);
    return 1;
  }
  FUN_1401a650(1);
  return 1;
}


