
/* ==== FID_conflict:ExcludeClipRect @ 004b15dd ==== 
 * signature: int __stdcall FID_conflict:ExcludeClipRect(HDC hdc, int left, int top, int right, int bottom)
 * body: 004b15dd-004b162d
 * note: Library Function - Multiple Matches With Different Base Names  public: int __thiscall CDC::ExcludeClipRect(struct tagRECT const *)  public: int __thiscall CDC::IntersectClipRect(struct tagRECT const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CDC::ExcludeClipRect(struct tagRECT const *)
    public: int __thiscall CDC::IntersectClipRect(struct tagRECT const *)
   
   Library: Visual Studio 1998 Release */

int FID_conflict_ExcludeClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int in_ECX;
  int local_8;
  
  if (*(HDC *)(in_ECX + 8) != *(HDC *)(in_ECX + 4)) {
    local_8 = IntersectClipRect(*(HDC *)(in_ECX + 4),hdc->unused,hdc[1].unused,hdc[2].unused,
                                hdc[3].unused);
  }
  if (*(HDC *)(in_ECX + 8) != (HDC)0x0) {
    local_8 = IntersectClipRect(*(HDC *)(in_ECX + 8),hdc->unused,hdc[1].unused,hdc[2].unused,
                                hdc[3].unused);
  }
  return local_8;
}


