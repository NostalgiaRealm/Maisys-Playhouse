
/* ==== FUN_100097ce @ 100097ce ==== 
 * signature: undefined4 __fastcall FUN_100097ce(int param_1, byte param_2)
 * body: 100097ce-100097cf
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall FUN_100097ce(int param_1,byte param_2)

{
  byte bVar1;
  char *pcVar3;
  byte *in_EAX;
  char extraout_DL;
  int unaff_EBP;
  byte *unaff_ESI;
  char *unaff_EDI;
  byte in_AF;
  char in_ZF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  byte bVar2;
  
  if (param_1 == 1 || in_ZF != '\0') {
    *in_EAX = *in_EAX + param_2;
    func_0x08109870();
    *unaff_EDI = *unaff_EDI + extraout_DL;
    *(char *)((uint)unaff_EDI | 0x98) = *(char *)((uint)unaff_EDI | 0x98) + extraout_DL;
    return *(undefined4 *)(unaff_EBP + 8);
  }
  *unaff_EDI = *unaff_EDI + param_2;
  bVar1 = *in_EAX;
  bVar2 = *in_EAX;
  *in_EAX = *in_EAX + param_2;
  *(uint *)(unaff_EDI + -4) =
       (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY1(bVar2,param_2) * 0x800 | (uint)(in_IF & 1) * 0x200
       | (uint)(in_TF & 1) * 0x100 | (uint)((char)*in_EAX < '\0') * 0x80 |
       (uint)(*in_EAX == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT(*in_EAX) & 1U) == 0) * 4 | (uint)CARRY1(bVar1,param_2) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  *in_EAX = *unaff_ESI;
  in_EAX[1] = in_EAX[1] + param_2;
  pcVar3 = (char *)CONCAT22((short)((uint)&stack0x00000000 >> 0x10),0x9700);
  *pcVar3 = *pcVar3 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


