
/* ==== FUN_00460750 @ 00460750 ==== 
 * signature: undefined __thiscall FUN_00460750(void * this, int param_1)
 * body: 00460750-00460789
 */

void __thiscall FUN_00460750(void *this,int param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)this + 0x424))(0);
  if (*(void **)((int)this + 0x142) != (void *)0x0) {
    uVar1 = FUN_00430570(*(void **)((int)this + 0x142),param_1);
    if ((char)uVar1 != '\0') {
      FUN_00430790(*(void **)((int)this + 0x142),param_1);
    }
  }
  return;
}


