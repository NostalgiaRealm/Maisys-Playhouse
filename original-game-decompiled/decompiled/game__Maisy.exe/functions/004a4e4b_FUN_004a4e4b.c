
/* ==== FUN_004a4e4b @ 004a4e4b ==== 
 * signature: undefined4 * __thiscall FUN_004a4e4b(void * this, ushort param_1, ushort param_2, int param_3)
 * body: 004a4e4b-004a4ecc
 */

undefined4 * __thiscall FUN_004a4e4b(void *this,ushort param_1,ushort param_2,int param_3)

{
  time_t tVar1;
  tm local_28;
  
  local_28.tm_sec = (param_2 & 0xffff001f) * 2;
  local_28.tm_min = param_2 >> 5 & 0xfffff83f;
  local_28.tm_hour = (int)(param_2 >> 0xb);
  local_28.tm_mday = param_1 & 0xffff001f;
  local_28.tm_mon = (param_1 >> 5 & 0xfffff80f) - 1;
  local_28.tm_isdst = param_3;
  local_28.tm_year = (param_1 >> 9) + 0x50;
  tVar1 = _mktime(&local_28);
  *(int *)this = (int)tVar1;
  return this;
}


