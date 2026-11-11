
/* ==== FUN_0047a720 @ 0047a720 ==== 
 * signature: undefined __fastcall FUN_0047a720(int param_1)
 * body: 0047a720-0047a7cf
 */

void __fastcall FUN_0047a720(int param_1)

{
  code *pcVar1;
  
  pcVar1 = DeleteDC_exref;
  if (*(HDC *)(param_1 + 0x468) != (HDC)0x0) {
    if (*(HGDIOBJ *)(param_1 + 0x89c) != (HGDIOBJ)0x0) {
      SelectObject(*(HDC *)(param_1 + 0x468),*(HGDIOBJ *)(param_1 + 0x89c));
    }
    if (*(HGDIOBJ *)(param_1 + 0x898) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(param_1 + 0x898));
    }
    pcVar1 = DeleteDC_exref;
    *(undefined4 *)(param_1 + 0x898) = 0;
    DeleteDC(*(HDC *)(param_1 + 0x468));
    *(undefined4 *)(param_1 + 0x468) = 0;
  }
  if (*(HDC *)(param_1 + 0xcf8) != (HDC)0x0) {
    if (*(HGDIOBJ *)(param_1 + 0x112c) != (HGDIOBJ)0x0) {
      SelectObject(*(HDC *)(param_1 + 0xcf8),*(HGDIOBJ *)(param_1 + 0x112c));
    }
    if (*(HGDIOBJ *)(param_1 + 0x1128) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(param_1 + 0x1128));
    }
    *(undefined4 *)(param_1 + 0x1128) = 0;
    (*pcVar1)(*(undefined4 *)(param_1 + 0xcf8));
    *(undefined4 *)(param_1 + 0xcf8) = 0;
    *(byte *)(param_1 + 0x1134) = *(byte *)(param_1 + 0x1134) & 0x7f;
  }
  return;
}


