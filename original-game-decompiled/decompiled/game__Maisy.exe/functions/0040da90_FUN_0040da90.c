
/* ==== FUN_0040da90 @ 0040da90 ==== 
 * signature: undefined __thiscall FUN_0040da90(void * this, int param_1, char param_2)
 * body: 0040da90-0040dadc
 */

void __thiscall FUN_0040da90(void *this,int param_1,char param_2)

{
  int iVar1;
  
  if (*(void **)((int)this + 0xa8) != (void *)0x0) {
    FUN_00430790(*(void **)((int)this + 0xa8),param_1);
    if (param_2 != '\0') {
      iVar1 = FUN_0040da40((int)this);
      if ((iVar1 == 0) && (*(int *)((int)this + 0x66) != -2)) {
        (**(code **)(*(int *)this + 0x80))(0x7fffffff,100);
        *(undefined4 *)((int)this + 0x66) = 0xffffffff;
      }
    }
  }
  return;
}


