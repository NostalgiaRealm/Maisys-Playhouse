
/* ==== FUN_00420250 @ 00420250 ==== 
 * signature: undefined1 __fastcall FUN_00420250(int param_1)
 * body: 00420250-00420283
 */

undefined1 __fastcall FUN_00420250(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x166) != 0) {
    uVar1 = 1;
    if (0 < *(short *)(param_1 + 0x176)) {
      while (*(char *)(iVar2 + *(int *)(param_1 + 0x166)) != '\0') {
        iVar2 = iVar2 + 1;
        if (*(short *)(param_1 + 0x176) <= iVar2) {
          return uVar1;
        }
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


