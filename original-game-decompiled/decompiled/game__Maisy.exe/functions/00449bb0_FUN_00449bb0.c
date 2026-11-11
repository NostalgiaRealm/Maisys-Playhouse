
/* ==== FUN_00449bb0 @ 00449bb0 ==== 
 * signature: undefined __thiscall FUN_00449bb0(void * this, char * param_1)
 * body: 00449bb0-00449bed
 */

void __thiscall FUN_00449bb0(void *this,char *param_1)

{
  uint uVar1;
  HGLOBAL pvVar2;
  
  FUN_00449260(this);
  (**(code **)(*(int *)this + 0x1c))(1);
  uVar1 = *(uint *)((int)this + 0x186);
  pvVar2 = FUN_00412150(*(HGLOBAL *)((int)this + 0x152),uVar1,uVar1,param_1,uVar1,
                        (uint *)((int)this + 0x186));
  *(HGLOBAL *)((int)this + 0x152) = pvVar2;
  return;
}


