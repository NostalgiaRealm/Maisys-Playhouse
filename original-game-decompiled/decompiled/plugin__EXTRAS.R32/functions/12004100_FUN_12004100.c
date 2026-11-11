
/* ==== FUN_12004100 @ 12004100 ==== 
 * signature: undefined __thiscall FUN_12004100(void * this, uint param_1)
 * body: 12004100-120043d3
 */

void __thiscall FUN_12004100(void *this,uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *this_00;
  void *this_01;
  undefined1 *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined4 uVar9;
  ushort local_a;
  
  if ((*(char *)((int)this + 0x24) == '\0') &&
     ((this_00 = *(undefined4 **)this, *(short *)((int)this_00 + 0x66) == 0 ||
      (*(char *)((int)this + 0x25) != '\0')))) {
    this_01 = (void *)*this_00;
    if (*(uint *)((int)this + 0xc) <= param_1) {
      pbVar1 = (byte *)((int)this + 0x10);
      do {
        bVar2 = *pbVar1;
        if ((bVar2 & 0xf0) == 0xf0) {
          if (bVar2 == 0xff) {
            if (((*(char *)((int)this + 0x11) != '/') && (*(char *)((int)this + 0x11) == 'Q')) &&
               (*(char *)(this_00 + 0x19) == '\0')) {
              puVar3 = *(undefined1 **)((int)this + 0x14);
              FUN_12003880(this_00,(uint)CONCAT12(*puVar3,CONCAT11(puVar3[1],puVar3[2])));
            }
            goto LAB_12004391;
          }
          if (bVar2 == 0xf7) {
            FUN_12016430(this_01,pbVar1,1);
          }
          uVar9 = *(undefined4 *)((int)this + 0x18);
          pbVar8 = *(byte **)((int)this + 0x14);
          goto LAB_12004388;
        }
        uVar4 = (ushort)(0x8000 >> (sbyte)(bVar2 & 0xf));
        if ((*(ushort *)(this_00 + 0x23) & uVar4) != 0) goto LAB_12004391;
        switch(bVar2 & 0xf0) {
        case 0x80:
        case 0x90:
          uVar5 = (uint)(ushort)*(byte *)((int)this + 0x11);
          local_a = (ushort)*(byte *)((int)this + 0x12);
          if ((*(ushort *)((int)this_00 + 0x8a) & uVar4) != 0) {
            uVar4 = (ushort)*(byte *)((int)this + 0x11) + (short)*(char *)((int)this_00 + 0x72);
            if ((short)uVar4 < 0) {
              uVar4 = uVar4 + ((ushort)(0xb - uVar4) / 0xc) * 0xc;
            }
            uVar5 = (uint)uVar4;
            if (0x7f < (short)uVar4) {
              uVar5 = (uint)(ushort)(uVar4 + (short)((uVar5 - 0x74 & 0xffff) / 0xc) * -0xc);
            }
            *(char *)((int)this + 0x11) = (char)uVar5;
          }
          if ((bVar2 < 0x90) || (local_a == 0)) {
            puVar7 = (uint *)((uVar5 >> 3 & 0x1c) +
                              (uint)*(byte *)((bVar2 & 0xf) + 0x2c + (int)this) * 0x18 + 8 +
                             *(int *)((int)this + 0x28));
            uVar6 = 1 << ((byte)uVar5 & 0x1f);
            uVar5 = *puVar7;
            if ((uVar5 & uVar6) != 0) {
              *puVar7 = ~uVar6 & uVar5;
              break;
            }
          }
          else {
            if (*(byte *)(this_00 + 0x1b) < 0x80) {
              local_a = (ushort)((int)((uint)*(byte *)(this_00 + 0x1b) * (int)(short)local_a) >> 7);
            }
            if (*(byte *)((int)this_00 + 0x6d) < 0x80) {
              local_a = (ushort)((int)((uint)*(byte *)((int)this_00 + 0x6d) * (int)(short)local_a)
                                >> 7);
            }
            if (local_a != 0) {
              *(undefined1 *)((int)this + 0x12) = (undefined1)local_a;
              puVar7 = (uint *)((uVar5 >> 3 & 0x1c) +
                                (uint)*(byte *)((bVar2 & 0xf) + 0x2c + (int)this) * 0x18 + 8 +
                               *(int *)((int)this + 0x28));
              *puVar7 = *puVar7 | 1 << ((byte)uVar5 & 0x1f);
              break;
            }
          }
          goto LAB_12004391;
        case 0xb0:
          if (*(char *)((int)this + 0x11) == '@') {
            *(undefined1 *)
             (*(int *)((int)this + 0x28) + 5 +
             (uint)*(byte *)((bVar2 & 0xf) + 0x2c + (int)this) * 0x18) =
                 *(undefined1 *)((int)this + 0x12);
          }
          break;
        case 0xc0:
          FUN_12016450(this_01,bVar2 & 0xf,(ushort)*(byte *)((int)this + 0x11),1);
          goto LAB_12004391;
        case 0xe0:
          *(ushort *)
           (*(int *)((int)this + 0x28) + 6 +
           (uint)*(byte *)((bVar2 & 0xf) + 0x2c + (int)this) * 0x18) =
               CONCAT11(*(undefined1 *)((int)this + 0x11),bVar2);
        }
        uVar9 = *(undefined4 *)((int)this + 0x18);
        pbVar8 = pbVar1;
LAB_12004388:
        FUN_12016430(this_01,pbVar8,uVar9);
LAB_12004391:
        FUN_120045a0((int *)((int)this + 0xc));
        if (param_1 < *(uint *)((int)this + 0xc)) {
          return;
        }
      } while( true );
    }
  }
  else {
    puVar7 = (uint *)((int)this + 0xc);
    uVar5 = *puVar7;
    while (uVar5 <= param_1) {
      FUN_120045a0((int *)puVar7);
      uVar5 = *puVar7;
    }
  }
  return;
}


