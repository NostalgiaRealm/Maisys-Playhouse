
/* ==== FUN_1001696e @ 1001696e ==== 
 * signature: int __fastcall FUN_1001696e(int * param_1)
 * body: 1001696e-1001696f
 */

int __fastcall FUN_1001696e(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  char unaff_BL;
  
  pbVar1 = (byte *)((int)param_1 + 1);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 0x10;
  *(char *)((int)param_1 + 1) = (char)((uint)param_1 >> 8);
  *(char *)(in_EAX + -0x53effe97) = *(char *)(in_EAX + -0x53effe97) + unaff_BL + (bVar2 < 0x10);
  return *param_1 * 0x8458b10;
}


