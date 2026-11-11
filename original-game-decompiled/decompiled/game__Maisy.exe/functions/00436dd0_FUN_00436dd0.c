
/* ==== FUN_00436dd0 @ 00436dd0 ==== 
 * signature: undefined4 __thiscall FUN_00436dd0(void * this, int * param_1, undefined4 * param_2)
 * body: 00436dd0-00436e15
 */

undefined4 __thiscall FUN_00436dd0(void *this,int *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00437100(this,-1,param_1);
  if ((ushort)uVar1 != 0xffff) {
    *param_2 = *(undefined4 *)((int)this + (short)((ushort)uVar1 >> 8 & 0x8f) * 0x124 + 0x142);
    return 0;
  }
  return 0x10000;
}


