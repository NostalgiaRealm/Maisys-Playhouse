
/* ==== FUN_004a4804 @ 004a4804 ==== 
 * signature: undefined __thiscall FUN_004a4804(void * this, byte * param_1, int * param_2)
 * body: 004a4804-004a4b25
 */

void __thiscall FUN_004a4804(void *this,byte *param_1,int *param_2)

{
  byte bVar1;
  byte *_Ptr;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  bVar1 = *param_1;
  _Ptr = param_1;
  piVar4 = param_2;
  do {
    if (bVar1 == 0) {
      FUN_004ac16a(this,local_10);
      _vsprintf(*(char **)this,(char *)param_1,(va_list)param_2);
      CString::ReleaseBuffer(this,-1);
      return;
    }
    if (*_Ptr == 0x25) {
      _Ptr = __mbsinc(_Ptr);
      bVar1 = *_Ptr;
      if (bVar1 == 0x25) goto LAB_004a4ad5;
      local_8 = 0;
      local_c = 0;
      while (bVar1 != 0) {
        bVar1 = *_Ptr;
        if (bVar1 == 0x23) {
          local_10 = local_10 + 2;
        }
        else if (bVar1 == 0x2a) {
          local_c = *piVar4;
          piVar4 = piVar4 + 1;
        }
        else if ((((bVar1 != 0x2d) && (bVar1 != 0x2b)) && (bVar1 != 0x30)) && (bVar1 != 0x20))
        break;
        _Ptr = __mbsinc(_Ptr);
        bVar1 = *_Ptr;
      }
      if (local_c == 0) {
        local_c = _atoi((char *)_Ptr);
        bVar1 = *_Ptr;
        while ((bVar1 != 0 && (iVar2 = __ismbcdigit((int)(char)*_Ptr), iVar2 != 0))) {
          _Ptr = __mbsinc(_Ptr);
          bVar1 = *_Ptr;
        }
      }
      iVar2 = 0;
      if (*_Ptr == 0x2e) {
        _Ptr = __mbsinc(_Ptr);
        if (*_Ptr == 0x2a) {
          iVar2 = *piVar4;
          piVar4 = piVar4 + 1;
          _Ptr = __mbsinc(_Ptr);
        }
        else {
          iVar2 = _atoi((char *)_Ptr);
          bVar1 = *_Ptr;
          while ((bVar1 != 0 && (iVar3 = __ismbcdigit((int)(char)*_Ptr), iVar3 != 0))) {
            _Ptr = __mbsinc(_Ptr);
            bVar1 = *_Ptr;
          }
        }
      }
      local_18 = 0;
      bVar1 = *_Ptr;
      if (((bVar1 == 0x46) || (bVar1 == 0x4c)) || (bVar1 == 0x4e)) {
LAB_004a495a:
        _Ptr = __mbsinc(_Ptr);
      }
      else {
        if (bVar1 == 0x68) {
          local_18 = 0x10000;
          goto LAB_004a495a;
        }
        if (bVar1 == 0x6c) {
          local_18 = 0x20000;
          goto LAB_004a495a;
        }
      }
      local_18 = (int)(char)*_Ptr | local_18;
      if ((int)local_18 < 0x54) {
        if (local_18 == 0x53) {
          local_8 = FUN_00492020((short *)*piVar4);
joined_r0x004a4a3a:
          if (local_8 < 2) {
            local_8 = 1;
          }
          piVar4 = piVar4 + 1;
        }
        else if (local_18 == 0x43) {
LAB_004a49ce:
          local_8 = 2;
          piVar4 = piVar4 + 1;
        }
      }
      else if ((int)local_18 < 0x74) {
        if (local_18 == 0x73) {
          local_8 = lstrlenA((LPCSTR)*piVar4);
          goto joined_r0x004a4a3a;
        }
        if (local_18 == 99) goto LAB_004a49ce;
      }
      else {
        if ((int)local_18 < 0x10054) {
          if (local_18 == 0x10053) {
LAB_004a4a0c:
            local_8 = lstrlenA((LPCSTR)*piVar4);
            goto joined_r0x004a4a3a;
          }
          if (local_18 != 0x10043) goto LAB_004a4a44;
        }
        else if (local_18 != 0x10063) {
          if (local_18 == 0x10073) goto LAB_004a4a0c;
          if (local_18 != 0x20043) {
            if (local_18 != 0x20053) {
              if (local_18 == 0x20063) goto LAB_004a4a1e;
              if (local_18 != 0x20073) goto LAB_004a4a44;
            }
            local_8 = FUN_00492020((short *)*piVar4);
            goto joined_r0x004a4a3a;
          }
LAB_004a4a1e:
          local_8 = 2;
          piVar4 = piVar4 + 1;
          goto LAB_004a4a44;
        }
        local_8 = 2;
        piVar4 = piVar4 + 1;
      }
LAB_004a4a44:
      if (local_8 == 0) {
        iVar3 = (int)(char)*_Ptr;
        if (iVar3 < 0x59) {
          if (iVar3 == 0x58) {
switchD_004a4a88_caseD_64:
joined_r0x004a4ac6:
            local_8 = local_c + iVar2;
            if (local_8 < 0x21) {
              local_8 = 0x20;
            }
            piVar4 = piVar4 + 1;
          }
          else if (iVar3 == 0x47) goto switchD_004a4a88_caseD_65;
        }
        else {
          switch(iVar3) {
          case 100:
          case 0x69:
          case 0x6f:
          case 0x75:
          case 0x78:
            goto switchD_004a4a88_caseD_64;
          case 0x65:
          case 0x66:
          case 0x67:
switchD_004a4a88_caseD_65:
            piVar4 = piVar4 + 2;
            local_8 = local_c + iVar2;
            if (local_c + iVar2 < 0x81) {
              local_8 = 0x80;
            }
            break;
          case 0x6e:
            piVar4 = piVar4 + 1;
            break;
          case 0x70:
            goto joined_r0x004a4ac6;
          }
        }
      }
      else {
        if (local_c <= local_8) {
          local_c = local_8;
        }
        local_8 = local_c;
        if ((iVar2 != 0) && (local_8 = iVar2, local_c <= iVar2)) {
          local_8 = local_c;
        }
      }
    }
    else {
LAB_004a4ad5:
      local_8 = FUN_00492b20(_Ptr);
    }
    local_10 = local_10 + local_8;
    _Ptr = __mbsinc(_Ptr);
    bVar1 = *_Ptr;
  } while( true );
}


