
/* ==== FUN_14009950 @ 14009950 ==== 
 * signature: undefined4 __stdcall FUN_14009950(void)
 * body: 14009950-140099da
 */

undefined4 FUN_14009950(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_64 [88];
  char *pcStack_c;
  
  (*DAT_14026438)(local_64,100);
  iVar2 = (*DAT_1402643c)(&stack0xffffff94);
  if (iVar2 == 0) {
    uVar3 = (*DAT_14026410)();
    return uVar3;
  }
  pcVar4 = (char *)(*DAT_14026450)(*(undefined4 *)**(undefined4 **)(iVar2 + 0xc));
  uVar5 = 0xffffffff;
  pcVar8 = pcVar4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar4;
  pcVar8 = pcStack_c;
  for (uVar6 = ~uVar5 - 1 >> 2; pcVar8 = pcVar8 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = ~uVar5 - 1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = pcVar4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcStack_c[~uVar5 + 3] = '\0';
  uVar3 = (*DAT_1402644c)(pcVar4);
  *(undefined4 *)(pcStack_c + 0x44) = uVar3;
  return 0;
}


