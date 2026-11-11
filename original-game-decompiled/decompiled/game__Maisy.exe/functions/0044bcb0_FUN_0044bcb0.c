
/* ==== FUN_0044bcb0 @ 0044bcb0 ==== 
 * signature: undefined2 __thiscall FUN_0044bcb0(void * this, ushort param_1, char param_2)
 * body: 0044bcb0-0044bcf6
 */

undefined2 __thiscall FUN_0044bcb0(void *this,ushort param_1,char param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  
  uVar1 = *(ushort *)((int)this + 0x82);
  uVar2 = CONCAT11((char)((param_1 & uVar1) >> 8),'\x01' - ((param_1 & uVar1) == 0));
  if (param_2 != '\0') {
    *(ushort *)((int)this + 0x82) = param_1 | uVar1;
    return uVar2;
  }
  *(ushort *)((int)this + 0x82) = ~param_1 & uVar1;
  return uVar2;
}


