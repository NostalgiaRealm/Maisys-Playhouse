
/* ==== __break @ 004317ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004317ad-004317ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


