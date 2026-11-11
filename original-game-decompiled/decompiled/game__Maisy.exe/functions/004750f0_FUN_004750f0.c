
/* ==== FUN_004750f0 @ 004750f0 ==== 
 * signature: undefined __thiscall FUN_004750f0(void * this, int * param_1, uint param_2, undefined4 * param_3)
 * body: 004750f0-00475181
 */

void __thiscall FUN_004750f0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_60 [19];
  undefined4 local_14;
  SIZE_T local_10;
  undefined4 local_c;
  
  FUN_00486dd0(param_1,local_60,param_3,0x5c);
  FUN_0041e660(this,param_1,(int)local_60,param_2);
  FUN_0041e7a0(this,param_1,(int)local_60);
  *(undefined4 *)((int)this + 0x74) = local_14;
  if (local_10 != 0) {
    *(SIZE_T *)((int)this + 0x15a) = local_10;
    *(undefined4 *)((int)this + 0x15e) = local_c;
    uVar1 = FUN_00434920(DAT_004d99ac,local_10,0);
    *(undefined4 *)((int)this + 0x156) = uVar1;
    FUN_00486d60(param_1,uVar1,*(undefined4 *)((int)this + 0x15a));
  }
  uVar1 = FUN_00486c40((int)param_1);
  *(undefined4 *)((int)this + 0x152) = uVar1;
  return;
}


