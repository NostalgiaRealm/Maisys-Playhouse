
/* ==== FUN_00481530 @ 00481530 ==== 
 * signature: undefined4 __thiscall FUN_00481530(void * this, char param_1, undefined1 param_2, undefined4 param_3)
 * body: 00481530-00481596
 */

undefined4 __thiscall FUN_00481530(void *this,char param_1,undefined1 param_2,undefined4 param_3)

{
  *(char *)((int)this + 0x149) = param_1;
  *(undefined4 *)((int)this + 0x136) = 0xaa55a5a5;
  *(char *)((int)this + 0x134) = param_1;
  *(undefined1 *)((int)this + 0x135) = param_2;
  *(undefined4 *)((int)this + 0x13e) = 0xe;
  *(undefined4 *)((int)this + 0x13a) = param_3;
  if ((((param_1 != '\x01') && (param_1 != '\x02')) && (param_1 != '\t')) && (param_1 != '\b')) {
    *(byte *)((int)this + 0x15a) = *(byte *)((int)this + 0x15a) & 0xfe;
    return 0;
  }
  *(byte *)((int)this + 0x15a) = *(byte *)((int)this + 0x15a) | 1;
  return 0;
}


