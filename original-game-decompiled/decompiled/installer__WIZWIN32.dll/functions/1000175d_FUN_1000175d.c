
/* ==== FUN_1000175d @ 1000175d ==== 
 * signature: undefined FUN_1000175d(void)
 * body: 1000175d-1000175f
 */

void __fastcall FUN_1000175d(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar3;
  byte bVar4;
  byte *in_EAX;
  byte bVar5;
  int unaff_EBP;
  byte in_CF;
  bool bVar6;
  byte bVar2;
  
  bVar5 = (byte)((uint)param_2 >> 8);
  bVar1 = *in_EAX;
  bVar3 = (byte)in_EAX;
  bVar2 = *in_EAX;
  *in_EAX = bVar2 + bVar3 + in_CF;
  bVar4 = (byte)((uint)in_EAX >> 8);
  bVar6 = CARRY1(bVar5,bVar4) ||
          CARRY1(bVar5 + bVar4,CARRY1(bVar1,bVar3) || CARRY1(bVar2 + bVar3,in_CF));
  bVar1 = *in_EAX;
  bVar2 = *in_EAX;
  *in_EAX = bVar2 + bVar3 + bVar6;
  *(char *)(unaff_EBP + 0x16) =
       *(char *)(unaff_EBP + 0x16) + bVar4 + (CARRY1(bVar1,bVar3) || CARRY1(bVar2 + bVar3,bVar6));
  *in_EAX = *in_EAX + (char)param_2;
  return;
}


