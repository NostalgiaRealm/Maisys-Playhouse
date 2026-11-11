
/* ==== FUN_10006cb1 @ 10006cb1 ==== 
 * signature: undefined __stdcall FUN_10006cb1(void)
 * body: 10006cb1-10006d2d
 */

void FUN_10006cb1(void)

{
  uint uVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_0000005c;
  int iStack00000060;
  int in_stack_00000064;
  LPCVOID in_stack_00000088;
  int in_stack_0000008c;
  int iStack00000090;
  
  if (in_stack_0000005c < 1) {
    pvVar2 = GlobalHandle(in_stack_00000088);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(in_stack_00000088);
    GlobalFree(pvVar2);
    return;
  }
  iStack00000060 = in_stack_0000005c;
  do {
    iVar3 = 0;
    iStack00000090 = 0;
    if (0 < unaff_EBX) {
      do {
        uVar1 = (uint)*(ushort *)(unaff_ESI + iVar3 * 2);
        *(undefined1 *)(unaff_EDI + iVar3) =
             *(undefined1 *)
              ((int)in_stack_00000088 + (uVar1 & 0x3e0) + (uVar1 & 0x7c00) + (uVar1 & 0x1f));
        iStack00000090 = iStack00000090 + 1;
        iVar3 = (int)(short)iStack00000090;
        unaff_EBP = in_stack_0000008c;
      } while (iVar3 < unaff_EBX);
    }
    unaff_ESI = unaff_ESI + unaff_EBP;
    unaff_EDI = unaff_EDI + in_stack_00000064;
    iStack00000060 = iStack00000060 + -1;
  } while (iStack00000060 != 0);
  switchD_10006c18::default();
  return;
}


