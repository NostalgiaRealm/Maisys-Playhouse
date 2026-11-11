
/* ==== FUN_00459fc0 @ 00459fc0 ==== 
 * signature: int __thiscall FUN_00459fc0(void * this, int * param_1)
 * body: 00459fc0-00459fe6
 */

int __thiscall FUN_00459fc0(void *this,int *param_1)

{
  int iVar1;
  
  if ((*param_1 == 3) && (iVar1 = FUN_0045b630(this,param_1[1],param_1[2],param_1[3]), iVar1 != 0))
  {
    return iVar1;
  }
  return 0;
}


