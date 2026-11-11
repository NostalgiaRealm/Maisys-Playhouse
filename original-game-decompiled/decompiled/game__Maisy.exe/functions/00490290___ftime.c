
/* ==== __ftime @ 00490290 ==== 
 * signature: undefined __cdecl __ftime(undefined4 * param_1)
 * body: 00490290-00490333
 * note: Library Function - Single Match  __ftime  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __ftime
   
   Library: Visual Studio 1998 Release */

void __cdecl __ftime(undefined4 *param_1)

{
  time_t tVar1;
  _SYSTEMTIME local_34;
  tm local_24;
  
  ___tzset();
  *(short *)((int)param_1 + 6) = (short)(DAT_004dee70 / 0x3c);
  GetLocalTime(&local_34);
  *(WORD *)(param_1 + 1) = local_34.wMilliseconds;
  local_24.tm_year = (local_34._0_4_ & 0xffff) - 0x76c;
  local_24.tm_mday = (int)local_34.wDay;
  local_24.tm_mon = ((uint)local_34._0_4_ >> 0x10) - 1;
  local_24.tm_hour = local_34._8_4_ & 0xffff;
  local_24.tm_isdst = -1;
  local_24.tm_min = (uint)local_34._8_4_ >> 0x10;
  local_24.tm_sec = local_34._12_4_ & 0xffff;
  tVar1 = _mktime(&local_24);
  *(short *)(param_1 + 2) = (short)local_24.tm_isdst;
  *param_1 = (int)tVar1;
  return;
}


