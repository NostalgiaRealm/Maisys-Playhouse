
/* ==== FUN_0046a580 @ 0046a580 ==== 
 * signature: undefined __thiscall FUN_0046a580(void * this, byte * param_1)
 * body: 0046a580-0046a5ab
 */

void __thiscall FUN_0046a580(void *this,byte *param_1)

{
  byte local_c [8];
  
  if (*(int *)((int)this + 0x3a) != 0) {
    if (param_1 == (byte *)0x0) {
      local_c[0] = 0x80;
      local_c[1] = 0;
      param_1 = local_c;
    }
    FUN_00405170(*(void **)((int)this + 0x3a),param_1,this);
  }
  return;
}


