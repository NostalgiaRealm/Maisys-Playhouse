
/* ==== FUN_004212b0 @ 004212b0 ==== 
 * signature: undefined __thiscall FUN_004212b0(void * this, int param_1, int param_2)
 * body: 004212b0-004212f2
 */

void __thiscall FUN_004212b0(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x152) != 0) {
    if (param_1 < 1) {
      param_1 = 0;
    }
    iVar1 = *(short *)((int)this + 0x176) + -1;
    if (param_2 <= iVar1) {
      iVar1 = param_2;
    }
    for (; param_1 <= iVar1; param_1 = param_1 + 1) {
      FUN_00421300(this,param_1);
    }
  }
  return;
}


