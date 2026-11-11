
/* ==== FUN_00408560 @ 00408560 ==== 
 * signature: undefined __thiscall FUN_00408560(void * this, int * param_1)
 * body: 00408560-004086fc
 */

void __thiscall FUN_00408560(void *this,int *param_1)

{
  short sVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short local_14;
  ushort local_12;
  short local_10;
  ushort local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_1[1];
  sVar5 = (short)local_8;
  local_c = *param_1;
  sVar6 = (short)local_c;
  sVar3 = sVar5;
  if (*(char *)((int)this + 0xa4) != '\0') {
    sVar6 = *(short *)((int)this + 0xb8);
    if (*(short *)((int)this + 0xb8) <= (short)local_c) {
      sVar6 = (short)local_c;
    }
    sVar3 = *(short *)((int)this + 0xbc);
    if (sVar5 <= *(short *)((int)this + 0xbc)) {
      sVar3 = sVar5;
    }
    local_c._2_2_ = (ushort)((uint)local_c >> 0x10);
    sVar4 = *(short *)((int)this + 0xba);
    if (*(short *)((int)this + 0xba) <= (short)local_c._2_2_) {
      sVar4 = local_c._2_2_;
    }
    local_8._2_2_ = (ushort)((uint)local_8 >> 0x10);
    local_c = CONCAT22(sVar4,(short)local_c);
    sVar4 = *(short *)((int)this + 0xbe);
    if ((short)local_8._2_2_ <= *(short *)((int)this + 0xbe)) {
      sVar4 = local_8._2_2_;
    }
    local_8 = CONCAT22(sVar4,sVar5);
  }
  cVar2 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if (((cVar2 == '\0') && (sVar6 < sVar3)) && ((short)local_c._2_2_ < (short)local_8._2_2_)) {
    sVar5 = sVar3;
    if (*(char *)((int)this + 0xa4) == '\0') {
      FUN_00410630(*(void **)((int)this + 0x8e),&local_14);
      if (local_14 <= sVar6) {
        local_14 = sVar6;
      }
      sVar6 = local_14;
      sVar5 = local_10;
      if (sVar3 <= local_10) {
        sVar5 = sVar3;
      }
      if ((short)local_12 <= (short)local_c._2_2_) {
        local_12 = local_c._2_2_;
      }
      local_c = (uint)local_12 << 0x10;
      if ((short)local_8._2_2_ <= (short)local_e) {
        local_e = local_8._2_2_;
      }
      local_8 = (uint)local_e << 0x10;
    }
    sVar3 = *(short *)((int)this + 0xce);
    sVar4 = *(short *)((int)this + 0xca);
    if ((sVar4 < sVar3) &&
       (sVar1 = *(short *)((int)this + 0xd0), *(short *)((int)this + 0xcc) < sVar1)) {
      if (sVar4 <= sVar6) {
        sVar6 = sVar4;
      }
      *(short *)((int)this + 0xca) = sVar6;
      if (sVar5 <= sVar3) {
        sVar5 = sVar3;
      }
      *(short *)((int)this + 0xce) = sVar5;
      if (*(short *)((int)this + 0xcc) <= (short)local_c._2_2_) {
        local_c._2_2_ = *(short *)((int)this + 0xcc);
      }
      *(ushort *)((int)this + 0xcc) = local_c._2_2_;
      if ((short)local_8._2_2_ <= sVar1) {
        local_8._2_2_ = sVar1;
      }
      *(ushort *)((int)this + 0xd0) = local_8._2_2_;
      return;
    }
    local_c = CONCAT22(local_c._2_2_,sVar6);
    local_8 = CONCAT22(local_8._2_2_,sVar5);
    *(int *)((int)this + 0xca) = local_c;
    *(int *)((int)this + 0xce) = local_8;
  }
  return;
}


