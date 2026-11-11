
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


