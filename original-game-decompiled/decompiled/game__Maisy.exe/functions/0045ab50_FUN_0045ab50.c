
/* ==== FUN_0045ab50 @ 0045ab50 ==== 
 * signature: short __thiscall FUN_0045ab50(void * this, int * param_1)
 * body: 0045ab50-0045ab8e
 */

short __thiscall FUN_0045ab50(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x38))(this);
  (**(code **)(iVar1 + 0x270))
            (CONCAT22((short)((uint)*(int *)((int)this + 0x7e) >> 0x10),
                      *(undefined2 *)(*(int *)((int)this + 0x7e) + 0xc)));
  FUN_004306b0(*(void **)((int)this + 0x7e),param_1);
  return *(short *)(*(int *)((int)this + 0x7e) + 0xc) + -1;
}


