
/* ==== FUN_0043c8e0 @ 0043c8e0 ==== 
 * signature: undefined __cdecl FUN_0043c8e0(int * param_1, void * param_2)
 * body: 0043c8e0-0043c92a
 */

void __cdecl FUN_0043c8e0(int *param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = (int *)FUN_00469fb0(param_1); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x6a)) {
    if ((*(byte *)(piVar1 + 0x12) & 2) != 0) {
      FUN_004306b0(param_2,piVar1);
    }
    iVar2 = FUN_00469fb0(piVar1);
    if (iVar2 != 0) {
      FUN_0043c8e0(piVar1,param_2);
    }
  }
  return;
}


