
/* ==== FUN_0047e690 @ 0047e690 ==== 
 * signature: undefined __thiscall FUN_0047e690(void * this, char param_1)
 * body: 0047e690-0047e6cd
 */

void __thiscall FUN_0047e690(void *this,char param_1)

{
  if ((char)('\x01' - ((*(uint *)((int)this + 0x26) & 0x1000000) == 0)) != param_1) {
    if (param_1 == '\0') {
      FUN_0043ff10(*(int **)((int)this + 0x5a));
    }
    else {
      FUN_0043fe90(*(int **)((int)this + 0x5a));
    }
    FUN_0044f650(this,param_1);
  }
  return;
}


