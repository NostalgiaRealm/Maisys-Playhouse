
/* ==== FUN_004a960d @ 004a960d ==== 
 * signature: undefined4 __thiscall FUN_004a960d(void * this, undefined4 param_1, void * param_2)
 * body: 004a960d-004a963c
 */

undefined4 __thiscall FUN_004a960d(void *this,undefined4 param_1,void *param_2)

{
  int iVar1;
  undefined4 local_4;
  
  if ((param_2 == (void *)0x0) || (iVar1 = FUN_004aac53(param_2,&local_4), iVar1 == 0)) {
    local_4 = FUN_004a8882(this);
  }
  return local_4;
}


