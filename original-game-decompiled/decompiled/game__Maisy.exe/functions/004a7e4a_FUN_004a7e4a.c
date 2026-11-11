
/* ==== FUN_004a7e4a @ 004a7e4a ==== 
 * signature: undefined4 __thiscall FUN_004a7e4a(void * this, int * param_1, int param_2)
 * body: 004a7e4a-004a7eb0
 */

undefined4 __thiscall FUN_004a7e4a(void *this,int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_10 [2];
  undefined4 local_8;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || ((short)iVar1 == -1)) {
    local_8 = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x18) = 0;
    pcVar2 = *(code **)(*param_1 + 0x14);
    local_8 = (*pcVar2)(iVar1,0xffffffff,this,0);
    if ((param_2 != 0) && (*(int *)((int)this + 0x18) == 0)) {
      local_10[0] = 0;
      uVar3 = (*pcVar2)(*(undefined4 *)((int)this + 4),0,this,local_10);
      (*(code *)**(undefined4 **)this)(uVar3);
    }
  }
  return local_8;
}


