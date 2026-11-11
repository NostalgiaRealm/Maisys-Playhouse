
/* ==== _localtime @ 004906e0 ==== 
 * signature: tm * __cdecl _localtime(time_t * _Time)
 * body: 004906e0-004908aa
 * note: Library Function - Single Match  _localtime  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _localtime
   
   Library: Visual Studio 1998 Release */

tm * __cdecl _localtime(time_t *_Time)

{
  tm *ptVar1;
  int iVar2;
  int local_4;
  
  if ((int)*_Time < 0) {
    return (tm *)0x0;
  }
  ___tzset();
  local_4 = (int)*_Time;
  if ((local_4 < 0x3f481) || (0x7ffc0b7e < local_4)) {
    ptVar1 = _gmtime(_Time);
    iVar2 = __isindst(ptVar1);
    if (iVar2 == 0) {
      local_4 = ptVar1->tm_sec - DAT_004dee70;
    }
    else {
      local_4 = (ptVar1->tm_sec - DAT_004dee70) - DAT_004dee78;
    }
    iVar2 = local_4 % 0x3c;
    ptVar1->tm_sec = iVar2;
    if (iVar2 < 0) {
      ptVar1->tm_sec = iVar2 + 0x3c;
      local_4 = local_4 + -0x3c;
    }
    local_4 = ptVar1->tm_min + local_4 / 0x3c;
    iVar2 = local_4 % 0x3c;
    ptVar1->tm_min = iVar2;
    if (iVar2 < 0) {
      ptVar1->tm_min = iVar2 + 0x3c;
      local_4 = local_4 + -0x3c;
    }
    local_4 = ptVar1->tm_hour + local_4 / 0x3c;
    iVar2 = local_4 % 0x18;
    ptVar1->tm_hour = iVar2;
    if (iVar2 < 0) {
      ptVar1->tm_hour = iVar2 + 0x18;
      local_4 = local_4 + -0x18;
    }
    local_4 = local_4 / 0x18;
    if (0 < local_4) {
      ptVar1->tm_wday = (ptVar1->tm_wday + local_4) % 7;
      ptVar1->tm_mday = ptVar1->tm_mday + local_4;
      ptVar1->tm_yday = ptVar1->tm_yday + local_4;
      return ptVar1;
    }
    if (local_4 < 0) {
      ptVar1->tm_wday = (ptVar1->tm_wday + 7 + local_4) % 7;
      iVar2 = ptVar1->tm_mday + local_4;
      ptVar1->tm_mday = iVar2;
      if (iVar2 < 1) {
        ptVar1->tm_mday = iVar2 + 0x1f;
        ptVar1->tm_yday = 0x16c;
        ptVar1->tm_mon = 0xb;
        ptVar1->tm_year = ptVar1->tm_year + -1;
        return ptVar1;
      }
      ptVar1->tm_yday = ptVar1->tm_yday + local_4;
    }
  }
  else {
    local_4 = local_4 - DAT_004dee70;
    ptVar1 = _gmtime((time_t *)&local_4);
    if (DAT_004dee74 != 0) {
      iVar2 = __isindst(ptVar1);
      if (iVar2 != 0) {
        local_4 = local_4 - DAT_004dee78;
        ptVar1 = _gmtime((time_t *)&local_4);
        ptVar1->tm_isdst = 1;
        return ptVar1;
      }
    }
  }
  return ptVar1;
}


