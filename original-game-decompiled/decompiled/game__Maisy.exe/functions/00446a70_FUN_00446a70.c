
/* ==== FUN_00446a70 @ 00446a70 ==== 
 * signature: int __cdecl FUN_00446a70(short * param_1, int * param_2)
 * body: 00446a70-00446a9f
 */

int __cdecl FUN_00446a70(short *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0x10000;
  if (param_1 != (short *)0x0) {
    iVar1 = FUN_00455c10(param_1,param_2,(int *)0x0);
    if ((iVar1 == 0) && (*param_2 < 1)) {
      iVar1 = 0x10000;
    }
  }
  return iVar1;
}


