
/* ==== FUN_004484d0 @ 004484d0 ==== 
 * signature: undefined __thiscall FUN_004484d0(void * this, int param_1, short param_2, short param_3, char param_4)
 * body: 004484d0-00448526
 */

void __thiscall FUN_004484d0(void *this,int param_1,short param_2,short param_3,char param_4)

{
  uint uVar1;
  int local_10;
  short local_c;
  int local_a;
  undefined1 local_6;
  
  if ((param_4 == '\0') || (uVar1 = FUN_004485a0(this,param_1,param_2), (short)uVar1 == 0)) {
    local_c = param_2;
    local_6 = 0;
    local_a = (int)param_3;
    local_10 = param_1;
    (**(code **)(**(int **)((int)this + 0x2a) + 0xe8))(&local_10);
  }
  return;
}


