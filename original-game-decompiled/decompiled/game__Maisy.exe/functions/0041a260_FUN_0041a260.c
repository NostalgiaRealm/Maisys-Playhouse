
/* ==== FUN_0041a260 @ 0041a260 ==== 
 * signature: undefined4 __thiscall FUN_0041a260(void * this, int param_1, short * param_2)
 * body: 0041a260-0041a2e6
 */

undefined4 __thiscall FUN_0041a260(void *this,int param_1,short *param_2)

{
  char cVar1;
  uint uVar2;
  void *this_00;
  undefined3 extraout_var;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  if ((param_1 == 5) && (uVar2 = FUN_00414340(this,param_2,0x1d), (char)uVar2 != '\0')) {
    if (*(int *)(param_2 + 1) == 3) {
      this_00 = FUN_0046da90(this,'\x01','\x01');
      cVar1 = FUN_00422620(this_00,*(int *)(param_2 + 3),&local_8,&local_c);
      uVar2 = CONCAT31(extraout_var,cVar1);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x4ac))(local_8,local_c);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar2 & 0xffffff00;
  }
  uVar3 = FUN_0044f840(this,param_1,param_2);
  return uVar3;
}


