
/* ==== FUN_00450af0 @ 00450af0 ==== 
 * signature: undefined __thiscall FUN_00450af0(void * this, int param_1, short * param_2, int * param_3)
 * body: 00450af0-00450b3f
 */

void __thiscall FUN_00450af0(void *this,int param_1,short *param_2,int *param_3)

{
  uint uVar1;
  undefined4 local_14 [4];
  
  if (*param_2 == 0) {
    uVar1 = FUN_004504e0(this,param_1);
    *param_2 = (short)uVar1;
  }
  if (*param_2 != 0) {
    FUN_00430370(*(void **)((int)this + 0x26),(int)*param_2,local_14);
    (**(code **)(*param_3 + 0xf0))(local_14[0],0);
  }
  return;
}


