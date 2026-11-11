
/* ==== FUN_00424970 @ 00424970 ==== 
 * signature: undefined __thiscall FUN_00424970(void * this, undefined4 param_1, undefined2 param_2, char * param_3)
 * body: 00424970-00424a19
 */

void __thiscall FUN_00424970(void *this,undefined4 param_1,undefined2 param_2,char *param_3)

{
  int iVar1;
  
  if ((((*(byte *)((int)this + 100) & 1) == 0) || ((*(byte *)((int)this + 100) & 2) != 0)) &&
     (*(int **)((int)this + 0x50) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x50) + 0x220))(param_1,param_2,param_3);
  }
  if ((*param_3 == '\0') && ((*(byte *)((int)this + 100) & 1) != 0)) {
    iVar1 = *(int *)((int)this + 0x54);
    if ((((iVar1 == 0x12d) || ((iVar1 == 0x12e || (iVar1 == 0x12f)))) || (iVar1 == 0x130)) ||
       ((((iVar1 = *(int *)((int)this + 0x5c), iVar1 == 0x12d || (iVar1 == 0x12e)) ||
         (iVar1 == 0x12f)) || (iVar1 == 0x130)))) {
      *param_3 = '\x01';
    }
    else {
      *param_3 = '\0';
    }
  }
  if ((*(int **)((int)this + 0x3e) != (int *)0x0) && (*param_3 == '\0')) {
    (**(code **)(**(int **)((int)this + 0x3e) + 0x220))(param_1,param_2,param_3);
  }
  return;
}


