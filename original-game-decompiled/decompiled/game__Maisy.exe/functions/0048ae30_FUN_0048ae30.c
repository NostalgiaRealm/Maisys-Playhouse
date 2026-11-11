
/* ==== FUN_0048ae30 @ 0048ae30 ==== 
 * signature: undefined __thiscall FUN_0048ae30(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 0048ae30-0048ae8a
 */

void __thiscall FUN_0048ae30(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  char local_5;
  
  bVar1 = FUN_00437430(param_1,(int *)s_privacy_004dd068);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_0042fc60(this,param_1,param_2,param_3);
  }
  else {
    iVar2 = FUN_00455730(param_3,&local_5,(int *)0x0);
    if (iVar2 == 0) {
      *(char *)((int)this + 0x60) = local_5;
      return;
    }
  }
  return;
}


