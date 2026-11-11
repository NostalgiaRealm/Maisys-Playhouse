
/* ==== FUN_00456560 @ 00456560 ==== 
 * signature: undefined4 __cdecl FUN_00456560(short * param_1, char * param_2, uint param_3, int * param_4)
 * body: 00456560-00457a11
 */

undefined4 __cdecl FUN_00456560(short *param_1,char *param_2,uint param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined2 local_4b8 [22];
  char local_48c [1024];
  undefined2 local_8c;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  char *local_7e [7];
  short local_60 [20];
  undefined4 local_38;
  undefined2 local_34;
  short local_32;
  char *local_30;
  uint local_2c;
  undefined4 local_28;
  char *local_24;
  char local_17 [13];
  undefined4 local_a;
  
  switch(*param_1) {
  case 0:
    _strncpy(param_2,&DAT_004d99e4,param_3);
    return 0;
  case 1:
    FUN_0043bac0(*(undefined4 *)(param_1 + 1),param_2);
    return 0;
  default:
    return 0x60001;
  case 9:
    local_a = *(uint *)(param_1 + 5);
    lVar13 = __ftol();
    local_a = (int)lVar13 * -0x34bc0;
    uVar14 = __ftol();
    local_a = (int)uVar14 * -0xe10;
    lVar13 = __ftol();
    local_a = (uint)lVar13;
    local_38 = local_a * -0x3c;
    lVar13 = __ftol();
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbd08;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    *param_2 = (char)uVar14 / '\n' + '0';
    param_2[1] = (char)uVar14 +
                 (char)((longlong)
                        ((ulonglong)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar14 & 0xffffffff) / -10
                       ) * '\n' + '0';
    param_2[3] = (char)local_a / '\n' + '0';
    local_38._0_1_ = (char)lVar13;
    param_2[4] = (char)local_a + (char)((int)local_a / -10) * '\n' + '0';
    param_2[6] = (char)local_38 / '\n' + '0';
    param_2[7] = (char)((int)lVar13 / -10) * '\n' + (char)local_38 + '0';
    return 0;
  case 10:
    FUN_0043bac0((int)param_1[1],local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_004dbd04;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbd04;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bac0((int)param_1[2],local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 0xb:
    FUN_0043bac0(*(undefined4 *)(param_1 + 1),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcfc;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcfc;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bac0(*(undefined4 *)(param_1 + 3),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 0xd:
    FUN_0043bac0((int)param_1[2],local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_004dbcf8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcf8;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bac0((int)param_1[1],local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_004dbcf0;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar8 + ~uVar7 + (~uVar6 - 3)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcf0;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bac0((int)param_1[4],local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_004dbce8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar8 + ~uVar7 + (~uVar6 - 3)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbce8;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bac0((int)param_1[3],local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_004dbce0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar8 + ~uVar7 + (~uVar6 - 3)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbce0;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 0xf:
    FUN_0043bb70(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 3),param_2);
    return 0;
  case 0x10:
    FUN_0043bb70(SUB84(*(double *)(param_1 + 1) * 57.29577951308232,0),
                 (int)((ulonglong)(*(double *)(param_1 + 1) * 57.29577951308232) >> 0x20),local_48c)
    ;
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_004dbcd8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcd8;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bb70(*(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 7),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 0x14:
    if (param_1[1] == 0) {
      uVar6 = 0xffffffff;
      pcVar10 = s_false_004dbc78;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar11 + -uVar6;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        param_2 = param_2 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        param_2 = param_2 + 1;
      }
      return 0;
    }
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_004dbc80;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      param_2 = param_2 + 1;
    }
    return 0;
  case 0x17:
    FUN_0043bac0(*(undefined4 *)(param_1 + 1),param_2);
    FUN_0043bac0(*(undefined4 *)(param_1 + 3),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_004db560;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 100:
    FUN_0043bac0(*(undefined4 *)(param_1 + 1),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = (char *)&DAT_004db560;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_004db560;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bac0(*(undefined4 *)(param_1 + 3),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 0x65:
    FUN_0043bae0(*(uint *)(param_1 + 7),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_004dbcd0;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_004dbcc8;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_004dbcc4;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 0x66:
    if (*(char **)(param_1 + 7) != (char *)0x0) {
      _strncpy(param_2,*(char **)(param_1 + 7),param_3 - 1);
      param_2[param_3 - 1] = '\0';
      return 0;
    }
    *param_2 = '\0';
    return 0;
  case 0x69:
  case 0x73:
    FUN_004537b0(param_1,param_4);
    piVar5 = *(int **)(param_1 + 1);
    if ((piVar5 != (int *)0x0) && ((*(byte *)((int)piVar5 + 0x1e) & 0x80) != 0)) {
      *param_2 = '\0';
      local_34 = 0xd;
      local_30 = param_2;
      local_32 = (short)param_3;
      FUN_00474bd0(piVar5,0,&local_34,0xd);
      return 0;
    }
    if (piVar5 == (int *)0x0) {
      uVar6 = 0xffffffff;
      pcVar10 = (char *)&DAT_004dbcbc;
      do {
        pcVar11 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar11 + -uVar6;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        param_2 = param_2 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *param_2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        param_2 = param_2 + 1;
      }
      return 0;
    }
    local_32 = 0x66;
    local_24 = param_2;
    *param_2 = '\0';
    local_28 = 0;
    local_2c = param_3;
    local_30 = (char *)0x0;
    pcVar4 = *(code **)(*piVar5 + 0x98);
    iVar9 = (*pcVar4)(s_value_004d9864,0,&local_32);
    if (iVar9 != 0) {
      uVar3 = (*pcVar4)(&DAT_004d9c18,0,&local_32);
      return uVar3;
    }
    break;
  case 0x6b:
    local_30 = *(char **)(param_1 + 1);
    local_2c = *(uint *)(param_1 + 3);
    local_32 = 9;
    local_28 = *(undefined4 *)(param_1 + 5);
    FUN_00456560(&local_32,local_48c,0x3ff,param_4);
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_004dbcb8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcb8;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    local_30 = *(char **)(param_1 + 7);
    local_2c = *(uint *)(param_1 + 9);
    local_28 = *(undefined4 *)(param_1 + 0xb);
    FUN_00456560(&local_32,local_48c,0x3ff,param_4);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 0x6c:
    FUN_0043bac0((uint)*(byte *)(param_1 + 2),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcb4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar7 + (~uVar6 - 2)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcb4;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bac0((uint)*(byte *)((int)param_1 + 3),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_004dbcac;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar8 + ~uVar7 + (~uVar6 - 3)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbcac;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0043bac0((uint)*(byte *)(param_1 + 1),local_48c);
    uVar6 = 0xffffffff;
    pcVar10 = param_2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_004dbca4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (param_3 <= ~uVar8 + ~uVar7 + (~uVar6 - 3)) {
      return 0x60002;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004dbce8;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = local_48c;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar12 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar1 != '\0');
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = pcVar12 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_004dbca0;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    do {
      pcVar10 = param_2;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    pcVar11 = pcVar11 + -uVar6;
    pcVar10 = pcVar10 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    return 0;
  case 0x6d:
    local_a = (uint)(uint3)local_a;
    local_8a = 0xffffffff;
    local_86 = 0;
    local_82 = 0;
    local_7e[0] = (char *)0x0;
    local_4b8[0] = 0;
    local_8c = 0x66;
    pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xe,&local_38);
    DAT_004e34cc = (*pcVar4)(local_38,local_7e,0x100);
    if (local_7e[0] != (char *)0x0) {
      local_86 = 0x100;
      *local_7e[0] = '\0';
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004d99e4;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = param_2;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    local_38 = local_38 & 0xffff;
    if (0 < param_1[1]) {
      do {
        piVar5 = FUN_0043e870((int *)0x0,*(int **)(param_1 + 2),
                              (*(int **)(param_1 + 2))[local_38._2_2_]);
        if (piVar5 == (int *)0x0) {
LAB_00457741:
          local_a = CONCAT13(1,(uint3)local_a);
          break;
        }
        (**(code **)(*piVar5 + 0x98))(&DAT_004d9c18,local_4b8,&local_8c);
        uVar6 = 0xffffffff;
        pcVar10 = local_7e[0];
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar7 = 0xffffffff;
        pcVar10 = param_2;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_004dbc9c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        if (param_3 <= ~uVar8 + ~uVar7 + (~uVar6 - 3)) goto LAB_00457741;
        uVar6 = 0xffffffff;
        pcVar10 = local_7e[0];
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar9 = -1;
        pcVar10 = param_2;
        do {
          pcVar12 = pcVar10;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar10 = &DAT_004dbc9c;
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar9 = -1;
        pcVar10 = param_2;
        do {
          pcVar12 = pcVar10;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        sVar2 = local_38._2_2_ + 1;
        local_38 = CONCAT22(sVar2,(undefined2)local_38);
      } while (sVar2 < param_1[1]);
    }
    if (local_7e[0] != (char *)0x0) {
      pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0x10,&local_38);
      DAT_004e34cc = (*pcVar4)();
    }
    if (local_a._3_1_ != '\0') {
      return 0x60002;
    }
    break;
  case 0x75:
    uVar6 = 0xffffffff;
    pcVar10 = s_Collection_004dbc90;
    do {
      pcVar11 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar11 + -uVar6;
    pcVar11 = local_48c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    if (*(char **)(param_1 + 1) != (char *)0x0) {
      uVar6 = 0xffffffff;
      pcVar10 = *(char **)(param_1 + 1);
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = 0xffffffff;
      pcVar10 = local_48c;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (~uVar7 + (~uVar6 - 2) < param_3) {
        uVar6 = 0xffffffff;
        pcVar10 = local_48c;
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = param_2;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar10 = *(char **)(param_1 + 1);
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar9 = -1;
        pcVar10 = param_2;
        do {
          pcVar12 = pcVar10;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_0043bae0(*(uint *)(param_1 + 3),local_48c);
        uVar6 = 0xffffffff;
        pcVar10 = param_2;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar7 = 0xffffffff;
        pcVar10 = local_48c;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_004dbc8c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        if (param_3 <= ~uVar8 + ~uVar7 + (~uVar6 - 3)) {
          return 0x60002;
        }
        uVar6 = 0xffffffff;
        pcVar10 = (char *)&DAT_004dbc88;
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar9 = -1;
        pcVar10 = param_2;
        do {
          pcVar12 = pcVar10;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar10 = local_48c;
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar9 = -1;
        pcVar10 = param_2;
        do {
          pcVar12 = pcVar10;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = pcVar12 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar10 = (char *)&DAT_004dbcc4;
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar9 = -1;
        do {
          pcVar10 = param_2;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar10 = param_2 + 1;
          cVar1 = *param_2;
          param_2 = pcVar10;
        } while (cVar1 != '\0');
        pcVar11 = pcVar11 + -uVar6;
        pcVar10 = pcVar10 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar10 = pcVar10 + 1;
        }
        return 0;
      }
    }
    return 0x60002;
  case 0x76:
    if ((param_4 != (int *)0x0) && (*(char **)(param_1 + 7) != (char *)0x0)) {
      iVar9 = -1;
      pcVar10 = *(char **)(param_1 + 7);
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (iVar9 != -2) {
        if ((*(byte *)((int)param_4 + 0x1e) & 1) == 0) {
          local_60[0] = 0x6a;
          FUN_004374f0(*(char **)(param_1 + 7),local_17);
          (**(code **)(*param_4 + 0x98))(local_17,0,local_60);
          FUN_00456560(local_60,param_2,param_3,param_4);
          FUN_00452ae0((int)param_4,local_60);
          return 0;
        }
        FUN_004537f0((int)param_4,*(char **)(param_1 + 7),param_2,param_3);
      }
    }
    return 0;
  case 0x7c:
    if (1 < param_3) {
      sVar2 = param_1[1];
      param_2[1] = '\0';
      *param_2 = (char)sVar2;
    }
  }
  return 0;
}


