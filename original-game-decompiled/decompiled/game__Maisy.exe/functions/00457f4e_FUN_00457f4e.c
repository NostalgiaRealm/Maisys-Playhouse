
/* ==== FUN_00457f4e @ 00457f4e ==== 
 * signature: undefined __fastcall FUN_00457f4e(undefined4 param_1)
 * body: 00457f4e-00457f4f
 */

/* WARNING: Instruction at (ram,0x00457fa8) overlaps instruction at (ram,0x00457fa7)
    */

void __fastcall FUN_00457f4e(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char *in_EAX;
  int iVar4;
  char cVar5;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    in_EAX = (char *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\x10');
code_r0x00457fa0:
    in_EAX = (char *)CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\x10');
  }
  else {
    pcVar1 = in_EAX + -0x57ffba83;
    cVar2 = *pcVar1;
    *pcVar1 = *pcVar1 + (char)param_1;
    if (SCARRY1(cVar2,(char)param_1) == *pcVar1 < '\0') goto code_r0x00457fa0;
    pcVar1 = in_EAX + 0x5c00457d;
    cVar2 = *pcVar1;
    cVar5 = (char)((uint)param_1 >> 8);
    *pcVar1 = *pcVar1 + cVar5;
    if (SCARRY1(cVar2,cVar5) != *pcVar1 < '\0') {
      *in_EAX = *in_EAX + (char)in_EAX;
      goto code_r0x00457fcd;
    }
  }
  iVar4 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + 'D');
  *(int *)(&stack0x00000000 + iVar4) = *(int *)(&stack0x00000000 + iVar4) + iVar4;
code_r0x00457fcd:
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


