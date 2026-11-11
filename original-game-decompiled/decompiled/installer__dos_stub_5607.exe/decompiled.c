/* Ghidra 12.1.4 generated C-like pseudocode for stream_005_0002039f.exe.
 * Not original source. Names and types are inferred unless a header says otherwise. Not verified to compile. */

/* ==== FUN_1000_0010 @ 1000:0010 ==== 
 * signature: undefined __cdecl16near FUN_1000_0010(void)
 * body: 1000:0010-1000:006c;1000:006e-1000:00a5
 */

undefined2 __cdecl16near FUN_1000_0010(undefined2 param_1,undefined2 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  char local_204 [512];
  char *local_4;
  
  pcVar7 = (char *)*param_2;
  pcVar6 = local_204;
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar7 + -uVar3;
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 2;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar2 = *pcVar1;
  }
  local_4 = (char *)0x0;
  pcVar6 = local_204;
  if (local_204[0] != '\0') {
    local_4 = (char *)0x0;
    do {
      if (*pcVar6 == '\\') {
        local_4 = pcVar6;
      }
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
  }
  if (local_4 == (char *)0x0) {
    local_4 = local_204;
  }
  else {
    local_4 = local_4 + 1;
  }
  pcVar6 = (char *)0x14a;
  pcVar7 = local_4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  *pcVar7 = *pcVar6;
  FUN_1000_0fcc(local_204);
  FUN_1000_108c(local_204);
  FUN_1000_108c(*param_2);
  return 0;
}



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



/* ==== FUN_1000_0167 @ 1000:0167 ==== 
 * signature: undefined __cdecl16near FUN_1000_0167(void)
 * body: 1000:0167-1000:0167
 */

void __cdecl16near FUN_1000_0167(void)

{
  return;
}



/* ==== FUN_1000_0177 @ 1000:0177 ==== 
 * signature: undefined FUN_1000_0177(void)
 * body: 1000:0177-1000:01a1
 */

void FUN_1000_0177(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  int extraout_DX;
  uint extraout_DX_00;
  int iVar6;
  byte *pbVar7;
  int unaff_DI;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  byte bVar9;
  bool bVar10;
  
  iVar6 = 0x1119;
  FUN_1000_0680();
  FUN_1000_033e();
  FUN_1000_05d1();
  bVar9 = DAT_1119_015a < 0xd6d6;
  if (DAT_1119_015a == 0xd6d6) {
    (*DAT_1119_015e)();
  }
  (*DAT_1119_0044)(0xff);
  *(int *)(iVar6 + unaff_DI) = (*(int *)(iVar6 + unaff_DI) - extraout_DX) - (uint)bVar9;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x21);
  iRam00011200 = iVar6;
  uRam00011202 = unaff_ES;
  (*pcVar4)();
  if (*(int *)0x168 != 0) {
    *(undefined2 *)0x16a = 0x1000;
    *(undefined2 *)0x172 = 0x1000;
    bVar10 = false;
    (*(code *)*(undefined2 *)0x168)();
    if (bVar10) {
      FUN_1000_035e();
      return;
    }
    (*(code *)*(undefined2 *)0x168)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x62;
      bVar10 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar10 = *pbVar1 == *pbVar3;
      } while (bVar10);
      if (bVar10) {
        pbVar7 = (byte *)0x90;
        goto LAB_1000_0228;
      }
      iVar5 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar1 == 0;
      } while (!bVar10);
    } while (bVar10);
  }
LAB_1000_023c:
  iVar6 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar6 + 0x90) = *(byte *)(iVar6 + 0x90) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar10) && ((extraout_DX_00 & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x90) = *(byte *)(iVar6 + 0x90) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_032a();
  FUN_1000_031b();
  FUN_1000_032a();
  return;
LAB_1000_0228:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_023c;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_023c;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_0228;
}



/* ==== FUN_1000_01a2 @ 1000:01a2 ==== 
 * signature: undefined __cdecl16near FUN_1000_01a2(void)
 * body: 1000:01a2-1000:0273
 */

void __cdecl16near FUN_1000_01a2(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x70 = in_BX;
  *(undefined2 *)0x72 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x168 != 0) {
    *(undefined2 *)0x16a = 0x1000;
    *(undefined2 *)0x172 = 0x1000;
    bVar9 = false;
    (*(code *)*(undefined2 *)0x168)();
    if (bVar9) {
      FUN_1000_035e();
      return;
    }
    (*(code *)*(undefined2 *)0x168)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x62;
      bVar9 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0x90;
        goto LAB_1000_0228;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_1000_023c:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + 0x90) = *(byte *)(iVar6 + 0x90) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x90) = *(byte *)(iVar6 + 0x90) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_032a();
  FUN_1000_031b();
  FUN_1000_032a();
  return;
LAB_1000_0228:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_023c;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_023c;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_0228;
}



/* ==== FUN_1000_0274 @ 1000:0274 ==== 
 * signature: undefined __cdecl16near FUN_1000_0274(void)
 * body: 1000:0274-1000:027a
 */

void __cdecl16near FUN_1000_0274(void)

{
  FUN_1000_0295();
  return;
}



/* ==== FUN_1000_027b @ 1000:027b ==== 
 * signature: undefined FUN_1000_027b(void)
 * body: 1000:027b-1000:0282
 */

void FUN_1000_027b(void)

{
  FUN_1000_0295();
  return;
}



/* ==== FUN_1000_0283 @ 1000:0283 ==== 
 * signature: undefined FUN_1000_0283(void)
 * body: 1000:0283-1000:028c
 */

/* WARNING: Removing unreachable block (ram,0x000102e4) */
/* WARNING: Removing unreachable block (ram,0x000102ea) */
/* WARNING: Removing unreachable block (ram,0x000102f7) */

