
/* ==== FUN_004a564c @ 004a564c ==== 
 * signature: undefined __thiscall FUN_004a564c(void * this, undefined4 param_1)
 * body: 004a564c-004a5676
 */

void __thiscall FUN_004a564c(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 8);
  iVar2 = NewNode(this,*piVar1,0);
  *(undefined4 *)(iVar2 + 8) = param_1;
  if ((int *)*piVar1 == (int *)0x0) {
    *(int *)((int)this + 4) = iVar2;
  }
  else {
    *(int *)*piVar1 = iVar2;
  }
  *piVar1 = iVar2;
  return;
}


