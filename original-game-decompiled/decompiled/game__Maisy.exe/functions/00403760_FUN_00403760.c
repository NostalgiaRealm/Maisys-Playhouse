
/* ==== FUN_00403760 @ 00403760 ==== 
 * signature: undefined4 __thiscall FUN_00403760(void * this, int param_1)
 * body: 00403760-00403782
 */

int __thiscall FUN_00403760(void *this,int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if ((*(int *)((int)this + 0x9a) != param_1) && (*(int *)((int)this + 0x9e) != param_1)) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,1);
}


