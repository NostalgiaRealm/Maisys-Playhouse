
/* ==== FUN_11005e30 @ 11005e30 ==== 
 * signature: undefined __cdecl FUN_11005e30(undefined4 param_1, char * param_2, undefined4 param_3, char * param_4, uint param_5, int param_6, int param_7, int param_8, byte param_9)
 * body: 11005e30-11005ee3
 */

/* WARNING: Removing unreachable block (ram,0x11005e86) */
/* WARNING: Removing unreachable block (ram,0x11005eb9) */

void __cdecl
FUN_11005e30(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4,uint param_5,
            int param_6,int param_7,int param_8,byte param_9)

{
  char *pcVar1;
  char cVar2;
  undefined3 uVar5;
  int iVar3;
  int iVar4;
  uint uVar6;
  int iVar7;
  
  if (param_5 != 0) {
    iVar3 = (uint)param_9 << 8;
    do {
      for (uVar6 = param_5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        cVar2 = *param_4;
        uVar5 = (undefined3)((uint)iVar3 >> 8);
        if (cVar2 != (char)((uint)iVar3 >> 8)) goto LAB_11005e8e;
LAB_11005e66:
        cVar2 = param_4[1];
        if (cVar2 != (char)uVar5) goto LAB_11005e97;
LAB_11005e6d:
        cVar2 = param_4[2];
        if (cVar2 != (char)uVar5) goto LAB_11005ea1;
        while (iVar3 = CONCAT31(uVar5,param_4[3]), param_4[3] != (char)uVar5) {
          while( true ) {
            param_2[3] = (char)iVar3;
            param_2 = param_2 + 4;
            param_4 = param_4 + 4;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_11005ebc;
            cVar2 = *param_4;
            uVar5 = (undefined3)((uint)iVar3 >> 8);
            if (cVar2 == (char)((uint)iVar3 >> 8)) goto LAB_11005e66;
LAB_11005e8e:
            *param_2 = cVar2;
            cVar2 = param_4[1];
            if (cVar2 == (char)uVar5) goto LAB_11005e6d;
LAB_11005e97:
            param_2[1] = cVar2;
            cVar2 = param_4[2];
            if (cVar2 == (char)uVar5) break;
LAB_11005ea1:
            param_2[2] = cVar2;
            iVar3 = CONCAT31(uVar5,param_4[3]);
            if (param_4[3] == (char)uVar5) goto LAB_11005e7b;
          }
        }
LAB_11005e7b:
        param_2 = param_2 + 4;
        param_4 = param_4 + 4;
      }
LAB_11005ebc:
      if ((param_5 & 3) != 0) {
        iVar7 = (param_5 & 3) + 1;
        pcVar1 = param_2;
        while (param_2 = pcVar1, iVar7 = iVar7 + -1, iVar7 != 0) {
          cVar2 = *param_4;
          iVar4 = CONCAT31((int3)((uint)iVar3 >> 8),cVar2);
          param_4 = param_4 + 1;
          uVar6 = (uint)iVar3 >> 8;
          iVar3 = iVar4;
          pcVar1 = param_2 + 1;
          if (cVar2 != (char)uVar6) {
            *param_2 = cVar2;
          }
        }
      }
      param_4 = param_4 + (param_8 - param_5);
      param_2 = param_2 + (param_7 - param_5);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


