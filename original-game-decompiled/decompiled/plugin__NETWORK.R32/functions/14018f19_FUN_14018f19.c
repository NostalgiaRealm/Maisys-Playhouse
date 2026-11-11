
/* ==== FUN_14018f19 @ 14018f19 ==== 
 * signature: undefined4 __fastcall FUN_14018f19(uint param_1, int param_2)
 * body: 14018f19-14018f3f;14018f50-14018f65;14018f78-14018f85
 */

/* WARNING (jumptable): Stack frame is not setup normally: Input value of stackpointer is not used
    */

undefined4 __fastcall FUN_14018f19(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int unaff_EDI;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  puVar3 = (undefined4 *)(unaff_ESI + param_1);
  puVar5 = (undefined4 *)(unaff_EDI + param_1);
  if (((uint)puVar5 & 3) == 0) {
    uVar1 = param_1 >> 2;
    while( true ) {
      puVar5 = puVar5 + -1;
      puVar3 = puVar3 + -1;
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      *puVar5 = *puVar3;
    }
    switch(param_1 & 3) {
    case 0:
switchD_14018f39_caseD_0:
      return *(undefined4 *)(unaff_EBP + 8);
    case 2:
switchD_14018f39_caseD_2:
      *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar3 + 2);
      return *(undefined4 *)(unaff_EBP + 8);
    case 3:
switchD_14018f39_caseD_3:
      *(undefined2 *)((int)puVar5 + 2) = *(undefined2 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar5 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return *(undefined4 *)(unaff_EBP + 8);
    }
  }
  else {
    puVar4 = (undefined1 *)((int)puVar3 + -1);
    puVar6 = (undefined1 *)((int)puVar5 + -1);
    if (param_1 < 0xd) {
      for (; param_1 != 0; param_1 = param_1 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + -1;
        puVar6 = puVar6 + -1;
      }
      return *(undefined4 *)(unaff_EBP + 8);
    }
    uVar2 = -param_2 & 3;
    uVar1 = param_1 - uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + -1;
      puVar6 = puVar6 + -1;
    }
    puVar3 = (undefined4 *)(puVar4 + -3);
    puVar5 = (undefined4 *)(puVar6 + -3);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + -1;
      puVar5 = puVar5 + -1;
    }
    switch(uVar1 & 3) {
    case 0:
      goto switchD_14018f39_caseD_0;
    case 2:
      goto switchD_14018f39_caseD_2;
    case 3:
      goto switchD_14018f39_caseD_3;
    }
  }
  *(undefined1 *)((int)puVar5 + 3) = *(undefined1 *)((int)puVar3 + 3);
  goto switchD_14018f39_caseD_0;
}


