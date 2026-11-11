
/* ==== AfxEnumMetaFileProc @ 004b1a9b ==== 
 * signature: int __stdcall AfxEnumMetaFileProc(HDC__ * param_1, tagHANDLETABLE * param_2, tagMETARECORD * param_3, int param_4, long param_5)
 * body: 004b1a9b-004b1d0b
 * note: Library Function - Single Match  int __stdcall AfxEnumMetaFileProc(struct HDC__ *,struct tagHANDLETABLE *,struct tagMETARECORD *,int,long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall AfxEnumMetaFileProc(struct HDC__ *,struct tagHANDLETABLE *,struct tagMETARECORD
   *,int,long)
   
   Library: Visual Studio 1998 Release */

int AfxEnumMetaFileProc(HDC__ *param_1,tagHANDLETABLE *param_2,tagMETARECORD *param_3,int param_4,
                       long param_5)

{
  ushort uVar1;
  HGDIOBJ h;
  DWORD DVar2;
  HGDIOBJ h_00;
  HGDIOBJ h_01;
  CGdiObject *pCVar3;
  undefined1 local_c [4];
  HGDIOBJ local_8;
  
  uVar1 = param_3->rdFunction;
  if (uVar1 < 0x104) {
    if (uVar1 == 0x103) {
      (**(code **)(*(int *)param_5 + 0x3c))((int)(short)param_3->rdParm[0]);
      return 1;
    }
    if (uVar1 == 0x1e) {
      (**(code **)(*(int *)param_5 + 0x24))();
      return 1;
    }
  }
  else if (uVar1 < 0x12e) {
    if (uVar1 == 0x12d) {
      h = param_2[param_3->rdParm[0]].objectHandle[0];
      DVar2 = GetObjectType(h);
      if (DVar2 == 0) {
        h_00 = GetStockObject(0xd);
        h_01 = SelectObject(*(HDC *)(param_5 + 4),h_00);
        local_8 = SelectObject(*(HDC *)(param_5 + 4),h);
        if (local_8 == h_00) {
          pCVar3 = CGdiObject::FromHandle(h);
          (**(code **)(*(int *)param_5 + 0x30))(pCVar3);
          return 1;
        }
        SelectObject(*(HDC *)(param_5 + 4),h_01);
        SelectObject(*(HDC *)(param_5 + 4),local_8);
      }
      else if (DVar2 == 6) {
        pCVar3 = CGdiObject::FromHandle(h);
        (**(code **)(*(int *)param_5 + 0x30))(pCVar3);
        return 1;
      }
    }
    else if (uVar1 == 0x127) {
      (**(code **)(*(int *)param_5 + 0x28))((int)(short)param_3->rdParm[0]);
      return 1;
    }
  }
  else if (uVar1 < 0x20a) {
    if (uVar1 == 0x209) {
      (**(code **)(*(int *)param_5 + 0x38))(*(undefined4 *)param_3->rdParm);
      return 1;
    }
    if (uVar1 == 0x201) {
      (**(code **)(*(int *)param_5 + 0x34))(*(undefined4 *)param_3->rdParm);
      return 1;
    }
  }
  else {
    if (uVar1 == 0x20b) {
      CDC::SetWindowOrg((CDC *)param_5,(int)local_c,(int)(short)param_3[1].rdSize);
      return 1;
    }
    if (uVar1 == 0x20c) {
      (**(code **)(*(int *)param_5 + 0x50))
                (local_c,(int)(short)param_3[1].rdSize,(int)(short)param_3->rdParm[0]);
      return 1;
    }
    if (uVar1 == 0x20d) {
      (**(code **)(*(int *)param_5 + 0x40))
                (local_c,(int)(short)param_3[1].rdSize,(int)(short)param_3->rdParm[0]);
      return 1;
    }
    if (uVar1 == 0x20e) {
      (**(code **)(*(int *)param_5 + 0x48))
                (local_c,(int)(short)param_3[1].rdSize,(int)(short)param_3->rdParm[0]);
      return 1;
    }
    if (uVar1 == 0x211) {
      (**(code **)(*(int *)param_5 + 0x44))
                (local_c,(int)(short)param_3[1].rdSize,(int)(short)param_3->rdParm[0]);
      return 1;
    }
    if (uVar1 == 0x410) {
      (**(code **)(*(int *)param_5 + 0x54))
                (local_c,(int)(short)param_3[1].rdFunction,
                 (int)*(short *)((int)&param_3[1].rdSize + 2),(int)(short)param_3[1].rdSize,
                 (int)(short)param_3->rdParm[0]);
      return 1;
    }
    if (uVar1 == 0x412) {
      (**(code **)(*(int *)param_5 + 0x4c))
                (local_c,(int)(short)param_3[1].rdFunction,
                 (int)*(short *)((int)&param_3[1].rdSize + 2),(int)(short)param_3[1].rdSize,
                 (int)(short)param_3->rdParm[0]);
      return 1;
    }
  }
  PlayMetaFileRecord(param_1,param_2,param_3,param_4);
  return 1;
}


