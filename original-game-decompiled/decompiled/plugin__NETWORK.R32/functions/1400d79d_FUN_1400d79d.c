
/* ==== FUN_1400d79d @ 1400d79d ==== 
 * signature: undefined __fastcall FUN_1400d79d(undefined4 param_1, int param_2)
 * body: 1400d79d-1400d79f
 */

void __fastcall FUN_1400d79d(undefined4 param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  uint in_EAX;
  undefined3 uVar5;
  int iVar4;
  char cVar6;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  cVar6 = (char)param_2;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + cVar6;
  uVar5 = (undefined3)(in_EAX >> 8);
  bVar3 = *(byte *)(unaff_EBX + (in_EAX & 0xff));
  pcVar1 = (char *)(unaff_EBX + unaff_EBP * 2);
  *pcVar1 = *pcVar1 + cVar6;
  bVar3 = *(byte *)(unaff_EBX + (uint)bVar3);
  (&stack0x00000000)[CONCAT31(uVar5,bVar3) * 4] =
       (&stack0x00000000)[CONCAT31(uVar5,bVar3) * 4] + cVar6;
  bVar3 = *(byte *)(unaff_EBX + (uint)bVar3);
  pcVar1 = (char *)(unaff_EDI + param_2 * 4);
  *pcVar1 = *pcVar1 + cVar6;
  iVar4 = CONCAT31(uVar5,*(undefined1 *)(unaff_EBX + (uint)bVar3));
  *(char *)(iVar4 * 2) = *(char *)(iVar4 * 2) + cVar6;
  *(int *)(&stack0x00000000 + iVar4) = *(int *)(&stack0x00000000 + iVar4) + iVar4;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


