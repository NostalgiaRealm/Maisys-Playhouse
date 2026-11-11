
/* ==== FUN_004764d0 @ 004764d0 ==== 
 * signature: undefined4 __cdecl FUN_004764d0(int param_1)
 * body: 004764d0-00476950
 */

uint __cdecl FUN_004764d0(int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  void *this;
  uint uVar9;
  undefined3 uVar15;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  LPVOID pvVar13;
  int *piVar14;
  uint3 uVar17;
  int iVar16;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  uint local_38;
  int local_34;
  int *local_30;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  uint local_24;
  int local_14;
  short local_10;
  short local_e;
  undefined4 local_c;
  short local_8;
  char local_5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  piVar14 = (int *)*puVar1;
  iVar11 = param_1;
  if ((piVar14 != (int *)0x0) && ((*(byte *)((int)piVar14 + 0x1e) & 4) != 0)) {
    this = (void *)FUN_0040c620(piVar14);
    sVar5 = *(short *)(puVar1 + 1);
    iVar11 = CONCAT22((short)((uint)this >> 0x10),sVar5);
    if ((sVar5 == 0xc) && (this != (void *)0x0)) {
      uVar9 = FUN_00407a20(this,1);
      return uVar9 & 0xffffff00;
    }
    if ((sVar5 == 5) && (this != (void *)0x0)) {
      local_5 = *(char *)((int)puVar1 + 6);
      local_c = CONCAT13(*(undefined1 *)((int)puVar1 + 10),(undefined3)local_c);
      sVar5 = (**(code **)(*piVar14 + 0x27c))();
      local_38 = (uint)sVar5;
      local_34 = FUN_004076b0((int)this);
      psVar2 = *(short **)((int)puVar1 + 0xe);
      uVar15 = (undefined3)((uint)local_34 >> 8);
      if (psVar2 == (short *)0x0) {
        return CONCAT31(uVar15,1);
      }
      if (*(int *)(psVar2 + 2) == 0) {
        psVar2[1] = 1;
        return CONCAT31(uVar15,1);
      }
      piVar10 = (int *)(**(code **)(*piVar14 + 0x3c0))();
      iVar11 = (**(code **)(*piVar10 + 0x2a8))(&local_40);
      local_14 = 1;
      if (0 < local_34) {
        do {
          uVar9 = FUN_004076c0(this,(short)local_14,&local_30);
          if (((char)uVar9 != '\0') &&
             (((local_5 != '\0' && (local_24 < local_38)) ||
              ((local_c._3_1_ != '\0' && (local_38 < local_24)))))) {
            sVar5 = local_40;
            if (local_40 <= local_2c) {
              sVar5 = local_2c;
            }
            sVar8 = local_3c;
            if (local_28 <= local_3c) {
              sVar8 = local_28;
            }
            sVar6 = local_3e;
            if (local_3e <= local_2a) {
              sVar6 = local_2a;
            }
            sVar7 = local_3a;
            if (local_26 <= local_3a) {
              sVar7 = local_26;
            }
            if ((sVar8 <= sVar5) || (bVar3 = true, sVar7 <= sVar6)) {
              bVar3 = false;
            }
            local_2c = sVar5;
            local_2a = sVar6;
            local_28 = sVar8;
            local_26 = sVar7;
            if ((bVar3) &&
               ((((short)local_30[0x18] != 0 || ((*(byte *)((int)local_30 + 0x21) & 0x40) != 0)) ||
                (*(short *)((int)local_30 + 0x22) == 0x43)))) {
              cVar4 = (**(code **)(*piVar14 + 0x460))(local_30,0,0);
              if (cVar4 != '\0') {
                local_8 = *psVar2;
                *psVar2 = local_8 + 1;
                uVar12 = FUN_0043f730(*(HLOCAL *)(psVar2 + 2),(short)(local_8 + 1) * 0x24);
                if (DAT_004da3e0 != 0) {
                  psVar2[1] = 1;
                  return CONCAT31((int3)((uint)uVar12 >> 8),1);
                }
                pvVar13 = LocalLock(*(HLOCAL *)(psVar2 + 2));
                piVar10 = (int *)((int)pvVar13 + local_8 * 0x24);
                FUN_0043e610(local_30,8,piVar10 + 1,piVar10,(int *)0x0);
                LocalUnlock(*(HLOCAL *)(psVar2 + 2));
              }
            }
          }
          local_14 = local_14 + 1;
        } while (local_14 <= local_34);
        return CONCAT31((int3)((uint)local_14 >> 8),1);
      }
    }
    else if ((sVar5 == 7) && ((*(byte *)((int)piVar14 + 0x1e) & 4) != 0)) {
      local_10 = (short)*(undefined4 *)((int)puVar1 + 6);
      local_e = (short)*(undefined4 *)((int)puVar1 + 10);
      sVar5 = (short)*(undefined4 *)((int)puVar1 + 0xe);
      iVar11 = *(int *)((int)puVar1 + 0x12);
      local_c = CONCAT22((short)iVar11,sVar5);
      if (((local_10 < sVar5) && (local_e < (short)iVar11)) && (this != (void *)0x0)) {
        uVar12 = FUN_00408e10(this,&local_10);
        return CONCAT31((int3)((uint)uVar12 >> 8),1);
      }
    }
    else if ((sVar5 == 4) && ((*(byte *)((int)piVar14 + 0x1e) & 4) != 0)) {
      local_10 = (short)*(undefined4 *)((int)puVar1 + 6);
      local_e = (short)*(undefined4 *)((int)puVar1 + 10);
      sVar5 = (short)*(undefined4 *)((int)puVar1 + 0xe);
      sVar8 = (short)*(undefined4 *)((int)puVar1 + 0x12);
      local_c = CONCAT22(sVar8,sVar5);
      if (((local_10 < sVar5) && (local_e < sVar8)) && (this != (void *)0x0)) {
        iVar11 = FUN_004087c0(this,&local_10,'\x01');
      }
      else {
        piVar14 = (int *)(**(code **)(*piVar14 + 0x31c))();
        iVar11 = (**(code **)(*piVar14 + 0x1f8))();
      }
      if ((this != (void *)0x0) && (*(char *)((int)this + 0xa4) == '\0')) {
        uVar12 = FUN_00407970(this);
        return CONCAT31((int3)((uint)uVar12 >> 8),1);
      }
    }
    else if (sVar5 == 0) {
      local_c = CONCAT22((short)*(undefined4 *)((int)puVar1 + 10),
                         (short)*(undefined4 *)((int)puVar1 + 6));
      iVar11 = (**(code **)(*piVar14 + 0x3f4))(local_c);
      if ((this != (void *)0x0) && (*(char *)((int)this + 0xa4) == '\0')) {
        uVar12 = FUN_00407970(this);
        return CONCAT31((int3)((uint)uVar12 >> 8),1);
      }
    }
    else if (sVar5 == 1) {
      local_c = CONCAT22((short)*(undefined4 *)((int)puVar1 + 10),
                         (short)*(undefined4 *)((int)puVar1 + 6));
      iVar11 = (**(code **)(*piVar14 + 0x3f8))(local_c);
      if ((this != (void *)0x0) && (*(char *)((int)this + 0xa4) == '\0')) {
        uVar12 = FUN_00407970(this);
        return CONCAT31((int3)((uint)uVar12 >> 8),1);
      }
    }
    else {
      if (sVar5 == 6) {
        piVar14 = (int *)(**(code **)(*piVar14 + 0x31c))();
        uVar12 = (**(code **)(*piVar14 + 0x1f8))();
        return CONCAT31((int3)((uint)uVar12 >> 8),1);
      }
      if (sVar5 == 2) {
        uVar17 = (uint3)((uint)puVar1 >> 8);
        if (*(int *)((int)puVar1 + 6) == 0) {
          iVar16 = CONCAT31(uVar17,1);
        }
        else {
          iVar16 = (uint)uVar17 << 8;
          if (*(int *)((int)puVar1 + 6) != 1) {
            iVar16 = CONCAT31(uVar17,'\x01' - ((*(uint *)((int)piVar14 + 0x26) & 0x10000000) != 0));
          }
        }
        local_c = CONCAT31(local_c._1_3_,
                           '\x01' - ((*(uint *)((int)piVar14 + 0x26) & 0x10000000) == 0));
        iVar11 = (**(code **)(*piVar14 + 0x120))(iVar16);
        if ((((char)local_c != (char)iVar16) && (this != (void *)0x0)) &&
           (*(char *)((int)this + 0xa4) == '\0')) {
          uVar12 = FUN_00407970(this);
          return CONCAT31((int3)((uint)uVar12 >> 8),1);
        }
      }
      else {
        if (sVar5 == 9) {
          uVar12 = FUN_00476420(param_1,piVar14,(int)puVar1);
          return CONCAT31((int3)((uint)uVar12 >> 8),1);
        }
        if ((sVar5 == 0xb) && ((*(byte *)((int)piVar14 + 0x1e) & 4) != 0)) {
          piVar14 = (int *)(**(code **)(*piVar14 + 0x3c0))();
          iVar11 = (**(code **)(*piVar14 + 0x328))
                             (*(undefined4 *)((int)puVar1 + 6),*(undefined4 *)((int)puVar1 + 10));
        }
      }
    }
  }
  return CONCAT31((int3)((uint)iVar11 >> 8),1);
}


