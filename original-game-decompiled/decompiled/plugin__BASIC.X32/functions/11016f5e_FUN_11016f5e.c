
/* ==== FUN_11016f5e @ 11016f5e ==== 
 * signature: undefined __fastcall FUN_11016f5e(uint param_1, int param_2)
 * body: 11016f5e-11016f5f
 */

void __fastcall FUN_11016f5e(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  int in_EAX;
  int *piVar6;
  undefined2 uVar7;
  undefined1 *unaff_ESI;
  char in_CF;
  
  puVar1 = (uint *)(unaff_ESI + 1);
  bVar5 = (byte)param_1 & 0x1f;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 >> bVar5;
  bVar3 = (param_1 & 0x1f) == 0;
  piVar6 = (int *)(&stack0x00000000 +
                  (byte)(bVar3 * in_CF | !bVar3 * ((uVar2 >> bVar5 - 1 & 1) != 0)) + param_1);
  uVar7 = (undefined2)param_2;
  out(*unaff_ESI,uVar7);
  *piVar6 = *piVar6 + param_2;
  out(*(undefined4 *)(unaff_ESI + 1),uVar7);
  *piVar6 = *piVar6 + param_2;
  out(*(undefined4 *)(unaff_ESI + 5),uVar7);
  *piVar6 = *piVar6 + param_2;
  out(*(undefined4 *)(unaff_ESI + 9),uVar7);
  *piVar6 = *piVar6 + param_2;
  out(*(undefined4 *)(unaff_ESI + 0xd),(short)in_EAX);
  *piVar6 = *piVar6 + in_EAX;
  cRam05050505 = cRam05050505 + (char)in_EAX;
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


