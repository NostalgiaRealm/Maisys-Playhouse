
/* ==== FUN_0049aa3e @ 0049aa3e ==== 
 * signature: undefined __fastcall FUN_0049aa3e(int param_1, undefined4 param_2)
 * body: 0049aa3e-0049aa3f
 */

void __fastcall FUN_0049aa3e(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  undefined4 unaff_EBX;
  uint *puVar7;
  int unaff_EDI;
  char cVar6;
  
  cVar2 = (char)in_EAX;
  cRama0c80049 = cVar2;
  uRamcb0049a0 = in_EAX;
  *(char *)(unaff_EDI + -0x4dffb65e) = *(char *)(unaff_EDI + -0x4dffb65e) + (char)param_2;
  cVar6 = (char)((uint)param_2 >> 8) + cVar2;
  piVar5 = (int *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar6,(char)param_2));
  puVar7 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX + (char)param_1 + -3);
  pcVar3 = (char *)CONCAT22((short)((uint)in_EAX >> 0x10),
                            CONCAT11((char)((uint)in_EAX >> 8) + cVar6,cVar2));
  cRama0710049 = cVar2;
  cRama29f0049 = cVar2;
  cRama2cb0049 = cVar2;
  cRama2de0049 = cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *piVar5 = (int)(pcVar3 + *piVar5);
  uVar4 = CONCAT31((int3)((uint)pcVar3 >> 8),cVar2 + (char)*piVar5) | *puVar7;
  *puVar7 = *puVar7 | param_1 - 5U | *puVar7 | *puVar7 | *puVar7 |
                      *(uint *)CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + '\x05') | *puVar7;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


