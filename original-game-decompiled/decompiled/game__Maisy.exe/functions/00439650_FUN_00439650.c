
/* ==== FUN_00439650 @ 00439650 ==== 
 * signature: int __thiscall FUN_00439650(void * this, int param_1)
 * body: 00439650-0043966d
 */

int __thiscall FUN_00439650(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004396f0(this,param_1);
  if (piVar1 != (int *)0x0) {
    return piVar1[1];
  }
  return 0;
}


