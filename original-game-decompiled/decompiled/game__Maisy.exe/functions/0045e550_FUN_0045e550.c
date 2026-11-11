
/* ==== FUN_0045e550 @ 0045e550 ==== 
 * signature: undefined4 __thiscall FUN_0045e550(void * this, undefined4 param_1, undefined2 param_2)
 * body: 0045e550-0045e5a1
 */

undefined4 __thiscall FUN_0045e550(void *this,undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short local_6;
  
  iVar1 = *(int *)this;
  iVar2 = (**(code **)(iVar1 + 0x148))
                    (param_1,1,*(undefined4 *)(*(int *)((int)this + 0x2e) + 0x26),param_2,&local_6);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(iVar1 + 0x138))((int)local_6,0);
    return uVar3;
  }
  return 0x10000;
}


