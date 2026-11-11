
/* ==== FUN_14018f86 @ 14018f86 ==== 
 * signature: undefined4 __fastcall FUN_14018f86(uint param_1, int param_2)
 * body: 14018f86-14018fb2;14018fb4-14018fbd
 */

/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_14018f86(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  puVar3 = (undefined1 *)(unaff_ESI + -1);
  puVar5 = (undefined1 *)(unaff_EDI + -1);
  if (0xc < param_1) {
    uVar2 = -param_2 & 3;
    uVar1 = param_1 - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar4 = (undefined4 *)(puVar3 + -3);
    puVar6 = (undefined4 *)(puVar5 + -3);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    switch(uVar1 & 3) {
    case 1:
      *(undefined1 *)((int)puVar6 + 3) = *(undefined1 *)((int)puVar4 + 3);
      break;
    case 2:
      *(undefined2 *)((int)puVar6 + 2) = *(undefined2 *)((int)puVar4 + 2);
      return *(undefined4 *)(unaff_EBP + 8);
    case 3:
      *(undefined2 *)((int)puVar6 + 2) = *(undefined2 *)((int)puVar4 + 2);
      *(undefined1 *)((int)puVar6 + 1) = *(undefined1 *)((int)puVar4 + 1);
      return *(undefined4 *)(unaff_EBP + 8);
    }
    return *(undefined4 *)(unaff_EBP + 8);
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  return *(undefined4 *)(unaff_EBP + 8);
}


