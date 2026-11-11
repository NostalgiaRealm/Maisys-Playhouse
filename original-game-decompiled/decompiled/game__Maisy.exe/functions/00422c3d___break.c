
/* ==== __break @ 00422c3d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00422c3d-00422c3d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


