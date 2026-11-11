
/* ==== FUN_00475250 @ 00475250 ==== 
 * signature: char __cdecl FUN_00475250(uint param_1)
 * body: 00475250-004758cc
 */

char __cdecl FUN_00475250(uint param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  short *psVar5;
  short sVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  byte bVar14;
  short local_30 [22];
  
  sVar6 = DAT_004dca6c;
  DAT_004dca6c = DAT_004dca6c + 1;
  cVar7 = '\x01';
  if (0x32 < DAT_004dca6c) {
    DAT_004dca6c = sVar6;
    return '\x01';
  }
  iVar13 = *(int *)(param_1 + 4);
  if (iVar13 < 0xe) {
    if (iVar13 == 0xd) {
      uVar8 = FUN_00477490(param_1);
      cVar7 = (char)uVar8;
    }
    else if (iVar13 == 5) {
      uVar8 = FUN_00475af0(param_1);
      cVar7 = (char)uVar8;
    }
  }
  else if (iVar13 < 0xce) {
    if (iVar13 == 0xcd) {
      cVar7 = FUN_004774e0();
    }
    else if (iVar13 == 0x1a) {
      cVar7 = FUN_004778a0(param_1);
    }
  }
  else if (iVar13 < 0x191) {
    if (iVar13 == 400) {
      uVar8 = FUN_00475d80(param_1);
      cVar7 = (char)uVar8;
    }
    else if (iVar13 == 0x12d) {
      cVar7 = FUN_00477460();
    }
    else if (iVar13 == 0x12f) {
      uVar8 = FUN_004777e0(param_1);
      cVar7 = (char)uVar8;
    }
  }
  else if (iVar13 < 0x198) {
    if (iVar13 == 0x197) {
      uVar8 = FUN_004773f0(param_1);
      cVar7 = (char)uVar8;
    }
    else if (iVar13 == 0x191) {
      cVar7 = FUN_00476190();
    }
    else if (iVar13 == 0x193) {
      uVar8 = FUN_004772e0(param_1);
      cVar7 = (char)uVar8;
    }
  }
  else if (iVar13 < 0x1a5) {
    if (iVar13 == 0x1a4) {
      cVar7 = FUN_00477450();
    }
    else if (iVar13 == 0x1a1) {
      uVar8 = FUN_004772a0(param_1);
      cVar7 = (char)uVar8;
    }
  }
  else if (iVar13 < 0x2bd) {
    if (iVar13 == 700) {
      pcVar11 = (char *)(*(undefined4 **)(param_1 + 0x1a))[1];
      if (pcVar11 != (char *)0x0) {
        _sprintf(pcVar11,&DAT_004db52c,*(undefined4 *)**(undefined4 **)(param_1 + 0x1a));
      }
    }
    else {
      switch(iVar13) {
      case 0x1a5:
        cVar7 = FUN_00477440();
        break;
      case 0x1a6:
        uVar8 = FUN_00475b30(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1a7:
        cVar7 = FUN_004772c0();
        break;
      case 0x1a8:
        uVar8 = FUN_00477280(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1aa:
        uVar8 = FUN_004761c0(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1ab:
        uVar8 = FUN_004763b0(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1ac:
        uVar8 = FUN_004764d0(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1ae:
        uVar8 = FUN_004769e0(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1af:
        cVar7 = FUN_004763a0();
        break;
      case 0x1b6:
        uVar9 = FUN_00478200(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1b8:
        uVar9 = FUN_00477730(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1b9:
        cVar7 = FUN_00476290();
        break;
      case 0x1ba:
        uVar8 = FUN_00477190(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1bb:
        uVar8 = FUN_004762a0(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1bc:
        uVar8 = FUN_00476300(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1bd:
        uVar8 = FUN_00476230(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1be:
        uVar9 = FUN_00477760(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1bf:
        uVar9 = FUN_00475dc0(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1c0:
        uVar8 = FUN_004778e0(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1c5:
        cVar7 = FUN_00476f10(param_1);
        break;
      case 0x1c6:
        uVar9 = FUN_00477900(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1c7:
        uVar9 = FUN_00477160(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1c8:
        uVar8 = FUN_00477360(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x1c9:
        uVar9 = FUN_00478040(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1ca:
        uVar9 = FUN_004769a0(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1cb:
        uVar9 = FUN_004777a0(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1cc:
        cVar7 = '\0';
        FUN_00443760();
        break;
      case 0x1cd:
        uVar9 = FUN_00478220(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1ce:
        uVar9 = FUN_00478260(param_1);
        cVar7 = (char)uVar9;
        break;
      case 0x1f5:
        pbVar1 = (byte *)(*(undefined4 **)(param_1 + 0x1a))[1];
        puVar2 = (undefined1 *)**(undefined4 **)(param_1 + 0x1a);
        if (pbVar1 == (byte *)0x0) {
          puVar2[3] = 0;
          puVar2[2] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
        }
        else {
          FUN_0043d640(pbVar1,puVar2);
        }
        break;
      case 0x1f6:
        pcVar11 = (char *)(*(undefined4 **)(param_1 + 0x1a))[1];
        if (pcVar11 != (char *)0x0) {
          FUN_0043d490((byte *)**(undefined4 **)(param_1 + 0x1a),pcVar11,'\0');
        }
      }
    }
  }
  else if (iVar13 < 0x321) {
    if (iVar13 == 800) {
      uVar8 = FUN_004760d0(param_1);
      cVar7 = (char)uVar8;
    }
    else {
      switch(iVar13) {
      case 0x2bd:
        puVar3 = *(undefined4 **)(param_1 + 0x1a);
        if ((char *)puVar3[1] == (char *)0x0) {
          *(undefined4 *)*puVar3 = 0;
        }
        else {
          lVar10 = _atol((char *)puVar3[1]);
          *(long *)*puVar3 = lVar10;
        }
        break;
      case 0x2bf:
        piVar4 = *(int **)(param_1 + 0x1a);
        if ((char *)piVar4[1] != (char *)0x0) {
          _sprintf((char *)piVar4[1],s___12_10g_004dca74,*(undefined4 *)*piVar4,
                   ((undefined4 *)*piVar4)[1]);
          pcVar11 = _strrchr((char *)piVar4[1],0);
          do {
            pcVar12 = pcVar11;
            pcVar11 = pcVar12 + -1;
            if (pcVar11 < (char *)piVar4[1]) break;
          } while (*pcVar11 == ' ');
          *pcVar12 = '\0';
        }
        break;
      case 0x2c0:
        pcVar11 = (char *)(*(undefined4 **)(param_1 + 0x1a))[1];
        puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0x1a);
        if ((pcVar11 == (char *)0x0) || (iVar13 = _sscanf(pcVar11,&DAT_004dca80,puVar3), iVar13 < 1)
           ) {
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        break;
      case 0x2c1:
        piVar4 = *(int **)(*(int *)(param_1 + 0x16) + 8);
        pcVar11 = (char *)(*(undefined4 **)(param_1 + 0x1a))[1];
        if (pcVar11 != (char *)0x0) {
          local_30[0] = 0;
          uVar8 = FUN_004169e0((short *)**(undefined4 **)(param_1 + 0x1a),local_30,0);
          if ((char)uVar8 != '\0') {
            FUN_00456560(local_30,pcVar11,0xff,piVar4);
          }
        }
      }
    }
  }
  else if (iVar13 < 0x3e9) {
    if (iVar13 == 1000) {
      uVar8 = FUN_00475ec0(param_1);
      cVar7 = (char)uVar8;
    }
    else {
      switch(iVar13) {
      case 0x321:
        uVar8 = FUN_00476010(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x322:
        uVar8 = FUN_00475ea0(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x323:
        uVar8 = FUN_00475f70(param_1);
        cVar7 = (char)uVar8;
        break;
      case 0x324:
        uVar8 = FUN_00475f30(param_1);
        cVar7 = (char)uVar8;
      }
    }
  }
  else {
    switch(iVar13) {
    case 0x3e9:
      uVar8 = FUN_004774f0(param_1);
      cVar7 = (char)uVar8;
      break;
    case 0x3ea:
      psVar5 = *(short **)(param_1 + 0x1a);
      if (*psVar5 == 0) {
        *(uint *)(psVar5 + 1) = (uint)((DAT_004e0204 & 2) >> 1);
      }
      else if (*psVar5 == 1) {
        *(uint *)(psVar5 + 1) = (uint)((DAT_004e0204 & 4) >> 2);
      }
      break;
    case 0x3eb:
      psVar5 = *(short **)(param_1 + 0x1a);
      if (*psVar5 == 0) {
        bVar14 = DAT_004e0204 & 2;
        DAT_004e0204 = DAT_004e0204 ^
                       ((char)*(undefined4 *)(psVar5 + 1) * '\x02' ^ DAT_004e0204) & 2;
        *(uint *)(psVar5 + 1) = (uint)(bVar14 >> 1);
      }
      else if (*psVar5 == 1) {
        bVar14 = DAT_004e0204 & 4;
        DAT_004e0204 = DAT_004e0204 ^ ((char)*(undefined4 *)(psVar5 + 1) << 2 ^ DAT_004e0204) & 4;
        *(uint *)(psVar5 + 1) = (uint)(bVar14 >> 2);
      }
      break;
    case 0x3ec:
      cVar7 = FUN_004777d0();
      break;
    case 0x3f1:
      cVar7 = FUN_00477920(param_1);
      break;
    case 0x3f2:
      cVar7 = FUN_00477c30(param_1);
      break;
    case 0x3f3:
      uVar9 = FUN_00477ff0(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x3f4:
      cVar7 = FUN_00478010(param_1);
      break;
    case 0x3f5:
      uVar9 = FUN_00478300(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x44d:
      uVar9 = FUN_00478120(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x44e:
      uVar9 = FUN_00478150(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x44f:
      uVar9 = FUN_00478170(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x450:
      uVar9 = FUN_00478190(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x451:
      uVar9 = FUN_004781b0(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x452:
      uVar9 = FUN_004781d0(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x453:
      pcVar11 = FUN_0043b970(*(char **)(param_1 + 0x1a));
      *(char **)(param_1 + 0x1a) = pcVar11;
      cVar7 = pcVar11 == (char *)0x0;
      break;
    case 0x454:
      if (*(LPVOID *)(param_1 + 0x1a) != (LPVOID)0x0) {
        FUN_0043ba20(*(LPVOID *)(param_1 + 0x1a));
      }
      cVar7 = '\0';
      break;
    case 0x455:
      piVar4 = *(int **)(param_1 + 0x1a);
      if (piVar4 != (int *)0x0) {
        iVar13 = FUN_0043b950(*piVar4);
        piVar4[1] = iVar13;
      }
      cVar7 = '\0';
      break;
    case 0x4b0:
      uVar8 = FUN_00478080(param_1);
      cVar7 = (char)uVar8;
      break;
    case 0x4b1:
      uVar9 = FUN_004780d0(param_1);
      cVar7 = (char)uVar9;
      break;
    case 0x4b2:
      cVar7 = FUN_00478290(param_1);
      break;
    case 0x4b3:
      uVar9 = FUN_004782c0(param_1);
      cVar7 = (char)uVar9;
    }
  }
  DAT_004dca6c = DAT_004dca6c + -1;
  return cVar7;
}


