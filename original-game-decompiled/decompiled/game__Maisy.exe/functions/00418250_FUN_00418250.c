
/* ==== FUN_00418250 @ 00418250 ==== 
 * signature: undefined __thiscall FUN_00418250(void * this, int param_1)
 * body: 00418250-004182b6
 */

void __thiscall FUN_00418250(void *this,int param_1)

{
  undefined4 uVar1;
  undefined1 local_10 [8];
  int *local_8;
  
  uVar1 = FUN_00430370(*(void **)((int)this + 0x4a),param_1,&local_8);
  if ((char)uVar1 != '\0') {
    (**(code **)(*(int *)*local_8 + 0xe4))();
    FUN_0045bef0(local_10,*local_8);
    (**(code **)(*(int *)this + 0xec))(local_10,local_8[1]);
    if (*(int *)(*local_8 + 0x26) != 0) {
      FUN_004183d0(this,local_8);
    }
  }
  return;
}


