
/* ==== FUN_004487a0 @ 004487a0 ==== 
 * signature: undefined __fastcall FUN_004487a0(int param_1)
 * body: 004487a0-004487f0
 */

void __fastcall FUN_004487a0(int param_1)

{
  int iVar1;
  short sVar2;
  undefined1 local_10 [10];
  char local_6;
  
  sVar2 = 1;
  if (0 < *(int *)(*(int *)(param_1 + 0x2a) + 0x26)) {
    do {
      iVar1 = (int)sVar2;
      FUN_00430370(*(void **)(param_1 + 0x2a),iVar1,local_10);
      if (local_6 != '\0') {
        sVar2 = sVar2 + -1;
        FUN_00430090(*(void **)(param_1 + 0x2a),iVar1);
      }
      sVar2 = sVar2 + 1;
    } while ((int)sVar2 <= *(int *)(*(int *)(param_1 + 0x2a) + 0x26));
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  return;
}


