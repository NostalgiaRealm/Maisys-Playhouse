
/* ==== switchD_11010f4a::caseD_9 @ 11010faf ==== 
 * signature: undefined __thiscall caseD_9(void * this, undefined4 param_1, undefined4 param_2, undefined2 * param_3)
 * body: 11010faf-11010fdd
 */

void __thiscall
switchD_11010f4a::caseD_9(void *this,undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 6);
  *(uint *)(param_3 + 3) =
       (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000) >> 8 | uVar1 >> 0x18;
  *param_3 = CONCAT11((char)*(undefined2 *)this,(char)((ushort)*(undefined2 *)this >> 8));
  return;
}


