
/* ==== FUN_0045b630 @ 0045b630 ==== 
 * signature: int __thiscall FUN_0045b630(void * this, int param_1, int param_2, int param_3)
 * body: 0045b630-0045b66b
 */

int __thiscall FUN_0045b630(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0045b670(this,param_1,param_2);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00469fb0(piVar1);
  }
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (param_3 == -1) break;
    if (*(int *)(iVar2 + 0xc) == param_3) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 0x6a);
  }
  return iVar2;
}