void FUN_1000_0283(void)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0xb7 = 1;
  FUN_1000_031b();
  FUN_1000_032a();
  FUN_1000_031b();
  if (*(int *)0x15a == -0x292a) {
    (*(code *)*(undefined2 *)0x160)();
  }
  FUN_1000_031b();
  FUN_1000_032a();
  FUN_1000_037c();
  FUN_1000_0302();
  return;
}



/* ==== FUN_1000_0295 @ 1000:0295 ==== 
 * signature: undefined __cdecl16near FUN_1000_0295(void)
 * body: 1000:0295-1000:0301
 */

void __cdecl16near FUN_1000_0295(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 in_CX;
  char cVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  cVar3 = (char)((uint)in_CX >> 8);
  *(char *)0xb7 = cVar3;
  if ((char)in_CX == '\0') {
    FUN_1000_031b();
    FUN_1000_032a();
    FUN_1000_031b();
    if (*(int *)0x15a == -0x292a) {
      (*(code *)*(undefined2 *)0x160)();
    }
  }
  FUN_1000_031b();
  FUN_1000_032a();
  iVar2 = FUN_1000_037c();
  if (((iVar2 != 0) && (cVar3 == '\0')) && (*(int *)(unaff_BP + 4) == 0)) {
    *(undefined2 *)(unaff_BP + 4) = 0xff;
  }
  FUN_1000_0302();
  if (cVar3 == '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* ==== FUN_1000_0302 @ 1000:0302 ==== 
 * signature: undefined __cdecl16near FUN_1000_0302(void)
 * body: 1000:0302-1000:031a
 */

void __cdecl16near FUN_1000_0302(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x16a != 0) {
    (*(code *)*(undefined2 *)0x168)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



/* ==== FUN_1000_031b @ 1000:031b ==== 
 * signature: undefined __cdecl16near FUN_1000_031b(void)
 * body: 1000:031b-1000:0329
 */

void __cdecl16near FUN_1000_031b(void)

{
  int *unaff_SI;
  int *unaff_DI;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if ((code *)*unaff_DI != (code *)0x0) {
      (*(code *)*unaff_DI)();
    }
  }
  return;
}



/* ==== FUN_1000_032a @ 1000:032a ==== 
 * signature: undefined __cdecl16near FUN_1000_032a(void)
 * body: 1000:032a-1000:033c
 */

void __cdecl16near FUN_1000_032a(void)

{
  int *piVar1;
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    piVar2 = unaff_DI + -2;
    piVar1 = unaff_DI + -1;
    unaff_DI = piVar2;
    if (*piVar2 != 0 || *piVar1 != 0) {
      (*(code *)*piVar2)(0x1000);
    }
  }
  return;
}



/* ==== FUN_1000_033e @ 1000:033e ==== 
 * signature: undefined __cdecl16near FUN_1000_033e(void)
 * body: 1000:033e-1000:035d
 */

void __cdecl16near FUN_1000_033e(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_05d1(0xfc);
  if (*(int *)0xb8 != 0) {
    (*(code *)*(undefined2 *)0xb8)();
  }
  FUN_1000_05d1(0xff);
  return;
}



/* ==== FUN_1000_035e @ 1000:035e ==== 
 * signature: undefined FUN_1000_035e(void)
 * body: 1000:035e-1000:0363
 */

void FUN_1000_035e(void)

{
  FUN_1000_0177();
  return;
}



/* ==== FUN_1000_0364 @ 1000:0364 ==== 
 * signature: undefined FUN_1000_0364(void)
 * body: 1000:0364-1000:037a
 */

void FUN_1000_0364(void)

{
  undefined1 *in_AX;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if ((in_AX <= &stack0x0002) && ((undefined1 *)*(uint *)0xbc <= &stack0x0002 + -(int)in_AX)) {
                    /* WARNING: Could not recover jumptable at 0x00010373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_0177();
  return;
}



/* ==== FUN_1000_037c @ 1000:037c ==== 
 * signature: undefined __cdecl16near FUN_1000_037c(void)
 * body: 1000:037c-1000:039d
 */

uint __cdecl16near FUN_1000_037c(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_1000_033e();
    FUN_1000_05d1(1);
    uVar2 = 1;
  }
  return uVar2;
}



/* ==== FUN_1000_039e @ 1000:039e ==== 
 * signature: undefined FUN_1000_039e(void)
 * body: 1000:039e-1000:0527
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_039e(void)

{
  undefined2 uVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  *(undefined2 *)0xbe = in_stack_00000000;
  uVar7 = 1;
  if ((char)*(undefined2 *)0x88 != '\x02') {
    uVar13 = *(undefined2 *)0x2c;
    *(undefined2 *)0xac = uVar13;
    iVar5 = -0x8000;
    pcVar10 = (char *)0x0;
LAB_1000_03c1:
    do {
      pcVar11 = pcVar10;
      if (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        pcVar4 = pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar10;
        if (*pcVar4 != '\0') goto LAB_1000_03c1;
      }
      pcVar10 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    pcVar11 = pcVar11 + 3;
    *(undefined2 *)0xaa = pcVar11;
    uVar7 = 0xffff;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar4 != '\0');
    uVar7 = ~uVar7;
  }
  iVar5 = 1;
  pcVar10 = (char *)0x81;
  uVar13 = *(undefined2 *)0x84;
LAB_1000_03df:
  do {
    do {
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 == ' ');
  } while (cVar3 == '\t');
  if ((cVar3 != '\r') && (cVar3 != '\0')) {
    iVar5 = iVar5 + 1;
    do {
      pcVar10 = pcVar10 + -1;
LAB_1000_03f2:
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
      if ((cVar3 == ' ') || (cVar3 == '\t')) goto LAB_1000_03df;
      if ((cVar3 == '\r') || (cVar3 == '\0')) break;
      if (cVar3 == '\"') {
LAB_1000_042b:
        do {
          while( true ) {
            while( true ) {
              pcVar4 = pcVar10;
              pcVar10 = pcVar10 + 1;
              cVar3 = *pcVar4;
              if ((cVar3 == '\r') || (cVar3 == '\0')) goto LAB_1000_045b;
              if (cVar3 == '\"') goto LAB_1000_03f2;
              if (cVar3 == '\\') break;
              uVar7 = uVar7 + 1;
            }
            uVar6 = 0;
            do {
              pcVar11 = pcVar10;
              uVar6 = uVar6 + 1;
              pcVar10 = pcVar11 + 1;
            } while (*pcVar11 == '\\');
            if (*pcVar11 == '\"') break;
            uVar7 = uVar7 + uVar6;
            pcVar10 = pcVar11;
          }
          uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        } while ((uVar6 & 1) != 0);
        goto LAB_1000_03f2;
      }
      if (cVar3 != '\\') {
        uVar7 = uVar7 + 1;
        goto LAB_1000_03f2;
      }
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        pcVar4 = pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (*pcVar4 == '\\');
      if (*pcVar4 == '\"') {
        uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        if ((uVar6 & 1) == 0) goto LAB_1000_042b;
        goto LAB_1000_03f2;
      }
      uVar7 = uVar7 + uVar6;
    } while( true );
  }
LAB_1000_045b:
  *(int *)0xa4 = iVar5;
  iVar12 = (iVar5 + 1) * 2;
  iVar5 = -(uVar7 + iVar5 + iVar12 + 1 & 0xfffe);
  *(undefined1 **)0xa6 = &stack0x0002 + iVar5;
  pcVar11 = &stack0x0002 + iVar12 + iVar5;
  *(undefined2 *)(&stack0x0000 + iVar5) = unaff_SS;
  uVar13 = *(undefined2 *)(&stack0x0000 + iVar5);
  *(char **)(&stack0x0002 + iVar5) = pcVar11;
  puVar8 = (undefined2 *)(&stack0x0004 + iVar5);
  pcVar4 = (char *)*(undefined4 *)0xaa;
  pcVar10 = (char *)pcVar4;
  do {
    pcVar2 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar3 = *pcVar2;
    pcVar2 = pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar2 = cVar3;
  } while (cVar3 != '\0');
  uVar1 = *(undefined2 *)0x84;
  pcVar10 = (char *)0x81;
LAB_1000_0495:
  do {
    do {
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 == ' ');
  } while (cVar3 == '\t');
  if ((cVar3 == '\r') || (cVar3 == '\0')) {
LAB_1000_051e:
    *(undefined2 *)(&stack0x0000 + iVar5) = unaff_SS;
    uVar13 = *(undefined2 *)(&stack0x0000 + iVar5);
    *puVar8 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)0xbe)();
    return;
  }
  *puVar8 = pcVar11;
  puVar8 = puVar8 + 1;
  do {
    pcVar10 = pcVar10 + -1;
LAB_1000_04ac:
    pcVar4 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar3 = *pcVar4;
    if ((cVar3 == ' ') || (cVar3 == '\t')) {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\0';
      goto LAB_1000_0495;
    }
    if ((cVar3 == '\r') || (cVar3 == '\0')) {
LAB_1000_051b:
      *pcVar11 = '\0';
      goto LAB_1000_051e;
    }
    pcVar9 = pcVar10;
    if (cVar3 == '\"') {
LAB_1000_04e8:
      while( true ) {
        pcVar10 = pcVar9 + 1;
        cVar3 = *pcVar9;
        if ((cVar3 == '\r') || (cVar3 == '\0')) goto LAB_1000_051b;
        if (cVar3 == '\"') break;
        if (cVar3 == '\\') {
          uVar7 = 0;
          do {
            pcVar9 = pcVar10;
            uVar7 = uVar7 + 1;
            pcVar10 = pcVar9 + 1;
          } while (*pcVar9 == '\\');
          if (*pcVar9 == '\"') {
            for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              pcVar4 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar4 = '\\';
            }
            if ((uVar7 & 1) == 0) break;
            pcVar4 = pcVar11;
            pcVar11 = pcVar11 + 1;
            *pcVar4 = '\"';
            pcVar9 = pcVar10;
          }
          else {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              pcVar4 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar4 = '\\';
            }
          }
        }
        else {
          pcVar4 = pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar4 = cVar3;
          pcVar9 = pcVar10;
        }
      }
      goto LAB_1000_04ac;
    }
    if (cVar3 != '\\') {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = cVar3;
      goto LAB_1000_04ac;
    }
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar4 == '\\');
    if (*pcVar4 == '\"') {
      for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar4 = pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar4 = '\\';
      }
      pcVar9 = pcVar10;
      if ((uVar7 & 1) == 0) goto LAB_1000_04e8;
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\"';
      goto LAB_1000_04ac;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\\';
    }
  } while( true );
}



/* ==== FUN_1000_0528 @ 1000:0528 ==== 
 * signature: undefined __cdecl16near FUN_1000_0528(void)
 * body: 1000:0528-1000:05a4
 */

void __cdecl16near FUN_1000_0528(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar13;
  
  iVar5 = *(int *)0x2c;
  iVar8 = 0;
  pcVar11 = (char *)0x0;
  iVar7 = -1;
  if (iVar5 != 0) {
    cVar4 = *(char *)0x0;
    while (cVar4 != '\0') {
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar2 = pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (*pcVar2 != '\0');
      iVar8 = iVar8 + 1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar2;
    }
  }
  pcVar11 = (char *)FUN_1000_0606();
  puVar6 = (undefined2 *)FUN_1000_0606();
  *(undefined2 *)0xa8 = puVar6;
  piVar9 = (int *)0x0;
  do {
    if (iVar8 == 0) {
      *puVar6 = 0;
      return;
    }
    bVar13 = *piVar9 == *(int *)0x62;
    if (bVar13) {
      piVar12 = (int *)0x62;
      iVar7 = 6;
      piVar10 = piVar9;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        piVar3 = piVar12;
        piVar12 = piVar12 + 1;
        piVar1 = piVar10;
        piVar10 = piVar10 + 1;
        bVar13 = *piVar1 == *piVar3;
      } while (bVar13);
      if (!bVar13) goto LAB_1000_0592;
    }
    else {
LAB_1000_0592:
      *puVar6 = pcVar11;
      puVar6 = puVar6 + 1;
    }
    do {
      piVar1 = piVar9;
      piVar9 = (int *)((int)piVar9 + 1);
      iVar7 = *piVar1;
      pcVar2 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar2 = (char)iVar7;
    } while ((char)iVar7 != '\0');
    iVar8 = iVar8 + -1;
  } while( true );
}



/* ==== FUN_1000_05a6 @ 1000:05a6 ==== 
 * signature: undefined __stdcall16near FUN_1000_05a6(void)
 * body: 1000:05a6-1000:05d0
 */

int * FUN_1000_05a6(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x17e;
  do {
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar3;
    if ((*piVar1 == param_1) || (piVar4 = (int *)0x0, *piVar1 == -1)) {
      return piVar4;
    }
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}



/* ==== FUN_1000_05d1 @ 1000:05d1 ==== 
 * signature: undefined __stdcall16near FUN_1000_05d1(void)
 * body: 1000:05d1-1000:0605
 */

void FUN_1000_05d1(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_05a6(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0x15a == -0x292a) {
      (*(code *)*(undefined2 *)0x15c)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



/* ==== FUN_1000_0606 @ 1000:0606 ==== 
 * signature: undefined __cdecl16near FUN_1000_0606(void)
 * body: 1000:0606-1000:0628
 */

void __cdecl16near FUN_1000_0606(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0xd4;
  *(undefined2 *)0xd4 = 0x400;
  UNLOCK();
  iVar2 = FUN_1000_10bb();
  *(undefined2 *)0xd4 = uVar1;
  if (iVar2 != 0) {
    return;
  }
  FUN_1000_0177();
  return;
}



/* ==== FUN_1000_062a @ 1000:062a ==== 
 * signature: undefined __cdecl16near FUN_1000_062a(void)
 * body: 1000:062a-1000:0631
 */

long __cdecl16near FUN_1000_062a(void)

{
  uint in_DX;
  bool in_CF;
  
  if (!in_CF) {
    return (ulong)in_DX << 0x10;
  }
  FUN_1000_0652();
  return -1;
}



/* ==== FUN_1000_063f @ 1000:063f ==== 
 * signature: undefined __cdecl16near FUN_1000_063f(void)
 * body: 1000:063f-1000:064b
 */

void __cdecl16near FUN_1000_063f(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_0652();
  }
  return;
}



/* ==== FUN_1000_0652 @ 1000:0652 ==== 
 * signature: undefined __cdecl16near FUN_1000_0652(void)
 * body: 1000:0652-1000:067e
 */

void __cdecl16near FUN_1000_0652(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x8c = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_0676;
  if (*(byte *)0x87 < 3) {
LAB_1000_066c:
    if (0x13 < bVar1) {
LAB_1000_0670:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_0670;
    if (bVar1 < 0x20) goto LAB_1000_066c;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0xc0);
LAB_1000_0676:
  *(int *)0x7e = (int)cVar2;
  return;
}



/* ==== FUN_1000_0680 @ 1000:0680 ==== 
 * signature: undefined __cdecl16far FUN_1000_0680(void)
 * body: 1000:0680-1000:0680
 */

void __cdecl16far FUN_1000_0680(void)

{
  return;
}



/* ==== FUN_1000_0682 @ 1000:0682 ==== 
 * signature: undefined __cdecl16near FUN_1000_0682(void)
 * body: 1000:0682-1000:070d
 */

void __cdecl16near FUN_1000_0682(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int iVar5;
  int in_BX;
  uint *unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  
  if ((*(byte *)(in_BX + 2) & 1) != 0) {
    FUN_1000_075f();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar3 = *(uint *)(in_BX + 4);
    if (uVar3 != 0) {
      if (!CARRY2(in_CX + 2U,uVar3)) {
        uVar3 = *(uint *)0xd4;
        if (uVar3 == 0x2000) goto LAB_1000_06cf;
        uVar4 = 0x8000;
        while (uVar3 <= uVar4) {
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) goto LAB_1000_06e8;
        }
        if (uVar4 < 8) goto LAB_1000_06e8;
        uVar3 = uVar4 << 1;
        goto LAB_1000_06cf;
      }
      uVar4 = 0xfff0;
      if (in_CX + 2U + uVar3 == 0) {
        while( true ) {
          bVar7 = false;
          iVar2 = FUN_1000_070e();
          if (!bVar7) break;
          if (uVar4 == 0xfff0) {
            return;
          }
LAB_1000_06e8:
          uVar3 = 0x10;
LAB_1000_06cf:
          uVar4 = ~(uVar3 - 1);
        }
        iVar5 = iVar2 - *(int *)(in_BX + 4);
        *(int *)(in_BX + 4) = iVar2;
        *(undefined2 *)(in_BX + 8) = unaff_SI;
        piVar1 = (int *)*(int *)(in_BX + 10);
        *piVar1 = iVar5 + -1;
        puVar6 = (undefined2 *)((int)piVar1 + iVar5);
        *puVar6 = 0xfffe;
        *(undefined2 *)(in_BX + 10) = puVar6;
      }
    }
  }
  return;
}



/* ==== FUN_1000_070e @ 1000:070e ==== 
 * signature: undefined __cdecl16near FUN_1000_070e(void)
 * body: 1000:070e-1000:075c;1000:075e-1000:075e
 */

void __cdecl16near FUN_1000_070e(int param_1)

{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  int extraout_DX;
  int in_BX;
  int unaff_DS;
  bool bVar3;
  
  if ((((*(byte *)(in_BX + 2) & 4) == 0) || (in_AX - 1 <= *(int *)(in_BX + 4) - 1U)) ||
     (*(uint *)(in_BX + -2) < in_AX - 1)) {
    uVar2 = in_AX >> 4;
    if (uVar2 == 0) {
      uVar2 = 0x1000;
    }
    bVar3 = false;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      bVar3 = uVar2 + unaff_DS < *(uint *)0x84;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((!bVar3) && ((*(byte *)(param_1 + 2) & 4) != 0)) {
      *(int *)(param_1 + -2) = extraout_DX + -1;
    }
  }
  return;
}



/* ==== FUN_1000_075f @ 1000:075f ==== 
 * signature: undefined __cdecl16near FUN_1000_075f(void)
 * body: 1000:075f-1000:077e
 */

void __cdecl16near FUN_1000_075f(void)

{
  int in_BX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (uint *)*(undefined2 *)(in_BX + 8);
  if (puVar1 == (uint *)*(undefined2 *)(in_BX + 10)) {
    puVar1 = (uint *)*(undefined2 *)(in_BX + 6);
  }
  while( true ) {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
  }
  return;
}



/* ==== FUN_1000_0780 @ 1000:0780 ==== 
 * signature: undefined __cdecl16near FUN_1000_0780(void)
 * body: 1000:0780-1000:07be
 */

char * __cdecl16near FUN_1000_0780(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  
  iVar3 = -1;
  pcVar6 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  param_2 = param_2 + -uVar4;
  pcVar7 = pcVar6 + -1;
  if (((uint)param_2 & 1) != 0) {
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    pcVar6[-1] = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return param_1;
}



/* ==== FUN_1000_07c0 @ 1000:07c0 ==== 
 * signature: undefined __cdecl16near FUN_1000_07c0(void)
 * body: 1000:07c0-1000:07f1
 */

void __cdecl16near FUN_1000_07c0(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar3 = 0xffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  if (((uint)param_1 & 1) != 0) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}



/* ==== FUN_1000_07f2 @ 1000:07f2 ==== 
 * signature: undefined __cdecl16near FUN_1000_07f2(void)
 * body: 1000:07f2-1000:080c
 */

int __cdecl16near FUN_1000_07f2(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}



/* ==== FUN_1000_080e @ 1000:080e ==== 
 * signature: undefined __cdecl16near FUN_1000_080e(void)
 * body: 1000:080e-1000:0847
 */

uint __cdecl16near FUN_1000_080e(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar4 = 0;
  iVar3 = param_3;
  pcVar5 = param_1;
  if (param_3 != 0) {
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    param_3 = param_3 - iVar3;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar2 = param_1;
      param_1 = param_1 + 1;
      pcVar1 = param_2;
      param_2 = param_2 + 1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0;
    if ((byte)param_2[-1] <= (byte)param_1[-1]) {
      if (param_2[-1] == param_1[-1]) {
        return 0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}



/* ==== FUN_1000_0848 @ 1000:0848 ==== 
 * signature: undefined __cdecl16near FUN_1000_0848(void)
 * body: 1000:0848-1000:0890;1000:0892-1000:08a1
 */

int __cdecl16near FUN_1000_0848(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar4 = (int *)*(int *)0xa8;
  if ((piVar4 != (int *)0x0) && (param_1 != 0)) {
    uVar1 = FUN_1000_07f2(param_1);
    for (; *piVar4 != 0; piVar4 = piVar4 + 1) {
      uVar2 = FUN_1000_07f2(*piVar4);
      if (((uVar1 < uVar2) && (*(char *)(*piVar4 + uVar1) == '=')) &&
         (iVar3 = FUN_1000_080e(*piVar4,param_1,uVar1), iVar3 == 0)) {
        return *piVar4 + uVar1 + 1;
      }
    }
  }
  return 0;
}



/* ==== FUN_1000_08a2 @ 1000:08a2 ==== 
 * signature: undefined __cdecl16near FUN_1000_08a2(void)
 * body: 1000:08a2-1000:08ca
 */

char * __cdecl16near FUN_1000_08a2(char *param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  bVar4 = true;
  uVar2 = 0xffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  uVar2 = ~uVar2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    bVar4 = param_2 == *pcVar1;
  } while (!bVar4);
  if (bVar4) {
    param_1 = param_1 + -1;
  }
  else {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* ==== FUN_1000_08cc @ 1000:08cc ==== 
 * signature: undefined __cdecl16near FUN_1000_08cc(void)
 * body: 1000:08cc-1000:090d
 */

int __cdecl16near FUN_1000_08cc(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined2 unaff_DS;
  
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_1000_0909;
      pbVar1 = param_2;
      param_2 = param_2 + 1;
      bVar3 = *pbVar1;
      pbVar1 = param_1;
      param_1 = param_1 + 1;
    } while (*pbVar1 == bVar3);
    bVar2 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar3 = *pbVar1 + 0xbf;
    bVar3 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar2);
  cVar4 = (bVar3 < bVar2) * -2 + '\x01';
LAB_1000_0909:
  return (int)cVar4;
}



/* ==== FUN_1000_090e @ 1000:090e ==== 
 * signature: undefined __cdecl16near FUN_1000_090e(void)
 * body: 1000:090e-1000:0935
 */

char * __cdecl16near FUN_1000_090e(char *param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  uVar2 = ~uVar2;
  param_1 = param_1 + -1;
  bVar3 = param_1 == (char *)0x0;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + -1;
    bVar3 = param_2 == *pcVar1;
  } while (!bVar3);
  if (bVar3) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* ==== FUN_1000_0936 @ 1000:0936 ==== 
 * signature: undefined __cdecl16near FUN_1000_0936(void)
 * body: 1000:0936-1000:0987
 */

char * __cdecl16near FUN_1000_0936(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined2 unaff_DS;
  char *local_4;
  
  for (; pcVar1 = param_1, *param_1 == ';'; param_1 = param_1 + 1) {
  }
  while (param_3 = param_3 + -1, local_4 = pcVar1, param_3 != 0) {
    if ((*pcVar1 == '\0') || (*pcVar1 == ';')) goto LAB_1000_096f;
    *param_2 = *pcVar1;
    param_2 = param_2 + 1;
    pcVar1 = pcVar1 + 1;
  }
LAB_1000_0974:
  *param_2 = '\0';
  if (local_4 == pcVar1) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
LAB_1000_096f:
  for (; local_4 = param_1, *pcVar1 == ';'; pcVar1 = pcVar1 + 1) {
  }
  goto LAB_1000_0974;
}



/* ==== FUN_1000_0988 @ 1000:0988 ==== 
 * signature: undefined __cdecl16near FUN_1000_0988(void)
 * body: 1000:0988-1000:09ea;1000:09ec-1000:0a30;1000:0a32-1000:0a60;1000:0a62-1000:0a86;1000:0a88-1000:0aca;1000:0acc-1000:0bda
 */

uint __cdecl16near
FUN_1000_0988(int *param_1,int *param_2,int *param_3,undefined2 *param_4,undefined1 *param_5,
             int param_6,int param_7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  int local_c;
  int *local_6;
  
  uVar7 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)*(undefined2 *)0xa8;
  }
  if (param_2 != (int *)0x0) {
    local_6 = param_2;
    for (; (*local_6 != 0 && (uVar7 < 0x8000)); uVar7 = uVar7 + iVar3 + 1) {
      iVar3 = FUN_1000_07f2(*local_6);
      local_6 = local_6 + 1;
    }
  }
  if (*(int *)0xda == 0) {
    local_c = 0;
  }
  else {
    for (local_c = *(int *)0x8e; (local_c != 0 && (*(char *)(local_c + 0x8f) == '\0'));
        local_c = local_c + -1) {
    }
  }
  if (local_c != 0) {
    uVar7 = uVar7 + (local_c + 7) * 2;
  }
  if (param_6 != 0) {
    iVar3 = FUN_1000_07f2(param_6);
    uVar7 = uVar7 + iVar3 + 3;
  }
  if (uVar7 + 1 < 0x8000) {
    uVar4 = *(undefined2 *)0xd4;
    *(undefined2 *)0xd4 = 0x10;
    iVar3 = FUN_1000_10bb(uVar7 + 0x10);
    if (iVar3 != 0) {
      *(undefined2 *)0xd4 = uVar4;
      *param_3 = iVar3;
      pcVar5 = (char *)(iVar3 + 0xfU & 0xfff0);
      *param_4 = pcVar5;
      if (param_2 != (int *)0x0) {
        for (local_6 = param_2; *local_6 != 0; local_6 = local_6 + 1) {
          uVar4 = FUN_1000_07c0(pcVar5,*local_6,0);
          iVar3 = FUN_1000_08a2(uVar4);
          pcVar5 = (char *)(iVar3 + 1);
        }
      }
      if (local_c != 0) {
        uVar4 = FUN_1000_07c0(pcVar5,0x62,0);
        pcVar5 = (char *)FUN_1000_08a2(uVar4);
        iVar3 = 0;
        while (local_c != 0) {
          bVar2 = *(byte *)(iVar3 + 0x90);
          *pcVar5 = ((char)bVar2 >> 4 & 0xfU) + 0x41;
          pcVar5[1] = (bVar2 & 0xf) + 0x41;
          pcVar5 = pcVar5 + 2;
          iVar3 = iVar3 + 1;
          local_c = local_c + -1;
        }
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = '\0';
      if (param_6 != 0) {
        pcVar5[1] = '\x01';
        pcVar5[2] = '\0';
        FUN_1000_07c0(pcVar5 + 3,param_6);
      }
      puVar8 = (undefined1 *)0x0;
      puVar6 = param_5 + 1;
      if (param_7 != 0) {
        uVar4 = FUN_1000_07c0(puVar6,0xd6,0,param_7,0);
        uVar4 = FUN_1000_08a2(uVar4);
        uVar4 = FUN_1000_07c0(uVar4);
        puVar6 = (undefined1 *)FUN_1000_08a2(uVar4);
        puVar8 = puVar6 + (-1 - (int)param_5);
      }
      if (*param_1 != 0) {
        if (param_1[1] != 0) {
          *puVar6 = 0x20;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        local_6 = param_1 + 1;
        while (*local_6 != 0) {
          iVar3 = FUN_1000_07f2(*local_6);
          if ((undefined1 *)0x7d < puVar8 + iVar3) {
            *(undefined2 *)0x7e = 7;
            *(undefined2 *)0x8c = 10;
            FUN_1000_109a(*param_3);
            return 0xffff;
          }
          puVar8 = puVar8 + iVar3;
          piVar1 = local_6 + 1;
          uVar4 = FUN_1000_07c0(puVar6,*local_6,0);
          puVar6 = (undefined1 *)FUN_1000_08a2(uVar4);
          local_6 = piVar1;
          if (*piVar1 != 0) {
            *puVar6 = 0x20;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
        }
      }
      *puVar6 = 0xd;
      *param_5 = (char)puVar8;
      return uVar7 + 1;
    }
    *(undefined2 *)0x7e = 0xc;
    *(undefined2 *)0x8c = 8;
    *(undefined2 *)0xd4 = uVar4;
  }
  else {
    *(undefined2 *)0x7e = 7;
    *(undefined2 *)0x8c = 10;
  }
  return 0xffff;
}



/* ==== FUN_1000_0be6 @ 1000:0be6 ==== 
 * signature: undefined FUN_1000_0be6(void)
 * body: 1000:0be6-1000:0ccd
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_0be6(int param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SS;
  int unaff_DS;
  byte bVar5;
  
  if ((param_1 != 1) && (param_1 != 0)) {
    *(undefined2 *)0x7e = 0x16;
    FUN_1000_063f();
    return;
  }
  *(int *)0xdc = unaff_DS + (param_4 >> 4);
  *(undefined2 *)0xde = param_3;
  *(int *)0xe0 = unaff_DS;
  *(int *)0xe4 = unaff_DS;
  *(int *)0xe8 = unaff_DS;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(int *)0x15a == -0x292a) {
    (*(code *)*(undefined2 *)0x15c)();
  }
  DAT_1000_0bdc = (undefined2 *)&stack0xfffc;
  DAT_1000_0be0 = *(undefined2 *)0x2e;
  DAT_1000_0be2 = *(undefined2 *)0x30;
  bVar5 = 0;
  pcVar1 = (code *)swi(0x21);
  DAT_1000_0bde = unaff_SS;
  DAT_1000_0be4 = unaff_DS;
  (*pcVar1)();
  *(undefined2 *)0xaf = 1;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = DAT_1000_0be4;
  uVar3 = DAT_1000_0bde;
  puVar2 = DAT_1000_0bdc;
  *(undefined2 *)0x30 = DAT_1000_0be2;
  *(undefined2 *)0x2e = DAT_1000_0be0;
  *(undefined2 *)0xaf = 0;
  if ((bVar5 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  FUN_1000_063f();
  return;
}



/* ==== FUN_1000_0cce @ 1000:0cce ==== 
 * signature: undefined __cdecl16near FUN_1000_0cce(void)
 * body: 1000:0cce-1000:0d52
 */

undefined2 __cdecl16near
FUN_1000_0cce(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_8a;
  int local_86;
  undefined1 local_84 [114];
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int *piStack_c;
  int *piStack_a;
  undefined1 *puStack_8;
  undefined1 *puStack_6;
  int local_4;
  
  local_4 = 0xcd7;
  FUN_1000_0364();
  if (param_5 == 0) {
    local_8a = param_2;
    local_4 = 0x10a;
    puStack_6 = (undefined1 *)0xcec;
    param_2 = FUN_1000_0848();
    if (param_2 == 0) {
      *(undefined2 *)0x7e = 8;
      return 0xffff;
    }
  }
  else {
    local_8a = 0;
  }
  local_4 = local_8a;
  puStack_6 = (undefined1 *)0x0;
  puStack_8 = local_84;
  piStack_a = &local_4;
  piStack_c = &local_86;
  uStack_e = param_4;
  uStack_10 = param_3;
  uStack_12 = 0xd24;
  iVar1 = FUN_1000_0988();
  if (iVar1 == -1) {
    return 0xffff;
  }
  puStack_6 = local_84;
  piStack_a = (int *)param_1;
  piStack_c = (int *)0xd39;
  puStack_8 = (undefined1 *)param_2;
  uVar2 = FUN_1000_0be6();
  local_4 = local_86;
  puStack_6 = (undefined1 *)0xd47;
  FUN_1000_109a();
  return uVar2;
}



/* ==== FUN_1000_0d54 @ 1000:0d54 ==== 
 * signature: undefined __cdecl16near FUN_1000_0d54(void)
 * body: 1000:0d54-1000:0df0;1000:0df2-1000:0e3a;1000:0e3c-1000:0e89
 */

uint __cdecl16near FUN_1000_0d54(int param_1,uint param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  FUN_1000_0364();
  if (param_1 == 2) {
    uVar1 = FUN_1000_1058(param_2,param_3,param_4);
  }
  else {
    uVar1 = FUN_1000_090e(param_2,0x5c);
    uVar2 = FUN_1000_090e(param_2,0x2f);
    if (uVar2 == 0) {
      if (uVar1 == 0) {
        uVar1 = param_2;
      }
    }
    else if ((uVar1 == 0) || (uVar1 < uVar2)) {
      uVar1 = uVar2;
    }
    iVar3 = FUN_1000_08a2(uVar1,0x2e);
    if (iVar3 == 0) {
      uVar5 = *(undefined2 *)0xd4;
      *(undefined2 *)0xd4 = 0x10;
      iVar3 = FUN_1000_07f2(param_2,0);
      iVar3 = FUN_1000_10bb(iVar3 + 5);
      *(undefined2 *)0xd4 = uVar5;
      if (iVar3 == 0) {
        uVar1 = 0xffff;
      }
      else {
        FUN_1000_07c0(iVar3,param_2);
        iVar6 = FUN_1000_07f2(param_2);
        iVar6 = iVar6 + iVar3;
        for (iVar4 = 2; -1 < iVar4; iVar4 = iVar4 + -1) {
          FUN_1000_07c0(iVar6,*(undefined2 *)(iVar4 * 2 + 0x122));
          iVar4 = 0xe5e;
          iVar7 = FUN_1000_106c(iVar3,0);
          if (iVar7 != -1) {
            FUN_1000_0cce(param_1,iVar3,param_3,param_4,iVar4);
            break;
          }
        }
        uVar1 = 0xe7e;
        FUN_1000_109a(iVar3);
      }
    }
    else {
      uVar1 = param_2;
      iVar4 = FUN_1000_106c(param_2,0);
      if (iVar4 != -1) {
        uVar5 = FUN_1000_08cc(iVar3,*(undefined2 *)0x122);
        uVar1 = FUN_1000_0cce(param_1,param_2,param_3,param_4,uVar5);
      }
    }
  }
  return uVar1;
}



/* ==== FUN_1000_0e8a @ 1000:0e8a ==== 
 * signature: undefined __cdecl16near FUN_1000_0e8a(void)
 * body: 1000:0e8a-1000:0f20;1000:0f22-1000:0fcb
 */

int __cdecl16near
FUN_1000_0e8a(undefined2 param_1,char *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  int local_4;
  
  pcVar5 = (char *)0x0;
  uVar1 = *(undefined2 *)0xd4;
  *(undefined2 *)0xd4 = 0x10;
  local_4 = FUN_1000_0d54(param_1,param_2,param_3,param_4);
  if (((((local_4 == -1) && (*(int *)0x7e == 2)) &&
       (iVar2 = FUN_1000_08a2(param_2,0x2f), iVar2 == 0)) &&
      (iVar2 = FUN_1000_08a2(param_2,0x5c), iVar2 == 0)) &&
     (((*param_2 == '\0' || (param_2[1] != ':')) &&
      ((iVar2 = FUN_1000_0848(0x128), iVar2 != 0 &&
       (pcVar5 = (char *)FUN_1000_10bb(0x104), pcVar5 != (char *)0x0)))))) {
    *(undefined2 *)0xd4 = uVar1;
    while ((iVar2 = FUN_1000_0936(iVar2,pcVar5,0x103), iVar2 != 0 && (*pcVar5 != '\0'))) {
      iVar3 = FUN_1000_07f2(pcVar5);
      if ((pcVar5[iVar3 + -1] != '\\') && (pcVar5[iVar3 + -1] != '/')) {
        FUN_1000_0780(pcVar5,0x12d);
      }
      iVar3 = FUN_1000_07f2(param_2);
      iVar4 = FUN_1000_07f2(pcVar5);
      if (0x103 < (uint)(iVar4 + iVar3)) break;
      FUN_1000_0780(pcVar5,param_2);
      local_4 = FUN_1000_0d54(param_1,pcVar5,param_3,param_4);
      if ((local_4 != -1) ||
         ((*(int *)0x7e != 2 &&
          (((*pcVar5 != '\\' && (*pcVar5 != '/')) || ((pcVar5[1] != '\\' && (pcVar5[1] != '/')))))))
         ) break;
    }
  }
  else {
    *(undefined2 *)0xd4 = uVar1;
  }
  if (pcVar5 != (char *)0x0) {
    FUN_1000_109a(pcVar5);
  }
  return local_4;
}



/* ==== FUN_1000_0fcc @ 1000:0fcc ==== 
 * signature: undefined __cdecl16near FUN_1000_0fcc(void)
 * body: 1000:0fcc-1000:103c;1000:103e-1000:1056
 */

uint __cdecl16near FUN_1000_0fcc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int local_c [3];
  undefined2 local_6;
  undefined2 local_4;
  
  local_c[0] = FUN_1000_0848(0x130);
  if (param_1 == 0) {
    iVar1 = FUN_1000_106c(local_c[0],0);
    uVar2 = (uint)(iVar1 == 0);
  }
  else {
    local_c[1] = 0x138;
    local_c[2] = param_1;
    local_6 = 0;
    if ((local_c[0] == 0) ||
       ((uVar2 = FUN_1000_0d54(0,local_c[0],local_c,*(undefined2 *)0xa8), uVar2 == 0xffff &&
        ((local_4 = 0xffff, *(int *)0x7e == 2 || (*(int *)0x7e == 0xd)))))) {
      local_c[0] = 0x13b;
      uVar2 = FUN_1000_0e8a(0,0x13b,local_c,*(undefined2 *)0xa8);
    }
  }
  return uVar2;
}



/* ==== FUN_1000_1058 @ 1000:1058 ==== 
 * signature: undefined FUN_1000_1058(void)
 * body: 1000:1058-1000:106b
 */

void FUN_1000_1058(void)

{
  undefined2 unaff_DS;
  
  if ((code *)*(int *)0x174 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001105e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(int *)0x174)();
    return;
  }
  *(undefined2 *)0x7e = 0x16;
  FUN_1000_063f();
  return;
}



/* ==== FUN_1000_106c @ 1000:106c ==== 
 * signature: undefined FUN_1000_106c(void)
 * body: 1000:106c-1000:108a
 */

void FUN_1000_106c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_062a();
  return;
}



/* ==== FUN_1000_108c @ 1000:108c ==== 
 * signature: undefined FUN_1000_108c(void)
 * body: 1000:108c-1000:1098
 */

void FUN_1000_108c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_062a();
  return;
}



/* ==== FUN_1000_109a @ 1000:109a ==== 
 * signature: undefined __cdecl16near FUN_1000_109a(void)
 * body: 1000:109a-1000:10ba
 */

void __cdecl16near FUN_1000_109a(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x4e < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x50) {
      *(undefined2 *)0x50 = pbVar1;
    }
  }
  return;
}



/* ==== FUN_1000_10bb @ 1000:10bb ==== 
 * signature: undefined __cdecl16near FUN_1000_10bb(void)
 * body: 1000:10bb-1000:10f4
 */

void __cdecl16near FUN_1000_10bb(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  do {
    bVar2 = param_1 < 0xffe8;
    if (param_1 < 0xffe9) {
      FUN_1000_10f6();
      if (!bVar2) {
        return;
      }
      FUN_1000_0682();
      if ((!bVar2) && (FUN_1000_10f6(), !bVar2)) {
        return;
      }
    }
    if (*(int *)0x148 == 0) {
      return;
    }
    iVar1 = (*(code *)*(undefined2 *)0x148)(param_1);
  } while (iVar1 != 0);
  return;
}



/* ==== FUN_1000_10f6 @ 1000:10f6 ==== 
 * signature: undefined __cdecl16near FUN_1000_10f6(void)
 * body: 1000:10f6-1000:111c;1000:111e-1000:1171
 */

uint * __cdecl16near FUN_1000_10f6(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int in_BX;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  
  uVar4 = in_CX + 1U & 0xfffe;
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  puVar5 = (uint *)*(undefined2 *)(in_BX + 10);
  do {
    while( true ) {
      puVar1 = puVar7 + 1;
      uVar3 = *puVar7;
      puVar6 = puVar1;
      if ((uVar3 & 1) != 0) {
        while( true ) {
          uVar2 = uVar3 - 1;
          if (uVar4 <= uVar2) {
            *puVar7 = uVar4;
            puVar7 = puVar1;
            if (uVar2 != uVar4) {
              *(int *)((int)puVar1 + uVar4) = (uVar2 - uVar4) + -1;
              puVar7 = (uint *)((int)((int)puVar1 + uVar4) - uVar4);
            }
            *(int *)(in_BX + 8) = (int)puVar7 + uVar4;
            return puVar1;
          }
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_114f;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_114f;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_1000_114f;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_114f:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}


