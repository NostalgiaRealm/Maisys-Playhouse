
/* ==== FUN_004054a0 @ 004054a0 ==== 
 * signature: undefined __thiscall FUN_004054a0(void * this, int * param_1, int * param_2, int param_3)
 * body: 004054a0-00405641
 */

void __thiscall FUN_004054a0(void *this,int *param_1,int *param_2,int param_3)

{
  undefined4 local_58 [21];
  
  if (*(int **)((int)this + 0x8e) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x8e) + 300))();
  }
  DAT_004dca70 = 0;
  FUN_0042fc00(*(void **)((int)this + 0x4a));
  FUN_0042fc00(*(void **)((int)this + 0x4e));
  FUN_00402dc0(*(int *)((int)this + 0x52));
  FUN_0042fc00(*(void **)((int)this + 0x52));
  FUN_00402dc0(*(int *)((int)this + 0x56));
  FUN_0042fc00(*(void **)((int)this + 0x56));
  FUN_0042fc00(*(void **)((int)this + 0x32));
  FUN_0042fc00(*(void **)((int)this + 0x82));
  FUN_00430640(*(int *)((int)this + 0x62));
  FUN_00430640(*(int *)((int)this + 0x5a));
  FUN_00430640(*(int *)((int)this + 0x5e));
  FUN_00430640(*(int *)((int)this + 0x66));
  FUN_00430640(*(int *)((int)this + 0x6a));
  FUN_00430640(*(int *)((int)this + 0x6e));
  FUN_0047dbb0(*(undefined4 **)((int)this + 0x86));
  FUN_0042fc00(*(void **)((int)this + 0x72));
  FUN_0042fc00(*(void **)((int)this + 0x7a));
  FUN_0042fc00(*(void **)((int)this + 0x76));
  FUN_0042fc00(*(void **)((int)this + 0x7e));
  *(undefined4 *)((int)this + 0x92) = 0;
  *(undefined4 *)((int)this + 0x96) = 0;
  *(undefined2 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x9e) = 0;
  *(undefined2 *)((int)this + 0x152) = 0;
  *(undefined4 *)((int)this + 0x9a) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined1 *)((int)this + 0xb1) = 0;
  *(undefined1 *)((int)this + 0xa2) = 0;
  *(undefined1 *)((int)this + 0xab) = 1;
  DAT_004d91e4 = DAT_004d91e4 + 1;
  *(undefined1 *)((int)this + 0xa6) = 1;
  FUN_0047a7d0(*(void **)((int)this + 0x8a),0,(undefined4 *)((int)this + 0xb8));
  FUN_0045aac0(*(void **)((int)this + 0x2a),1,'\0');
  FUN_00448800(*(int *)((int)this + 0x2e));
  *(undefined1 *)((int)this + 0xa8) = 1;
  FUN_004142c0(local_58,0x70a,0,0,0);
  FUN_0045a860(*(void **)((int)this + 0x2a),(int)local_58);
  *(undefined1 *)((int)this + 0xa8) = 0;
  if (param_2 != (int *)0x0) {
    *(undefined1 *)((int)this + 0xab) = 0;
  }
  FUN_00405790(this,0x10000000,param_1,param_2,param_3);
  if (param_2 != (int *)0x0) {
    FUN_00407ee0(this,param_2);
  }
  return;
}


