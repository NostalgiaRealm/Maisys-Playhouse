
/* ==== FUN_00404070 @ 00404070 ==== 
 * signature: int __thiscall FUN_00404070(void * this, int * param_1)
 * body: 00404070-004040b4
 */

int __thiscall FUN_00404070(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xec))(*(undefined4 *)((int)this + 0x2a));
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00458a00(*(int *)((int)this + 0x2a));
      (**(code **)(*piVar2 + 0x2b8))(iVar1,1);
    }
    return iVar1;
  }
  return 0;
}


