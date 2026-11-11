
/* ==== FUN_11023821 @ 11023821 ==== 
 * signature: undefined __fastcall FUN_11023821(char * param_1, char param_2, undefined4 * param_3, int param_4, undefined4 param_5, char * param_6, byte param_7, byte * param_8, undefined4 param_9, int param_10, int param_11)
 * body: 11023821-11023823
 */

/* WARNING: Instruction at (ram,0x11023882) overlaps instruction at (ram,0x11023881)
    */

void __fastcall
FUN_11023821(char *param_1,char param_2,undefined4 *param_3,int param_4,undefined4 param_5,
            char *param_6,byte param_7,byte *param_8,undefined4 param_9,int param_10,int param_11)

{
  byte bVar1;
  code *pcVar2;
  char in_AL;
  char cVar3;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined1 *unaff_ESI;
  byte in_AF;
  uint uVar4;
  char *pcVar5;
  
  cVar3 = *param_1;
  pbVar7 = (byte *)CONCAT31((int3)((uint)param_1 >> 8),0x36);
  bVar1 = *pbVar7;
  *unaff_ESI = 0;
  bVar1 = 9 < ((byte)param_9 & 0xf) |
          9 < ((in_AL + -0x37) - CARRY1(param_2 + cVar3 + bVar1 + *pbVar7,*pbVar7) & 0xfU) | in_AF;
  uVar4 = CONCAT31((int3)((uint)param_9 >> 8),(byte)param_9 + bVar1 * '\x06') & 0xffffff0f;
  cVar3 = (char)uVar4;
  pcVar5 = (char *)CONCAT22((short)(uVar4 >> 0x10),
                            CONCAT11((char)((uint)param_9 >> 8) + bVar1,cVar3));
  if (CARRY1(param_7,*param_8) || (byte)(param_7 + *param_8) == '\0') {
    if (param_8 == (byte *)0x1) {
      uRam00000000 = CONCAT31(uRam00000000._1_3_,(char)uRam00000000 + cVar3);
      puVar6 = (undefined4 *)
               (CONCAT31((int3)((uint)pcVar5 >> 8),cVar3 + *param_6 + '\t') + 0x6090909);
      *puVar6 = *puVar6;
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    *(int *)(param_4 + -0x74ebdbb4) = *(int *)(param_4 + -0x74ebdbb4) + -1;
    *pcVar5 = *pcVar5 + cVar3;
  }
  *pcVar5 = *pcVar5;
  param_6[0x505110c4] = param_6[0x505110c4] + cVar3;
  FUN_110238a0(param_3,param_10,param_11);
  return;
}


