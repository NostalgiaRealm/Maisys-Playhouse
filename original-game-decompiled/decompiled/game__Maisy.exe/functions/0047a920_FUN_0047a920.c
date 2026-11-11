
/* ==== FUN_0047a920 @ 0047a920 ==== 
 * signature: undefined __thiscall FUN_0047a920(void * this, undefined4 * param_1, short param_2)
 * body: 0047a920-0047a95f
 */

void __thiscall FUN_0047a920(void *this,undefined4 *param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(short *)((int)this + 0x2a) = param_2;
  iVar2 = 0;
  if (*(int *)((int)this + 0xce4) != 0) {
    iVar2 = (int)this + 0x54;
  }
  uVar1 = FUN_0047a250(this,param_1,param_2,iVar2);
  if ((char)uVar1 == '\0') {
    *(undefined4 *)((int)this + 0x8a4) = 0;
    *(undefined4 *)((int)this + 0x468) = 0;
  }
  return;
}


