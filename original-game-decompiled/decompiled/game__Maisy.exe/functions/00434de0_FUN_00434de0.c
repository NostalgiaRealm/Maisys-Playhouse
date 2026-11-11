
/* ==== FUN_00434de0 @ 00434de0 ==== 
 * signature: undefined __thiscall FUN_00434de0(void * this, int * param_1, LPVOID param_2)
 * body: 00434de0-00434e11
 */

void __thiscall FUN_00434de0(void *this,int *param_1,LPVOID param_2)

{
  int iVar1;
  
  if ((param_2 != (LPVOID)0x0) && (0 < *(int *)((int)this + 0x7236))) {
    iVar1 = FUN_00436c80(this,param_1);
    if (iVar1 != 0) {
      param_2 = (LPVOID)((int)param_2 + (*(int *)(iVar1 + 0x52) - *(int *)(iVar1 + 0x56)));
    }
    FUN_00434950(param_2);
  }
  return;
}


