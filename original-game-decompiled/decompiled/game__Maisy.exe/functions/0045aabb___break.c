
/* ==== __break @ 0045aabb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045aabb-0045aabb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


