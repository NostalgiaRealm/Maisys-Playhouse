
/* ==== FUN_10009761 @ 10009761 ==== 
 * signature: undefined __fastcall FUN_10009761(undefined4 param_1, byte param_2)
 * body: 10009761-10009763
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_10009761(undefined4 param_1,byte param_2)

{
  byte bVar1;
  char *in_EAX;
  char *pcVar3;
  byte *unaff_ESI;
  byte *unaff_EDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  byte bVar2;
  
  *in_EAX = *in_EAX + param_2;
  bVar1 = *unaff_EDI;
  bVar2 = *unaff_EDI;
  *unaff_EDI = *unaff_EDI + param_2;
  *(uint *)(in_EAX + -4) =
       (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar2,param_2) * 0x800 | (uint)(in_IF & 1) * 0x200
       | (uint)(in_TF & 1) * 0x100 | (uint)((char)*unaff_EDI < '\0') * 0x80 |
       (uint)(*unaff_EDI == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT(*unaff_EDI) & 1U) == 0) * 4 | (uint)CARRY1(bVar1,param_2) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[1] = unaff_EDI[1] + param_2;
  pcVar3 = (char *)CONCAT22((short)((uint)&stack0x00000000 >> 0x10),0x9700);
  *pcVar3 = *pcVar3 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


