
/* ==== FUN_0047ac70 @ 0047ac70 ==== 
 * signature: undefined __fastcall FUN_0047ac70(int param_1)
 * body: 0047ac70-0047acde
 */

void __fastcall FUN_0047ac70(int param_1)

{
  if ((DAT_004dc1c4 != '\0') && (*(HDC *)(param_1 + 0xcdc) != (HDC)0x0)) {
    SelectPalette(*(HDC *)(param_1 + 0xcdc),*(HPALETTE *)(param_1 + 0xce4),0);
    RealizePalette(*(HDC *)(param_1 + 0xcdc));
    if (*(int *)(param_1 + 0xce8) != *(int *)(param_1 + 0xcf0)) {
      FUN_004396a0(&DAT_004e1c58,*(int *)(param_1 + 0xcf0),'\0');
      FUN_004396a0(&DAT_004e1c58,*(int *)(param_1 + 0xce8),'\x01');
      *(undefined4 *)(param_1 + 0xcf0) = *(undefined4 *)(param_1 + 0xce8);
    }
  }
  return;
}


