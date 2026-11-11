
/* ==== FUN_004401e0 @ 004401e0 ==== 
 * signature: undefined2 __thiscall FUN_004401e0(void * this, ushort param_1, char param_2)
 * body: 004401e0-00440226
 */

undefined2 __thiscall FUN_004401e0(void *this,ushort param_1,char param_2)

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


