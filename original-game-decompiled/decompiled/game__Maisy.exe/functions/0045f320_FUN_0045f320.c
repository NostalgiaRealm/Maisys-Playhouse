
/* ==== FUN_0045f320 @ 0045f320 ==== 
 * signature: undefined __thiscall FUN_0045f320(void * this, undefined4 param_1, uint * param_2)
 * body: 0045f320-0045f363
 */

void __thiscall FUN_0045f320(void *this,undefined4 param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = FUN_0045f300(*(uint *)((int)this + 0xd6),0x188);
  uVar1 = *param_2;
  if (cVar2 != '\0') {
    *param_2 = uVar1 | 0x80;
    *param_2 = uVar1 | 0x188;
    return;
  }
  *param_2 = uVar1 & 0xffffff7f;
  *param_2 = uVar1 & 0xfffffe77;
  return;
}


