
/* ==== FUN_10006db5 @ 10006db5 ==== 
 * signature: undefined FUN_10006db5(void)
 * body: 10006db5-10006e30
 */

void FUN_10006db5(void)

{
  short sVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_0000005c;
  int iStack00000060;
  int in_stack_00000064;
  LPCVOID in_stack_00000088;
  int in_stack_0000008c;
  
  if (0 < in_stack_0000005c) {
    iStack00000060 = in_stack_0000005c;
    do {
      iVar2 = 0;
      sVar1 = 0;
      if (0 < unaff_EBX) {
        do {
          *(undefined1 *)(unaff_EDI + iVar2) =
               *(undefined1 *)
                ((int)in_stack_00000088 +
                ((*(byte *)(unaff_ESI + 2 + iVar2 * 4) & 0xfffffff8) * 0x20 +
                (*(byte *)(unaff_ESI + 1 + iVar2 * 4) & 0xfffffff8)) * 4 +
                (uint)(*(byte *)(unaff_ESI + iVar2 * 4) >> 3));
          sVar1 = sVar1 + 1;
          iVar2 = (int)sVar1;
          unaff_EBP = in_stack_0000008c;
        } while (iVar2 < unaff_EBX);
      }
      unaff_ESI = unaff_ESI + unaff_EBP;
      unaff_EDI = unaff_EDI + in_stack_00000064;
      iStack00000060 = iStack00000060 + -1;
    } while (iStack00000060 != 0);
  }
  pvVar3 = GlobalHandle(in_stack_00000088);
  GlobalUnlock(pvVar3);
  pvVar3 = GlobalHandle(in_stack_00000088);
  GlobalFree(pvVar3);
  return;
}


