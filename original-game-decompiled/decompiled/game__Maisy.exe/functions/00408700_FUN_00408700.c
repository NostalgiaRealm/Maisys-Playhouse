
/* ==== FUN_00408700 @ 00408700 ==== 
 * signature: undefined __thiscall FUN_00408700(void * this, short * param_1)
 * body: 00408700-004087b9
 */

void __thiscall FUN_00408700(void *this,short *param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  undefined4 local_c;
  undefined4 local_8;
  
  cVar1 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if ((((cVar1 == '\0') && (*param_1 < param_1[2])) && (param_1[1] < param_1[3])) &&
     (*(void **)((int)this + 0x8e) != (void *)0x0)) {
    local_c = *(undefined4 *)param_1;
    local_8 = *(undefined4 *)(param_1 + 2);
    FUN_00410630(*(void **)((int)this + 0x8e),&local_14);
    sVar2 = (short)local_c;
    if ((short)local_c <= local_14) {
      sVar2 = local_14;
    }
    sVar3 = (short)local_8;
    if (local_10 <= (short)local_8) {
      sVar3 = local_10;
    }
    if (local_c._2_2_ <= local_12) {
      local_c._2_2_ = local_12;
    }
    local_c = CONCAT22(local_c._2_2_,sVar2);
    if (local_e <= local_8._2_2_) {
      local_8._2_2_ = local_e;
    }
    local_8 = CONCAT22(local_8._2_2_,sVar3);
    FUN_00410730(*(void **)((int)this + 0x8e),&local_c);
  }
  return;
}


