
/* ==== __break @ 0043ce3d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ce3d-0043ce3d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


