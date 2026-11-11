
/* ==== FUN_10016901 @ 10016901 ==== 
 * signature: undefined __fastcall FUN_10016901(int * param_1, int param_2)
 * body: 10016901-10016903
 */

void __fastcall FUN_10016901(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  uint in_EAX;
  undefined3 uVar7;
  int *piVar6;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  piVar6 = (int *)(in_EAX & 0xffffff69);
  *piVar6 = *piVar6 + param_2;
  uVar7 = (undefined3)((uint)piVar6 >> 8);
  cVar5 = (char)piVar6 + -0x69;
  piVar6 = (int *)CONCAT31(uVar7,cVar5);
  *piVar6 = *piVar6 + param_2;
  piVar6 = (int *)(CONCAT31(uVar7,cVar5) ^ 0x69);
  *piVar6 = *piVar6 + param_2;
  *piVar6 = *piVar6 + param_2;
  lVar4 = (longlong)*param_1 * 0x1694c10;
  piVar6 = (int *)lVar4;
  pbVar1 = (byte *)((int)param_1 + unaff_EBP * 2 + 1);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1 + (byte)param_2;
  *pbVar1 = bVar3 + ((int)piVar6 != lVar4);
  *(char *)(unaff_EDI + 0x69) =
       *(char *)(unaff_EDI + 0x69) + (char)((ulonglong)lVar4 >> 8) +
       (CARRY1(bVar2,(byte)param_2) || CARRY1(bVar3,(int)piVar6 != lVar4));
  *piVar6 = *piVar6 + param_2;
  *(undefined4 *)(unaff_EDI + 0x1c + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0x1c + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0x18 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0x18 + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0x14 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0x14 + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0x10 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0x10 + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 0xc + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 0xc + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 8 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 8 + (int)param_1 * 4);
  *(undefined4 *)(unaff_EDI + 4 + (int)param_1 * 4) =
       *(undefined4 *)(unaff_ESI + 4 + (int)param_1 * 4);
                    /* WARNING: Could not recover jumptable at 0x10016967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&switchD_10016847::switchdataD_10016970)[param_2])();
  return;
}


