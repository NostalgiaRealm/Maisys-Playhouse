
/* ==== FUN_0042ea90 @ 0042ea90 ==== 
 * signature: undefined __thiscall FUN_0042ea90(void * this, char param_1)
 * body: 0042ea90-0042eaeb
 */

void __thiscall FUN_0042ea90(void *this,char param_1)

{
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x58) = 0x19;
  *(undefined2 *)((int)this + 0x5a) = 0x19;
  *(undefined2 *)((int)this + 0x5c) = 0x7d;
  *(undefined2 *)((int)this + 0x5e) = 0x2d;
  if (param_1 != '\0') {
    *(undefined2 *)((int)this + 0x4c) = 0;
    *(undefined2 *)((int)this + 0x4e) = 0;
    *(undefined2 *)((int)this + 0x50) = 1;
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x58);
    *(undefined2 *)((int)this + 0x52) = 1;
    *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x5c);
    *(undefined2 *)((int)this + 0x54) = 1;
    *(undefined2 *)((int)this + 0x56) = 1;
  }
  return;
}


