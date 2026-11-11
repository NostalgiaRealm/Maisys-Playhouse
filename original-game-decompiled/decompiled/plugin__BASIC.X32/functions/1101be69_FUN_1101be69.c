
/* ==== FUN_1101be69 @ 1101be69 ==== 
 * signature: undefined __fastcall FUN_1101be69(int * param_1, int param_2)
 * body: 1101be69-1101be6b
 */

void __fastcall FUN_1101be69(int *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined1 **ppuVar5;
  undefined4 *unaff_EBP;
  undefined1 *apuStack_20d [113];
  undefined1 *puStack_48;
  undefined4 uStack_8;
  undefined4 *puVar4;
  
  puStack_48 = &stack0xfffffffc;
  puVar3 = (undefined4 *)&stack0xfffffffc;
  apuStack_20d[1] = &stack0xfffffffc;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  cVar1 = '\x10';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_EBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  ppuVar5 = apuStack_20d + 1;
  cVar1 = '\x10';
  do {
    puVar4 = puVar4 + -1;
    ppuVar5 = ppuVar5 + -1;
    *ppuVar5 = (undefined1 *)*puVar4;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


