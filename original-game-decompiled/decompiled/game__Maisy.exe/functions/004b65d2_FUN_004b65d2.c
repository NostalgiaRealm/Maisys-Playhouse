
/* ==== FUN_004b65d2 @ 004b65d2 ==== 
 * signature: uint __thiscall FUN_004b65d2(void * this, undefined2 param_1, undefined2 param_2, uint * param_3)
 * body: 004b65d2-004b6609
 */

uint __thiscall FUN_004b65d2(void *this,undefined2 param_1,undefined2 param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),0x1a9,0,CONCAT22(param_2,param_1));
  *param_3 = (uint)((short)(uVar1 >> 0x10) != 0);
  return uVar1 & 0xffff;
}


