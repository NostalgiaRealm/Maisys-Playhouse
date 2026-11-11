
/* ==== FUN_0045bbc0 @ 0045bbc0 ==== 
 * signature: undefined4 __cdecl FUN_0045bbc0(undefined4 param_1, int param_2, int param_3)
 * body: 0045bbc0-0045bc17
 */

undefined4 __cdecl FUN_0045bbc0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_8;
  
  iVar1 = FUN_0045bb10(param_2,(int *)&local_8);
  if (iVar1 == 0) {
    piVar2 = FUN_0044e500(local_8,param_3);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)FUN_0048b560(0,param_2);
      FUN_0044dc80(local_8,param_3,*puVar3,0);
      return 0;
    }
  }
  return 0x10000;
}


