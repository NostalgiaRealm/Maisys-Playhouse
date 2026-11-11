
/* ==== FUN_00450440 @ 00450440 ==== 
 * signature: short __thiscall FUN_00450440(void * this, int param_1, int * param_2)
 * body: 00450440-004504dd
 */

short __thiscall FUN_00450440(void *this,int param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  undefined1 local_18 [4];
  int local_14;
  short local_6;
  
  local_6 = *(short *)(*(int *)((int)this + 0x26) + 0x26);
  cVar1 = (**(code **)(*param_2 + 0x20))();
  if ((cVar1 == '\0') && (param_2[2] == param_1)) {
    return *(short *)((int)param_2 + 0x36);
  }
  if ((*(int *)((int)param_2 + 0x2a) != 0) && (sVar2 = 1, 0 < local_6)) {
    do {
      FUN_00430370(*(void **)((int)this + 0x26),(int)sVar2,local_18);
      if ((local_14 != 0) && (*(int *)((int)param_2 + 0x2a) == local_14)) {
        (**(code **)(*param_2 + 0x110))((int)sVar2);
        param_2[2] = *(int *)(*(int *)((int)this + 4) + 8);
        return sVar2;
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 <= local_6);
  }
  return 0;
}


