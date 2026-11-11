
/* ==== FUN_0044c470 @ 0044c470 ==== 
 * signature: undefined __fastcall FUN_0044c470(int param_1)
 * body: 0044c470-0044c4c2
 */

void __fastcall FUN_0044c470(int param_1)

{
  HGDIOBJ ho;
  
  if (*(HDC *)(param_1 + 0x84) != (HDC)0x0) {
    if (*(HGDIOBJ *)(param_1 + 0x88) != (HGDIOBJ)0x0) {
      ho = SelectObject(*(HDC *)(param_1 + 0x84),*(HGDIOBJ *)(param_1 + 0x88));
      DeleteObject(ho);
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    DeleteDC(*(HDC *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}


