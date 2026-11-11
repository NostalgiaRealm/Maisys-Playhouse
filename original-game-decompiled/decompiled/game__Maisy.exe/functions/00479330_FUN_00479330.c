
/* ==== FUN_00479330 @ 00479330 ==== 
 * signature: short __thiscall FUN_00479330(void * this, short param_1)
 * body: 00479330-00479388
 */

short __thiscall FUN_00479330(void *this,short param_1)

{
  short sVar1;
  int local_24 [7];
  short local_6;
  
  sVar1 = 1;
  local_6 = *(short *)(*(int *)((int)this + 0x54) + 0x26);
  if (0 < local_6) {
    do {
      FUN_00430370(*(void **)((int)this + 0x54),(int)sVar1,local_24);
      if (local_24[0] == param_1) {
        return sVar1;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 <= local_6);
  }
  return 1;
}


