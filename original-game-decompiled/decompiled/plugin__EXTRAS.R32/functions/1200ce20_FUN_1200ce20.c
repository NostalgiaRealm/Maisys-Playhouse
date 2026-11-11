
/* ==== FUN_1200ce20 @ 1200ce20 ==== 
 * signature: int __cdecl FUN_1200ce20(int param_1, uint * param_2, short * param_3, undefined4 param_4)
 * body: 1200ce20-1200d3e8
 */

int __cdecl FUN_1200ce20(int param_1,uint *param_2,short *param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  char local_d;
  byte bStack_c;
  undefined2 uStack_b;
  char cStack_9;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar2 = FUN_120271d0(param_2,(uint *)s_tempo_120373f8);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_120271d0(param_2,(uint *)&DAT_120373e0);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_120271d0(param_2,(uint *)s_volume_12037428);
      if ((char)uVar2 == '\0') {
        uVar2 = FUN_120271d0(param_2,(uint *)s_reset_12037410);
        if ((char)uVar2 != '\0') {
          FUN_1200cbe0(param_1);
          return 0;
        }
        uVar2 = FUN_120271d0(param_2,(uint *)&DAT_120373c8);
        if (((char)uVar2 == '\0') &&
           (uVar2 = FUN_120271d0(param_2,(uint *)s_balance_12037458), (char)uVar2 == '\0')) {
          uVar2 = FUN_120271d0(param_2,(uint *)s_transposing_120374d0);
          if ((char)uVar2 != '\0') {
            iVar3 = FUN_1200d510(param_1,param_4,&local_d);
            uVar2 = FUN_1200d3f0(param_1,param_3,0x10);
            if ((byte)uVar2 == 0xff) {
              iVar3 = 0x10000;
            }
            if (iVar3 != 0) {
              return iVar3;
            }
            FUN_12003a70(*(void **)(param_1 + 0x6a),(byte)uVar2,local_d);
            return 0;
          }
          uVar2 = FUN_120271d0(param_2,(uint *)s_mutetrack_12037488);
          if ((char)uVar2 != '\0') {
            iVar3 = FUN_1200d510(param_1,param_4,&local_d);
            uVar2 = FUN_1200d3f0(param_1,param_3,0);
            if ((char)uVar2 == -1) {
              iVar3 = 0x10000;
            }
            if (iVar3 != 0) {
              return iVar3;
            }
            FUN_12003b50(*(void **)(param_1 + 0x6a),(short)(char)uVar2,local_d);
            return 0;
          }
          uVar2 = FUN_120271d0(param_2,(uint *)s_solotrack_120374a0);
          if ((char)uVar2 != '\0') {
            iVar3 = FUN_1200d510(param_1,param_4,&local_d);
            uVar2 = FUN_1200d3f0(param_1,param_3,0);
            cVar1 = (char)uVar2;
            if ((cVar1 == -1) || (cVar1 == '\0')) {
              iVar3 = 0x10000;
            }
            if (iVar3 != 0) {
              return iVar3;
            }
            FUN_12003c60(*(void **)(param_1 + 0x6a),(short)cVar1,local_d);
            return 0;
          }
          uVar2 = FUN_120271d0(param_2,(uint *)s_transpose_120374b8);
          if ((char)uVar2 != '\0') {
            iVar3 = FUN_1200d4c0(param_1,param_4,&bStack_c);
            if (iVar3 != 0) {
              return iVar3;
            }
            if ((-0x19 < CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c))) &&
               (CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)) < 0x19)) {
              FUN_12003b00(*(void **)(param_1 + 0x6a),bStack_c);
              *(byte *)(param_1 + 100) = bStack_c;
              return 0;
            }
            return 0x10000;
          }
          uVar2 = FUN_120271d0(param_2,(uint *)s_playnote_12037470);
          if ((char)uVar2 != '\0') {
            FUN_1200cae0(param_1);
            return 0;
          }
          uVar2 = FUN_120271d0(param_2,(uint *)s_notechannel_120374e8);
          if ((char)uVar2 != '\0') {
            iVar3 = FUN_1200d4c0(param_1,param_4,&bStack_c);
            if (iVar3 != 0) {
              return iVar3;
            }
            if ((0 < CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c))) &&
               (CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)) < 0x11)) {
              *(byte *)(param_1 + 0x50) = bStack_c;
              return 0;
            }
            return 0x10000;
          }
          uVar2 = FUN_120271d0(param_2,(uint *)s_noteprogram_12037500);
          if ((char)uVar2 != '\0') {
            iVar3 = FUN_1200d4c0(param_1,param_4,&bStack_c);
            if (iVar3 != 0) {
              return iVar3;
            }
            if ((-2 < CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c))) &&
               (CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)) < 0x80)) {
              *(byte *)(param_1 + 0x53) = bStack_c;
              return 0;
            }
            return 0x10000;
          }
          uVar2 = FUN_120271d0(param_2,(uint *)s_notenum_12037440);
          if ((char)uVar2 != '\0') {
            iVar3 = FUN_1200d4c0(param_1,param_4,&bStack_c);
            if (iVar3 != 0) {
              return iVar3;
            }
            if ((-1 < cStack_9) && (CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)) < 0x80)) {
              *(byte *)(param_1 + 0x51) = bStack_c;
              return 0;
            }
            return 0x10000;
          }
          uVar2 = FUN_120271d0(param_2,(uint *)s_notevelocity_12037518);
          if ((char)uVar2 == '\0') {
            uVar2 = FUN_120271d0(param_2,(uint *)s_noteduration_12037530);
            if ((char)uVar2 == '\0') {
              return 0x10000;
            }
            iVar3 = FUN_1200d470(param_1,param_4,&local_8);
            if (iVar3 != 0) {
              return iVar3;
            }
            if ((double)CONCAT44(uStack_4,local_8) < 0.0) {
              local_8 = 0;
              uStack_4 = 0;
            }
            if (30.0 < (double)CONCAT44(uStack_4,local_8)) {
              local_8 = 0;
              uStack_4 = 0x403e0000;
            }
            *(undefined4 *)(param_1 + 0x5c) = uStack_4;
            *(undefined4 *)(param_1 + 0x58) = local_8;
            lVar5 = FUN_1200cbc0();
            *(int *)(param_1 + 0x60) = (int)lVar5;
            return 0;
          }
          iVar3 = FUN_1200d4c0(param_1,param_4,&bStack_c);
          if (iVar3 != 0) {
            return iVar3;
          }
          if ((-1 < cStack_9) && (CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)) < 0x80)) {
            *(byte *)(param_1 + 0x52) = bStack_c;
            return 0;
          }
          return 0x10000;
        }
        iVar3 = FUN_1200d4c0(param_1,param_4,&bStack_c);
        if (iVar3 == 0) {
          uVar4 = 0xffff8300;
          if ((CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)) < -32000) ||
             (uVar4 = 32000, 32000 < CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)))) {
            bStack_c = 0;
            uStack_b = (undefined2)((uint)uVar4 >> 8);
            cStack_9 = (char)((uint)uVar4 >> 0x18);
          }
          uVar2 = FUN_1200d3f0(param_1,param_3,0x10);
          if ((byte)uVar2 == 0xff) {
            return 0x10000;
          }
          FUN_120039d0(*(void **)(param_1 + 0x6a),(byte)uVar2,
                       CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)));
        }
      }
      else {
        iVar3 = FUN_1200d4c0(param_1,param_4,&bStack_c);
        if (iVar3 == 0) {
          if ((-1 < cStack_9) && (CONCAT13(cStack_9,CONCAT21(uStack_b,bStack_c)) < 0x100)) {
            FUN_12003960(*(void **)(param_1 + 0x6a),bStack_c);
            return 0;
          }
          return 0x10000;
        }
      }
    }
    else {
      iVar3 = FUN_1200d510(param_1,param_4,&local_d);
      if (iVar3 == 0) {
        FUN_12003900(*(void **)(param_1 + 0x6a),local_d);
        return 0;
      }
    }
  }
  else {
    iVar3 = FUN_1200d470(param_1,param_4,&local_8);
    if (iVar3 == 0) {
      if (((double)CONCAT44(uStack_4,local_8) <= 60000000.0) &&
         (1.0 < (double)CONCAT44(uStack_4,local_8))) {
        FUN_12003910(*(void **)(param_1 + 0x6a),1);
        return 0;
      }
      return 0x10000;
    }
  }
  return iVar3;
}


