
/* ==== FUN_1201f070 @ 1201f070 ==== 
 * signature: undefined4 __cdecl FUN_1201f070(undefined4 param_1, char * param_2, uint param_3, undefined4 param_4, undefined4 param_5, uint * param_6, uint * param_7, uint * param_8, uint * param_9)
 * body: 1201f070-1201f287
 */

undefined4 __cdecl
FUN_1201f070(undefined4 param_1,char *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            uint *param_6,uint *param_7,uint *param_8,uint *param_9)

{
  HGLOBAL pvVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint *puVar7;
  short local_10;
  short local_e;
  int local_4;
  
  local_e = 0;
  pvVar1 = GlobalAlloc(2,0x80);
  puVar2 = (uint *)0x0;
  if (pvVar1 != (HGLOBAL)0x0) {
    FUN_12027e33();
    puVar2 = (uint *)FUN_12027e9b();
    if (puVar2 == (uint *)0x0) {
      puVar3 = GlobalLock(pvVar1);
      local_10 = 1;
      puVar2 = puVar3;
      puVar7 = puVar3;
      if (0 < local_4) {
        do {
          if (local_e != 0) break;
          uVar6 = puVar7[4];
          uVar6 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8;
          if (((uVar6 == 0) || (uVar6 != (param_3 & 0xffff))) ||
             (iVar4 = _strncmp((char *)(puVar7 + 5),param_2,param_3 & 0xffff), iVar4 != 0)) {
            local_10 = local_10 + 1;
            uVar6 = puVar7[4];
            puVar7 = (uint *)((int)puVar7 +
                             ((uVar6 & 0xff00 | uVar6 << 0x10) << 8 |
                             (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8) + 0x14);
          }
          else {
            local_e = local_10;
            if (param_6 != (uint *)0x0) {
              uVar6 = *puVar7;
              *param_6 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 |
                         (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8;
            }
            if (param_7 != (uint *)0x0) {
              uVar6 = puVar7[1];
              *param_7 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 & 0xff0000) >> 8 |
                         uVar6 >> 0x18;
            }
            if (param_8 != (uint *)0x0) {
              uVar6 = puVar7[2];
              *param_8 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 & 0xff0000) >> 8 |
                         uVar6 >> 0x18;
            }
            if (param_9 != (uint *)0x0) {
              uVar6 = puVar7[3];
              *param_9 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 & 0xff0000) >> 8 |
                         uVar6 >> 0x18;
            }
          }
          puVar2 = (uint *)((int)puVar7 - (int)puVar3);
        } while ((int)puVar2 < local_4);
      }
    }
  }
  uVar5 = (undefined2)((uint)puVar2 >> 0x10);
  if (pvVar1 != (HGLOBAL)0x0) {
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalFree(pvVar1);
    uVar5 = (short)((uint)pvVar1 >> 0x10);
  }
  return CONCAT22(uVar5,local_e);
}


