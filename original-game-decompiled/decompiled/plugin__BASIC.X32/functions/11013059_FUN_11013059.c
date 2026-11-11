
/* ==== FUN_11013059 @ 11013059 ==== 
 * signature: undefined __fastcall FUN_11013059(uint * param_1, uint param_2)
 * body: 11013059-1101305b
 */

void __fastcall FUN_11013059(uint *param_1,uint param_2)

{
  code *pcVar1;
  ushort uVar2;
  short sVar3;
  DWORD DVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  int unaff_ESI;
  ushort uStack0000000e;
  ushort uStack00000010;
  ushort uStack00000012;
  short sStack00000014;
  short in_stack_00000016;
  short sStack00000018;
  short sStack0000001a;
  short sStack0000001c;
  short sStack0000001e;
  short sStack00000020;
  undefined2 uStack00000022;
  short sStack00000024;
  undefined2 uStack00000026;
  int iStack00000028;
  short sStack0000002c;
  short sStack0000002e;
  undefined4 uStack00000030;
  int iStack00000034;
  int iStack00000038;
  short sStack0000003c;
  short sStack0000003e;
  short sStack00000040;
  short sStack00000042;
  undefined2 uStack00000044;
  undefined2 uStack00000046;
  undefined2 uStack00000048;
  undefined2 uStack0000004a;
  int in_stack_0000004c;
  undefined4 *in_stack_00000054;
  
  uVar5 = *param_1;
  *param_1 = *param_1 + param_2;
  if (CARRY4(uVar5,param_2) || *param_1 == 0) {
    *param_1 = *param_1 + param_2;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _uStack00000044 = *param_1;
  uStack00000012 = (short)param_1[1] - (short)*param_1;
  uStack00000010 = *(short *)((int)param_1 + 6) - *(short *)((int)param_1 + 2);
  _uStack00000048 = param_1[1];
  _sStack00000018 = *(undefined4 *)psRamaa110148;
  _sStack0000001c = *(undefined4 *)(psRamaa110148 + 2);
  if ((bRamaa11014c & 2) != 0) {
    FUN_11023060(in_stack_00000054,uRamaa11014e);
  }
  if ((int)*(short *)(unaff_ESI + 0x1e) - 900U < 4) {
    uVar6 = (short)uStack00000010 >> 0xf;
    uVar2 = (short)uStack00000012 >> 0xf;
    switch(*(short *)(unaff_ESI + 0x1e)) {
    case 900:
      uStack0000000e = uStack00000010;
      if (in_stack_00000016 == 0) {
        in_stack_00000016 = (uStack00000010 ^ uVar6) - uVar6;
      }
      _sStack0000003c = _sStack00000018;
      _sStack00000040 = _sStack0000001c;
      uStack00000030 = _sStack0000001c;
      sStack00000014 = 1;
      if (0 < in_stack_00000016) {
        _sStack0000002c = (int)(short)uStack00000010;
        iStack00000034 = (int)in_stack_00000016;
        _sStack00000024 = (int)sStack00000018;
        iStack00000028 = (int)sStack0000001a;
        iStack00000038 = sStack0000001c - _sStack00000024;
        do {
          DVar4 = timeGetTime();
          uVar5 = in_stack_0000004c + (DVar4 * 6) / 100;
          uVar6 = uStack00000010 - (short)((sStack00000014 * _sStack0000002c) / iStack00000034);
          _sStack00000040 = CONCAT22(sStack0000003e + uVar6,sStack00000040);
          _sStack00000020 = CONCAT22(uStack00000022,(psRamaa110148[1] - uVar6) + uStack0000000e);
          _sStack00000018 = CONCAT22(psRamaa110148[1] + uVar6,sStack00000018);
          _uStack00000048 = CONCAT22(*(short *)(iRamaa110140 + 6) - uVar6,uStack00000048);
          FUN_110115c0(in_stack_00000054);
          BitBlt(pHRamaa110134,_sStack00000024,iStack00000028,iStack00000038,
                 sStack00000042 - iStack00000028,pHRamaa110134,_sStack00000024,(int)sStack00000020,
                 0xcc0020);
          FUN_110021b0(in_stack_00000054,uRamaa11012c,&stack0x00000044,&stack0x00000018,uRamaa110156
                       ,uRamaa11015e);
          GdiFlush();
          do {
            DVar4 = timeGetTime();
          } while ((DVar4 * 6) / 100 < uVar5);
          sStack00000014 = sStack00000014 + 1;
          uStack0000000e = uVar6;
        } while (sStack00000014 <= in_stack_00000016);
        return;
      }
      break;
    case 0x385:
      if (in_stack_00000016 == 0) {
        in_stack_00000016 = (uStack00000010 ^ uVar6) - uVar6;
      }
      sStack00000014 = 1;
      _sStack0000002c = _sStack00000018;
      uStack00000030 = _sStack0000001c;
      if (0 < in_stack_00000016) {
        _sStack0000003c = (int)(short)uStack00000010;
        iStack00000034 = (int)in_stack_00000016;
        _sStack00000020 = (int)sStack00000018;
        iStack00000038 = (int)sStack0000001e;
        iStack00000028 = sStack0000001c - _sStack00000020;
        sVar7 = 0;
        do {
          DVar4 = timeGetTime();
          uVar5 = in_stack_0000004c + (DVar4 * 6) / 100;
          sVar3 = (short)((sStack00000014 * _sStack0000003c) / iStack00000034);
          _sStack00000024 = CONCAT22(uStack00000026,sVar3);
          _sStack0000002c = CONCAT22(sVar7 + psRamaa110148[1],sStack0000002c);
          sVar7 = sVar3 + psRamaa110148[1];
          _sStack0000001c = CONCAT22(sVar7,sStack0000001c);
          _uStack00000044 = CONCAT22(*(short *)(iRamaa110140 + 6) - sVar3,uStack00000044);
          FUN_110115c0(in_stack_00000054);
          BitBlt(pHRamaa110134,_sStack00000020,(int)sVar7,iStack00000028,iStack00000038 - sVar7,
                 pHRamaa110134,_sStack00000020,(int)sStack0000002e,0xcc0020);
          FUN_110021b0(in_stack_00000054,uRamaa11012c,&stack0x00000044,&stack0x00000018,uRamaa110156
                       ,uRamaa11015e);
          GdiFlush();
          do {
            DVar4 = timeGetTime();
          } while ((DVar4 * 6) / 100 < uVar5);
          sStack00000014 = sStack00000014 + 1;
          sVar7 = sStack00000024;
        } while (sStack00000014 <= in_stack_00000016);
        return;
      }
      break;
    case 0x386:
      uStack0000000e = uStack00000012;
      if (in_stack_00000016 == 0) {
        in_stack_00000016 = (uStack00000012 ^ uVar2) - uVar2;
      }
      _sStack0000003c = _sStack00000018;
      _sStack00000040 = _sStack0000001c;
      uStack00000030 = _sStack0000001c;
      sStack00000014 = 1;
      if (0 < in_stack_00000016) {
        _sStack0000002c = (int)(short)uStack00000012;
        iStack00000034 = (int)in_stack_00000016;
        _sStack00000024 = (int)sStack0000001a;
        iStack00000028 = (int)sStack00000018;
        iStack00000038 = sStack0000001e - _sStack00000024;
        do {
          DVar4 = timeGetTime();
          uVar5 = in_stack_0000004c + (DVar4 * 6) / 100;
          uVar6 = uStack00000012 - (short)((sStack00000014 * _sStack0000002c) / iStack00000034);
          _sStack00000040 = CONCAT22(sStack00000042,sStack0000003c + uVar6);
          _sStack00000020 = CONCAT22(uStack00000022,(*psRamaa110148 - uVar6) + uStack0000000e);
          _sStack00000018 = CONCAT22(sStack0000001a,*psRamaa110148 + uVar6);
          _uStack00000048 = CONCAT22(uStack0000004a,*(short *)(iRamaa110140 + 4) - uVar6);
          FUN_110115c0(in_stack_00000054);
          BitBlt(pHRamaa110134,iStack00000028,_sStack00000024,sStack00000040 - iStack00000028,
                 iStack00000038,pHRamaa110134,(int)sStack00000020,_sStack00000024,0xcc0020);
          FUN_110021b0(in_stack_00000054,uRamaa11012c,&stack0x00000044,&stack0x00000018,uRamaa110156
                       ,uRamaa11015e);
          GdiFlush();
          do {
            DVar4 = timeGetTime();
          } while ((DVar4 * 6) / 100 < uVar5);
          sStack00000014 = sStack00000014 + 1;
          uStack0000000e = uVar6;
        } while (sStack00000014 <= in_stack_00000016);
        return;
      }
      break;
    case 0x387:
      if (in_stack_00000016 == 0) {
        in_stack_00000016 = (uStack00000012 ^ uVar2) - uVar2;
      }
      sStack00000014 = 1;
      _sStack0000002c = _sStack00000018;
      uStack00000030 = _sStack0000001c;
      if (0 < in_stack_00000016) {
        _sStack0000003c = (int)(short)uStack00000012;
        iStack00000034 = (int)in_stack_00000016;
        _sStack00000020 = (int)sStack0000001a;
        iStack00000028 = (int)sStack0000001c;
        iStack00000038 = sStack0000001e - _sStack00000020;
        sVar7 = 0;
        do {
          DVar4 = timeGetTime();
          uVar5 = in_stack_0000004c + (DVar4 * 6) / 100;
          sVar3 = (short)((sStack00000014 * _sStack0000003c) / iStack00000034);
          _sStack00000024 = CONCAT22(uStack00000026,sVar3);
          _sStack0000002c = CONCAT22(sStack0000002e,sVar7 + *psRamaa110148);
          sVar7 = sVar3 + *psRamaa110148;
          _sStack0000001c = CONCAT22(sStack0000001e,sVar7);
          _uStack00000044 = CONCAT22(uStack00000046,*(short *)(iRamaa110140 + 4) - sVar3);
          FUN_110115c0(in_stack_00000054);
          BitBlt(pHRamaa110134,(int)sVar7,_sStack00000020,iStack00000028 - sVar7,iStack00000038,
                 pHRamaa110134,(int)sStack0000002c,_sStack00000020,0xcc0020);
          FUN_110021b0(in_stack_00000054,uRamaa11012c,&stack0x00000044,&stack0x00000018,uRamaa110156
                       ,uRamaa11015e);
          GdiFlush();
          do {
            DVar4 = timeGetTime();
          } while ((DVar4 * 6) / 100 < uVar5);
          sStack00000014 = sStack00000014 + 1;
          sVar7 = sStack00000024;
        } while (sStack00000014 <= in_stack_00000016);
      }
    }
    return;
  }
  FUN_11012930(in_stack_00000054,unaff_ESI,(int *)0xaa11012c);
  return;
}


