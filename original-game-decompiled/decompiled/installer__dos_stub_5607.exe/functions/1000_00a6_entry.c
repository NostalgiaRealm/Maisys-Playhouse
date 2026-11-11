
/* ==== entry @ 1000:00a6 ==== 
 * signature: undefined __cdecl16far entry(void)
 * body: 1000:00a6-1000:0166
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar6 = (undefined1 *)0x1400;
  pcVar3 = (code *)swi(0x21);
  uVar4 = (*pcVar3)();
  if ((byte)uVar4 < 2) {
    *(undefined2 *)(puVar6 + -2) = unaff_ES;
    *(undefined2 *)(puVar6 + -4) = 0;
    return;
  }
  uVar12 = *(int *)0x2 + 0xeee7;
  if (0xfff < uVar12) {
    uVar12 = 0x1000;
  }
  puVar7 = puVar6 + 0x25e;
  puVar13 = puVar6 + 0x25e;
  if ((undefined1 *)0xfda1 < puVar6) {
    *(undefined2 *)(puVar6 + 0x25c) = 0x1119;
    unaff_DS = *(undefined2 *)(puVar6 + 0x25c);
    *(undefined2 *)(puVar6 + 0x25c) = 0xd4;
    FUN_1000_033e();
    *(undefined2 *)(puVar6 + 0x25c) = 0;
    *(undefined2 *)(puVar6 + 0x25a) = 0xda;
    FUN_1000_05d1();
    pcVar3 = (code *)swi(0x21);
    uVar4 = (*pcVar3)();
    puVar13 = puVar7;
  }
  DAT_1119_0086 = CONCAT11((char)uVar4,(char)((uint)uVar4 >> 8));
  DAT_1119_0046 = uVar12 * 0x10 + -1;
  DAT_1119_0048 = 0x1119;
  puVar8 = (undefined1 *)((uint)puVar13 & 0xfffe);
  DAT_1119_0052 = puVar8 + -2;
  DAT_1119_004c = puVar8;
  DAT_1119_0088 = uVar4;
  *(undefined2 *)(puVar8 + -2) = 0xfffe;
  puVar9 = puVar8 + -4;
  DAT_1119_004e = puVar8 + -4;
  DAT_1119_0050 = puVar8 + -4;
  DAT_1119_0042 = puVar8 + -4;
  *(undefined2 *)(puVar8 + -4) = 1;
  *(int *)0x2 = uVar12 + 0x1119;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  DAT_1119_0084 = unaff_DS;
  *(undefined2 *)(puVar9 + -2) = 0x1119;
  uVar4 = *(undefined2 *)(puVar9 + -2);
  puVar13 = (undefined1 *)0x258;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar1 = 0;
  }
  *(undefined2 *)(puVar9 + -2) = 0x1119;
  pcVar2 = (code *)*(int *)0x158;
  if (pcVar2 != (code *)0x0) {
    puVar10 = (undefined2 *)(puVar9 + -2);
    puVar9 = puVar9 + -2;
    *puVar10 = 0x147;
    (*pcVar2)();
  }
  *(undefined2 *)(puVar9 + -2) = 0x14a;
  FUN_1000_0528();
  puVar11 = puVar9 + -2;
  *(undefined2 *)(puVar9 + -2) = 0x14d;
  FUN_1000_039e();
  *(undefined2 *)(puVar11 + -2) = 0x152;
  FUN_1000_01a2();
  *(undefined2 *)(puVar11 + -2) = 0x1119;
  uVar4 = *(undefined2 *)(puVar11 + -2);
  *(undefined2 *)(puVar11 + -2) = *(undefined2 *)0xa8;
  *(undefined2 *)(puVar11 + -4) = *(undefined2 *)0xa6;
  *(undefined2 *)(puVar11 + -6) = *(undefined2 *)0xa4;
  *(undefined2 *)(puVar11 + -8) = 0x163;
  uVar4 = FUN_1000_0010();
  *(undefined2 *)(puVar11 + -8) = uVar4;
  *(undefined2 *)(puVar11 + -10) = 0x167;
  FUN_1000_0274();
  return;
}


