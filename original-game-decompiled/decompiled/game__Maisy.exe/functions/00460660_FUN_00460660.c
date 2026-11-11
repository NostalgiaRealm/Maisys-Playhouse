
/* ==== FUN_00460660 @ 00460660 ==== 
 * signature: undefined __thiscall FUN_00460660(void * this, int * param_1)
 * body: 00460660-00460697
 */

void __thiscall FUN_00460660(void *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)this;
  pcVar2 = *(code **)(iVar1 + 0x3e0);
  (*pcVar2)(0);
  FUN_00469fe0(this,param_1);
  (**(code **)(iVar1 + 0x400))(*(undefined4 *)((int)this + 0x62));
  (*pcVar2)(0);
  return;
}


