
/* ==== FUN_004b8358 @ 004b8358 ==== 
 * signature: undefined4 __thiscall FUN_004b8358(void * this, undefined4 param_1, int * param_2)
 * body: 004b8358-004b8380
 */

undefined4 __thiscall FUN_004b8358(void *this,undefined4 param_1,int *param_2)

{
  CObject *pCVar1;
  
  if (((param_2 != (int *)0x0) && (*param_2 != 0)) &&
     (pCVar1 = FUN_004b82dc(this,param_2,0xe900), pCVar1 == (CObject *)0x0)) {
    return 0;
  }
  return 1;
}


