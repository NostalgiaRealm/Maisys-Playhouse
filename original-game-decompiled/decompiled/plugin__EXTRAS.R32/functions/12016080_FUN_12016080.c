
/* ==== FUN_12016080 @ 12016080 ==== 
 * signature: undefined4 * __thiscall FUN_12016080(void * this, undefined4 param_1)
 * body: 12016080-12016141
 */

undefined4 * __thiscall FUN_12016080(void *this,undefined4 param_1)

{
  code *pcVar1;
  undefined4 *unaff_FS_OFFSET;
  timecaps_tag local_24;
  undefined4 local_1c;
  int local_18;
  void *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_12016142;
  *unaff_FS_OFFSET = &local_10;
  *(undefined ***)this = &PTR_FUN_12035850;
  *(undefined4 *)((int)this + 6) = param_1;
  *(undefined2 *)((int)this + 10) = 1000;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  local_8 = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined ***)this = &PTR_FUN_12035840;
  local_1c = 0;
  local_14 = this;
  timeGetDevCaps(&local_24,8);
  if (local_24.wPeriodMin < 6) {
    local_24.wPeriodMin = 5;
  }
  *(UINT *)((int)this + 0x16) = local_24.wPeriodMin;
  timeBeginPeriod(local_24.wPeriodMin);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1d,&local_18);
  DAT_12039a9c = (*pcVar1)(local_18,s_MIDIModf_120378c8,&local_1c);
  DAT_120378c4 = FUN_12016050;
  *unaff_FS_OFFSET = local_10;
  return this;
}


