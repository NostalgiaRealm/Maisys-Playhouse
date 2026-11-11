
/* ==== FUN_00480dd0 @ 00480dd0 ==== 
 * signature: undefined __thiscall FUN_00480dd0(void * this, char param_1)
 * body: 00480dd0-00480e33
 */

void __thiscall FUN_00480dd0(void *this,char param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_004655c0(this,param_1);
  *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) & 0xfb;
  FUN_0044f650(this,'\0');
  FUN_004401e0(*(void **)((int)this + 0x5a),2,'\0');
  *(byte *)((int)this + 0x15c) = *(byte *)((int)this + 0x15c) | 1;
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x4ac))(0,0x7fff);
  piVar2 = (int *)(**(code **)(iVar1 + 0x3c0))();
  (**(code **)(*piVar2 + 0x32c))(*(undefined4 *)((int)this + 0x156));
  return;
}


