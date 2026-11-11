
/* ==== FUN_0045a4b0 @ 0045a4b0 ==== 
 * signature: undefined __fastcall FUN_0045a4b0(int param_1)
 * body: 0045a4b0-0045a509
 */

void __fastcall FUN_0045a4b0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00466a70(param_1);
  (**(code **)(*piVar1 + 0xec))();
  FUN_0045a250(param_1);
  if (*(void **)(param_1 + 0x82) != (void *)0x0) {
    FUN_00407a20(*(void **)(param_1 + 0x82),0);
  }
  (**(code **)(**(int **)(param_1 + 0x6e) + 0x7c))();
  if (*(char *)(param_1 + 0x87) != '\0') {
    FUN_00470bd0(DAT_004dc564);
    FUN_0045b5a0(param_1);
    FUN_0040f9c0(DAT_004d99a8);
  }
  return;
}


