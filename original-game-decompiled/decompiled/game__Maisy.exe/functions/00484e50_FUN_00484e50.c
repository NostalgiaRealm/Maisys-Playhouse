
/* ==== FUN_00484e50 @ 00484e50 ==== 
 * signature: undefined __thiscall FUN_00484e50(void * this, int param_1, undefined4 param_2)
 * body: 00484e50-00484ed7
 */

void __thiscall FUN_00484e50(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  int local_18 [5];
  
  if (param_1 == 0) {
    param_1 = DAT_004da378;
  }
  FUN_00412d60(this,param_1);
  *(byte *)((int)this + 0x16e) = *(byte *)((int)this + 0x16e) & 0xfe;
  *(undefined2 *)((int)this + 0x16c) = 5;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x152) = param_2;
  *(undefined4 *)((int)this + 0x142) = 0;
  FUN_0048b370((int)local_18,0x4dcd9c);
  iVar1 = FUN_00436b20(DAT_004dae3c,0,local_18,this);
  *(int *)((int)this + 0x168) = iVar1;
  return;
}


