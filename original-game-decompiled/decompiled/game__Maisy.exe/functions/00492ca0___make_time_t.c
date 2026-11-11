
/* ==== __make_time_t @ 00492ca0 ==== 
 * signature: uint __cdecl __make_time_t(int * param_1, int param_2)
 * body: 00492ca0-00492efe
 * note: Library Function - Single Match  __make_time_t  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __make_time_t
   
   Library: Visual Studio 1998 Release */

uint __cdecl __make_time_t(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  tm *ptVar3;
  int iVar4;
  uint local_4;
  
  local_4 = param_1[5];
  if ((int)local_4 < 0x45) {
    return 0xffffffff;
  }
  if (0x8b < (int)local_4) {
    return 0xffffffff;
  }
  iVar4 = param_1[4];
  if ((iVar4 < 0) || (0xb < iVar4)) {
    local_4 = local_4 + iVar4 / 0xc;
    iVar4 = iVar4 % 0xc;
    param_1[4] = iVar4;
    if (iVar4 < 0) {
      local_4 = local_4 - 1;
      param_1[4] = iVar4 + 0xc;
    }
    if ((int)local_4 < 0x45) {
      return 0xffffffff;
    }
    if (0x8b < (int)local_4) {
      return 0xffffffff;
    }
  }
  iVar4 = (&DAT_004df0d8)[param_1[4]];
  if (((local_4 & 3) == 0) && (1 < param_1[4])) {
    iVar4 = iVar4 + 1;
  }
  iVar4 = ((int)(local_4 - 1) >> 2) + local_4 * 0x16d + -0x63df + iVar4;
  iVar2 = param_1[3];
  iVar1 = iVar2 + iVar4;
  if (iVar4 < 0) {
LAB_00492d61:
    if ((iVar2 < 0) && (-1 < iVar1)) {
      return 0xffffffff;
    }
  }
  else {
    if ((-1 < iVar2) && (iVar1 < 0)) {
      return 0xffffffff;
    }
    if (iVar4 < 0) goto LAB_00492d61;
  }
  iVar4 = iVar1 * 0x18;
  if (iVar1 != 0 && iVar4 / iVar1 != 0x18) {
    return 0xffffffff;
  }
  iVar2 = param_1[2];
  iVar1 = iVar4 + iVar2;
  if (iVar4 < 0) {
LAB_00492dbd:
    if ((iVar2 < 0) && (-1 < iVar1)) {
      return 0xffffffff;
    }
  }
  else {
    if ((-1 < iVar2) && (iVar1 < 0)) {
      return 0xffffffff;
    }
    if (iVar4 < 0) goto LAB_00492dbd;
  }
  iVar4 = iVar1 * 0x3c;
  if (iVar1 != 0 && iVar4 / iVar1 != 0x3c) {
    return 0xffffffff;
  }
  iVar2 = param_1[1];
  iVar1 = iVar4 + iVar2;
  if (iVar4 < 0) {
LAB_00492e1b:
    if ((iVar2 < 0) && (-1 < iVar1)) {
      return 0xffffffff;
    }
  }
  else {
    if ((-1 < iVar2) && (iVar1 < 0)) {
      return 0xffffffff;
    }
    if (iVar4 < 0) goto LAB_00492e1b;
  }
  iVar4 = iVar1 * 0x3c;
  if (iVar1 != 0 && iVar4 / iVar1 != 0x3c) {
    return 0xffffffff;
  }
  iVar1 = *param_1;
  local_4 = iVar4 + iVar1;
  if (-1 < iVar4) {
    if ((-1 < iVar1) && ((int)local_4 < 0)) {
      return 0xffffffff;
    }
    if (-1 < iVar4) goto LAB_00492e83;
  }
  if ((iVar1 < 0) && (-1 < (int)local_4)) {
    return 0xffffffff;
  }
LAB_00492e83:
  if (param_2 == 0) {
    ptVar3 = _gmtime((time_t *)&local_4);
    if (ptVar3 == (tm *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    ___tzset();
    local_4 = local_4 + DAT_004dee70;
    ptVar3 = _localtime((time_t *)&local_4);
    if (ptVar3 == (tm *)0x0) {
      return 0xffffffff;
    }
    if ((0 < param_1[8]) || ((param_1[8] < 0 && (0 < ptVar3->tm_isdst)))) {
      local_4 = local_4 + DAT_004dee78;
      ptVar3 = _localtime((time_t *)&local_4);
    }
  }
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = ptVar3->tm_sec;
    ptVar3 = (tm *)&ptVar3->tm_min;
    param_1 = param_1 + 1;
  }
  return local_4;
}


