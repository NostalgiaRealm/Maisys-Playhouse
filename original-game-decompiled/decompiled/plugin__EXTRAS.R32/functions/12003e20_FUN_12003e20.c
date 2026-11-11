
/* ==== FUN_12003e20 @ 12003e20 ==== 
 * signature: undefined __fastcall FUN_12003e20(int * param_1)
 * body: 12003e20-1200404a
 */

void __fastcall FUN_12003e20(int *param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  short sVar9;
  ushort local_e;
  int local_c;
  int local_8;
  int iStack_4;
  
  local_e = 0;
  iVar8 = *param_1;
  bVar6 = false;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  iVar4 = param_1[3];
  sVar9 = *(short *)(iVar8 + 0x1c);
  do {
    if (iVar4 == -1) {
LAB_12003f91:
      *(undefined2 *)((int)param_1 + 0x26) = 0;
      pcVar7 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x17,&local_c);
      DAT_12039a9c = (*pcVar7)(local_c,param_1 + 0xb,0xff,0x10);
      sVar9 = 0;
      do {
        if ((local_e & (ushort)(0x8000 >> ((byte)sVar9 & 0x1f))) != 0) {
          *(undefined1 *)(sVar9 + 0x2c + (int)param_1) = *(undefined1 *)((int)param_1 + 0x26);
          *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + 1;
        }
        sVar9 = sVar9 + 1;
      } while (sVar9 < 0x10);
      if (0 < *(short *)((int)param_1 + 0x26)) {
        iVar8 = FUN_12016010(*(short *)((int)param_1 + 0x26) * 0x18);
        sVar9 = 0;
        *(undefined2 *)((int)param_1 + 0x26) = 0;
        param_1[10] = iVar8;
        do {
          if ((local_e & (ushort)(0x8000 >> ((byte)sVar9 & 0x1f))) != 0) {
            *(byte *)(param_1[10] + *(short *)((int)param_1 + 0x26) * 0x18) = (byte)sVar9;
            *(short *)((int)param_1 + 0x26) = *(short *)((int)param_1 + 0x26) + 1;
          }
          sVar9 = sVar9 + 1;
        } while (sVar9 < 0x10);
      }
      return;
    }
    bVar2 = *(byte *)(param_1 + 4);
    if ((bVar2 & 0xf0) == 0xf0) {
      if (bVar2 == 0xff) {
        cVar3 = *(char *)((int)param_1 + 0x11);
        if (cVar3 == '/') {
          if (*(uint *)(iVar8 + 0x46) < (uint)param_1[3]) {
            *(int *)(iVar8 + 0x46) = param_1[3];
          }
          goto LAB_12003f91;
        }
        if (cVar3 == 'Q') {
          if (!bVar6) {
            puVar5 = (undefined1 *)param_1[5];
            bVar6 = true;
            *(uint *)(iVar8 + 0x2a) = (uint)CONCAT12(*puVar5,CONCAT11(puVar5[1],puVar5[2]));
          }
        }
        else if (cVar3 == '\x06') {
          pcVar7 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x14,&local_c);
          DAT_12039a9c = (*pcVar7)(local_c,&local_8,param_1[5],s_loopstart_12037124,9);
          if (local_8 == 0) {
            *(int *)(iVar8 + 0x4a) = param_1[3];
          }
          pcVar7 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x14,&iStack_4);
          DAT_12039a9c = (*pcVar7)(iStack_4,&local_8,param_1[5],s_loopend_1203711c,7);
          if (local_8 == 0) {
            *(int *)(iVar8 + 0x4e) = param_1[3];
          }
        }
      }
    }
    else {
      local_e = local_e | (ushort)(0x8000 >> (bVar2 & 0xf));
      if ((((bVar2 & 0xf0) == 0xc0) && ((uint)param_1[3] < (uint)(sVar9 * 4))) &&
         (pcVar1 = (char *)((bVar2 & 0xf) + 0x52 + iVar8), *pcVar1 == -1)) {
        *pcVar1 = *(char *)((int)param_1 + 0x11);
      }
    }
    FUN_120045a0(param_1 + 3);
    iVar4 = param_1[3];
  } while( true );
}


