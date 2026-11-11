
/* ==== __break @ 0048fa3d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048fa3d-0048fa3d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


