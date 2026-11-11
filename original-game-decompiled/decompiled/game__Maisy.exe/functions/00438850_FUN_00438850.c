
/* ==== FUN_00438850 @ 00438850 ==== 
 * signature: undefined __thiscall FUN_00438850(void * this, uint param_1)
 * body: 00438850-00438881
 */

void __thiscall FUN_00438850(void *this,uint param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)((int)this + ((param_1 & 0x8f00) >> 8) * 0x124 + 0x13c) + 0x7c +
                  (param_1 & 0xff) * 0x80);
  *piVar1 = *piVar1 + 1;
  return;
}


