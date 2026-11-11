
/* ==== FUN_00404450 @ 00404450 ==== 
 * signature: undefined __thiscall FUN_00404450(void * this, short param_1)
 * body: 00404450-004046f1;0040470d-004049e2;00404a18-00404d09
 */

void __thiscall FUN_00404450(void *this,short param_1)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int *piVar10;
  short *psVar11;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_218 [21];
  undefined4 local_1c4 [9];
  undefined2 local_1a0;
  int *local_19e;
  undefined4 local_170 [21];
  undefined4 local_11c [9];
  undefined2 local_f8;
  int *local_f6;
  undefined4 local_c8 [21];
  int *local_74;
  char *local_70;
  char local_6c;
  undefined4 local_6a;
  int local_66;
  undefined4 local_62;
  AFX_EXCEPTION_LINK local_5c [8];
  AFX_EXCEPTION_LINK local_54 [16];
  int *local_44;
  void *local_3c;
  int *local_38;
  uint *local_34;
  int local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  void *local_1c;
  short local_18;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00404a06;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xfffffddc;
  local_1c = this;
  FUN_004042d0(this);
  local_2c = (int *)((int)local_1c + 0x76);
  if (*(int *)(*local_2c + 0x26) != 0) {
    local_30 = 1;
    if (0 < *(int *)(*local_2c + 0x26)) {
      local_44 = (int *)((int)local_1c + 0x1d6);
      do {
        if (*local_44 <= local_30) break;
        local_3c = local_1c;
        local_20 = (int *)0x0;
        FUN_00430370((void *)*local_2c,local_30,&local_74);
        piVar10 = local_74;
        if (local_74 == (int *)0x0) {
          FUN_0043ba20(local_70);
        }
        else {
          local_20 = local_74;
          if (local_70 != (char *)0x0) {
            FUN_0048c8e0(local_74,'/',local_70,&local_20);
            FUN_0043ba20(local_70);
            local_70 = (char *)0x0;
            if (local_20 == (int *)0x0) goto LAB_004048d3;
            local_3c = (void *)FUN_0040c620(local_20);
            piVar5 = local_20;
            if (local_6c == '\0') {
              iVar6 = (**(code **)(*local_20 + 0x16c))();
              sVar3 = 0xd;
              if (iVar6 != 0) {
                piVar5 = (int *)(**(code **)(*local_20 + 0x16c))();
                goto LAB_00404569;
              }
            }
            else {
LAB_00404569:
              sVar3 = (**(code **)(*piVar5 + 0x1d4))(piVar10);
            }
            if ((2 < sVar3) && (sVar3 != 0xb)) goto LAB_004048d3;
          }
          local_34 = (uint *)((int)piVar10 + 0x1e);
          if ((*local_34 & 2) == 0) {
            if ((*local_34 & 0x400) != 0) {
              local_28 = (int *)0x0;
              FUN_0040af80(0);
              AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_54);
              local_8 = 4;
              if (local_6c == '\0') {
                local_28 = FUN_0043dc60(piVar10,local_20,'\x01');
              }
              else {
                local_28 = FUN_0043de50(piVar10,local_20,'\x01',0);
              }
              local_8 = 0xffffffff;
              FUN_00404a10();
              FUN_0040af80(1);
              iVar6 = *local_28;
              (**(code **)(iVar6 + 0x120))(0);
              *(byte *)(local_28 + 0xe) = *(byte *)(local_28 + 0xe) | 2;
              FUN_004142c0(local_170,0x7d1,0,0,0);
              pcVar1 = *(code **)(iVar6 + 0x1e0);
              (*pcVar1)(local_170);
              piVar10 = *(int **)((int)local_28 + 0x3a);
              if ((piVar10 != (int *)0x0) && ((*(byte *)((int)piVar10 + 0x1e) & 4) != 0)) {
                (**(code **)(*piVar10 + 0x40c))();
              }
              FUN_004142c0(local_170,0xe2,0,local_6a,0);
              (*pcVar1)(local_170);
              pvVar8 = local_1c;
              if ((*(int *)((int)local_1c + 0x9a) != 0) && (local_66 != 0)) {
                FUN_004142c0(local_11c,local_66,local_62,local_20,0);
                puVar9 = local_11c;
                local_f8 = 3;
                local_f6 = local_28;
                goto LAB_004048cb;
              }
            }
          }
          else {
            psVar11 = &local_18;
            local_24 = (int *)0x0;
            FUN_0040af80(0);
            AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_5c);
            local_8 = 1;
            if ((*(byte *)(piVar10 + 0x12) & 2) == 0) {
              cVar2 = '\0';
              psVar11 = (short *)0x0;
              if (local_6c != '\0') goto LAB_00404600;
              local_24 = FUN_0043da70(piVar10,local_20,'\x01',(short *)0x0,'\0');
            }
            else {
              if (((((short)piVar10[0x18] == 0) && ((*local_34 & 0x40000000) == 0)) &&
                  (*(short *)((int)piVar10 + 0x22) != 0x43)) || ((*local_34 & 4) == 0)) {
                psVar11 = (short *)0x0;
              }
              else {
                iVar6 = FUN_0043d020(local_20);
                local_18 = (short)iVar6 + 1;
              }
              cVar2 = '\x01';
              if (local_6c == '\0') {
                local_24 = FUN_0043da70(piVar10,local_20,'\x01',psVar11,'\x01');
              }
              else {
LAB_00404600:
                local_24 = FUN_0043d880(piVar10,local_20,'\x01',1,psVar11,cVar2);
              }
            }
            local_8 = 0xffffffff;
            FUN_004049fe();
            FUN_0040af80(1);
            iVar6 = *local_24;
            (**(code **)(iVar6 + 0x120))(0);
            (**(code **)(iVar6 + 0x268))(local_3c);
            cVar2 = '\x01';
            *(byte *)(local_24 + 0xe) = *(byte *)(local_24 + 0xe) | 2;
            piVar10 = (int *)FUN_0046ca10((int)local_24);
            uVar4 = FUN_00403790(local_1c,piVar10,cVar2);
            if ((char)uVar4 != '\0') {
              (**(code **)(iVar6 + 0x230))();
              FUN_004142c0(local_218,0x7d1,0,0,0);
              FUN_0046b730(local_24,(int)local_218);
            }
            if ((((short)local_24[0x18] == 0) && ((*(byte *)((int)local_24 + 0x21) & 0x40) == 0)) &&
               (*(short *)((int)local_24 + 0x22) != 0x43)) {
              piVar10 = (int *)(**(code **)(iVar6 + 0x31c))();
              (**(code **)(*piVar10 + 0x1f8))();
            }
            else if ((*local_34 & 4) != 0) {
              (**(code **)(iVar6 + 0x40c))();
            }
            FUN_004142c0(local_218,0xe2,0,local_6a,0);
            FUN_0046b770(local_24,(int)local_218);
            pvVar8 = local_1c;
            if ((*(int *)((int)local_1c + 0x9a) != 0) && (local_66 != 0)) {
              FUN_004142c0(local_1c4,local_66,local_62,local_20,0);
              puVar9 = local_1c4;
              local_1a0 = 3;
              local_19e = local_24;
LAB_004048cb:
              FUN_0046b770(*(void **)((int)pvVar8 + 0x9a),(int)puVar9);
            }
          }
        }
LAB_004048d3:
        local_30 = local_30 + 1;
      } while (local_30 <= *(int *)(*local_2c + 0x26));
    }
    (**(code **)(*(int *)*local_2c + 0xe4))();
  }
  if (param_1 == 0) {
    piVar10 = (int *)((int)local_1c + 0x7a);
    iVar6 = *(int *)(*(int *)((int)local_1c + 0x7a) + 0x26);
    if (0 < iVar6) {
      do {
        piVar5 = (int *)FUN_00430d20((void *)*piVar10,iVar6);
        FUN_00430090((void *)*piVar10,iVar6);
        if (piVar5 != (int *)0x0) {
          if ((*(uint *)((int)piVar5 + 0x1e) & 2) == 0) {
            if ((piVar5 != (int *)0x0) && ((*(byte *)((int)piVar5 + 0x1f) & 4) != 0)) {
              FUN_004142c0(local_c8,0xe4,0,0,0);
              pcVar1 = *(code **)(*piVar5 + 0x1e0);
              (*pcVar1)(local_c8);
              FUN_004142c0(local_c8,0x7d2,0,0,0);
              (*pcVar1)(local_c8);
              FUN_004142c0(local_c8,0xca,0,local_1c,0);
              (*pcVar1)(local_c8);
              FUN_004142c0(local_c8,0x66,0,local_1c,0);
              (*pcVar1)(local_c8);
              pvVar8 = (void *)(**(code **)(*piVar5 + 0x218))();
              if (pvVar8 == (void *)0x0) {
                if (*(int **)((int)piVar5 + 0x3a) != (int *)0x0) {
                  (**(code **)(**(int **)((int)piVar5 + 0x3a) + 700))(piVar5);
                }
              }
              else {
                FUN_00423d80(pvVar8,piVar5);
              }
              FUN_00430de0((void *)*local_2c,piVar5,'\x01');
              FUN_00430de0((void *)*piVar10,piVar5,'\0');
              puVar9 = (undefined4 *)((int)local_1c + 0x5a);
              FUN_004307e0(*(void **)((int)local_1c + 0x5a),piVar5,'\0');
              FUN_004307e0(*(void **)((int)local_1c + 0x6a),piVar5,'\0');
              FUN_004307e0(*(void **)((int)local_1c + 0x62),piVar5,'\0');
              FUN_004307e0((void *)*puVar9,piVar5,'\0');
              FUN_00430de0(*(void **)((int)local_1c + 0x72),piVar5,'\0');
              piVar7 = *(int **)((int)piVar5 + 0x3a);
              (**(code **)(*piVar5 + 0xf8))();
              (**(code **)(*piVar5 + 8))(1,0);
              if ((piVar7 != (int *)0x0) && ((*(byte *)((int)piVar7 + 0x1e) & 2) != 0)) {
                iVar6 = *piVar7;
                (**(code **)(iVar6 + 0x2c8))();
                (**(code **)(iVar6 + 0x1e4))();
              }
            }
          }
          else if ((((short)piVar5[0x18] == 0) &&
                   ((*(uint *)((int)piVar5 + 0x1e) & 0x40000000) == 0)) &&
                  (*(short *)((int)piVar5 + 0x22) != 0x43)) {
            if ((((*(int **)((int)local_1c + 0x9a) != piVar5) &&
                 (*(int **)((int)local_1c + 0x9e) != piVar5)) &&
                ((*(int **)((int)local_1c + 0x11c) != piVar5 &&
                 ((*(int **)((int)local_1c + 0x120) != piVar5 &&
                  (*(int **)((int)local_1c + 0x124) != piVar5)))))) &&
               (*(int **)((int)local_1c + 0x118) != piVar5)) {
              local_38 = (int *)((int)local_1c + 0x32);
              sVar3 = *(short *)(*(int *)((int)local_1c + 0x32) + 0x26);
              local_15 = '\0';
              iVar6 = FUN_00430190(*(int *)((int)local_1c + 0x32));
              do {
                sVar3 = sVar3 + -1;
                if (sVar3 < 0) goto LAB_00404a1c;
              } while (*(int **)(iVar6 + sVar3 * 10) != piVar5);
              local_15 = '\x01';
LAB_00404a1c:
              FUN_004301f0(*local_38);
              if (local_15 == '\0') goto LAB_00404a30;
            }
          }
          else {
LAB_00404a30:
            piVar7 = (int *)FUN_004296a0();
            if (piVar7 == piVar5) {
              FUN_004296b0((void *)0x0);
            }
            FUN_004142c0(local_c8,0xe4,0,0,0);
            FUN_0046b770(piVar5,(int)local_c8);
            FUN_0046ba40(piVar5,1,1);
            FUN_004142c0(local_c8,0x7d2,0,0,0);
            FUN_0046b730(piVar5,(int)local_c8);
            piVar7 = *(int **)((int)local_1c + 300);
            puVar9 = (undefined4 *)((int)local_1c + 300);
            if ((piVar7 != (int *)0x0) &&
               ((piVar5 == piVar7 || (cVar2 = (**(code **)(*piVar7 + 0x1cc))(piVar5), cVar2 != '\0')
                ))) {
              *(undefined2 *)((int)local_1c + 0x132) = 0xd8f1;
              *(undefined2 *)((int)local_1c + 0x130) = 0xd8f1;
              *puVar9 = 0;
              *(byte *)((int)DAT_004da390 + 200) = *(byte *)((int)DAT_004da390 + 200) & 0xfe;
              FUN_00410ca0(DAT_004da390,0x28);
              FUN_004021a0();
            }
            FUN_00430de0(*(void **)((int)local_1c + 0x7e),piVar5,'\0');
            FUN_00430de0((void *)*local_2c,piVar5,'\x01');
            FUN_00430de0((void *)*piVar10,piVar5,'\0');
            puVar9 = (undefined4 *)((int)local_1c + 0x5a);
            FUN_004307e0(*(void **)((int)local_1c + 0x5a),piVar5,'\0');
            FUN_004307e0(*(void **)((int)local_1c + 0x6a),piVar5,'\0');
            FUN_004307e0(*(void **)((int)local_1c + 0x62),piVar5,'\0');
            FUN_004307e0((void *)*puVar9,piVar5,'\0');
            FUN_00430de0(*(void **)((int)local_1c + 0x72),piVar5,'\0');
            iVar6 = *piVar5;
            (**(code **)(iVar6 + 0xf8))();
            (**(code **)(iVar6 + 8))(1,0);
          }
        }
        iVar6 = *(int *)(*piVar10 + 0x26);
      } while (iVar6 != 0);
      (**(code **)(*(int *)*piVar10 + 0xe4))();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


