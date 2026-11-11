
/* ==== FUN_11002a55 @ 11002a55 ==== 
 * signature: undefined __fastcall FUN_11002a55(char * param_1, int param_2)
 * body: 11002a55-11002a57
 */

/* WARNING: Instruction at (ram,0x11002a83) overlaps instruction at (ram,0x11002a82)
    */

void __fastcall FUN_11002a55(char *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  byte *in_EAX;
  undefined3 uVar4;
  byte *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  bool in_OF;
  byte *pbVar3;
  
  if (in_OF) {
    cVar2 = (char)param_2;
    *param_1 = *param_1 + cVar2;
    *param_1 = *param_1 + cVar2;
    pbVar3 = *(byte **)unaff_EBX;
    *(int *)unaff_EBX = *(int *)unaff_EBX - (int)unaff_EBX;
    *(int *)(unaff_ESI + -0x48eeffd7) =
         (int)(&stack0x00000000 + (uint)(pbVar3 < unaff_EBX) + *(int *)(unaff_ESI + -0x48eeffd7));
    pbVar3 = *(byte **)unaff_EBX;
    *(int *)unaff_EBX = *(int *)unaff_EBX - (int)unaff_EBX;
    *(int *)(unaff_EBP + -0x24eeffd7) =
         *(int *)(unaff_EBP + -0x24eeffd7) + unaff_EDI + (uint)(pbVar3 < unaff_EBX);
    pbVar3 = *(byte **)unaff_EBX;
    *(int *)unaff_EBX = *(int *)unaff_EBX - (int)unaff_EBX;
    param_1 = param_1 + (int)register0x00000010 + (pbVar3 < unaff_EBX);
    pbVar3 = *(byte **)unaff_EBX;
    *(int *)unaff_EBX = *(int *)unaff_EBX - (int)unaff_EBX;
    *(uint *)(param_1 + 0x2a) = *(int *)(param_1 + 0x2a) + param_2 + (uint)(pbVar3 < unaff_EBX);
    *param_1 = *param_1 + cVar2;
    *param_1 = *param_1 + (char)unaff_EBX;
    *unaff_EBX = *unaff_EBX | (byte)param_1;
    uVar4 = (undefined3)((uint)unaff_EBX >> 8);
    cVar2 = (char)unaff_EBX + *in_EAX;
    pbVar3 = (byte *)CONCAT31(uVar4,cVar2);
    *pbVar3 = *pbVar3 | (byte)param_1;
    in_EAX = (byte *)CONCAT31(uVar4,cVar2 + '\b');
  }
  else {
    in_EAX[(int)param_1] = in_EAX[(int)param_1] | (byte)in_EAX;
  }
  *in_EAX = *in_EAX | (byte)param_1;
  *in_EAX = *in_EAX | (byte)param_1;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


