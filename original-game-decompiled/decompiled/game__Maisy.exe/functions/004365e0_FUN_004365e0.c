
/* ==== FUN_004365e0 @ 004365e0 ==== 
 * signature: uint __thiscall FUN_004365e0(void * this, undefined4 param_1, int param_2, int param_3, undefined4 * param_4)
 * body: 004365e0-00436611
 */

uint __thiscall
FUN_004365e0(void *this,undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  
  uVar1 = FUN_004374c0(param_4,(undefined4 *)
                               (*(int *)((int)this + param_2 * 0x124 + 0x13c) + param_3 * 0x80 +
                               0x14));
  return uVar1 & 0xffffff00;
}


