
/* ==== FUN_00473580 @ 00473580 ==== 
 * signature: undefined __thiscall FUN_00473580(void * this, int param_1)
 * body: 00473580-004735f4
 */

void __thiscall FUN_00473580(void *this,int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)((int)this + 0x92);
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)((int)this + 0x94);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)((int)this + 0x98);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)((int)this + 0xa8);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)((int)this + 0x96);
  uVar1 = *(undefined2 *)((int)this + 0xa6);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x14) = uVar1;
  uVar2 = *(uint *)((int)this + 0x26);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(char *)(param_1 + 0x26) = '\x01' - ((uVar2 & 0x1000000) == 0);
  return;
}


