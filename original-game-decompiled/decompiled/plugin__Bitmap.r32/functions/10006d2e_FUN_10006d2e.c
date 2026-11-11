
/* ==== FUN_10006d2e @ 10006d2e ==== 
 * signature: undefined FUN_10006d2e(void)
 * body: 10006d2e-10006db4
 */

void FUN_10006d2e(void)

{
  int iVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  HGLOBAL pvVar5;
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
      iVar4 = 0;
      sVar3 = 0;
      if (0 < unaff_EBX) {
        do {
          iVar1 = unaff_ESI + iVar4 * 2;
          pbVar2 = (byte *)(iVar4 + iVar1);
          *(undefined1 *)(unaff_EDI + iVar4) =
               *(undefined1 *)
                ((int)in_stack_00000088 +
                ((*(byte *)(iVar4 + 2 + iVar1) & 0xfffffff8) * 0x20 + (pbVar2[1] & 0xfffffff8)) * 4
                + (uint)(*pbVar2 >> 3));
          sVar3 = sVar3 + 1;
          iVar4 = (int)sVar3;
          unaff_EBP = in_stack_0000008c;
        } while (iVar4 < unaff_EBX);
      }
      unaff_ESI = unaff_ESI + unaff_EBP;
      unaff_EDI = unaff_EDI + in_stack_00000064;
      iStack00000060 = iStack00000060 + -1;
    } while (iStack00000060 != 0);
  }
  pvVar5 = GlobalHandle(in_stack_00000088);
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(in_stack_00000088);
  GlobalFree(pvVar5);
  return;
}


