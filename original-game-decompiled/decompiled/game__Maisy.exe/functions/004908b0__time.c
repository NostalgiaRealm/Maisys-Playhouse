
/* ==== _time @ 004908b0 ==== 
 * signature: time_t __cdecl _time(time_t * _Time)
 * body: 004908b0-004909b0
 * note: Library Function - Single Match  _time  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _time
   
   Library: Visual Studio 1998 Release */

time_t __cdecl _time(time_t *_Time)

{
  DWORD DVar1;
  int iVar2;
  undefined4 extraout_EDX;
  _SYSTEMTIME local_cc;
  _SYSTEMTIME local_bc;
  _TIME_ZONE_INFORMATION local_ac;
  
  GetLocalTime(&local_bc);
  GetSystemTime(&local_cc);
  if (local_cc.wMinute == DAT_004e5438._2_2_) {
    if (local_cc.wHour == (WORD)DAT_004e5438) {
      if (local_cc.wDay == DAT_004e5434._2_2_) {
        if (local_cc.wMonth == DAT_004e5430._2_2_) {
          if (local_cc.wYear == (WORD)DAT_004e5430) goto LAB_0049095d;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_ac);
  DAT_004e5428 = 1;
  if (DVar1 != 2) {
    DAT_004e5428 = (DVar1 == 1) - 1;
  }
  DAT_004e5430._0_2_ = local_cc.wYear;
  DAT_004e5430._2_2_ = local_cc.wMonth;
  DAT_004e5434._0_2_ = local_cc.wDayOfWeek;
  DAT_004e5434._2_2_ = local_cc.wDay;
  DAT_004e5438._0_2_ = local_cc.wHour;
  DAT_004e5438._2_2_ = local_cc.wMinute;
  DAT_004e543c._0_2_ = local_cc.wSecond;
  DAT_004e543c._2_2_ = local_cc.wMilliseconds;
LAB_0049095d:
  iVar2 = FUN_00499d00(local_bc._0_4_ & 0xffff,(uint)local_bc._0_4_ >> 0x10,(uint)local_bc.wDay,
                       local_bc._8_4_ & 0xffff,(uint)local_bc._8_4_ >> 0x10,local_bc._12_4_ & 0xffff
                       ,DAT_004e5428);
  if (_Time != (time_t *)0x0) {
    *(int *)_Time = iVar2;
  }
  return CONCAT44(extraout_EDX,iVar2);
}


