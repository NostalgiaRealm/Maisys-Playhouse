
/* ==== FUN_1100f8c5 @ 1100f8c5 ==== 
 * signature: undefined __fastcall FUN_1100f8c5(byte * param_1, byte param_2, int * param_3)
 * body: 1100f8c5-1100f8c7
 */

void __fastcall FUN_1100f8c5(byte *param_1,byte param_2,int *param_3)

{
  code *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined4 unaff_EBX;
  byte *unaff_ESI;
  undefined4 uStack00000008;
  byte *pbVar3;
  
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  do {
    *param_1 = *param_1 + param_2;
    uStack00000008 = 0xfffffff8;
    while (bVar2 = *param_1, *param_1 = *param_1 + param_2, !CARRY1(bVar2,param_2)) {
      *param_1 = *param_1 + param_2;
      if ((POPCOUNT(*param_1) & 1U) != 0) {
        *param_1 = *param_1 + param_2;
        *param_3 = (int)(param_1 + *param_3);
        bVar2 = (char)param_3 +
                *(char *)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                   CONCAT11((byte)((uint)unaff_EBX >> 8) | in_AL,(char)unaff_EBX)) +
                         1) + 8;
        pbVar3 = (byte *)CONCAT31((int3)((uint)param_3 >> 8),bVar2);
        bRam08080808 = bRam08080808 | bVar2;
        *pbVar3 = *pbVar3 | (byte)param_1;
        *unaff_ESI = *unaff_ESI | bVar2;
        bRam001100f8 = bRam001100f8 | bVar2;
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  } while( true );
}


