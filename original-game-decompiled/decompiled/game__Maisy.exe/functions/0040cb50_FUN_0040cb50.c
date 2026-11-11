
/* ==== FUN_0040cb50 @ 0040cb50 ==== 
 * signature: undefined __thiscall FUN_0040cb50(void * this, uint param_1, char param_2)
 * body: 0040cb50-0040cb8c
 */

void __thiscall FUN_0040cb50(void *this,uint param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x26);
  *(uint *)((int)this + 0x26) = param_1;
  if ((param_2 == '\0') && ((uVar1 & 0x10000000) != 0)) {
    *(uint *)((int)this + 0x26) = param_1 | 0x10000000;
    return;
  }
  *(uint *)((int)this + 0x26) = param_1 & 0xefffffff;
  return;
}


