
/* ==== FUN_1101ba2d @ 1101ba2d ==== 
 * signature: undefined __fastcall FUN_1101ba2d(int * param_1, int param_2)
 * body: 1101ba2d-1101ba2f
 */

void __fastcall FUN_1101ba2d(int *param_1,int param_2)

{
  code *pcVar1;
  uint in_EAX;
  undefined1 unaff_BH;
  
  *param_1 = *param_1 + param_2;
  *(undefined1 *)((in_EAX & 0xffffffb8) + 0xb9171101) = unaff_BH;
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(0xb9,(char)param_2));
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


