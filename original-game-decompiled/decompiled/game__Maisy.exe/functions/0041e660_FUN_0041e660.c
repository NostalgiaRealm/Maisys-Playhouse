
/* ==== FUN_0041e660 @ 0041e660 ==== 
 * signature: undefined __thiscall FUN_0041e660(void * this, undefined4 param_1, int param_2, uint param_3)
 * body: 0041e660-0041e79d
 */

void __thiscall FUN_0041e660(void *this,undefined4 param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  if ((((param_3 & 0x40) != 0) && ((char)((param_3 & 8) >> 3) == '\0')) &&
     (cVar4 = (**(code **)(*(int *)this + 0x124))(), cVar4 == '\0')) {
    *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_2 + 0x20);
  }
  *(undefined4 *)((int)this + 0x56) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((int)this + 0x4a) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0x12);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)((int)this + 0xbc) = uVar3;
  if (*(short *)(param_2 + 0x1a) == 0) {
    *(byte *)((int)this + 0x6a) = *(byte *)((int)this + 0x6a) | 0x40;
    (**(code **)(*(int *)this + 0x160))(0xb,1);
  }
  if ((*(byte *)(param_2 + 0x19) & 0x80) != 0) {
    (**(code **)(*(int *)this + 0x160))(0xe,1);
  }
  if ((*(byte *)(param_2 + 0x19) & 0x40) != 0) {
    (**(code **)(*(int *)this + 0x108))(4,1);
  }
  if ((*(byte *)(param_2 + 0x19) & 0x20) != 0) {
    (**(code **)(*(int *)this + 0x108))(5,1);
  }
  *(undefined4 *)((int)this + 0xee) = 0;
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((int)this + 0xf8) = uVar3;
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_2 + 0x30);
  sVar1 = *(short *)(param_2 + 0x34);
  *(short *)((int)this + 0x104) = sVar1;
  if (((sVar1 != 1) && (sVar1 != 4)) && ((sVar1 != 8 && ((sVar1 != 0x10 && (sVar1 != 0x20)))))) {
    *(undefined2 *)((int)this + 0x104) = 0;
  }
  uVar2 = *(undefined2 *)(param_2 + 0x36);
  *(undefined4 *)((int)this + 0x106) = 0;
  *(undefined2 *)((int)this + 0x10a) = uVar2;
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_2 + 0x3c);
  return;
}


