
/* ==== FUN_004283b0 @ 004283b0 ==== 
 * signature: undefined __thiscall FUN_004283b0(void * this, undefined4 param_1, int param_2)
 * body: 004283b0-0042845c
 */

void __thiscall FUN_004283b0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)this + 0x56) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((int)this + 0x52) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((int)this + 0x4a) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_2 + 0x12);
  *(undefined2 *)((int)this + 0xc2) = *(undefined2 *)(param_2 + 0x24);
  *(undefined2 *)((int)this + 0xc4) = *(undefined2 *)(param_2 + 0x26);
  *(undefined4 *)((int)this + 0xe2) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)((int)this + 0xf7) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)((int)this + 0xf6) = *(undefined1 *)(param_2 + 0x31);
  puVar2 = (undefined4 *)(param_2 + 0x32);
  puVar3 = (undefined4 *)((int)this + 0x86);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined4 *)((int)this + 0xe6) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((int)this + 0xea) = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)((int)this + 0xde) = *(undefined2 *)(param_2 + 0x50);
  *(undefined4 *)((int)this + 0xda) = *(undefined4 *)(param_2 + 0x4c);
  if (*(short *)(param_2 + 0x1a) == 0) {
    *(byte *)((int)this + 0x6a) = *(byte *)((int)this + 0x6a) | 0x40;
    (**(code **)(*(int *)this + 0x160))(0xb,1);
  }
  return;
}


