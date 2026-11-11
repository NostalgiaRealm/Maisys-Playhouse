
/* ==== FUN_0044e490 @ 0044e490 ==== 
 * signature: int * __thiscall FUN_0044e490(void * this, undefined4 param_1)
 * body: 0044e490-0044e4d8
 */

int * __thiscall FUN_0044e490(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  iVar1 = FUN_0041c860();
  if (iVar1 != 0) {
    piVar2 = FUN_0041be50(iVar1,(int)this);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x184))(param_1);
    FUN_0044e650(this,piVar2);
  }
  return piVar2;
}


