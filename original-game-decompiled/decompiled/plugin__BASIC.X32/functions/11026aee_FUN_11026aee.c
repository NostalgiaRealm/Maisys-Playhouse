
/* ==== FUN_11026aee @ 11026aee ==== 
 * signature: undefined __fastcall FUN_11026aee(char * param_1, int param_2)
 * body: 11026aee-11026aef
 */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_11026aee(char *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  uint unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  uint uVar9;
  int unaff_retaddr;
  undefined4 auStack_10 [3];
  undefined4 uStack_4;
  
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) ^ unaff_EBP;
  *(int *)(param_2 + 0x69) = (int)(param_1 + *(int *)(param_2 + 0x69));
  piVar8 = (int *)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *param_1);
  *(char **)(param_1 + -0x61eefd97) =
       param_1 + (uint)((longlong)(int)((longlong)*piVar8 * 0x2697411) !=
                       (longlong)*piVar8 * 0x2697411) + *(int *)(param_1 + -0x61eefd97);
  uVar7 = (uint)((longlong)*piVar8 * 0x269b311);
  uVar2 = (uint)((longlong)(int)uVar7 != (longlong)*piVar8 * 0x269b311);
  uVar9 = unaff_ESI + unaff_EBX + uVar2;
  uStack_4 = 2;
  uVar3 = (uint)(CARRY4((uint)param_1,(uint)piVar8) ||
                CARRY4((uint)(param_1 + (int)piVar8),
                       (uint)(CARRY4(unaff_ESI,unaff_EBX) || CARRY4(unaff_ESI + unaff_EBX,uVar2))));
  uVar4 = (int)&uStack_4 + uVar7;
  *(undefined4 *)(uVar4 + uVar3 + -4) = 2;
  puVar1 = (uint *)(unaff_retaddr + -0x55eefd96);
  uVar7 = (uint)(CARRY4((uint)&uStack_4,uVar7) || CARRY4(uVar4,uVar3));
  uVar2 = *puVar1;
  uVar5 = *puVar1 + uVar9;
  *puVar1 = uVar5 + uVar7;
  *(undefined4 *)(uVar4 + uVar3 + -8) = 2;
  *(int *)(unaff_EBP + 0x9011026a) =
       *(int *)(unaff_EBP + 0x9011026a) + unaff_EBX +
       (uint)(CARRY4(uVar2,uVar9) || CARRY4(uVar5,uVar7));
  *(undefined4 *)(uVar4 + uVar3 + -0xc) = 2;
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


