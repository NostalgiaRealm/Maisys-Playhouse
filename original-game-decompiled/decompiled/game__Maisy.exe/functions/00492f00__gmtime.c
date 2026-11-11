
/* ==== _gmtime @ 00492f00 ==== 
 * signature: tm * __cdecl _gmtime(time_t * _Time)
 * body: 00492f00-00493053
 * note: Library Function - Single Match  _gmtime  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _gmtime
   
   Library: Visual Studio 1998 Release */

tm * __cdecl _gmtime(time_t *_Time)

{
  bool bVar1;
  _ptiddata p_Var2;
  wchar_t *pwVar3;
  int iVar4;
  tm *ptVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  bVar1 = false;
  iVar9 = (int)*_Time;
  p_Var2 = __getptd();
  if (iVar9 < 0) {
    return (tm *)0x0;
  }
  if (p_Var2->_wasctimebuf == (wchar_t *)0x0) {
    pwVar3 = (wchar_t *)FUN_00490210(0x24);
    ptVar5 = (tm *)&DAT_004de410;
    p_Var2->_wasctimebuf = pwVar3;
    if (pwVar3 == (wchar_t *)0x0) goto LAB_00492f3d;
  }
  ptVar5 = (tm *)p_Var2->_wasctimebuf;
LAB_00492f3d:
  iVar6 = (iVar9 / 0x7861f80) * 4;
  iVar4 = iVar6 + 0x46;
  iVar9 = iVar9 % 0x7861f80;
  iVar10 = iVar9;
  if (0x1e1337f < iVar9) {
    iVar4 = iVar6 + 0x47;
    iVar10 = iVar9 + -0x1e13380;
    if (0x1e1337f < iVar10) {
      iVar4 = iVar6 + 0x48;
      iVar10 = iVar9 + -0x3c26700;
      if (iVar10 < 0x1e28500) {
        bVar1 = true;
      }
      else {
        iVar4 = iVar6 + 0x49;
        iVar10 = iVar9 + -0x5a4ec00;
      }
    }
  }
  ptVar5->tm_year = iVar4;
  ptVar5->tm_yday = iVar10 / 0x15180;
  puVar7 = (undefined4 *)&DAT_004df0a0;
  if (!bVar1) {
    puVar7 = &DAT_004df0d8;
  }
  iVar6 = 1;
  piVar8 = puVar7 + 1;
  iVar9 = *piVar8;
  while (iVar9 < iVar10 / 0x15180) {
    piVar8 = piVar8 + 1;
    iVar6 = iVar6 + 1;
    iVar9 = *piVar8;
  }
  ptVar5->tm_mon = iVar6 + -1;
  ptVar5->tm_mday = ptVar5->tm_yday - puVar7[iVar6 + -1];
  ptVar5->tm_wday = ((int)*_Time / 0x15180 + 4) % 7;
  ptVar5->tm_hour = (iVar10 % 0x15180) / 0xe10;
  iVar9 = (iVar10 % 0x15180) % 0xe10;
  ptVar5->tm_min = iVar9 / 0x3c;
  ptVar5->tm_sec = iVar9 % 0x3c;
  ptVar5->tm_isdst = 0;
  return ptVar5;
}


